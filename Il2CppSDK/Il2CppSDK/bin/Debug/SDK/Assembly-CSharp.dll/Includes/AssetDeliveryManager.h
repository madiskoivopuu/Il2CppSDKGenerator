#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AssetDeliveryManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssetDeliveryManager"));
	}

	template <typename T = IAssetDeliveryService*> static T& AssetDeliveryService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _fallbackPrefabObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _fallbackAudioObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& AudioBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AtlasesBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ConfigsBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& NorthBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GuildsBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PortalsBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& EventsBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DungeonABundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MountsBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ShadersBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& VideosBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ElvesLandBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WeaponsBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CoreBundleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = IAssetDeliveryService*> static T get_AssetDeliveryService() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A5975C))(0);
	}
	template <typename T = IAssetPackRequest*> static T DownloadAssetBundlePack(Il2CppString* packName, bool isStatic) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x1A59838))(0, packName, isStatic);
	}
	template <typename T = IAssetPackBatchRequest*> static T DownloadAssetBundlePacks(Il2CppArray<uintptr_t>* packNames, bool isStatic) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1A59964))(0, packNames, isStatic);
	}
	template <typename T = uintptr_t> static T GetAssetFromAssetBundle(Il2CppString* packName, Il2CppString* assetBundleName, Il2CppString* ext) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(0, packName, assetBundleName, ext);
	}
	template <typename T = uintptr_t> static T GetAssetFromResources(Il2CppString* assetName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, assetName);
	}
	template <typename T = uintptr_t> static T GetAssetFromResourcesOrAssetBundle(Il2CppString* assetName, WorldResourcesType* resourcesType) {
		return ((T (*)(void *, Il2CppString*, WorldResourcesType*))(Il2CppBase() + 0x0))(0, assetName, resourcesType);
	}
	template <typename T = uintptr_t> static T GetAssetFromResourcesOrAssetBundle_1(Il2CppString* packName, Il2CppString* assetName, Il2CppString* ext) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(0, packName, assetName, ext);
	}
	template <typename T = void> static T UnloadAllAssets() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A59A94))(0);
	}

};

