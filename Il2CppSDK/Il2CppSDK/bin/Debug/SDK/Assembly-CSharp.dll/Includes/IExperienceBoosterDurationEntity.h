#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExperienceBoosterDurationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExperienceBoosterDurationEntity"));
	}


	template <typename R = ExperienceBoosterDurationComponent*> R get_experienceBoosterDuration() {
		return ((R (*)(IExperienceBoosterDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasExperienceBoosterDuration() {
		return ((R (*)(IExperienceBoosterDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddExperienceBoosterDuration(float newValue) {
		return ((R (*)(IExperienceBoosterDurationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceExperienceBoosterDuration(float newValue) {
		return ((R (*)(IExperienceBoosterDurationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveExperienceBoosterDuration() {
		return ((R (*)(IExperienceBoosterDurationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

