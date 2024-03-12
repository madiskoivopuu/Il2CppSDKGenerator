#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StreamingAssetBundleRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StreamingAssetBundleRequest"));
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

	template <typename T = uintptr_t> T get_AssetBundle() {
		return ((T (*)(StreamingAssetBundleRequest*))(Il2CppBase() + 0x169D8AC))(this);
	}
	template <typename T = void> T set_AssetBundle(uintptr_t value) {
		return ((T (*)(StreamingAssetBundleRequest*, uintptr_t))(Il2CppBase() + 0x169D8B4))(this, value);
	}
	template <typename T = uintptr_t> T get_Asset() {
		return ((T (*)(StreamingAssetBundleRequest*))(Il2CppBase() + 0x169D8BC))(this);
	}
	template <typename T = void> T set_Asset(uintptr_t value) {
		return ((T (*)(StreamingAssetBundleRequest*, uintptr_t))(Il2CppBase() + 0x169D8C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(StreamingAssetBundleRequest*))(Il2CppBase() + 0x169D8CC))(this);
	}
	template <typename T = Il2CppString*> T get_Path() {
		return ((T (*)(StreamingAssetBundleRequest*))(Il2CppBase() + 0x169D8D4))(this);
	}
	template <typename T = uintptr_t> T LoadAsset() {
		return ((T (*)(StreamingAssetBundleRequest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UnloadAsset() {
		return ((T (*)(StreamingAssetBundleRequest*))(Il2CppBase() + 0x169D92C))(this);
	}

};

}
