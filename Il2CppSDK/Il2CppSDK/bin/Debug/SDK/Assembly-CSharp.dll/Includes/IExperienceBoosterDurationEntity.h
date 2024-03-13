#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExperienceBoosterDurationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExperienceBoosterDurationEntity"));
	}


	template <typename T = ExperienceBoosterDurationComponent*> T get_experienceBoosterDuration() {
		return ((T (*)(IExperienceBoosterDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasExperienceBoosterDuration() {
		return ((T (*)(IExperienceBoosterDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddExperienceBoosterDuration(float newValue) {
		return ((T (*)(IExperienceBoosterDurationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceExperienceBoosterDuration(float newValue) {
		return ((T (*)(IExperienceBoosterDurationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveExperienceBoosterDuration() {
		return ((T (*)(IExperienceBoosterDurationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

