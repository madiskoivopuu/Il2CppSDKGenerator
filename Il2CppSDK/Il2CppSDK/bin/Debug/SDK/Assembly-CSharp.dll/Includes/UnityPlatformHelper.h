#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityPlatformHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityPlatformHelper"));
	}


	template <typename T = EPlatforms*> static T GetCurrentPlatform() {
		return ((T (*)(void *))(Il2CppBase() + 0x153A6F0))(0);
	}
	template <typename T = PlatformType*> static T GetCurrentPlatformForBack() {
		return ((T (*)(void *))(Il2CppBase() + 0x153A6F8))(0);
	}

};

