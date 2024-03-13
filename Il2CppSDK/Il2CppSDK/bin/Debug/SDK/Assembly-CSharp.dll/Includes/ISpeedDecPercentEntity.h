#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpeedDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpeedDecPercentEntity"));
	}


	template <typename T = SpeedDecPercentComponent*> T get_speedDecPercent() {
		return ((T (*)(ISpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSpeedDecPercent() {
		return ((T (*)(ISpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ISpeedDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ISpeedDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSpeedDecPercent() {
		return ((T (*)(ISpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

