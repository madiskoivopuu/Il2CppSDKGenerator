#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountSpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountSpeedIncPercentEntity"));
	}


	template <typename R = MountSpeedIncPercentComponent*> R get_mountSpeedIncPercent() {
		return ((R (*)(IMountSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMountSpeedIncPercent() {
		return ((R (*)(IMountSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMountSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMountSpeedIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMountSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMountSpeedIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMountSpeedIncPercent() {
		return ((R (*)(IMountSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

