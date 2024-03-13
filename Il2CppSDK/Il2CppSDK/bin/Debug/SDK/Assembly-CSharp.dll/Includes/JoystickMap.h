#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickMap"));
	}

	template <typename T = float> T& _threshold() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(JoystickMap*))(Il2CppBase() + 0x14E5DC8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(JoystickMap*))(Il2CppBase() + 0x14E5EF0))(this);
	}
	template <typename T = void> T PrintAxisDebug(Il2CppString* axis) {
		return ((T (*)(JoystickMap*, Il2CppString*))(Il2CppBase() + 0x14E5FF4))(this, axis);
	}
	template <typename T = void> T JoystickAllAxisTest() {
		return ((T (*)(JoystickMap*))(Il2CppBase() + 0x14E61CC))(this);
	}
	template <typename T = void> T JoystickAllButtonTest() {
		return ((T (*)(JoystickMap*))(Il2CppBase() + 0x14E60E4))(this);
	}

};

