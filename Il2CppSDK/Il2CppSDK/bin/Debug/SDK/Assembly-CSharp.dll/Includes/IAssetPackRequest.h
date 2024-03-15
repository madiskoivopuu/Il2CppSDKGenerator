#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAssetPackRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAssetPackRequest"));
	}


	 Il2CppDictionary<Il2CppString*, IAssetBundleRequest*>* get_AssetBundleRequests() {
		return ((Il2CppDictionary<Il2CppString*, IAssetBundleRequest*>* (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsCompleted() {
		return ((R (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsError() {
		return ((R (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = float> R get_DownloadProgress() {
		return ((R (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = float> R get_PackSize() {
		return ((R (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_PackName() {
		return ((R (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	 uintptr_t GetAssetFromAssetBundle(Il2CppString* path, Il2CppString* fileName) {
		return ((uintptr_t (*)(IAssetPackRequest*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, path, fileName);
	}
	 uintptr_t GetAssetFromAssetBundle_1(Il2CppString* fileName) {
		return ((uintptr_t (*)(IAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x0))(this, fileName);
	}
	template <typename R = void> R UnloadAllAssets() {
		return ((R (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R GetAssetLocationPath(Il2CppString* fileName) {
		return ((R (*)(IAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x0))(this, fileName);
	}
	template <typename R = bool> R HasBundleRequest(Il2CppString* filePath) {
		return ((R (*)(IAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x0))(this, filePath);
	}

};

