// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240111.5

#pragma once
#ifndef WINRT_CaptureEncoderWin32_0_H
#define WINRT_CaptureEncoderWin32_0_H
WINRT_EXPORT namespace winrt::CaptureEncoderWin32
{
    struct IClass;
    struct Class;
}
namespace winrt::impl
{
    template <> struct category<winrt::CaptureEncoderWin32::IClass>{ using type = interface_category; };
    template <> struct category<winrt::CaptureEncoderWin32::Class>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::CaptureEncoderWin32::Class> = L"CaptureEncoderWin32.Class";
    template <> inline constexpr auto& name_v<winrt::CaptureEncoderWin32::IClass> = L"CaptureEncoderWin32.IClass";
    template <> inline constexpr guid guid_v<winrt::CaptureEncoderWin32::IClass>{ 0xDCBBCB43,0x9FBC,0x5FBF,{ 0x9F,0x50,0xCA,0x20,0x5C,0x96,0x46,0xCB } }; // DCBBCB43-9FBC-5FBF-9F50-CA205C9646CB
    template <> struct default_interface<winrt::CaptureEncoderWin32::Class>{ using type = winrt::CaptureEncoderWin32::IClass; };
    template <> struct abi<winrt::CaptureEncoderWin32::IClass>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_MyProperty(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MyProperty(int32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_CaptureEncoderWin32_IClass
    {
        [[nodiscard]] auto MyProperty() const;
        auto MyProperty(int32_t value) const;
    };
    template <> struct consume<winrt::CaptureEncoderWin32::IClass>
    {
        template <typename D> using type = consume_CaptureEncoderWin32_IClass<D>;
    };
}
#endif
