#pragma once
#include "Windows.Xbox.Input.Controller.g.h"
#include <Xinput.h>

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
//////////

namespace winrt::Windows::Xbox::Input::implementation
{
    struct Controller : ControllerT<Controller>
    {
        Controller() = default;

        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IController> Controllers();
        static winrt::event_token ControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerAddedEventArgs> const& handler);
        static void ControllerAdded(winrt::event_token const& token) noexcept;
        static winrt::event_token ControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerRemovedEventArgs> const& handler);
        static void ControllerRemoved(winrt::event_token const& token) noexcept;
        static winrt::event_token ControllerPairingChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerPairingChangedEventArgs> const& handler);
        static void ControllerPairingChanged(winrt::event_token const& token) noexcept;
        static winrt::event_token ControllerOrderChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerOrderChangedEventArgs> const& handler);
        static void ControllerOrderChanged(winrt::event_token const& token) noexcept;
        static winrt::Windows::Xbox::Input::IController GetControllerById(uint64_t controllerId);
        static void GetControllerMetadata(uint64_t controllerId, winrt::Windows::Xbox::Input::MetadataVersion const& metadataVersion, com_array<uint8_t>& ppMetadata);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IController> GetControllersOrderedLeftToRight(winrt::Windows::Xbox::Input::ControllerOrderFilter const& orderFilter);
        uint64_t Id();
        hstring Type();
        winrt::Windows::Xbox::System::User User();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::IAudioDeviceInfo> AudioDevices();
        winrt::Windows::Xbox::Input::GameControllerVersionInfo FirmwareVersionInfo();
        winrt::Windows::Xbox::Input::GameControllerVersionInfo HardwareVersionInfo();
        uint16_t HardwareProductId();
        uint16_t HardwareVendorId();

        inline static winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Xbox::Input::IController> staticControllers = { nullptr };
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct Controller : ControllerT<Controller, implementation::Controller>
    {
    };
}
