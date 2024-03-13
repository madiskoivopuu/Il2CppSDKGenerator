#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAssetDeliveryService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAssetDeliveryService"));
	}


	template <typename T = IAssetPackRequest*> T RequestAssetBundlePack(Il2CppString* packName, bool isStatic) {
		return ((T (*)(IAssetDeliveryService*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, packName, isStatic);
	}
	template <typename T = IAssetPackBatchRequest*> T RequestAssetBundlePacks(Il2CppArray<uintptr_t>* packName, bool isStatic) {
		return ((T (*)(IAssetDeliveryService*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(this, packName, isStatic);
	}
	template <typename T = uintptr_t> T GetAsset(Il2CppString* packName, Il2CppString* bundleName, Il2CppString* ext) {
		return ((T (*)(IAssetDeliveryService*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, packName, bundleName, ext);
	}
	template <typename T = float> T GetAssetPackSize(Il2CppString* packName) {
		return ((T (*)(IAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x0))(this, packName);
	}
	template <typename T = bool> T IsPackDownloaded(Il2CppString* packName) {
		return ((T (*)(IAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x0))(this, packName);
	}
	template <typename T = void> T UnloadAllAssets() {
		return ((T (*)(IAssetDeliveryService*))(Il2CppBase() + 0x0))(this);
	}

};

