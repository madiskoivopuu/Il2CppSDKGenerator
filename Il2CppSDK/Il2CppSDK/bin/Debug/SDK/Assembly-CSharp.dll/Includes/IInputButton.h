#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInputButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInputButton"));
	}


	template <typename R = uintptr_t> R get_Target() {
		return ((R (*)(IInputButton*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_GetButtonDown() {
		return ((R (*)(IInputButton*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_GetButtonUp() {
		return ((R (*)(IInputButton*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_GetButton() {
		return ((R (*)(IInputButton*))(Il2CppBase() + 0x0))(this);
	}

};

