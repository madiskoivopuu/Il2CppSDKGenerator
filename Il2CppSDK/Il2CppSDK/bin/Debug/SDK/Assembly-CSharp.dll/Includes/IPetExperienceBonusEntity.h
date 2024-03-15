#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPetExperienceBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPetExperienceBonusEntity"));
	}


	template <typename R = PetExperienceBonusComponent*> R get_petExperienceBonus() {
		return ((R (*)(IPetExperienceBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPetExperienceBonus() {
		return ((R (*)(IPetExperienceBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPetExperienceBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IPetExperienceBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePetExperienceBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IPetExperienceBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePetExperienceBonus() {
		return ((R (*)(IPetExperienceBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

