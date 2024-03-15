#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealthHelper"));
	}


	template <typename R = bool> static R ReplaceBonusMaxHealthIfNeed(GameEntity* gameEntity, float value) {
		return ((R (*)(void *, GameEntity*, float))(Il2CppBase() + 0x128B1BC))(0, gameEntity, value);
	}
	template <typename R = void> static R SetHealth(GameEntity* gameEntity, float value) {
		return ((R (*)(void *, GameEntity*, float))(Il2CppBase() + 0x128B244))(0, gameEntity, value);
	}
	template <typename R = bool> static R CanBeHealed(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x128B3A8))(0, gameEntity);
	}
	template <typename R = float> static R GetHealthCoef(IHealthCoefEntity* entity) {
		return ((R (*)(void *, IHealthCoefEntity*))(Il2CppBase() + 0x127F758))(0, entity);
	}
	template <typename R = float> static R GetMinHealth(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x128B400))(0, gameEntity);
	}
	template <typename R = bool> static R IsAliveHealth(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x128B44C))(0, gameEntity);
	}
	 static Nullable1float>* GetHealth(GameEntity* gameEntity, Nullable1float>* coef) {
		return ((Nullable1float>* (*)(void *, GameEntity*, Nullable1float>*))(Il2CppBase() + 0x128B4EC))(0, gameEntity, coef);
	}
	 static Nullable1float>* GetMissingHealth(GameEntity* gameEntity) {
		return ((Nullable1float>* (*)(void *, GameEntity*))(Il2CppBase() + 0x128B674))(0, gameEntity);
	}
	template <typename R = float> static R GetHealPrediction(GameEntity* gameEntity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x128B794))(0, gameEntity, world);
	}

};

