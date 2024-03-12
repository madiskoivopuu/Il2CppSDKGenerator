#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHealingSkillCooldownReduceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHealingSkillCooldownReduceEntity"));
	}


	template <typename T = uintptr_t> T get_healingSkillCooldownReduce() {
		return ((T (*)(IHealingSkillCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHealingSkillCooldownReduce() {
		return ((T (*)(IHealingSkillCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHealingSkillCooldownReduce(float newValue, uintptr_t newGroup) {
		return ((T (*)(IHealingSkillCooldownReduceEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHealingSkillCooldownReduce(float newValue, uintptr_t newGroup) {
		return ((T (*)(IHealingSkillCooldownReduceEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHealingSkillCooldownReduce() {
		return ((T (*)(IHealingSkillCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
