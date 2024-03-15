#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapHelper"));
	}


	template <typename R = float> static R CalcMoveDuration(IMapContexts* contexts, GameDataEntity* start, GameDataEntity* end, float speed) {
		return ((R (*)(void *, IMapContexts*, GameDataEntity*, GameDataEntity*, float))(Il2CppBase() + 0x1270378))(0, contexts, start, end, speed);
	}
	template <typename R = float> static R GetDistToDest(GameEntity* player, int64_t now) {
		return ((R (*)(void *, GameEntity*, int64_t))(Il2CppBase() + 0x1270764))(0, player, now);
	}
	template <typename R = float> static R GetEnergyToSpeedUpWhenMove(GameEntity* player, int64_t now) {
		return ((R (*)(void *, GameEntity*, int64_t))(Il2CppBase() + 0x1270810))(0, player, now);
	}
	template <typename R = float> static R GetEnergyToSpeedUp(IPositionEntity* start, IPositionEntity* end) {
		return ((R (*)(void *, IPositionEntity*, IPositionEntity*))(Il2CppBase() + 0x1270890))(0, start, end);
	}
	template <typename R = float> static R GetEnergy(GameEntity* player, int64_t now) {
		return ((R (*)(void *, GameEntity*, int64_t))(Il2CppBase() + 0x1270960))(0, player, now);
	}
	template <typename R = bool> static R CanConsumeEnergy(GameEntity* player, float value, int64_t now) {
		return ((R (*)(void *, GameEntity*, float, int64_t))(Il2CppBase() + 0x12709CC))(0, player, value, now);
	}
	template <typename R = bool> static R ConsumeEnergy(GameEntity* player, float value, int64_t now) {
		return ((R (*)(void *, GameEntity*, float, int64_t))(Il2CppBase() + 0x12709D4))(0, player, value, now);
	}
	template <typename R = void> static R AddEnergy(GameEntity* player, float value, int64_t now) {
		return ((R (*)(void *, GameEntity*, float, int64_t))(Il2CppBase() + 0x1270A68))(0, player, value, now);
	}
	template <typename R = void> static R RefillEnergy(GameEntity* player, int64_t now) {
		return ((R (*)(void *, GameEntity*, int64_t))(Il2CppBase() + 0x1270B40))(0, player, now);
	}
	template <typename R = Il2CppString*> static R NeedTransport(GameEntity* point, IEnumerable1Il2CppString*>* availableTransports) {
		return ((R (*)(void *, GameEntity*, IEnumerable1Il2CppString*>*))(Il2CppBase() + 0x1270B98))(0, point, availableTransports);
	}
	template <typename R = GameEntity*> static R GetRegionEnterPoint(IMapContexts* contexts, GameDataEntity* start, GameDataEntity* end) {
		return ((R (*)(void *, IMapContexts*, GameDataEntity*, GameDataEntity*))(Il2CppBase() + 0x12704FC))(0, contexts, start, end);
	}

};

