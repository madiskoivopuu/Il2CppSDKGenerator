#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FogSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FogSetting"));
	}

	template <typename R = bool> R& fog() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& fogColor() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = float> R& fogDensity() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& fogEndDistance() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& fogStartDistance() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uintptr_t> R& fogMode() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = FogSetting> static R get_Current() {
		return ((R (*)(void *))(Il2CppBase() + 0xE9EF18))(0);
	}
	template <typename R = void> R Set() {
		return ((R (*)(FogSetting*))(Il2CppBase() + 0xE9EFC4))(this);
	}

};

