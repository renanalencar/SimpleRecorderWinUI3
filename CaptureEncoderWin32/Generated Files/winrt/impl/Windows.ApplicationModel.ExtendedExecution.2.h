// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240111.5

#pragma once
#ifndef WINRT_Windows_ApplicationModel_ExtendedExecution_2_H
#define WINRT_Windows_ApplicationModel_ExtendedExecution_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ApplicationModel.ExtendedExecution.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ExtendedExecution
{
    struct WINRT_IMPL_EMPTY_BASES ExtendedExecutionRevokedEventArgs : winrt::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs
    {
        ExtendedExecutionRevokedEventArgs(std::nullptr_t) noexcept {}
        ExtendedExecutionRevokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ExtendedExecutionSession : winrt::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession
    {
        ExtendedExecutionSession(std::nullptr_t) noexcept {}
        ExtendedExecutionSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession(ptr, take_ownership_from_abi) {}
        ExtendedExecutionSession();
    };
}
#endif
