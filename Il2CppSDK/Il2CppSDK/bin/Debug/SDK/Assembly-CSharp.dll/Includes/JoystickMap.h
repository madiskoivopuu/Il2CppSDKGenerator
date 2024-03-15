#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JoystickMap"));
	}

	template <typename R = float> R& _threshold() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Start() {
		return ((R (*)(JoystickMap*))(Il2CppBase() + 0x14E5DC8))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(JoystickMap*))(Il2CppBase() + 0x14E5EF0))(this);
	}
	template <typename R = void> R PrintAxisDebug(Il2CppString* axis) {
		return ((R (*)(JoystickMap*, Il2CppString*))(Il2CppBase() + 0x14E5FF4))(this, axis);
	}
	template <typename R = void> R JoystickAllAxisTest() {
		return ((R (*)(JoystickMap*))(Il2CppBase() + 0x14E61CC))(this);
	}
	template <typename R = void> R JoystickAllButtonTest() {
		return ((R (*)(JoystickMap*))(Il2CppBase() + 0x14E60E4))(this);
	}

};

