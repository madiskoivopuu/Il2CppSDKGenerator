#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountSpeedDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountSpeedDecPercentEntity"));
	}


	template <typename T = MountSpeedDecPercentComponent*> T get_mountSpeedDecPercent() {
		return ((T (*)(IMountSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMountSpeedDecPercent() {
		return ((T (*)(IMountSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMountSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMountSpeedDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMountSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMountSpeedDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMountSpeedDecPercent() {
		return ((T (*)(IMountSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

