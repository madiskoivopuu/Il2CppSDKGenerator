#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAddExperienceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAddExperienceEntity"));
	}


	template <typename R = AddExperienceComponent*> R get_addExperience() {
		return ((R (*)(IAddExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAddExperience() {
		return ((R (*)(IAddExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAddExperience(float newValue) {
		return ((R (*)(IAddExperienceEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceAddExperience(float newValue) {
		return ((R (*)(IAddExperienceEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveAddExperience() {
		return ((R (*)(IAddExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

