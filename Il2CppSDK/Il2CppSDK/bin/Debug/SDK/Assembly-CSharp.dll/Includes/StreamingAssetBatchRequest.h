#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StreamingAssetBatchRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StreamingAssetBatchRequest"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& AssetPackRequests() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(StreamingAssetBatchRequest*))(Il2CppBase() + 0x169D19C))(this);
	}
	template <typename T = bool> T get_IsError() {
		return ((T (*)(StreamingAssetBatchRequest*))(Il2CppBase() + 0x169D2D8))(this);
	}
	template <typename T = float> T get_DownloadProgress() {
		return ((T (*)(StreamingAssetBatchRequest*))(Il2CppBase() + 0x169D414))(this);
	}
	template <typename T = float> T get_BatchSize() {
		return ((T (*)(StreamingAssetBatchRequest*))(Il2CppBase() + 0x169D568))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AssetPackRequests() {
		return ((T (*)(StreamingAssetBatchRequest*))(Il2CppBase() + 0x169D6A4))(this);
	}

};

