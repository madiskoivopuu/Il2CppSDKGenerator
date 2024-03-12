#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapClientWorldSender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapClientWorldSender"));
	}


	template <typename T = void> static T SendMoveToLocation(uintptr_t world, Il2CppString* locationId, bool fast) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x126A9A0))(0, world, locationId, fast);
	}
	template <typename T = void> static T SendEnterToLocation(uintptr_t world, uintptr_t point, uintptr_t location) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x126AAEC))(0, world, point, location);
	}
	template <typename T = void> static T SendUnlockFoW(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x126ACBC))(0, world);
	}
	template <typename T = void> static T SendAddEnergy(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x126ADC0))(0, world);
	}
	template <typename T = void> static T SendAutoFarm(uintptr_t world, Il2CppString* pointName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x126AEC4))(0, world, pointName);
	}
	template <typename T = void> static T SendSeenMapEvent(uintptr_t world, int32_t pointId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x126AFE4))(0, world, pointId);
	}
	template <typename T = void> static T SendResetLocation(uintptr_t world, Il2CppString* pointName, int32_t locationId) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x126B108))(0, world, pointName, locationId);
	}

};

}
