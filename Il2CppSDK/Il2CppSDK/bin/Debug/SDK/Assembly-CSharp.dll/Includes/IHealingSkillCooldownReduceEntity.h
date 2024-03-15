#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHealingSkillCooldownReduceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHealingSkillCooldownReduceEntity"));
	}


	template <typename R = HealingSkillCooldownReduceComponent*> R get_healingSkillCooldownReduce() {
		return ((R (*)(IHealingSkillCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHealingSkillCooldownReduce() {
		return ((R (*)(IHealingSkillCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHealingSkillCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IHealingSkillCooldownReduceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHealingSkillCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IHealingSkillCooldownReduceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHealingSkillCooldownReduce() {
		return ((R (*)(IHealingSkillCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

