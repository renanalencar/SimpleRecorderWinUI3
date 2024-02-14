// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240111.5

#pragma once
#ifndef WINRT_Windows_Devices_Sensors_Custom_2_H
#define WINRT_Windows_Devices_Sensors_Custom_2_H
#include "winrt/impl/Windows.Devices.Sensors.Custom.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Sensors::Custom
{
    struct WINRT_IMPL_EMPTY_BASES CustomSensor : winrt::Windows::Devices::Sensors::Custom::ICustomSensor,
        impl::require<CustomSensor, winrt::Windows::Devices::Sensors::Custom::ICustomSensor2>
    {
        CustomSensor(std::nullptr_t) noexcept {}
        CustomSensor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::Custom::ICustomSensor(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector(winrt::guid const& interfaceId);
        static auto FromIdAsync(param::hstring const& sensorId);
    };
    struct WINRT_IMPL_EMPTY_BASES CustomSensorReading : winrt::Windows::Devices::Sensors::Custom::ICustomSensorReading,
        impl::require<CustomSensorReading, winrt::Windows::Devices::Sensors::Custom::ICustomSensorReading2>
    {
        CustomSensorReading(std::nullptr_t) noexcept {}
        CustomSensorReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::Custom::ICustomSensorReading(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CustomSensorReadingChangedEventArgs : winrt::Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs
    {
        CustomSensorReadingChangedEventArgs(std::nullptr_t) noexcept {}
        CustomSensorReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
