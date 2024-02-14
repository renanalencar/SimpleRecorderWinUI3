// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240111.5

#pragma once
#ifndef WINRT_Windows_Media_Protection_1_H
#define WINRT_Windows_Media_Protection_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Protection.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Protection
{
    struct WINRT_IMPL_EMPTY_BASES IComponentLoadFailedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IComponentLoadFailedEventArgs>
    {
        IComponentLoadFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IComponentLoadFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IHdcpSession :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHdcpSession>,
        impl::require<winrt::Windows::Media::Protection::IHdcpSession, winrt::Windows::Foundation::IClosable>
    {
        IHdcpSession(std::nullptr_t = nullptr) noexcept {}
        IHdcpSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaProtectionManager :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProtectionManager>
    {
        IMediaProtectionManager(std::nullptr_t = nullptr) noexcept {}
        IMediaProtectionManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaProtectionPMPServer :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProtectionPMPServer>
    {
        IMediaProtectionPMPServer(std::nullptr_t = nullptr) noexcept {}
        IMediaProtectionPMPServer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaProtectionPMPServerFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProtectionPMPServerFactory>
    {
        IMediaProtectionPMPServerFactory(std::nullptr_t = nullptr) noexcept {}
        IMediaProtectionPMPServerFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaProtectionServiceCompletion :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProtectionServiceCompletion>
    {
        IMediaProtectionServiceCompletion(std::nullptr_t = nullptr) noexcept {}
        IMediaProtectionServiceCompletion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaProtectionServiceRequest :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProtectionServiceRequest>
    {
        IMediaProtectionServiceRequest(std::nullptr_t = nullptr) noexcept {}
        IMediaProtectionServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IProtectionCapabilities :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IProtectionCapabilities>
    {
        IProtectionCapabilities(std::nullptr_t = nullptr) noexcept {}
        IProtectionCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IRevocationAndRenewalInformation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRevocationAndRenewalInformation>
    {
        IRevocationAndRenewalInformation(std::nullptr_t = nullptr) noexcept {}
        IRevocationAndRenewalInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IRevocationAndRenewalItem :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRevocationAndRenewalItem>
    {
        IRevocationAndRenewalItem(std::nullptr_t = nullptr) noexcept {}
        IRevocationAndRenewalItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IServiceRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IServiceRequestedEventArgs>
    {
        IServiceRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IServiceRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IServiceRequestedEventArgs2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IServiceRequestedEventArgs2>
    {
        IServiceRequestedEventArgs2(std::nullptr_t = nullptr) noexcept {}
        IServiceRequestedEventArgs2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
