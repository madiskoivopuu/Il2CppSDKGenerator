#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISkillDamageBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISkillDamageBonusEntity"));
	}


	template <typename T = SkillDamageBonusComponent*> T get_skillDamageBonus() {
		return ((T (*)(ISkillDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSkillDamageBonus() {
		return ((T (*)(ISkillDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSkillDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ISkillDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSkillDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ISkillDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSkillDamageBonus() {
		return ((T (*)(ISkillDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

