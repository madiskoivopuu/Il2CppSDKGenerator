#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VirtualAxis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VirtualAxis"));
	}

	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& GetAxis() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(VirtualAxis*))(Il2CppBase() + 0x10CBC5C))(this);
	}
	template <typename T = void> T set_Target(uintptr_t value) {
		return ((T (*)(VirtualAxis*, uintptr_t))(Il2CppBase() + 0x10CBC64))(this, value);
	}
	template <typename T = float> T get_GetAxis() {
		return ((T (*)(VirtualAxis*))(Il2CppBase() + 0x10CBC6C))(this);
	}
	template <typename T = void> T set_GetAxis(float value) {
		return ((T (*)(VirtualAxis*, float))(Il2CppBase() + 0x10CBC74))(this, value);
	}

};

