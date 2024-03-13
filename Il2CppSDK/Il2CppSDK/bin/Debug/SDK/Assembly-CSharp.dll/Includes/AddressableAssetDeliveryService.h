#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddressableAssetDeliveryService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddressableAssetDeliveryService"));
	}


	template <typename T = IAssetPackRequest*> T RequestAssetBundlePack(Il2CppString* packName, bool isStatic) {
		return ((T (*)(AddressableAssetDeliveryService*, Il2CppString*, bool))(Il2CppBase() + 0x18B0F28))(this, packName, isStatic);
	}
	template <typename T = IAssetPackBatchRequest*> T RequestAssetBundlePacks(Il2CppArray<uintptr_t>* packName, bool isStatic) {
		return ((T (*)(AddressableAssetDeliveryService*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x18B0F30))(this, packName, isStatic);
	}
	template <typename T = uintptr_t> T GetAsset(Il2CppString* packName, Il2CppString* bundleName, Il2CppString* ext) {
		return ((T (*)(AddressableAssetDeliveryService*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, packName, bundleName, ext);
	}
	template <typename T = float> T GetAssetPackSize(Il2CppString* packName) {
		return ((T (*)(AddressableAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x18B0F88))(this, packName);
	}
	template <typename T = bool> T IsPackDownloaded(Il2CppString* packName) {
		return ((T (*)(AddressableAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x18B0F90))(this, packName);
	}
	template <typename T = void> T UnloadAllAssets() {
		return ((T (*)(AddressableAssetDeliveryService*))(Il2CppBase() + 0x18B0F98))(this);
	}

};

