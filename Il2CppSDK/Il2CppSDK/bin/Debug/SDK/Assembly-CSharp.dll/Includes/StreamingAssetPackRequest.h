#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StreamingAssetPackRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StreamingAssetPackRequest"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& AssetBundleRequests() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& PackName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_AssetBundleRequests() {
		return ((T (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E640))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E648))(this);
	}
	template <typename T = bool> T get_IsError() {
		return ((T (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E650))(this);
	}
	template <typename T = float> T get_DownloadProgress() {
		return ((T (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E658))(this);
	}
	template <typename T = float> T get_PackSize() {
		return ((T (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E660))(this);
	}
	template <typename T = Il2CppString*> T get_PackName() {
		return ((T (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E668))(this);
	}
	template <typename T = uintptr_t> T GetAssetFromAssetBundle(Il2CppString* path, Il2CppString* fileName) {
		return ((T (*)(StreamingAssetPackRequest*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, path, fileName);
	}
	template <typename T = uintptr_t> T GetAssetFromAssetBundle_1(Il2CppString* fileName) {
		return ((T (*)(StreamingAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x0))(this, fileName);
	}
	template <typename T = void> T UnloadAllAssets() {
		return ((T (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E670))(this);
	}
	template <typename T = Il2CppString*> T GetAssetLocationPath(Il2CppString* fileName) {
		return ((T (*)(StreamingAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x169E830))(this, fileName);
	}
	template <typename T = bool> T HasBundleRequest(Il2CppString* filePath) {
		return ((T (*)(StreamingAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x169E8BC))(this, filePath);
	}

};

}
