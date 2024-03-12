#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MetabolismHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MetabolismHelper"));
	}


	template <typename T = float> static T GetHunger(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12D0AF0))(0, entity);
	}
	template <typename T = float> static T GetHunger_1(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12D0C10))(0, entity);
	}
	template <typename T = float> static T GetThirst(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12D0C8C))(0, entity);
	}
	template <typename T = float> static T GetThirst_1(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12D0DAC))(0, entity);
	}
	template <typename T = void> static T SetMetabolism(uintptr_t target, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x12D0E28))(0, target, source);
	}
	template <typename T = void> static T SetMetabolism_1(uintptr_t target, uintptr_t world, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x12D10B8))(0, target, world, source);
	}
	template <typename T = void> static T SetMetabolism_2(uintptr_t target, uintptr_t world, float hunger, float thirst) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x12D1138))(0, target, world, hunger, thirst);
	}
	template <typename T = bool> static T SetHunger(uintptr_t entity, uintptr_t world, float value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x12D11D4))(0, entity, world, value);
	}
	template <typename T = bool> static T SetThirst(uintptr_t entity, uintptr_t world, float value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x12D12B4))(0, entity, world, value);
	}
	template <typename T = float> static T GetRestoreThirst(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12D1394))(0, entity);
	}
	template <typename T = float> static T GetRestoreHunger(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12D14B4))(0, entity);
	}
	template <typename T = bool> static T TryRestoreMetabolism(uintptr_t target, uintptr_t world, uintptr_t restoreMetabolismEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x12D15D4))(0, target, world, restoreMetabolismEntity);
	}
	template <typename T = bool> static T TryResurrectMetabolism(uintptr_t target, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x12D194C))(0, target, world);
	}
	template <typename T = float> static T GetHungerSpeed(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12D1A00))(0, gameEntity);
	}
	template <typename T = float> static T GetThirstSpeed(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12D1B5C))(0, gameEntity);
	}

};

}
