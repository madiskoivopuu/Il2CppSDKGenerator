#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICreepDamageBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICreepDamageBonusEntity"));
	}


	template <typename T = CreepDamageBonusComponent*> T get_creepDamageBonus() {
		return ((T (*)(ICreepDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCreepDamageBonus() {
		return ((T (*)(ICreepDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCreepDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ICreepDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceCreepDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ICreepDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveCreepDamageBonus() {
		return ((T (*)(ICreepDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

