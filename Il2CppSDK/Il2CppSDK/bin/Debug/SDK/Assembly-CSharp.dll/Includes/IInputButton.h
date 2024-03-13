#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInputButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInputButton"));
	}


	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(IInputButton*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_GetButtonDown() {
		return ((T (*)(IInputButton*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_GetButtonUp() {
		return ((T (*)(IInputButton*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_GetButton() {
		return ((T (*)(IInputButton*))(Il2CppBase() + 0x0))(this);
	}

};

