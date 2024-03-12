#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAttackRadiusIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAttackRadiusIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_attackRadiusIncPercent() {
		return ((T (*)(IAttackRadiusIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAttackRadiusIncPercent() {
		return ((T (*)(IAttackRadiusIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAttackRadiusIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IAttackRadiusIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackRadiusIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IAttackRadiusIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackRadiusIncPercent() {
		return ((T (*)(IAttackRadiusIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
