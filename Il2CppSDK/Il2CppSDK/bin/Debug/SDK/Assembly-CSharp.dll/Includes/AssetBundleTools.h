#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AssetBundleTools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssetBundleTools"));
	}


	template <typename T = Il2CppString*> static T GetAssetBundlesBuildDirectory(Il2CppString* platform) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A59518))(0, platform);
	}
	template <typename T = Il2CppString*> static T GetAssetBundlesBuildDirectoryForEditor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A595C8))(0);
	}
	template <typename T = Il2CppString*> static T GetStreamingAssetBundlesDirectory() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A59688))(0);
	}
	template <typename T = Il2CppString*> static T GetAssetPlatformName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A59710))(0);
	}

};

