#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddressableAssetBatchRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddressableAssetBatchRequest"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& AssetPackRequests() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(AddressableAssetBatchRequest*))(Il2CppBase() + 0x18B0EF8))(this);
	}
	template <typename T = bool> T get_IsError() {
		return ((T (*)(AddressableAssetBatchRequest*))(Il2CppBase() + 0x18B0F00))(this);
	}
	template <typename T = float> T get_DownloadProgress() {
		return ((T (*)(AddressableAssetBatchRequest*))(Il2CppBase() + 0x18B0F08))(this);
	}
	template <typename T = float> T get_BatchSize() {
		return ((T (*)(AddressableAssetBatchRequest*))(Il2CppBase() + 0x18B0F10))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AssetPackRequests() {
		return ((T (*)(AddressableAssetBatchRequest*))(Il2CppBase() + 0x18B0F18))(this);
	}

};

