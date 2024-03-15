#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAssetDeliveryService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAssetDeliveryService"));
	}


	template <typename R = IAssetPackRequest*> R RequestAssetBundlePack(Il2CppString* packName, bool isStatic) {
		return ((R (*)(IAssetDeliveryService*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, packName, isStatic);
	}
	template <typename R = IAssetPackBatchRequest*> R RequestAssetBundlePacks(Il2CppArray<Il2CppString*>* packName, bool isStatic) {
		return ((R (*)(IAssetDeliveryService*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x0))(this, packName, isStatic);
	}
	 uintptr_t GetAsset(Il2CppString* packName, Il2CppString* bundleName, Il2CppString* ext) {
		return ((uintptr_t (*)(IAssetDeliveryService*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, packName, bundleName, ext);
	}
	template <typename R = float> R GetAssetPackSize(Il2CppString* packName) {
		return ((R (*)(IAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x0))(this, packName);
	}
	template <typename R = bool> R IsPackDownloaded(Il2CppString* packName) {
		return ((R (*)(IAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x0))(this, packName);
	}
	template <typename R = void> R UnloadAllAssets() {
		return ((R (*)(IAssetDeliveryService*))(Il2CppBase() + 0x0))(this);
	}

};

