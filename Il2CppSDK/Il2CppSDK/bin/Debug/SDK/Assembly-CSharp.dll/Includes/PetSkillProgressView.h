#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetSkillProgressView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetSkillProgressView"));
	}

	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _skills() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Show(uintptr_t skill, uintptr_t tooltip) {
		return ((T (*)(PetSkillProgressView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16EDF30))(this, skill, tooltip);
	}

};

}
