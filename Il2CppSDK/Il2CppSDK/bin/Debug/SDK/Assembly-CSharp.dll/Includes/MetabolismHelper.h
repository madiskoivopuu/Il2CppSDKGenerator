#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MetabolismHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MetabolismHelper"));
	}


	template <typename T = float> static T GetHunger(IMetabolismEntity* entity) {
		return ((T (*)(void *, IMetabolismEntity*))(Il2CppBase() + 0x12D0AF0))(0, entity);
	}
	template <typename T = float> static T GetHunger_1(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x12D0C10))(0, entity);
	}
	template <typename T = float> static T GetThirst(IMetabolismEntity* entity) {
		return ((T (*)(void *, IMetabolismEntity*))(Il2CppBase() + 0x12D0C8C))(0, entity);
	}
	template <typename T = float> static T GetThirst_1(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x12D0DAC))(0, entity);
	}
	template <typename T = void> static T SetMetabolism(IMetabolismEntity* target, IMetabolismEntity* source) {
		return ((T (*)(void *, IMetabolismEntity*, IMetabolismEntity*))(Il2CppBase() + 0x12D0E28))(0, target, source);
	}
	template <typename T = void> static T SetMetabolism_1(GameEntity* target, ICommonContexts* world, IMetabolismEntity* source) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, IMetabolismEntity*))(Il2CppBase() + 0x12D10B8))(0, target, world, source);
	}
	template <typename T = void> static T SetMetabolism_2(GameEntity* target, ICommonContexts* world, float hunger, float thirst) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, float, float))(Il2CppBase() + 0x12D1138))(0, target, world, hunger, thirst);
	}
	template <typename T = bool> static T SetHunger(GameEntity* entity, ICommonContexts* world, float value) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, float))(Il2CppBase() + 0x12D11D4))(0, entity, world, value);
	}
	template <typename T = bool> static T SetThirst(GameEntity* entity, ICommonContexts* world, float value) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, float))(Il2CppBase() + 0x12D12B4))(0, entity, world, value);
	}
	template <typename T = float> static T GetRestoreThirst(IRestoreMetabolismEntity* entity) {
		return ((T (*)(void *, IRestoreMetabolismEntity*))(Il2CppBase() + 0x12D1394))(0, entity);
	}
	template <typename T = float> static T GetRestoreHunger(IRestoreMetabolismEntity* entity) {
		return ((T (*)(void *, IRestoreMetabolismEntity*))(Il2CppBase() + 0x12D14B4))(0, entity);
	}
	template <typename T = bool> static T TryRestoreMetabolism(GameEntity* target, ICommonContexts* world, IRestoreMetabolismEntity* restoreMetabolismEntity) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, IRestoreMetabolismEntity*))(Il2CppBase() + 0x12D15D4))(0, target, world, restoreMetabolismEntity);
	}
	template <typename T = bool> static T TryResurrectMetabolism(GameEntity* target, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x12D194C))(0, target, world);
	}
	template <typename T = float> static T GetHungerSpeed(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x12D1A00))(0, gameEntity);
	}
	template <typename T = float> static T GetThirstSpeed(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x12D1B5C))(0, gameEntity);
	}

};

