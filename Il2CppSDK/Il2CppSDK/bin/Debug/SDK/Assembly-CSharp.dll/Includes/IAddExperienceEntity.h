#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAddExperienceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAddExperienceEntity"));
	}


	template <typename T = uintptr_t> T get_addExperience() {
		return ((T (*)(IAddExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAddExperience() {
		return ((T (*)(IAddExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAddExperience(float newValue) {
		return ((T (*)(IAddExperienceEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceAddExperience(float newValue) {
		return ((T (*)(IAddExperienceEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveAddExperience() {
		return ((T (*)(IAddExperienceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
