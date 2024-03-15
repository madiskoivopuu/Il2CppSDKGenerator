#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StreamingAssetBatchRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StreamingAssetBatchRequest"));
	}

	template <typename R = Il2CppArray<IAssetPackRequest*>*> R& AssetPackRequests() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R get_IsCompleted() {
		return ((R (*)(StreamingAssetBatchRequest*))(Il2CppBase() + 0x169D19C))(this);
	}
	template <typename R = bool> R get_IsError() {
		return ((R (*)(StreamingAssetBatchRequest*))(Il2CppBase() + 0x169D2D8))(this);
	}
	template <typename R = float> R get_DownloadProgress() {
		return ((R (*)(StreamingAssetBatchRequest*))(Il2CppBase() + 0x169D414))(this);
	}
	template <typename R = float> R get_BatchSize() {
		return ((R (*)(StreamingAssetBatchRequest*))(Il2CppBase() + 0x169D568))(this);
	}
	template <typename R = Il2CppArray<IAssetPackRequest*>*> R get_AssetPackRequests() {
		return ((R (*)(StreamingAssetBatchRequest*))(Il2CppBase() + 0x169D6A4))(this);
	}

};

