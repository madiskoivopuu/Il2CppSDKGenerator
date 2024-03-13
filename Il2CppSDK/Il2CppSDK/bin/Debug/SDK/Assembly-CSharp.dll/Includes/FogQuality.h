#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FogQuality
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FogQuality"));
	}

	template <typename T = uintptr_t> T& _FogPlane() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FogQuality*))(Il2CppBase() + 0x15F9B38))(this);
	}
	template <typename T = void> T SetEnable() {
		return ((T (*)(FogQuality*))(Il2CppBase() + 0x15F9C00))(this);
	}
	template <typename T = void> static T SetAllEnable() {
		return ((T (*)(void *))(Il2CppBase() + 0x15F9B3C))(0);
	}

};

