#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IJoystickDPadHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IJoystickDPadHandler"));
	}


	template <typename T = void> T OnLeft() {
		return ((T (*)(IJoystickDPadHandler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnRight() {
		return ((T (*)(IJoystickDPadHandler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnTop() {
		return ((T (*)(IJoystickDPadHandler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnBottom() {
		return ((T (*)(IJoystickDPadHandler*))(Il2CppBase() + 0x0))(this);
	}

};

}
