#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealthHelper"));
	}


	template <typename T = bool> static T ReplaceBonusMaxHealthIfNeed(uintptr_t gameEntity, float value) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x128B1BC))(0, gameEntity, value);
	}
	template <typename T = void> static T SetHealth(uintptr_t gameEntity, float value) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x128B244))(0, gameEntity, value);
	}
	template <typename T = bool> static T CanBeHealed(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x128B3A8))(0, gameEntity);
	}
	template <typename T = float> static T GetHealthCoef(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x127F758))(0, entity);
	}
	template <typename T = float> static T GetMinHealth(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x128B400))(0, gameEntity);
	}
	template <typename T = bool> static T IsAliveHealth(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x128B44C))(0, gameEntity);
	}
	template <typename T = void*> static T GetHealth(uintptr_t gameEntity, void* coef) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x128B4EC))(0, gameEntity, coef);
	}
	template <typename T = void*> static T GetMissingHealth(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x128B674))(0, gameEntity);
	}
	template <typename T = float> static T GetHealPrediction(uintptr_t gameEntity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x128B794))(0, gameEntity, world);
	}

};

}
