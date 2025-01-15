#pragma once
#include "Windows.Xbox.Storage.ContainerInfoQueryResult.g.h"

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
//////////static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace WinDurango::impl
{
	class ConnectedStorage;
}

namespace winrt::Windows::Xbox::Storage::implementation
{
    struct ContainerInfoQueryResult : ContainerInfoQueryResultT<ContainerInfoQueryResult>
    {
        ContainerInfoQueryResult() = default;
        ContainerInfoQueryResult(hstring containerNamePrefix, WinDurango::impl::ConnectedStorage* connectedStorage) {
            this->containerNamePrefix = containerNamePrefix;
			m_connectedStorage = connectedStorage;
        }


        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo>> GetContainerInfoAsync(uint32_t startIndex, uint32_t maxNumberOfItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo>> GetContainerInfoAsync();
        winrt::Windows::Foundation::IAsyncOperation<uint32_t> GetItemCountAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo2>> GetContainerInfo2Async(uint32_t startIndex, uint32_t maxNumberOfItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo2>> GetContainerInfo2Async();
    private:
        hstring containerNamePrefix;
		WinDurango::impl::ConnectedStorage* m_connectedStorage = nullptr;
    };
}
