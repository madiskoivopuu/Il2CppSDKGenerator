#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoogleAssetBundleRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoogleAssetBundleRequest"));
	}

	template <typename T = uintptr_t> T& AssetBundle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Asset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Path() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint64_t> T& Offset() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_AssetBundle() {
		return ((T (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x12E0B84))(this);
	}
	template <typename T = void> T set_AssetBundle(uintptr_t value) {
		return ((T (*)(GoogleAssetBundleRequest*, uintptr_t))(Il2CppBase() + 0x12E0B8C))(this, value);
	}
	template <typename T = uintptr_t> T get_Asset() {
		return ((T (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x12E0B94))(this);
	}
	template <typename T = void> T set_Asset(uintptr_t value) {
		return ((T (*)(GoogleAssetBundleRequest*, uintptr_t))(Il2CppBase() + 0x12E0B9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x12E0BA4))(this);
	}
	template <typename T = Il2CppString*> T get_Path() {
		return ((T (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x12E0BAC))(this);
	}
	template <typename T = uint64_t> T get_Offset() {
		return ((T (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x12E0BB4))(this);
	}
	template <typename T = uintptr_t> T LoadAsset() {
		return ((T (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UnloadAsset() {
		return ((T (*)(GoogleAssetBundleRequest*))(Il2CppBase() + 0x12E0C70))(this);
	}

};

