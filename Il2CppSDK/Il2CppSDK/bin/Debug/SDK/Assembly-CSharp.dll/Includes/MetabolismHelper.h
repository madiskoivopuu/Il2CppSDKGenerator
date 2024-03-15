#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MetabolismHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MetabolismHelper"));
	}


	template <typename R = float> static R GetHunger(IMetabolismEntity* entity) {
		return ((R (*)(void *, IMetabolismEntity*))(Il2CppBase() + 0x12D0AF0))(0, entity);
	}
	template <typename R = float> static R GetHunger_1(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x12D0C10))(0, entity);
	}
	template <typename R = float> static R GetThirst(IMetabolismEntity* entity) {
		return ((R (*)(void *, IMetabolismEntity*))(Il2CppBase() + 0x12D0C8C))(0, entity);
	}
	template <typename R = float> static R GetThirst_1(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x12D0DAC))(0, entity);
	}
	template <typename R = void> static R SetMetabolism(IMetabolismEntity* target, IMetabolismEntity* source) {
		return ((R (*)(void *, IMetabolismEntity*, IMetabolismEntity*))(Il2CppBase() + 0x12D0E28))(0, target, source);
	}
	template <typename R = void> static R SetMetabolism_1(GameEntity* target, ICommonContexts* world, IMetabolismEntity* source) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, IMetabolismEntity*))(Il2CppBase() + 0x12D10B8))(0, target, world, source);
	}
	template <typename R = void> static R SetMetabolism_2(GameEntity* target, ICommonContexts* world, float hunger, float thirst) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, float, float))(Il2CppBase() + 0x12D1138))(0, target, world, hunger, thirst);
	}
	template <typename R = bool> static R SetHunger(GameEntity* entity, ICommonContexts* world, float value) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, float))(Il2CppBase() + 0x12D11D4))(0, entity, world, value);
	}
	template <typename R = bool> static R SetThirst(GameEntity* entity, ICommonContexts* world, float value) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, float))(Il2CppBase() + 0x12D12B4))(0, entity, world, value);
	}
	template <typename R = float> static R GetRestoreThirst(IRestoreMetabolismEntity* entity) {
		return ((R (*)(void *, IRestoreMetabolismEntity*))(Il2CppBase() + 0x12D1394))(0, entity);
	}
	template <typename R = float> static R GetRestoreHunger(IRestoreMetabolismEntity* entity) {
		return ((R (*)(void *, IRestoreMetabolismEntity*))(Il2CppBase() + 0x12D14B4))(0, entity);
	}
	template <typename R = bool> static R TryRestoreMetabolism(GameEntity* target, ICommonContexts* world, IRestoreMetabolismEntity* restoreMetabolismEntity) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, IRestoreMetabolismEntity*))(Il2CppBase() + 0x12D15D4))(0, target, world, restoreMetabolismEntity);
	}
	template <typename R = bool> static R TryResurrectMetabolism(GameEntity* target, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x12D194C))(0, target, world);
	}
	template <typename R = float> static R GetHungerSpeed(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x12D1A00))(0, gameEntity);
	}
	template <typename R = float> static R GetThirstSpeed(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x12D1B5C))(0, gameEntity);
	}

};

