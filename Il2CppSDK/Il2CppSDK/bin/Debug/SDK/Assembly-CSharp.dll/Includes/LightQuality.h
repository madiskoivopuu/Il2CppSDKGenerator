#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LightQuality
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightQuality"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& PointLights() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LightQuality*))(Il2CppBase() + 0x142C49C))(this);
	}
	template <typename T = void> T SetEnabled() {
		return ((T (*)(LightQuality*))(Il2CppBase() + 0x142C4A0))(this);
	}
	template <typename T = void> static T SetAllEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x142C590))(0);
	}

};

}
