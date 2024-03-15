#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKHelper"));
	}

	template <typename R = bool> static R& IsShort() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& IsAfkKickDisabled() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}

	template <typename R = bool> static R get_IsShort() {
		return ((R (*)(void *))(Il2CppBase() + 0x1D94E68))(0);
	}
	template <typename R = void> static R set_IsShort(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x1D94EB4))(0, value);
	}
	template <typename R = bool> static R get_IsAfkKickDisabled() {
		return ((R (*)(void *))(Il2CppBase() + 0x1D94F08))(0);
	}
	template <typename R = void> static R set_IsAfkKickDisabled(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x1D94F54))(0, value);
	}
	template <typename R = void> static R SwitchTimeoutLenght() {
		return ((R (*)(void *))(Il2CppBase() + 0x1D94FA8))(0);
	}
	template <typename R = void> static R SwitchAfkKickOnOff() {
		return ((R (*)(void *))(Il2CppBase() + 0x1D95028))(0);
	}
	template <typename R = int64_t> static R GetAFKKickTimeout() {
		return ((R (*)(void *))(Il2CppBase() + 0x1D93664))(0);
	}
	template <typename R = int64_t> static R GetAFKKickWarningTimeout() {
		return ((R (*)(void *))(Il2CppBase() + 0x1D93DD0))(0);
	}

};

