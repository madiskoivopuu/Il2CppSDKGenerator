#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAttackRadiusIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAttackRadiusIncPercentEntity"));
	}


	template <typename R = AttackRadiusIncPercentComponent*> R get_attackRadiusIncPercent() {
		return ((R (*)(IAttackRadiusIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAttackRadiusIncPercent() {
		return ((R (*)(IAttackRadiusIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAttackRadiusIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IAttackRadiusIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceAttackRadiusIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IAttackRadiusIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveAttackRadiusIncPercent() {
		return ((R (*)(IAttackRadiusIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

