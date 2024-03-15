#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISkillDamageBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISkillDamageBonusEntity"));
	}


	template <typename R = SkillDamageBonusComponent*> R get_skillDamageBonus() {
		return ((R (*)(ISkillDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSkillDamageBonus() {
		return ((R (*)(ISkillDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSkillDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ISkillDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSkillDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ISkillDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSkillDamageBonus() {
		return ((R (*)(ISkillDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

