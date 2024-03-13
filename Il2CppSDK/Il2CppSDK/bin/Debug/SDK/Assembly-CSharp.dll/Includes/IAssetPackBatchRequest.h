#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAssetPackBatchRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAssetPackBatchRequest"));
	}


	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(IAssetPackBatchRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsError() {
		return ((T (*)(IAssetPackBatchRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_DownloadProgress() {
		return ((T (*)(IAssetPackBatchRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_BatchSize() {
		return ((T (*)(IAssetPackBatchRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AssetPackRequests() {
		return ((T (*)(IAssetPackBatchRequest*))(Il2CppBase() + 0x0))(this);
	}

};

