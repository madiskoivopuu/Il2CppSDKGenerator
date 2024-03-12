#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHungerSpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHungerSpeedIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_hungerSpeedIncPercent() {
		return ((T (*)(IHungerSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHungerSpeedIncPercent() {
		return ((T (*)(IHungerSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHungerSpeedIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IHungerSpeedIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHungerSpeedIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IHungerSpeedIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHungerSpeedIncPercent() {
		return ((T (*)(IHungerSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
