#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyDurabilityDamageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyDurabilityDamageEntity"));
	}


	template <typename T = ApplyDurabilityDamageComponent*> T get_applyDurabilityDamage() {
		return ((T (*)(IApplyDurabilityDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyDurabilityDamage() {
		return ((T (*)(IApplyDurabilityDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((T (*)(IApplyDurabilityDamageEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x0))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename T = void> T ReplaceApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((T (*)(IApplyDurabilityDamageEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x0))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename T = void> T RemoveApplyDurabilityDamage() {
		return ((T (*)(IApplyDurabilityDamageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

