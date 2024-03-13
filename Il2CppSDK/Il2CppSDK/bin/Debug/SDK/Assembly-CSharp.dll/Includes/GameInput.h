#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameInput"));
	}


	template <typename T = bool> static T get_ButtonsIsEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x174E688))(0);
	}
	template <typename T = bool> static T get_AxisIsEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x174E690))(0);
	}
	template <typename T = bool> static T GetButton(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x174E698))(0, name);
	}
	template <typename T = bool> static T GetButtonUp(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x174E6A0))(0, name);
	}
	template <typename T = bool> static T GetButtonDown(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x174E6A8))(0, name);
	}
	template <typename T = float> static T GetAxisRaw(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x174E6B0))(0, name);
	}

};

