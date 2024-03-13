#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationHelper"));
	}


	template <typename T = void> static T UpdateAABB(LocationEntity* location, ICommonContexts* world) {
		return ((T (*)(void *, LocationEntity*, ICommonContexts*))(Il2CppBase() + 0x17B253C))(0, location, world);
	}
	template <typename T = bool> static T CheckNeedQuests(ICommonContexts* world, GameEntity* mapPoint, GameEntity* player) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x17B26E0))(0, world, mapPoint, player);
	}
	template <typename T = void> static T ReplaceQuadOwner(LocationEntity* location, int32_t quadId, int64_t playerId) {
		return ((T (*)(void *, LocationEntity*, int32_t, int64_t))(Il2CppBase() + 0x17B285C))(0, location, quadId, playerId);
	}
	template <typename T = void> static T RemoveQuadOwner(LocationEntity* location, int32_t quadId) {
		return ((T (*)(void *, LocationEntity*, int32_t))(Il2CppBase() + 0x17B2940))(0, location, quadId);
	}
	template <typename T = bool> static T IsOwnerOrFriendly(IClanGuildEntity* entity, ICommonContexts* world, LocationEntity* location) {
		return ((T (*)(void *, IClanGuildEntity*, ICommonContexts*, LocationEntity*))(Il2CppBase() + 0x17B2A24))(0, entity, world, location);
	}
	template <typename T = bool> static T CanIgnoreDoor(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x17B2A38))(0, entity, world);
	}
	template <typename T = float> static T GetArmorDurabilityDecreaseCoef(ICommonContexts* world) {
		return ((T (*)(void *, ICommonContexts*))(Il2CppBase() + 0x17B2B48))(0, world);
	}
	template <typename T = float> static T GetWeaponDurabilityDecreaseCoef(ICommonContexts* world) {
		return ((T (*)(void *, ICommonContexts*))(Il2CppBase() + 0x17B2C54))(0, world);
	}
	template <typename T = float> static T GetOnDeathDurabilityDecreaseCoef(ICommonContexts* world) {
		return ((T (*)(void *, ICommonContexts*))(Il2CppBase() + 0x17B2D60))(0, world);
	}
	template <typename T = int64_t> static T GetDisconnectTimeout(LocationEntity* location) {
		return ((T (*)(void *, LocationEntity*))(Il2CppBase() + 0x17B2E6C))(0, location);
	}
	template <typename T = bool> static T ShowChangeHealthOnlyForPlayer(LocationEntity* location) {
		return ((T (*)(void *, LocationEntity*))(Il2CppBase() + 0x17B2EE4))(0, location);
	}
	template <typename T = int64_t> static T GetResetTime(LocationEntity* location, ICommonContexts* world, bool next) {
		return ((T (*)(void *, LocationEntity*, ICommonContexts*, bool))(Il2CppBase() + 0x17B2F38))(0, location, world, next);
	}

};

