#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkillHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillHelper"));
	}


	template <typename T = bool> static T ShowInUI(uintptr_t skill) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1480E64))(0, skill);
	}
	template <typename T = bool> static T HasAltSkills(uintptr_t skill) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1480EB8))(0, skill);
	}
	template <typename T = uintptr_t> static T GetActualSkill(uintptr_t skill, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1480F14))(0, skill, world, actor);
	}
	template <typename T = uintptr_t> static T GetSkill(uintptr_t item, uintptr_t world, int32_t skillIndex, bool ignoreNotArmed) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x14810A0))(0, item, world, skillIndex, ignoreNotArmed);
	}

};

}
