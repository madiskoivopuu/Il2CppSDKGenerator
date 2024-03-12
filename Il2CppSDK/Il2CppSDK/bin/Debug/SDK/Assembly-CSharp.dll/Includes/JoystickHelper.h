#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickHelper"));
	}


	template <typename T = uintptr_t> static T GetKeyCode(uintptr_t keyCode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14E5DC4))(0, keyCode);
	}

};

}
