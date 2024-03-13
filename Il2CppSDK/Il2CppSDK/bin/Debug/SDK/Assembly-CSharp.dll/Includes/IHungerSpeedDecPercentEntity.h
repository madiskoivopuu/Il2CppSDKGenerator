#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHungerSpeedDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHungerSpeedDecPercentEntity"));
	}


	template <typename T = HungerSpeedDecPercentComponent*> T get_hungerSpeedDecPercent() {
		return ((T (*)(IHungerSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHungerSpeedDecPercent() {
		return ((T (*)(IHungerSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHungerSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IHungerSpeedDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHungerSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IHungerSpeedDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHungerSpeedDecPercent() {
		return ((T (*)(IHungerSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

