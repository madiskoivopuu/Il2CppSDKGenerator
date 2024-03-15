#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoogleAssetPackRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoogleAssetPackRequest"));
	}

	 Il2CppDictionary<Il2CppString*, IAssetBundleRequest*>*& AssetBundleRequests() {
		return *(Il2CppDictionary<Il2CppString*, IAssetBundleRequest*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& PackName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _assetBundleRequest() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 PlayAsyncOperation2<int64_t, uintptr_t>*& _assetBundleSizeRequest() {
		return *(PlayAsyncOperation2<int64_t, uintptr_t>**)((uintptr_t)this + 0x28);
	}

	 Il2CppDictionary<Il2CppString*, IAssetBundleRequest*>* get_AssetBundleRequests() {
		return ((Il2CppDictionary<Il2CppString*, IAssetBundleRequest*>* (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E18F0))(this);
	}
	template <typename R = bool> R get_IsCompleted() {
		return ((R (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E18F8))(this);
	}
	template <typename R = bool> R get_IsError() {
		return ((R (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E1920))(this);
	}
	template <typename R = float> R get_DownloadProgress() {
		return ((R (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E1958))(this);
	}
	template <typename R = float> R get_PackSize() {
		return ((R (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E1970))(this);
	}
	template <typename R = Il2CppString*> R get_PackName() {
		return ((R (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E19F0))(this);
	}
	 uintptr_t GetAssetFromAssetBundle(Il2CppString* path, Il2CppString* fileName) {
		return ((uintptr_t (*)(GoogleAssetPackRequest*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, path, fileName);
	}
	 uintptr_t GetAssetFromAssetBundle_1(Il2CppString* fileName) {
		return ((uintptr_t (*)(GoogleAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x0))(this, fileName);
	}
	template <typename R = void> R UnloadAllAssets() {
		return ((R (*)(GoogleAssetPackRequest*))(Il2CppBase() + 0x12E19F8))(this);
	}
	template <typename R = Il2CppString*> R GetAssetLocationPath(Il2CppString* fileName) {
		return ((R (*)(GoogleAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x12E1BB8))(this, fileName);
	}
	template <typename R = bool> R HasBundleRequest(Il2CppString* filePath) {
		return ((R (*)(GoogleAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x12E1C00))(this, filePath);
	}
	template <typename R = uintptr_t> R GetAssetLocation(Il2CppString* fileName) {
		return ((R (*)(GoogleAssetPackRequest*, Il2CppString*))(Il2CppBase() + 0x12E1CA4))(this, fileName);
	}

};

