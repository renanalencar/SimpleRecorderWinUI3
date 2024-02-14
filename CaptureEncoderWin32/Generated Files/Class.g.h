// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240111.5

#pragma once
#include "winrt/CaptureEncoderWin32.h"
namespace winrt::CaptureEncoderWin32::implementation
{
    template <typename D, typename... I>
    struct WINRT_IMPL_EMPTY_BASES Class_base : implements<D, CaptureEncoderWin32::Class, I...>
    {
        using base_type = Class_base;
        using class_type = CaptureEncoderWin32::Class;
        using implements_type = typename Class_base::implements_type;
        using implements_type::implements_type;
        
        hstring GetRuntimeClassName() const
        {
            return L"CaptureEncoderWin32.Class";
        }
    };
}
namespace winrt::CaptureEncoderWin32::factory_implementation
{
    template <typename D, typename T, typename... I>
    struct WINRT_IMPL_EMPTY_BASES ClassT : implements<D, winrt::Windows::Foundation::IActivationFactory, I...>
    {
        using instance_type = CaptureEncoderWin32::Class;

        hstring GetRuntimeClassName() const
        {
            return L"CaptureEncoderWin32.Class";
        }
        auto ActivateInstance() const
        {
            return make<T>();
        }
    };
}

#if defined(WINRT_FORCE_INCLUDE_CLASS_XAML_G_H) || __has_include("Class.xaml.g.h")

#include "Class.xaml.g.h"

#else

namespace winrt::CaptureEncoderWin32::implementation
{
    template <typename D, typename... I>
    using ClassT = Class_base<D, I...>;
}

#endif