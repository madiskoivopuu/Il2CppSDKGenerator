#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StreamingAssetDeliveryService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StreamingAssetDeliveryService"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, IAssetPackRequest*>*> T& _assetPackRequests() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, IAssetPackRequest*>*> T& _staticAssetPackRequests() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _assetBundleManifest() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = IAssetPackRequest*> T RequestAssetBundlePack(Il2CppString* packName, bool isStatic) {
		return ((T (*)(StreamingAssetDeliveryService*, Il2CppString*, bool))(Il2CppBase() + 0x169DB74))(this, packName, isStatic);
	}
	template <typename T = IAssetPackBatchRequest*> T RequestAssetBundlePacks(Il2CppArray<uintptr_t>* packNames, bool isStatic) {
		return ((T (*)(StreamingAssetDeliveryService*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x169DD94))(this, packNames, isStatic);
	}
	template <typename T = uintptr_t> T GetAsset(Il2CppString* packName, Il2CppString* bundleName, Il2CppString* ext) {
		return ((T (*)(StreamingAssetDeliveryService*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, packName, bundleName, ext);
	}
	template <typename T = float> T GetAssetPackSize(Il2CppString* packName) {
		return ((T (*)(StreamingAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x169E0FC))(this, packName);
	}
	template <typename T = bool> T IsPackDownloaded(Il2CppString* packName) {
		return ((T (*)(StreamingAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x169E104))(this, packName);
	}
	template <typename T = void> T UnloadAllAssets() {
		return ((T (*)(StreamingAssetDeliveryService*))(Il2CppBase() + 0x169E120))(this);
	}

};

