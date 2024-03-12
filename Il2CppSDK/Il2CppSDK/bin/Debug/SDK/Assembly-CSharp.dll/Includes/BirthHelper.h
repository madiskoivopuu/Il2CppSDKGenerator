#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BirthHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BirthHelper"));
	}

	template <typename T = float> T& _duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _enableTargets() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _enableTrails() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _finishedBirth() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _remainingDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T UpdateTargets(bool isActive) {
		return ((T (*)(BirthHelper*, bool))(Il2CppBase() + 0x16BBB4C))(this, isActive);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BirthHelper*))(Il2CppBase() + 0x16BBD28))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BirthHelper*))(Il2CppBase() + 0x16BBD3C))(this);
	}

};

}
