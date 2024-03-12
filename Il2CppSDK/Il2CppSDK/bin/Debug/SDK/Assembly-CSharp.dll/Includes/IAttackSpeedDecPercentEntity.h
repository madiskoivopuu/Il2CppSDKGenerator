#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAttackSpeedDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAttackSpeedDecPercentEntity"));
	}


	template <typename T = uintptr_t> T get_attackSpeedDecPercent() {
		return ((T (*)(IAttackSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAttackSpeedDecPercent() {
		return ((T (*)(IAttackSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAttackSpeedDecPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IAttackSpeedDecPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackSpeedDecPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IAttackSpeedDecPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackSpeedDecPercent() {
		return ((T (*)(IAttackSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
