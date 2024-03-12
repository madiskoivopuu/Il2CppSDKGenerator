#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkillDescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillDescriptionComponent"));
	}

	template <typename T = int32_t> T& Tier() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Condition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ChargedCondition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& DontShowInUI() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AltSkills() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(SkillDescriptionComponent*, uintptr_t))(Il2CppBase() + 0x1480D94))(this, target);
	}

};

}
