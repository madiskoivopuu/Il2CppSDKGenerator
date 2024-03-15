#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickHelper"));
	}


	template <typename R = uintptr_t> static R GetKeyCode(uintptr_t keyCode) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x14E5DC4))(0, keyCode);
	}

};

