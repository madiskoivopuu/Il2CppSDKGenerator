#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoogleAssetBatchRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoogleAssetBatchRequest"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& AssetPackRequests() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(GoogleAssetBatchRequest*))(Il2CppBase() + 0x12E0444))(this);
	}
	template <typename T = bool> T get_IsError() {
		return ((T (*)(GoogleAssetBatchRequest*))(Il2CppBase() + 0x12E0580))(this);
	}
	template <typename T = float> T get_DownloadProgress() {
		return ((T (*)(GoogleAssetBatchRequest*))(Il2CppBase() + 0x12E06BC))(this);
	}
	template <typename T = float> T get_BatchSize() {
		return ((T (*)(GoogleAssetBatchRequest*))(Il2CppBase() + 0x12E0810))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AssetPackRequests() {
		return ((T (*)(GoogleAssetBatchRequest*))(Il2CppBase() + 0x12E094C))(this);
	}

};

}
