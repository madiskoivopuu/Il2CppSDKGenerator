#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddressableAssetDeliveryService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddressableAssetDeliveryService"));
	}


	template <typename R = IAssetPackRequest*> R RequestAssetBundlePack(Il2CppString* packName, bool isStatic) {
		return ((R (*)(AddressableAssetDeliveryService*, Il2CppString*, bool))(Il2CppBase() + 0x18B0F28))(this, packName, isStatic);
	}
	template <typename R = IAssetPackBatchRequest*> R RequestAssetBundlePacks(Il2CppArray<Il2CppString*>* packName, bool isStatic) {
		return ((R (*)(AddressableAssetDeliveryService*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x18B0F30))(this, packName, isStatic);
	}
	 uintptr_t GetAsset(Il2CppString* packName, Il2CppString* bundleName, Il2CppString* ext) {
		return ((uintptr_t (*)(AddressableAssetDeliveryService*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, packName, bundleName, ext);
	}
	template <typename R = float> R GetAssetPackSize(Il2CppString* packName) {
		return ((R (*)(AddressableAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x18B0F88))(this, packName);
	}
	template <typename R = bool> R IsPackDownloaded(Il2CppString* packName) {
		return ((R (*)(AddressableAssetDeliveryService*, Il2CppString*))(Il2CppBase() + 0x18B0F90))(this, packName);
	}
	template <typename R = void> R UnloadAllAssets() {
		return ((R (*)(AddressableAssetDeliveryService*))(Il2CppBase() + 0x18B0F98))(this);
	}

};

