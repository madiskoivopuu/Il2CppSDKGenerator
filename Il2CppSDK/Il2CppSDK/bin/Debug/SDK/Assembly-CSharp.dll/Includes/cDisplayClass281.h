#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass281
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass28_1"));
	}

	template <typename T = Il2CppString*> T& phaseSkill() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T Showb__2(SkillDescription* skill) {
		return ((T (*)(cDisplayClass281*, SkillDescription*))(Il2CppBase() + 0xEEC3E8))(this, skill);
	}

};

