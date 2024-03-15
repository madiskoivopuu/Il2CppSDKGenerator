#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TenacityHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TenacityHelper"));
	}


	template <typename R = void> static R SetTenacity(GameEntity* gameEntity, float value) {
		return ((R (*)(void *, GameEntity*, float))(Il2CppBase() + 0x16B6014))(0, gameEntity, value);
	}
	template <typename R = float> static R GetMaxTenacity(ModifierEntity* modifierEntity) {
		return ((R (*)(void *, ModifierEntity*))(Il2CppBase() + 0x16B6128))(0, modifierEntity);
	}
	template <typename R = float> static R GetMaxTenacity_1(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x16B61E8))(0, gameEntity);
	}
	 static Nullable1float>* GetTenacity(GameEntity* gameEntity) {
		return ((Nullable1float>* (*)(void *, GameEntity*))(Il2CppBase() + 0x16B6264))(0, gameEntity);
	}
	template <typename R = float> static R GetTenacityCoef(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x16B634C))(0, entity);
	}
	template <typename R = bool> static R CanRegenerateTenacity(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x16B6398))(0, gameEntity);
	}
	 static uintptr_t Clamp(uintptr_t val, uintptr_t min, uintptr_t max) {
		return ((uintptr_t (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, val, min, max);
	}

};

