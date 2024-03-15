#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkillDescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillDescriptionComponent"));
	}

	template <typename R = int32_t> R& Tier() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Condition() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& ChargedCondition() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& DontShowInUI() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<AltSkill*>*> R& AltSkills() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(SkillDescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0x1480D94))(this, target);
	}

};

