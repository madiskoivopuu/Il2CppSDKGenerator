#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAttackSpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAttackSpeedIncPercentEntity"));
	}


	template <typename T = AttackSpeedIncPercentComponent*> T get_attackSpeedIncPercent() {
		return ((T (*)(IAttackSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAttackSpeedIncPercent() {
		return ((T (*)(IAttackSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAttackSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IAttackSpeedIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IAttackSpeedIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackSpeedIncPercent() {
		return ((T (*)(IAttackSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

