#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAssetPackBatchRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAssetPackBatchRequest"));
	}


	template <typename R = bool> R get_IsCompleted() {
		return ((R (*)(IAssetPackBatchRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsError() {
		return ((R (*)(IAssetPackBatchRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = float> R get_DownloadProgress() {
		return ((R (*)(IAssetPackBatchRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = float> R get_BatchSize() {
		return ((R (*)(IAssetPackBatchRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppArray<IAssetPackRequest*>*> R get_AssetPackRequests() {
		return ((R (*)(IAssetPackBatchRequest*))(Il2CppBase() + 0x0))(this);
	}

};

