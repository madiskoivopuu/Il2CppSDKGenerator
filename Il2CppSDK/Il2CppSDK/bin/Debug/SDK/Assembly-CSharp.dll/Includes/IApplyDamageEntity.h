#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyDamageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyDamageEntity"));
	}


	template <typename T = ApplyDamageComponent*> T get_applyDamage() {
		return ((T (*)(IApplyDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyDamage() {
		return ((T (*)(IApplyDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyDamage(float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType* newDepend, float newMaxValue) {
		return ((T (*)(IApplyDamageEntity*, float, Il2CppString*, float, bool, DamageDependType*, float))(Il2CppBase() + 0x0))(this, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename T = void> T ReplaceApplyDamage(float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType* newDepend, float newMaxValue) {
		return ((T (*)(IApplyDamageEntity*, float, Il2CppString*, float, bool, DamageDependType*, float))(Il2CppBase() + 0x0))(this, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename T = void> T RemoveApplyDamage() {
		return ((T (*)(IApplyDamageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

