#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AssetBundleTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssetBundleTools"));
	}


	template <typename R = Il2CppString*> static R GetAssetBundlesBuildDirectory(Il2CppString* platform) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A59518))(0, platform);
	}
	template <typename R = Il2CppString*> static R GetAssetBundlesBuildDirectoryForEditor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A595C8))(0);
	}
	template <typename R = Il2CppString*> static R GetStreamingAssetBundlesDirectory() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A59688))(0);
	}
	template <typename R = Il2CppString*> static R GetAssetPlatformName() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A59710))(0);
	}

};

