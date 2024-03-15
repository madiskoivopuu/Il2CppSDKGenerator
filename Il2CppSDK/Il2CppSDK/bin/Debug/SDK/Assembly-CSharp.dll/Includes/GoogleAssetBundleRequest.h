#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoogleAssetBundleRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoogleAssetBundleRequest"));
	}

	template <typename R = uintptr_t> R& AssetBundle() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& Asset() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Path() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uint64_t> R& Offset() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = uintptr_t> R get_AssetBundle() {
		return ((R (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x12E0B84))(this);
	}
	template <typename R = void> R set_AssetBundle(uintptr_t value) {
		return ((R (*)(GoogleAssetBundleRequest*, uintptr_t))(Il2CppBase() + 0x12E0B8C))(this, value);
	}
	template <typename R = uintptr_t> R get_Asset() {
		return ((R (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x12E0B94))(this);
	}
	template <typename R = void> R set_Asset(uintptr_t value) {
		return ((R (*)(GoogleAssetBundleRequest*, uintptr_t))(Il2CppBase() + 0x12E0B9C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x12E0BA4))(this);
	}
	template <typename R = Il2CppString*> R get_Path() {
		return ((R (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x12E0BAC))(this);
	}
	template <typename R = uint64_t> R get_Offset() {
		return ((R (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x12E0BB4))(this);
	}
	 uintptr_t LoadAsset() {
		return ((uintptr_t (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R UnloadAsset() {
		return ((R (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x12E0C70))(this);
	}

};

