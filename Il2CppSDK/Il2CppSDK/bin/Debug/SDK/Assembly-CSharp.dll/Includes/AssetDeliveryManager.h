#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AssetDeliveryManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssetDeliveryManager"));
	}

	template <typename R = IAssetDeliveryService*> static R& AssetDeliveryService() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& _fallbackPrefabObject() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = uintptr_t> static R& _fallbackAudioObject() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = Il2CppString*> static R& AudioBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& AtlasesBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ConfigsBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& NorthBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GuildsBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PortalsBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& EventsBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DungeonABundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& MountsBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ShadersBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& VideosBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ElvesLandBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& WeaponsBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CoreBundleName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = IAssetDeliveryService*> static R get_AssetDeliveryService() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A5975C))(0);
	}
	template <typename R = IAssetPackRequest*> static R DownloadAssetBundlePack(Il2CppString* packName, bool isStatic) {
		return ((R (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x1A59838))(0, packName, isStatic);
	}
	template <typename R = IAssetPackBatchRequest*> static R DownloadAssetBundlePacks(Il2CppArray<Il2CppString*>* packNames, bool isStatic) {
		return ((R (*)(void *, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1A59964))(0, packNames, isStatic);
	}
	 static uintptr_t GetAssetFromAssetBundle(Il2CppString* packName, Il2CppString* assetBundleName, Il2CppString* ext) {
		return ((uintptr_t (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(0, packName, assetBundleName, ext);
	}
	 static uintptr_t GetAssetFromResources(Il2CppString* assetName) {
		return ((uintptr_t (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, assetName);
	}
	 static uintptr_t GetAssetFromResourcesOrAssetBundle(Il2CppString* assetName, ProtoModels::WorldResourcesType* resourcesType) {
		return ((uintptr_t (*)(void *, Il2CppString*, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x0))(0, assetName, resourcesType);
	}
	 static uintptr_t GetAssetFromResourcesOrAssetBundle_1(Il2CppString* packName, Il2CppString* assetName, Il2CppString* ext) {
		return ((uintptr_t (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(0, packName, assetName, ext);
	}
	template <typename R = void> static R UnloadAllAssets() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A59A94))(0);
	}

};

