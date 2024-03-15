#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IJoystickDPadHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IJoystickDPadHandler"));
	}


	template <typename R = void> R OnLeft() {
		return ((R (*)(IJoystickDPadHandler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnRight() {
		return ((R (*)(IJoystickDPadHandler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnTop() {
		return ((R (*)(IJoystickDPadHandler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnBottom() {
		return ((R (*)(IJoystickDPadHandler*))(Il2CppBase() + 0x0))(this);
	}

};

