#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigsHelper"));
	}


	template <typename T = Il2CppString*> static T GetFormatedString(ConfigEntity* config, float value) {
		return ((T (*)(void *, ConfigEntity*, float))(Il2CppBase() + 0x15E42F0))(0, config, value);
	}
	template <typename T = ConfigEntity*> static T ToConfigEntity(Il2CppString* configName, ICommonContexts* world) {
		return ((T (*)(void *, Il2CppString*, ICommonContexts*))(Il2CppBase() + 0x15E4370))(0, configName, world);
	}
	template <typename T = Il2CppString*> static T ToString(float value, ConfigsContext* config, PlayerStatType* statType) {
		return ((T (*)(void *, float, ConfigsContext*, PlayerStatType*))(Il2CppBase() + 0x15E443C))(0, value, config, statType);
	}
	template <typename T = bool> static T CanReflect(ConfigEntity* config) {
		return ((T (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4488))(0, config);
	}
	template <typename T = bool> static T CanLifeSteal(ConfigEntity* config) {
		return ((T (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E44DC))(0, config);
	}
	template <typename T = bool> static T CanBlocked(ConfigEntity* config) {
		return ((T (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4530))(0, config);
	}
	template <typename T = bool> static T CanInterrupt(ConfigEntity* config) {
		return ((T (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4584))(0, config);
	}
	template <typename T = float> static T TargetArmorCoef(ConfigEntity* config) {
		return ((T (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E45D8))(0, config);
	}
	template <typename T = bool> static T CanRaiseTargetHitTrigger(ConfigEntity* config) {
		return ((T (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4620))(0, config);
	}
	template <typename T = bool> static T CanRaiseSelfHitTrigger(ConfigEntity* config) {
		return ((T (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4674))(0, config);
	}
	template <typename T = float> static T ActorDamageModsCoef(ConfigEntity* config) {
		return ((T (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E46C8))(0, config);
	}
	template <typename T = bool> static T UseActorBonusVsTarget(ConfigEntity* config) {
		return ((T (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4710))(0, config);
	}
	template <typename T = float> static T TargetMitigationCoef(ConfigEntity* config) {
		return ((T (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4764))(0, config);
	}

};

