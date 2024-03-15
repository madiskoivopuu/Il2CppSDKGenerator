#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BirthHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BirthHelper"));
	}

	template <typename R = float> R& _duration() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _enableTargets() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _enableTrails() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& _finishedBirth() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& _remainingDuration() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	template <typename R = void> R UpdateTargets(bool isActive) {
		return ((R (*)(BirthHelper*, bool))(Il2CppBase() + 0x16BBB4C))(this, isActive);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(BirthHelper*))(Il2CppBase() + 0x16BBD28))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(BirthHelper*))(Il2CppBase() + 0x16BBD3C))(this);
	}

};

