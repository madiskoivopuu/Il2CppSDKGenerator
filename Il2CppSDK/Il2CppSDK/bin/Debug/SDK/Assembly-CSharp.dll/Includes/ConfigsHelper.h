#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigsHelper"));
	}


	template <typename R = Il2CppString*> static R GetFormatedString(ConfigEntity* config, float value) {
		return ((R (*)(void *, ConfigEntity*, float))(Il2CppBase() + 0x15E42F0))(0, config, value);
	}
	template <typename R = ConfigEntity*> static R ToConfigEntity(Il2CppString* configName, ICommonContexts* world) {
		return ((R (*)(void *, Il2CppString*, ICommonContexts*))(Il2CppBase() + 0x15E4370))(0, configName, world);
	}
	template <typename R = Il2CppString*> static R ToString(float value, ConfigsContext* config, PlayerStatType* statType) {
		return ((R (*)(void *, float, ConfigsContext*, PlayerStatType*))(Il2CppBase() + 0x15E443C))(0, value, config, statType);
	}
	template <typename R = bool> static R CanReflect(ConfigEntity* config) {
		return ((R (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4488))(0, config);
	}
	template <typename R = bool> static R CanLifeSteal(ConfigEntity* config) {
		return ((R (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E44DC))(0, config);
	}
	template <typename R = bool> static R CanBlocked(ConfigEntity* config) {
		return ((R (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4530))(0, config);
	}
	template <typename R = bool> static R CanInterrupt(ConfigEntity* config) {
		return ((R (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4584))(0, config);
	}
	template <typename R = float> static R TargetArmorCoef(ConfigEntity* config) {
		return ((R (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E45D8))(0, config);
	}
	template <typename R = bool> static R CanRaiseTargetHitTrigger(ConfigEntity* config) {
		return ((R (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4620))(0, config);
	}
	template <typename R = bool> static R CanRaiseSelfHitTrigger(ConfigEntity* config) {
		return ((R (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4674))(0, config);
	}
	template <typename R = float> static R ActorDamageModsCoef(ConfigEntity* config) {
		return ((R (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E46C8))(0, config);
	}
	template <typename R = bool> static R UseActorBonusVsTarget(ConfigEntity* config) {
		return ((R (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4710))(0, config);
	}
	template <typename R = float> static R TargetMitigationCoef(ConfigEntity* config) {
		return ((R (*)(void *, ConfigEntity*))(Il2CppBase() + 0x15E4764))(0, config);
	}

};

