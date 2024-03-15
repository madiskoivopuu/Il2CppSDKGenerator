#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StreamingAssetPackRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StreamingAssetPackRequest"));
	}

	 Il2CppDictionary<Il2CppString*, IAssetBundleRequest*>*& AssetBundleRequests() {
		return *(Il2CppDictionary<Il2CppString*, IAssetBundleRequest*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& PackName() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 Il2CppDictionary<Il2CppString*, IAssetBundleRequest*>* get_AssetBundleRequests() {
		return ((Il2CppDictionary<Il2CppString*, IAssetBundleRequest*>* (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E640))(this);
	}
	template <typename R = bool> R get_IsCompleted() {
		return ((R (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E648))(this);
	}
	template <typename R = bool> R get_IsError() {
		return ((R (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E650))(this);
	}
	template <typename R = float> R get_DownloadProgress() {
		return ((R (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E658))(this);
	}
	template <typename R = float> R get_PackSize() {
		return ((R (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E660))(this);
	}
	template <typename R = Il2CppString*> R get_PackName() {
		return ((R (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E668))(this);
	}
	 uintptr_t GetAssetFromAssetBundle(Il2CppString* path, Il2CppString* fileName) {
		return ((uintptr_t (*)(StreamingAssetPackRequest*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, path, fileName);
	}
	 uintptr_t GetAssetFromAssetBundle_1(Il2CppString* fileName) {
		return ((uintptr_t (*)(StreamingAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x0))(this, fileName);
	}
	template <typename R = void> R UnloadAllAssets() {
		return ((R (*)(StreamingAssetPackRequest*))(Il2CppBase() + 0x169E670))(this);
	}
	template <typename R = Il2CppString*> R GetAssetLocationPath(Il2CppString* fileName) {
		return ((R (*)(StreamingAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x169E830))(this, fileName);
	}
	template <typename R = bool> R HasBundleRequest(Il2CppString* filePath) {
		return ((R (*)(StreamingAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x169E8BC))(this, filePath);
	}

};

