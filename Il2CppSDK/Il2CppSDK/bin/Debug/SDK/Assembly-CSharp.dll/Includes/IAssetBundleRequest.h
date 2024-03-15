#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAssetBundleRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAssetBundleRequest"));
	}


	template <typename R = uintptr_t> R get_AssetBundle() {
		return ((R (*)(IAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(IAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R get_Path() {
		return ((R (*)(IAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_Asset() {
		return ((R (*)(IAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	 uintptr_t LoadAsset() {
		return ((uintptr_t (*)(IAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R UnloadAsset() {
		return ((R (*)(IAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}

};

