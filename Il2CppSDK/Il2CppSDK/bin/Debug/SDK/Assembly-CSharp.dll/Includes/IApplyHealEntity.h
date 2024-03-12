#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyHealEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyHealEntity"));
	}


	template <typename T = uintptr_t> T get_applyHeal() {
		return ((T (*)(IApplyHealEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyHeal() {
		return ((T (*)(IApplyHealEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyHeal(float newDelay, uintptr_t newParams) {
		return ((T (*)(IApplyHealEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newDelay, newParams);
	}
	template <typename T = void> T ReplaceApplyHeal(float newDelay, uintptr_t newParams) {
		return ((T (*)(IApplyHealEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newDelay, newParams);
	}
	template <typename T = void> T RemoveApplyHeal() {
		return ((T (*)(IApplyHealEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
