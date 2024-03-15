#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StreamingAssetBundleRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StreamingAssetBundleRequest"));
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

	template <typename R = uintptr_t> R get_AssetBundle() {
		return ((R (*)(StreamingAssetBundleRequest*))(Il2CppBase() + 0x169D8AC))(this);
	}
	template <typename R = void> R set_AssetBundle(uintptr_t value) {
		return ((R (*)(StreamingAssetBundleRequest*, uintptr_t))(Il2CppBase() + 0x169D8B4))(this, value);
	}
	template <typename R = uintptr_t> R get_Asset() {
		return ((R (*)(StreamingAssetBundleRequest*))(Il2CppBase() + 0x169D8BC))(this);
	}
	template <typename R = void> R set_Asset(uintptr_t value) {
		return ((R (*)(StreamingAssetBundleRequest*, uintptr_t))(Il2CppBase() + 0x169D8C4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(StreamingAssetBundleRequest*))(Il2CppBase() + 0x169D8CC))(this);
	}
	template <typename R = Il2CppString*> R get_Path() {
		return ((R (*)(StreamingAssetBundleRequest*))(Il2CppBase() + 0x169D8D4))(this);
	}
	 uintptr_t LoadAsset() {
		return ((uintptr_t (*)(StreamingAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R UnloadAsset() {
		return ((R (*)(StreamingAssetBundleRequest*))(Il2CppBase() + 0x169D92C))(this);
	}

};

