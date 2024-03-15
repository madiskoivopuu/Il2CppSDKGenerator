#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StreamingAssetDeliveryService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StreamingAssetDeliveryService"));
	}

	 Il2CppDictionary<Il2CppString*, IAssetPackRequest*>*& _assetPackRequests() {
		return *(Il2CppDictionary<Il2CppString*, IAssetPackRequest*>**)((uintptr_t)this + 0x10);
	}
	 Il2CppDictionary<Il2CppString*, IAssetPackRequest*>*& _staticAssetPackRequests() {
		return *(Il2CppDictionary<Il2CppString*, IAssetPackRequest*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _assetBundleManifest() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = IAssetPackRequest*> R RequestAssetBundlePack(Il2CppString* packName, bool isStatic) {
		return ((R (*)(StreamingAssetDeliveryService*, Il2CppString*, bool))(Il2CppBase() + 0x169DB74))(this, packName, isStatic);
	}
	template <typename R = IAssetPackBatchRequest*> R RequestAssetBundlePacks(Il2CppArray<Il2CppString*>* packNames, bool isStatic) {
		return ((R (*)(StreamingAssetDeliveryService*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x169DD94))(this, packNames, isStatic);
	}
	 uintptr_t GetAsset(Il2CppString* packName, Il2CppString* bundleName, Il2CppString* ext) {
		return ((uintptr_t (*)(StreamingAssetDeliveryService*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, packName, bundleName, ext);
	}
	template <typename R = float> R GetAssetPackSize(Il2CppString* packName) {
		return ((R (*)(StreamingAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x169E0FC))(this, packName);
	}
	template <typename R = bool> R IsPackDownloaded(Il2CppString* packName) {
		return ((R (*)(StreamingAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x169E104))(this, packName);
	}
	template <typename R = void> R UnloadAllAssets() {
		return ((R (*)(StreamingAssetDeliveryService*))(Il2CppBase() + 0x169E120))(this);
	}

};

