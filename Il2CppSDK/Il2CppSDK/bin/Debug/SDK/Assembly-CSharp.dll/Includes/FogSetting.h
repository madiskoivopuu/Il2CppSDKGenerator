#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FogSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FogSetting"));
	}

	template <typename T = bool> T& fog() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& fogColor() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& fogDensity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& fogEndDistance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& fogStartDistance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& fogMode() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = FogSetting*> static T get_Current() {
		return ((T (*)(void *))(Il2CppBase() + 0xE9EF18))(0);
	}
	template <typename T = void> T Set() {
		return ((T (*)(FogSetting*))(Il2CppBase() + 0xE9EFC4))(this);
	}

};

