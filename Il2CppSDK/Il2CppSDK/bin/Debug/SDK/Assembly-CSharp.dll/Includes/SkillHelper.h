#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkillHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillHelper"));
	}


	template <typename T = bool> static T ShowInUI(ItemEntity* skill) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x1480E64))(0, skill);
	}
	template <typename T = bool> static T HasAltSkills(ItemEntity* skill) {
		return ((T (*)(void *, ItemEntity*))(Il2CppBase() + 0x1480EB8))(0, skill);
	}
	template <typename T = ItemEntity*> static T GetActualSkill(ItemEntity* skill, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1480F14))(0, skill, world, actor);
	}
	template <typename T = ItemEntity*> static T GetSkill(ItemEntity* item, ICommonContexts* world, int32_t skillIndex, bool ignoreNotArmed) {
		return ((T (*)(void *, ItemEntity*, ICommonContexts*, int32_t, bool))(Il2CppBase() + 0x14810A0))(0, item, world, skillIndex, ignoreNotArmed);
	}

};

