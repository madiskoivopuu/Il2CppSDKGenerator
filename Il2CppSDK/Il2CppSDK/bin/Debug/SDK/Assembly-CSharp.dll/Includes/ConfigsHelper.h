#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigsHelper"));
	}


	template <typename T = Il2CppString*> static T GetFormatedString(uintptr_t config, float value) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x15E42F0))(0, config, value);
	}
	template <typename T = uintptr_t> static T ToConfigEntity(Il2CppString* configName, uintptr_t world) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x15E4370))(0, configName, world);
	}
	template <typename T = Il2CppString*> static T ToString(float value, uintptr_t config, uintptr_t statType) {
		return ((T (*)(void *, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x15E443C))(0, value, config, statType);
	}
	template <typename T = bool> static T CanReflect(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15E4488))(0, config);
	}
	template <typename T = bool> static T CanLifeSteal(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15E44DC))(0, config);
	}
	template <typename T = bool> static T CanBlocked(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15E4530))(0, config);
	}
	template <typename T = bool> static T CanInterrupt(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15E4584))(0, config);
	}
	template <typename T = float> static T TargetArmorCoef(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15E45D8))(0, config);
	}
	template <typename T = bool> static T CanRaiseTargetHitTrigger(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15E4620))(0, config);
	}
	template <typename T = bool> static T CanRaiseSelfHitTrigger(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15E4674))(0, config);
	}
	template <typename T = float> static T ActorDamageModsCoef(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15E46C8))(0, config);
	}
	template <typename T = bool> static T UseActorBonusVsTarget(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15E4710))(0, config);
	}
	template <typename T = float> static T TargetMitigationCoef(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15E4764))(0, config);
	}

};

}
