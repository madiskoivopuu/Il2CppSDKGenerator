#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VirtualAxis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VirtualAxis"));
	}

	template <typename R = uintptr_t> R& Target() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& GetAxis() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = uintptr_t> R get_Target() {
		return ((R (*)(VirtualAxis*))(Il2CppBase() + 0x10CBC5C))(this);
	}
	template <typename R = void> R set_Target(uintptr_t value) {
		return ((R (*)(VirtualAxis*, uintptr_t))(Il2CppBase() + 0x10CBC64))(this, value);
	}
	template <typename R = float> R get_GetAxis() {
		return ((R (*)(VirtualAxis*))(Il2CppBase() + 0x10CBC6C))(this);
	}
	template <typename R = void> R set_GetAxis(float value) {
		return ((R (*)(VirtualAxis*, float))(Il2CppBase() + 0x10CBC74))(this, value);
	}

};

