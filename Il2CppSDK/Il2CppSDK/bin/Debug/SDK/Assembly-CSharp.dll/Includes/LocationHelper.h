#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationHelper"));
	}


	template <typename R = void> static R UpdateAABB(LocationEntity* location, ICommonContexts* world) {
		return ((R (*)(void *, LocationEntity*, ICommonContexts*))(Il2CppBase() + 0x17B253C))(0, location, world);
	}
	template <typename R = bool> static R CheckNeedQuests(ICommonContexts* world, GameEntity* mapPoint, GameEntity* player) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x17B26E0))(0, world, mapPoint, player);
	}
	template <typename R = void> static R ReplaceQuadOwner(LocationEntity* location, int32_t quadId, int64_t playerId) {
		return ((R (*)(void *, LocationEntity*, int32_t, int64_t))(Il2CppBase() + 0x17B285C))(0, location, quadId, playerId);
	}
	template <typename R = void> static R RemoveQuadOwner(LocationEntity* location, int32_t quadId) {
		return ((R (*)(void *, LocationEntity*, int32_t))(Il2CppBase() + 0x17B2940))(0, location, quadId);
	}
	template <typename R = bool> static R IsOwnerOrFriendly(IClanGuildEntity* entity, ICommonContexts* world, LocationEntity* location) {
		return ((R (*)(void *, IClanGuildEntity*, ICommonContexts*, LocationEntity*))(Il2CppBase() + 0x17B2A24))(0, entity, world, location);
	}
	template <typename R = bool> static R CanIgnoreDoor(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x17B2A38))(0, entity, world);
	}
	template <typename R = float> static R GetArmorDurabilityDecreaseCoef(ICommonContexts* world) {
		return ((R (*)(void *, ICommonContexts*))(Il2CppBase() + 0x17B2B48))(0, world);
	}
	template <typename R = float> static R GetWeaponDurabilityDecreaseCoef(ICommonContexts* world) {
		return ((R (*)(void *, ICommonContexts*))(Il2CppBase() + 0x17B2C54))(0, world);
	}
	template <typename R = float> static R GetOnDeathDurabilityDecreaseCoef(ICommonContexts* world) {
		return ((R (*)(void *, ICommonContexts*))(Il2CppBase() + 0x17B2D60))(0, world);
	}
	template <typename R = int64_t> static R GetDisconnectTimeout(LocationEntity* location) {
		return ((R (*)(void *, LocationEntity*))(Il2CppBase() + 0x17B2E6C))(0, location);
	}
	template <typename R = bool> static R ShowChangeHealthOnlyForPlayer(LocationEntity* location) {
		return ((R (*)(void *, LocationEntity*))(Il2CppBase() + 0x17B2EE4))(0, location);
	}
	template <typename R = int64_t> static R GetResetTime(LocationEntity* location, ICommonContexts* world, bool next) {
		return ((R (*)(void *, LocationEntity*, ICommonContexts*, bool))(Il2CppBase() + 0x17B2F38))(0, location, world, next);
	}

};

