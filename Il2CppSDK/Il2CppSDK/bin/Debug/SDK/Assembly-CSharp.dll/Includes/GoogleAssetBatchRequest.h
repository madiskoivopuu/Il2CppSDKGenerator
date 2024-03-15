#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoogleAssetBatchRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoogleAssetBatchRequest"));
	}

	template <typename R = Il2CppArray<IAssetPackRequest*>*> R& AssetPackRequests() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R get_IsCompleted() {
		return ((R (*)(GoogleAssetBatchRequest*))(Il2CppBase() + 0x12E0444))(this);
	}
	template <typename R = bool> R get_IsError() {
		return ((R (*)(GoogleAssetBatchRequest*))(Il2CppBase() + 0x12E0580))(this);
	}
	template <typename R = float> R get_DownloadProgress() {
		return ((R (*)(GoogleAssetBatchRequest*))(Il2CppBase() + 0x12E06BC))(this);
	}
	template <typename R = float> R get_BatchSize() {
		return ((R (*)(GoogleAssetBatchRequest*))(Il2CppBase() + 0x12E0810))(this);
	}
	template <typename R = Il2CppArray<IAssetPackRequest*>*> R get_AssetPackRequests() {
		return ((R (*)(GoogleAssetBatchRequest*))(Il2CppBase() + 0x12E094C))(this);
	}

};

