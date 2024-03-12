#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDurationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDurationEntity"));
	}


	template <typename T = uintptr_t> T get_duration() {
		return ((T (*)(IDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(IDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(IDurationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(IDurationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(IDurationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
