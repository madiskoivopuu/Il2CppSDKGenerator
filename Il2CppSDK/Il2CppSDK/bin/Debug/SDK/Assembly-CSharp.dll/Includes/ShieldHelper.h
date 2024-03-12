#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShieldHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShieldHelper"));
	}

	template <typename T = Il2CppString*> static T& RaidDisableForPassive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T IsShieldActive(uintptr_t world, int64_t clanId, bool oneCellWorld) {
		return ((T (*)(void *, uintptr_t, int64_t, bool))(Il2CppBase() + 0x162FFA4))(0, world, clanId, oneCellWorld);
	}
	template <typename T = bool> static T CanApplyBattery(uintptr_t world, int64_t playerId, uintptr_t target, uintptr_t inventoryEntity, uintptr_t buffContext) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1630224))(0, world, playerId, target, inventoryEntity, buffContext);
	}
	template <typename T = bool> static T CanApplyBattery_1(uintptr_t target, uintptr_t inventoryEntity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16304B0))(0, target, inventoryEntity, world);
	}
	template <typename T = bool> static T IsBatteryActive(uintptr_t world, int64_t clanId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1630030))(0, world, clanId);
	}

};

}
