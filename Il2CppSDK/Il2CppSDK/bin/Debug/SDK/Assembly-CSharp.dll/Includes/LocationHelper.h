#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationHelper"));
	}


	template <typename T = void> static T UpdateAABB(uintptr_t location, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B253C))(0, location, world);
	}
	template <typename T = bool> static T CheckNeedQuests(uintptr_t world, uintptr_t mapPoint, uintptr_t player) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B26E0))(0, world, mapPoint, player);
	}
	template <typename T = void> static T ReplaceQuadOwner(uintptr_t location, int32_t quadId, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int32_t, int64_t))(Il2CppBase() + 0x17B285C))(0, location, quadId, playerId);
	}
	template <typename T = void> static T RemoveQuadOwner(uintptr_t location, int32_t quadId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x17B2940))(0, location, quadId);
	}
	template <typename T = bool> static T IsOwnerOrFriendly(uintptr_t entity, uintptr_t world, uintptr_t location) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B2A24))(0, entity, world, location);
	}
	template <typename T = bool> static T CanIgnoreDoor(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B2A38))(0, entity, world);
	}
	template <typename T = float> static T GetArmorDurabilityDecreaseCoef(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x17B2B48))(0, world);
	}
	template <typename T = float> static T GetWeaponDurabilityDecreaseCoef(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x17B2C54))(0, world);
	}
	template <typename T = float> static T GetOnDeathDurabilityDecreaseCoef(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x17B2D60))(0, world);
	}
	template <typename T = int64_t> static T GetDisconnectTimeout(uintptr_t location) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x17B2E6C))(0, location);
	}
	template <typename T = bool> static T ShowChangeHealthOnlyForPlayer(uintptr_t location) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x17B2EE4))(0, location);
	}
	template <typename T = int64_t> static T GetResetTime(uintptr_t location, uintptr_t world, bool next) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17B2F38))(0, location, world, next);
	}

};

}
