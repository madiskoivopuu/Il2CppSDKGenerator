#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyHealEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyHealEntity"));
	}


	template <typename R = ApplyHealComponent*> R get_applyHeal() {
		return ((R (*)(IApplyHealEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyHeal() {
		return ((R (*)(IApplyHealEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyHeal(float newDelay, HealParams* newParams) {
		return ((R (*)(IApplyHealEntity*, float, HealParams*))(Il2CppBase() + 0x0))(this, newDelay, newParams);
	}
	template <typename R = void> R ReplaceApplyHeal(float newDelay, HealParams* newParams) {
		return ((R (*)(IApplyHealEntity*, float, HealParams*))(Il2CppBase() + 0x0))(this, newDelay, newParams);
	}
	template <typename R = void> R RemoveApplyHeal() {
		return ((R (*)(IApplyHealEntity*))(Il2CppBase() + 0x0))(this);
	}

};

