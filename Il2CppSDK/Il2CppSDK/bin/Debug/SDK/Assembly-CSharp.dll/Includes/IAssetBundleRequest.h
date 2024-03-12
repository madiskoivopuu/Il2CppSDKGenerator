#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAssetBundleRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAssetBundleRequest"));
	}


	template <typename T = uintptr_t> T get_AssetBundle() {
		return ((T (*)(IAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(IAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Path() {
		return ((T (*)(IAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Asset() {
		return ((T (*)(IAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T LoadAsset() {
		return ((T (*)(IAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UnloadAsset() {
		return ((T (*)(IAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}

};

}
