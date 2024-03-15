#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LightQuality
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightQuality"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& PointLights() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(LightQuality*))(Il2CppBase() + 0x142C49C))(this);
	}
	template <typename R = void> R SetEnabled() {
		return ((R (*)(LightQuality*))(Il2CppBase() + 0x142C4A0))(this);
	}
	template <typename R = void> static R SetAllEnabled() {
		return ((R (*)(void *))(Il2CppBase() + 0x142C590))(0);
	}

};

