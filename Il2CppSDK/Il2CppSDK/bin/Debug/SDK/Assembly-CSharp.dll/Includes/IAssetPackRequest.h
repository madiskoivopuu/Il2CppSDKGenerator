#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAssetPackRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAssetPackRequest"));
	}


	template <typename T = Il2CppDictionary<Il2CppString*, IAssetBundleRequest*>*> T get_AssetBundleRequests() {
		return ((T (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsError() {
		return ((T (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_DownloadProgress() {
		return ((T (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_PackSize() {
		return ((T (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_PackName() {
		return ((T (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetAssetFromAssetBundle(Il2CppString* path, Il2CppString* fileName) {
		return ((T (*)(IAssetPackRequest*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, path, fileName);
	}
	template <typename T = uintptr_t> T GetAssetFromAssetBundle_1(Il2CppString* fileName) {
		return ((T (*)(IAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x0))(this, fileName);
	}
	template <typename T = void> T UnloadAllAssets() {
		return ((T (*)(IAssetPackRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetAssetLocationPath(Il2CppString* fileName) {
		return ((T (*)(IAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x0))(this, fileName);
	}
	template <typename T = bool> T HasBundleRequest(Il2CppString* filePath) {
		return ((T (*)(IAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x0))(this, filePath);
	}

};

