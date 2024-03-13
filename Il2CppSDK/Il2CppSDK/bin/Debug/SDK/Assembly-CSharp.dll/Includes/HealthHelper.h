#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealthHelper"));
	}


	template <typename T = bool> static T ReplaceBonusMaxHealthIfNeed(GameEntity* gameEntity, float value) {
		return ((T (*)(void *, GameEntity*, float))(Il2CppBase() + 0x128B1BC))(0, gameEntity, value);
	}
	template <typename T = void> static T SetHealth(GameEntity* gameEntity, float value) {
		return ((T (*)(void *, GameEntity*, float))(Il2CppBase() + 0x128B244))(0, gameEntity, value);
	}
	template <typename T = bool> static T CanBeHealed(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x128B3A8))(0, gameEntity);
	}
	template <typename T = float> static T GetHealthCoef(IHealthCoefEntity* entity) {
		return ((T (*)(void *, IHealthCoefEntity*))(Il2CppBase() + 0x127F758))(0, entity);
	}
	template <typename T = float> static T GetMinHealth(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x128B400))(0, gameEntity);
	}
	template <typename T = bool> static T IsAliveHealth(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x128B44C))(0, gameEntity);
	}
	template <typename T = Nullable1float>*> static T GetHealth(GameEntity* gameEntity, Nullable1float>* coef) {
		return ((T (*)(void *, GameEntity*, Nullable1float>*))(Il2CppBase() + 0x128B4EC))(0, gameEntity, coef);
	}
	template <typename T = Nullable1float>*> static T GetMissingHealth(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x128B674))(0, gameEntity);
	}
	template <typename T = float> static T GetHealPrediction(GameEntity* gameEntity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x128B794))(0, gameEntity, world);
	}

};

