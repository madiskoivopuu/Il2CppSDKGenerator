#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TenacityHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TenacityHelper"));
	}


	template <typename T = void> static T SetTenacity(uintptr_t gameEntity, float value) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x16B6014))(0, gameEntity, value);
	}
	template <typename T = float> static T GetMaxTenacity(uintptr_t modifierEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16B6128))(0, modifierEntity);
	}
	template <typename T = float> static T GetMaxTenacity_1(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16B61E8))(0, gameEntity);
	}
	template <typename T = void*> static T GetTenacity(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16B6264))(0, gameEntity);
	}
	template <typename T = float> static T GetTenacityCoef(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16B634C))(0, entity);
	}
	template <typename T = bool> static T CanRegenerateTenacity(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16B6398))(0, gameEntity);
	}
	template <typename T = uintptr_t> static T Clamp(uintptr_t val, uintptr_t min, uintptr_t max) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, val, min, max);
	}

};

}
