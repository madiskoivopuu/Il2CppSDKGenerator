#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountSpeedDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountSpeedDecPercentEntity"));
	}


	template <typename R = MountSpeedDecPercentComponent*> R get_mountSpeedDecPercent() {
		return ((R (*)(IMountSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMountSpeedDecPercent() {
		return ((R (*)(IMountSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMountSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMountSpeedDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMountSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMountSpeedDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMountSpeedDecPercent() {
		return ((R (*)(IMountSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

