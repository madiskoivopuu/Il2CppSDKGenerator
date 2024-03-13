#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKHelper"));
	}

	template <typename T = bool> static T& IsShort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& IsAfkKickDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}

	template <typename T = bool> static T get_IsShort() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D94E68))(0);
	}
	template <typename T = void> static T set_IsShort(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1D94EB4))(0, value);
	}
	template <typename T = bool> static T get_IsAfkKickDisabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D94F08))(0);
	}
	template <typename T = void> static T set_IsAfkKickDisabled(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1D94F54))(0, value);
	}
	template <typename T = void> static T SwitchTimeoutLenght() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D94FA8))(0);
	}
	template <typename T = void> static T SwitchAfkKickOnOff() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D95028))(0);
	}
	template <typename T = int64_t> static T GetAFKKickTimeout() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D93664))(0);
	}
	template <typename T = int64_t> static T GetAFKKickWarningTimeout() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D93DD0))(0);
	}

};

