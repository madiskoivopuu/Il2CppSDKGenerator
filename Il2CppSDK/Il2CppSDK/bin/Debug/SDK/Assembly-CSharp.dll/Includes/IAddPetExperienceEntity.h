#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAddPetExperienceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAddPetExperienceEntity"));
	}


	template <typename T = AddPetExperienceComponent*> T get_addPetExperience() {
		return ((T (*)(IAddPetExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAddPetExperience() {
		return ((T (*)(IAddPetExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAddPetExperience(float newValue) {
		return ((T (*)(IAddPetExperienceEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceAddPetExperience(float newValue) {
		return ((T (*)(IAddPetExperienceEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveAddPetExperience() {
		return ((T (*)(IAddPetExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

