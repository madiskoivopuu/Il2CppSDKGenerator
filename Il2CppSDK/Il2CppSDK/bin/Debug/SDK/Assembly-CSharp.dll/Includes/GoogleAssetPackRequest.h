#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoogleAssetPackRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoogleAssetPackRequest"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& AssetBundleRequests() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& PackName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _assetBundleRequest() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _assetBundleSizeRequest() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_AssetBundleRequests() {
		return ((T (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E18F0))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E18F8))(this);
	}
	template <typename T = bool> T get_IsError() {
		return ((T (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E1920))(this);
	}
	template <typename T = float> T get_DownloadProgress() {
		return ((T (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E1958))(this);
	}
	template <typename T = float> T get_PackSize() {
		return ((T (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E1970))(this);
	}
	template <typename T = Il2CppString*> T get_PackName() {
		return ((T (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E19F0))(this);
	}
	template <typename T = uintptr_t> T GetAssetFromAssetBundle(Il2CppString* path, Il2CppString* fileName) {
		return ((T (*)(GoogleAssetPackRequest*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, path, fileName);
	}
	template <typename T = uintptr_t> T GetAssetFromAssetBundle_1(Il2CppString* fileName) {
		return ((T (*)(GoogleAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x0))(this, fileName);
	}
	template <typename T = void> T UnloadAllAssets() {
		return ((T (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E19F8))(this);
	}
	template <typename T = Il2CppString*> T GetAssetLocationPath(Il2CppString* fileName) {
		return ((T (*)(GoogleAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x12E1BB8))(this, fileName);
	}
	template <typename T = bool> T HasBundleRequest(Il2CppString* filePath) {
		return ((T (*)(GoogleAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x12E1C00))(this, filePath);
	}
	template <typename T = uintptr_t> T GetAssetLocation(Il2CppString* fileName) {
		return ((T (*)(GoogleAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x12E1CA4))(this, fileName);
	}

};

}
