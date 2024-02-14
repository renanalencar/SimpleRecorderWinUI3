using CaptureEncoder;
using Microsoft.UI.Xaml;
using Microsoft.UI.Xaml.Controls;
using Microsoft.UI.Xaml.Hosting;
using Microsoft.UI.Xaml.Navigation;
using System.Diagnostics;
using System.Threading.Tasks;
using System;
using Windows.Graphics.Capture;
using Windows.Graphics.DirectX.Direct3D11;
using Windows.Storage;
using Windows.UI.Popups;
using System.Numerics;
using Microsoft.UI.Composition;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace SimpleRecorder.ViewModels
{
    class RecordingOptions
    {
        public GraphicsCaptureItem Target { get; }
        public SizeUInt32 Resolution { get; }
        public uint Bitrate { get; }
        public uint FrameRate { get; }
        public bool IncludeCursor { get; }

        public RecordingOptions(GraphicsCaptureItem target, SizeUInt32 resolution, uint bitrate, uint frameRate, bool includeCursor)
        {
            Target = target;
            Resolution = resolution;
            Bitrate = bitrate;
            FrameRate = frameRate;
            IncludeCursor = includeCursor;
        }
    }

    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class RecordingPage : Page
    {
        enum RecordingState
        {
            Recording,
            Done,
            Interrupted,
            Failed
        }


        private IDirect3DDevice _device;
        private Encoder _encoder;

        private CompositionSurfaceBrush _previewBrush;

        public RecordingPage()
        {
            this.InitializeComponent();

            _device = D3DDeviceManager.Device;

            var compositor = App.Window.Compositor;
            var visual = compositor.CreateSpriteVisual();
            visual.RelativeSizeAdjustment = Vector2.One;
            visual.Size = new Vector2(-30.0f, -30.0f);
            visual.RelativeOffsetAdjustment = new Vector3(0.5f, 0.5f, 0);
            visual.AnchorPoint = new Vector2(0.5f, 0.5f);
            _previewBrush = compositor.CreateSurfaceBrush();
            visual.Brush = _previewBrush;
            ElementCompositionPreview.SetElementChildVisual(PreviewGrid, visual);
        }

        public void EndCurrentRecording()
        {
            _encoder.Dispose();
        }

        private void StopRecordingButton_Click(object sender, RoutedEventArgs e)
        {
            _encoder?.Dispose();
        }

        protected async override void OnNavigatedTo(NavigationEventArgs e)
        {
            var options = (RecordingOptions)e.Parameter;
            await StartRecordingAsync(options);
        }

        private async Task StartRecordingAsync(RecordingOptions options)
        {
            // Encoders generally like even numbers
            var width = EnsureEven(options.Resolution.Width);
            var height = EnsureEven(options.Resolution.Height);

            // Find a place to put our vidoe for now
            var file = await GetTempFileAsync();

            // Kick off the encoding
            try
            {
                using (var stream = await file.OpenAsync(FileAccessMode.ReadWrite))
                using (_encoder = new Encoder(_device, options.Target))
                {
                    var surface = _encoder.CreatePreviewSurface(App.Window.Compositor);
                    _previewBrush.Surface = surface;

                    await _encoder.EncodeAsync(
                        stream,
                        width, height, options.Bitrate,
                        options.FrameRate,
                        options.IncludeCursor);
                }
            }
            catch (Exception ex)
            {
                Debug.WriteLine(ex.Message);
                Debug.WriteLine(ex);

                var message = GetMessageForHResult(ex.HResult);
                if (message == null)
                {
                    message = $"Uh-oh! Something went wrong!\n0x{ex.HResult:X8} - {ex.Message}";
                }
                var dialog = new MessageDialog(
                    message,
                    "Recording failed");

                await dialog.ShowAsync();

                // Go back to the main page
                Frame.GoBack();
                return;
            }

            // At this point the encoding has finished, let the user preview the file
            Frame.Navigate(typeof(SavePage), file);
        }

        private uint EnsureEven(uint number)
        {
            if (number % 2 == 0)
            {
                return number;
            }
            else
            {
                return number + 1;
            }
        }

        private async Task<StorageFile> GetTempFileAsync()
        {
            var folder = ApplicationData.Current.TemporaryFolder;
            var name = DateTime.Now.ToString("yyyyMMdd-HHmm-ss");
            var file = await folder.CreateFileAsync($"{name}.mp4");
            return file;
        }

        private string GetMessageForHResult(int hresult)
        {
            switch ((uint)hresult)
            {
                // MF_E_TRANSFORM_TYPE_NOT_SET
                case 0xC00D6D60:
                    return "The combination of options you've chosen are not supported by your hardware.";
                default:
                    return null;
            }
        }

    }
}
