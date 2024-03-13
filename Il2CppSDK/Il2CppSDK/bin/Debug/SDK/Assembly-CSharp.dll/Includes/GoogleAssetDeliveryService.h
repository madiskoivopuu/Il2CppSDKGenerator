#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoogleAssetDeliveryService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoogleAssetDeliveryService"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, IAssetPackRequest*>*> T& _assetPackRequests() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, IAssetPackRequest*>*> T& _staticAssetPackRequests() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _cultureInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _assetBundleManifest() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_AssetBundleManifest() {
		return ((T (*)(GoogleAssetDeliveryService*))(Il2CppBase() + 0x12E0D50))(this);
	}
	template <typename T = IAssetPackRequest*> T RequestAssetBundlePack(Il2CppString* packName, bool isStatic) {
		return ((T (*)(GoogleAssetDeliveryService*, Il2CppString*, bool))(Il2CppBase() + 0x12E0F48))(this, packName, isStatic);
	}
	template <typename T = IAssetPackBatchRequest*> T RequestAssetBundlePacks(Il2CppArray<uintptr_t>* packNames, bool isStatic) {
		return ((T (*)(GoogleAssetDeliveryService*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x12E1088))(this, packNames, isStatic);
	}
	template <typename T = uintptr_t> T GetAsset(Il2CppString* packName, Il2CppString* bundleName, Il2CppString* ext) {
		return ((T (*)(GoogleAssetDeliveryService*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, packName, bundleName, ext);
	}
	template <typename T = float> T GetAssetPackSize(Il2CppString* packName) {
		return ((T (*)(GoogleAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x12E13F0))(this, packName);
	}
	template <typename T = bool> T IsPackDownloaded(Il2CppString* packName) {
		return ((T (*)(GoogleAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x12E159C))(this, packName);
	}
	template <typename T = void> T UnloadAllAssets() {
		return ((T (*)(GoogleAssetDeliveryService*))(Il2CppBase() + 0x12E1640))(this);
	}

};

