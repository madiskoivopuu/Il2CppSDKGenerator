#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAddPetExperienceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAddPetExperienceEntity"));
	}


	template <typename R = AddPetExperienceComponent*> R get_addPetExperience() {
		return ((R (*)(IAddPetExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAddPetExperience() {
		return ((R (*)(IAddPetExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAddPetExperience(float newValue) {
		return ((R (*)(IAddPetExperienceEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceAddPetExperience(float newValue) {
		return ((R (*)(IAddPetExperienceEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveAddPetExperience() {
		return ((R (*)(IAddPetExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

