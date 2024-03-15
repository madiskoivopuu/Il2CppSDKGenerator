#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityPlatformHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityPlatformHelper"));
	}


	template <typename R = EPlatforms> static R GetCurrentPlatform() {
		return ((R (*)(void *))(Il2CppBase() + 0x153A6F0))(0);
	}
	template <typename R = ProtoModels::PlatformType> static R GetCurrentPlatformForBack() {
		return ((R (*)(void *))(Il2CppBase() + 0x153A6F8))(0);
	}

};

