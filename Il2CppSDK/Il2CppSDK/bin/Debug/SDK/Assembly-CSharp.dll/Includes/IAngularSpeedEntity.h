#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAngularSpeedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAngularSpeedEntity"));
	}


	template <typename T = AngularSpeedComponent*> T get_angularSpeed() {
		return ((T (*)(IAngularSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAngularSpeed() {
		return ((T (*)(IAngularSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAngularSpeed(float newValue) {
		return ((T (*)(IAngularSpeedEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceAngularSpeed(float newValue) {
		return ((T (*)(IAngularSpeedEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveAngularSpeed() {
		return ((T (*)(IAngularSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

