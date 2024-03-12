#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapHelper"));
	}


	template <typename T = float> static T CalcMoveDuration(uintptr_t contexts, uintptr_t start, uintptr_t end, float speed) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1270378))(0, contexts, start, end, speed);
	}
	template <typename T = float> static T GetDistToDest(uintptr_t player, int64_t now) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1270764))(0, player, now);
	}
	template <typename T = float> static T GetEnergyToSpeedUpWhenMove(uintptr_t player, int64_t now) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1270810))(0, player, now);
	}
	template <typename T = float> static T GetEnergyToSpeedUp(uintptr_t start, uintptr_t end) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1270890))(0, start, end);
	}
	template <typename T = float> static T GetEnergy(uintptr_t player, int64_t now) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1270960))(0, player, now);
	}
	template <typename T = bool> static T CanConsumeEnergy(uintptr_t player, float value, int64_t now) {
		return ((T (*)(void *, uintptr_t, float, int64_t))(Il2CppBase() + 0x12709CC))(0, player, value, now);
	}
	template <typename T = bool> static T ConsumeEnergy(uintptr_t player, float value, int64_t now) {
		return ((T (*)(void *, uintptr_t, float, int64_t))(Il2CppBase() + 0x12709D4))(0, player, value, now);
	}
	template <typename T = void> static T AddEnergy(uintptr_t player, float value, int64_t now) {
		return ((T (*)(void *, uintptr_t, float, int64_t))(Il2CppBase() + 0x1270A68))(0, player, value, now);
	}
	template <typename T = void> static T RefillEnergy(uintptr_t player, int64_t now) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1270B40))(0, player, now);
	}
	template <typename T = Il2CppString*> static T NeedTransport(uintptr_t point, void* availableTransports) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x1270B98))(0, point, availableTransports);
	}
	template <typename T = uintptr_t> static T GetRegionEnterPoint(uintptr_t contexts, uintptr_t start, uintptr_t end) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x12704FC))(0, contexts, start, end);
	}

};

}
