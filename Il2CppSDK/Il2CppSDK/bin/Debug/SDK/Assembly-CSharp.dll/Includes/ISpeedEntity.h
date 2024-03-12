#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpeedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpeedEntity"));
	}


	template <typename T = uintptr_t> T get_speed() {
		return ((T (*)(ISpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSpeed() {
		return ((T (*)(ISpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSpeed(float newValue) {
		return ((T (*)(ISpeedEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceSpeed(float newValue) {
		return ((T (*)(ISpeedEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveSpeed() {
		return ((T (*)(ISpeedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
