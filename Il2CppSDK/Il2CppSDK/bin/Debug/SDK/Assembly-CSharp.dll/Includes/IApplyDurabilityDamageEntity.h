#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyDurabilityDamageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyDurabilityDamageEntity"));
	}


	template <typename R = ApplyDurabilityDamageComponent*> R get_applyDurabilityDamage() {
		return ((R (*)(IApplyDurabilityDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyDurabilityDamage() {
		return ((R (*)(IApplyDurabilityDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((R (*)(IApplyDurabilityDamageEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x0))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename R = void> R ReplaceApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((R (*)(IApplyDurabilityDamageEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x0))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename R = void> R RemoveApplyDurabilityDamage() {
		return ((R (*)(IApplyDurabilityDamageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

