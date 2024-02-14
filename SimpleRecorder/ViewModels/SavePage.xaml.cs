using Microsoft.UI.Xaml;
using Microsoft.UI.Xaml.Controls;
using Microsoft.UI.Xaml.Navigation;
using System.Collections.Generic;
using System.Threading.Tasks;
using Windows.Media.Core;
using Windows.Storage.Pickers;
using Windows.Storage;
using System;
using SimpleRecorder.Views;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace SimpleRecorder.ViewModels
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class SavePage : Page
    {
        private StorageFile _previewFile;
        public SavePage()
        {
            this.InitializeComponent();
        }

        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
            _previewFile = (StorageFile)e.Parameter;
            PreviewPlayer.Source = MediaSource.CreateFromStorageFile(_previewFile);
        }

        private async void SaveButton_Click(object sender, RoutedEventArgs e)
        {
            // Ask the user where they'd like the video to live
            var newFile = await PickVideoAsync();
            if (newFile == null)
            {
                // The user canceled
                return;
            }
            // Move our video to its new home
            PreviewPlayer.Source = null;
            await _previewFile.MoveAndReplaceAsync(newFile);

            GoToMainPage();
        }

        private async void DeleteButton_Click(object sender, RoutedEventArgs e)
        {
            PreviewPlayer.Source = null;
            await _previewFile.DeleteAsync();

            GoToMainPage();
        }

        private void GoToMainPage()
        {
            Frame.BackStack.Clear();
            Frame.Navigate(typeof(MainPage));
        }

        private async Task<StorageFile> PickVideoAsync()
        {
            var picker = new FileSavePicker();
            picker.SuggestedStartLocation = PickerLocationId.VideosLibrary;
            picker.SuggestedFileName = "recordedVideo";
            picker.DefaultFileExtension = ".mp4";
            picker.FileTypeChoices.Add("MP4 Video", new List<string> { ".mp4" });

            var file = await picker.PickSaveFileAsync();
            return file;
        }
    }
}
