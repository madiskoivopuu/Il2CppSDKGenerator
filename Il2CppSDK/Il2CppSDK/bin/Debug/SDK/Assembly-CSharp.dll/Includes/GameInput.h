#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameInput"));
	}


	template <typename R = bool> static R get_ButtonsIsEnabled() {
		return ((R (*)(void *))(Il2CppBase() + 0x174E688))(0);
	}
	template <typename R = bool> static R get_AxisIsEnabled() {
		return ((R (*)(void *))(Il2CppBase() + 0x174E690))(0);
	}
	template <typename R = bool> static R GetButton(Il2CppString* name) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x174E698))(0, name);
	}
	template <typename R = bool> static R GetButtonUp(Il2CppString* name) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x174E6A0))(0, name);
	}
	template <typename R = bool> static R GetButtonDown(Il2CppString* name) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x174E6A8))(0, name);
	}
	template <typename R = float> static R GetAxisRaw(Il2CppString* name) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x174E6B0))(0, name);
	}

};

