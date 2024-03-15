#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetSkillProgressView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetSkillProgressView"));
	}

	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<PetSkillItemView*>*> R& _skills() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Show(ItemEntity* skill, TooltipView* tooltip) {
		return ((R (*)(PetSkillProgressView*, ItemEntity*, TooltipView*))(Il2CppBase() + 0x16EDF30))(this, skill, tooltip);
	}

};

