#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpeedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpeedEntity"));
	}


	template <typename R = SpeedComponent*> R get_speed() {
		return ((R (*)(ISpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSpeed() {
		return ((R (*)(ISpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSpeed(float newValue) {
		return ((R (*)(ISpeedEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceSpeed(float newValue) {
		return ((R (*)(ISpeedEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveSpeed() {
		return ((R (*)(ISpeedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

