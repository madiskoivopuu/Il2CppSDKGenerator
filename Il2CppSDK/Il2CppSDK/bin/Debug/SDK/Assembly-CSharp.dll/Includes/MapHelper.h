#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapHelper"));
	}


	template <typename T = float> static T CalcMoveDuration(IMapContexts* contexts, GameDataEntity* start, GameDataEntity* end, float speed) {
		return ((T (*)(void *, IMapContexts*, GameDataEntity*, GameDataEntity*, float))(Il2CppBase() + 0x1270378))(0, contexts, start, end, speed);
	}
	template <typename T = float> static T GetDistToDest(GameEntity* player, int64_t now) {
		return ((T (*)(void *, GameEntity*, int64_t))(Il2CppBase() + 0x1270764))(0, player, now);
	}
	template <typename T = float> static T GetEnergyToSpeedUpWhenMove(GameEntity* player, int64_t now) {
		return ((T (*)(void *, GameEntity*, int64_t))(Il2CppBase() + 0x1270810))(0, player, now);
	}
	template <typename T = float> static T GetEnergyToSpeedUp(IPositionEntity* start, IPositionEntity* end) {
		return ((T (*)(void *, IPositionEntity*, IPositionEntity*))(Il2CppBase() + 0x1270890))(0, start, end);
	}
	template <typename T = float> static T GetEnergy(GameEntity* player, int64_t now) {
		return ((T (*)(void *, GameEntity*, int64_t))(Il2CppBase() + 0x1270960))(0, player, now);
	}
	template <typename T = bool> static T CanConsumeEnergy(GameEntity* player, float value, int64_t now) {
		return ((T (*)(void *, GameEntity*, float, int64_t))(Il2CppBase() + 0x12709CC))(0, player, value, now);
	}
	template <typename T = bool> static T ConsumeEnergy(GameEntity* player, float value, int64_t now) {
		return ((T (*)(void *, GameEntity*, float, int64_t))(Il2CppBase() + 0x12709D4))(0, player, value, now);
	}
	template <typename T = void> static T AddEnergy(GameEntity* player, float value, int64_t now) {
		return ((T (*)(void *, GameEntity*, float, int64_t))(Il2CppBase() + 0x1270A68))(0, player, value, now);
	}
	template <typename T = void> static T RefillEnergy(GameEntity* player, int64_t now) {
		return ((T (*)(void *, GameEntity*, int64_t))(Il2CppBase() + 0x1270B40))(0, player, now);
	}
	template <typename T = Il2CppString*> static T NeedTransport(GameEntity* point, IEnumerable1Il2CppString*>* availableTransports) {
		return ((T (*)(void *, GameEntity*, IEnumerable1Il2CppString*>*))(Il2CppBase() + 0x1270B98))(0, point, availableTransports);
	}
	template <typename T = GameEntity*> static T GetRegionEnterPoint(IMapContexts* contexts, GameDataEntity* start, GameDataEntity* end) {
		return ((T (*)(void *, IMapContexts*, GameDataEntity*, GameDataEntity*))(Il2CppBase() + 0x12704FC))(0, contexts, start, end);
	}

};

