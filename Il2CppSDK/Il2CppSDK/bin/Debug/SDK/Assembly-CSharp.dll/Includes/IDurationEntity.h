#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDurationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDurationEntity"));
	}


	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(IDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(IDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(IDurationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(IDurationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(IDurationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

