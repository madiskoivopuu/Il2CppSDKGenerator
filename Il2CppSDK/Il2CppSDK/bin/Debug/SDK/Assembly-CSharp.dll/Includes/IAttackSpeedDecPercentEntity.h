#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAttackSpeedDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAttackSpeedDecPercentEntity"));
	}


	template <typename R = AttackSpeedDecPercentComponent*> R get_attackSpeedDecPercent() {
		return ((R (*)(IAttackSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAttackSpeedDecPercent() {
		return ((R (*)(IAttackSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAttackSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IAttackSpeedDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceAttackSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IAttackSpeedDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveAttackSpeedDecPercent() {
		return ((R (*)(IAttackSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

