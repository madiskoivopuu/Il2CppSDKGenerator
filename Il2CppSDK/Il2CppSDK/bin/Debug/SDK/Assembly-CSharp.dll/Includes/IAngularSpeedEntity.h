#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAngularSpeedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAngularSpeedEntity"));
	}


	template <typename R = AngularSpeedComponent*> R get_angularSpeed() {
		return ((R (*)(IAngularSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAngularSpeed() {
		return ((R (*)(IAngularSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAngularSpeed(float newValue) {
		return ((R (*)(IAngularSpeedEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceAngularSpeed(float newValue) {
		return ((R (*)(IAngularSpeedEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveAngularSpeed() {
		return ((R (*)(IAngularSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

