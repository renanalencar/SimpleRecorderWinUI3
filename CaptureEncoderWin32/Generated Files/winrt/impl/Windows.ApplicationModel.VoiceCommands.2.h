// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240111.5

#pragma once
#ifndef WINRT_Windows_ApplicationModel_VoiceCommands_2_H
#define WINRT_Windows_ApplicationModel_VoiceCommands_2_H
#include "winrt/impl/Windows.ApplicationModel.AppService.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.ApplicationModel.VoiceCommands.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::VoiceCommands
{
    struct WINRT_IMPL_EMPTY_BASES VoiceCommand : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommand
    {
        VoiceCommand(std::nullptr_t) noexcept {}
        VoiceCommand(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommand(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES VoiceCommandCompletedEventArgs : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs
    {
        VoiceCommandCompletedEventArgs(std::nullptr_t) noexcept {}
        VoiceCommandCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES VoiceCommandConfirmationResult : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult
    {
        VoiceCommandConfirmationResult(std::nullptr_t) noexcept {}
        VoiceCommandConfirmationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES VoiceCommandContentTile : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile
    {
        VoiceCommandContentTile(std::nullptr_t) noexcept {}
        VoiceCommandContentTile(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile(ptr, take_ownership_from_abi) {}
        VoiceCommandContentTile();
    };
    struct WINRT_IMPL_EMPTY_BASES VoiceCommandDefinition : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition
    {
        VoiceCommandDefinition(std::nullptr_t) noexcept {}
        VoiceCommandDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition(ptr, take_ownership_from_abi) {}
    };
    struct VoiceCommandDefinitionManager
    {
        VoiceCommandDefinitionManager() = delete;
        static auto InstallCommandDefinitionsFromStorageFileAsync(winrt::Windows::Storage::StorageFile const& file);
        [[nodiscard]] static auto InstalledCommandDefinitions();
    };
    struct WINRT_IMPL_EMPTY_BASES VoiceCommandDisambiguationResult : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult
    {
        VoiceCommandDisambiguationResult(std::nullptr_t) noexcept {}
        VoiceCommandDisambiguationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES VoiceCommandResponse : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse
    {
        VoiceCommandResponse(std::nullptr_t) noexcept {}
        VoiceCommandResponse(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto MaxSupportedVoiceCommandContentTiles();
        static auto CreateResponse(winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& userMessage);
        static auto CreateResponse(winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, param::iterable<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles);
        static auto CreateResponseForPrompt(winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage);
        static auto CreateResponseForPrompt(winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& message, winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandUserMessage const& repeatMessage, param::iterable<winrt::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile> const& contentTiles);
    };
    struct WINRT_IMPL_EMPTY_BASES VoiceCommandServiceConnection : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection
    {
        VoiceCommandServiceConnection(std::nullptr_t) noexcept {}
        VoiceCommandServiceConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection(ptr, take_ownership_from_abi) {}
        static auto FromAppServiceTriggerDetails(winrt::Windows::ApplicationModel::AppService::AppServiceTriggerDetails const& triggerDetails);
    };
    struct WINRT_IMPL_EMPTY_BASES VoiceCommandUserMessage : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage
    {
        VoiceCommandUserMessage(std::nullptr_t) noexcept {}
        VoiceCommandUserMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage(ptr, take_ownership_from_abi) {}
        VoiceCommandUserMessage();
    };
}
#endif
