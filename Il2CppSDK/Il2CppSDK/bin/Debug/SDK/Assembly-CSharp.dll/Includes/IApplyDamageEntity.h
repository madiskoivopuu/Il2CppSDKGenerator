#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyDamageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyDamageEntity"));
	}


	template <typename R = ApplyDamageComponent*> R get_applyDamage() {
		return ((R (*)(IApplyDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyDamage() {
		return ((R (*)(IApplyDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyDamage(float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType newDepend, float newMaxValue) {
		return ((R (*)(IApplyDamageEntity*, float, Il2CppString*, float, bool, DamageDependType, float))(Il2CppBase() + 0x0))(this, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename R = void> R ReplaceApplyDamage(float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType newDepend, float newMaxValue) {
		return ((R (*)(IApplyDamageEntity*, float, Il2CppString*, float, bool, DamageDependType, float))(Il2CppBase() + 0x0))(this, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename R = void> R RemoveApplyDamage() {
		return ((R (*)(IApplyDamageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

