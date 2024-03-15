#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddressableAssetBatchRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddressableAssetBatchRequest"));
	}

	template <typename R = Il2CppArray<IAssetPackRequest*>*> R& AssetPackRequests() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R get_IsCompleted() {
		return ((R (*)(AddressableAssetBatchRequest*))(Il2CppBase() + 0x18B0EF8))(this);
	}
	template <typename R = bool> R get_IsError() {
		return ((R (*)(AddressableAssetBatchRequest*))(Il2CppBase() + 0x18B0F00))(this);
	}
	template <typename R = float> R get_DownloadProgress() {
		return ((R (*)(AddressableAssetBatchRequest*))(Il2CppBase() + 0x18B0F08))(this);
	}
	template <typename R = float> R get_BatchSize() {
		return ((R (*)(AddressableAssetBatchRequest*))(Il2CppBase() + 0x18B0F10))(this);
	}
	template <typename R = Il2CppArray<IAssetPackRequest*>*> R get_AssetPackRequests() {
		return ((R (*)(AddressableAssetBatchRequest*))(Il2CppBase() + 0x18B0F18))(this);
	}

};

