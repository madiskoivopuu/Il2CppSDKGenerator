#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FogQuality
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FogQuality"));
	}

	template <typename R = uintptr_t> R& _FogPlane() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(FogQuality*))(Il2CppBase() + 0x15F9B38))(this);
	}
	template <typename R = void> R SetEnable() {
		return ((R (*)(FogQuality*))(Il2CppBase() + 0x15F9C00))(this);
	}
	template <typename R = void> static R SetAllEnable() {
		return ((R (*)(void *))(Il2CppBase() + 0x15F9B3C))(0);
	}

};

