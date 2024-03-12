#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPetExperienceBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPetExperienceBonusEntity"));
	}


	template <typename T = uintptr_t> T get_petExperienceBonus() {
		return ((T (*)(IPetExperienceBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPetExperienceBonus() {
		return ((T (*)(IPetExperienceBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPetExperienceBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(IPetExperienceBonusEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePetExperienceBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(IPetExperienceBonusEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePetExperienceBonus() {
		return ((T (*)(IPetExperienceBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
