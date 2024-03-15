#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICreepDamageBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICreepDamageBonusEntity"));
	}


	template <typename R = CreepDamageBonusComponent*> R get_creepDamageBonus() {
		return ((R (*)(ICreepDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCreepDamageBonus() {
		return ((R (*)(ICreepDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCreepDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ICreepDamageBonusEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceCreepDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ICreepDamageBonusEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveCreepDamageBonus() {
		return ((R (*)(ICreepDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

