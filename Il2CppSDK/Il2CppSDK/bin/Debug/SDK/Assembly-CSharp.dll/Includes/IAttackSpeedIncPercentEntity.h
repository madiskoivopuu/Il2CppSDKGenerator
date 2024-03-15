#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAttackSpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAttackSpeedIncPercentEntity"));
	}


	template <typename R = AttackSpeedIncPercentComponent*> R get_attackSpeedIncPercent() {
		return ((R (*)(IAttackSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAttackSpeedIncPercent() {
		return ((R (*)(IAttackSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAttackSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IAttackSpeedIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceAttackSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IAttackSpeedIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveAttackSpeedIncPercent() {
		return ((R (*)(IAttackSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

