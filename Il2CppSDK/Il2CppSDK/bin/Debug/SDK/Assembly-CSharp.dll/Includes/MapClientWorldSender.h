#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapClientWorldSender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapClientWorldSender"));
	}


	template <typename R = void> static R SendMoveToLocation(ICommonClientWorld* world, Il2CppString* locationId, bool fast) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, bool))(Il2CppBase() + 0x126A9A0))(0, world, locationId, fast);
	}
	template <typename R = void> static R SendEnterToLocation(ICommonClientWorld* world, GameEntity* point, LocationEntity* location) {
		return ((R (*)(void *, ICommonClientWorld*, GameEntity*, LocationEntity*))(Il2CppBase() + 0x126AAEC))(0, world, point, location);
	}
	template <typename R = void> static R SendUnlockFoW(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x126ACBC))(0, world);
	}
	template <typename R = void> static R SendAddEnergy(ICommonClientWorld* world) {
		return ((R (*)(void *, ICommonClientWorld*))(Il2CppBase() + 0x126ADC0))(0, world);
	}
	template <typename R = void> static R SendAutoFarm(ICommonClientWorld* world, Il2CppString* pointName) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x126AEC4))(0, world, pointName);
	}
	template <typename R = void> static R SendSeenMapEvent(ICommonClientWorld* world, int32_t pointId) {
		return ((R (*)(void *, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x126AFE4))(0, world, pointId);
	}
	template <typename R = void> static R SendResetLocation(ICommonClientWorld* world, Il2CppString* pointName, int32_t locationId) {
		return ((R (*)(void *, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x126B108))(0, world, pointName, locationId);
	}

};

