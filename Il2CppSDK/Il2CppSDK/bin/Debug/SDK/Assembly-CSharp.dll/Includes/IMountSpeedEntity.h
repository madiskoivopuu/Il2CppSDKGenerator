#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountSpeedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountSpeedEntity"));
	}


	template <typename R = MountSpeedComponent*> R get_mountSpeed() {
		return ((R (*)(IMountSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMountSpeed() {
		return ((R (*)(IMountSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMountSpeed(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMountSpeedEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMountSpeed(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMountSpeedEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMountSpeed() {
		return ((R (*)(IMountSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

