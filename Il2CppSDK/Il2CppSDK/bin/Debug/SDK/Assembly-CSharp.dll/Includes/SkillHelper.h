#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkillHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillHelper"));
	}


	template <typename R = bool> static R ShowInUI(ItemEntity* skill) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x1480E64))(0, skill);
	}
	template <typename R = bool> static R HasAltSkills(ItemEntity* skill) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0x1480EB8))(0, skill);
	}
	template <typename R = ItemEntity*> static R GetActualSkill(ItemEntity* skill, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1480F14))(0, skill, world, actor);
	}
	template <typename R = ItemEntity*> static R GetSkill(ItemEntity* item, ICommonContexts* world, int32_t skillIndex, bool ignoreNotArmed) {
		return ((R (*)(void *, ItemEntity*, ICommonContexts*, int32_t, bool))(Il2CppBase() + 0x14810A0))(0, item, world, skillIndex, ignoreNotArmed);
	}

};

