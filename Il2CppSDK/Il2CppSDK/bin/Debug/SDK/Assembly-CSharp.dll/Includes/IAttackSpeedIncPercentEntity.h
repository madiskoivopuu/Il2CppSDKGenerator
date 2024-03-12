#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAttackSpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAttackSpeedIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_attackSpeedIncPercent() {
		return ((T (*)(IAttackSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAttackSpeedIncPercent() {
		return ((T (*)(IAttackSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAttackSpeedIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IAttackSpeedIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackSpeedIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IAttackSpeedIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackSpeedIncPercent() {
		return ((T (*)(IAttackSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
