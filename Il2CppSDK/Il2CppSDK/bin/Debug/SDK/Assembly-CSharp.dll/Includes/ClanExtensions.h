#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanExtensions"));
	}


	template <typename R = bool> static R ReplaceClanIfNeed(IClanEntity* entity, int64_t newClanId) {
		return ((R (*)(void *, IClanEntity*, int64_t))(Il2CppBase() + 0x1584338))(0, entity, newClanId);
	}
	template <typename R = bool> static R CloneClanIdFrom(IClanEntity* entity, IClanEntity* target) {
		return ((R (*)(void *, IClanEntity*, IClanEntity*))(Il2CppBase() + 0x158450C))(0, entity, target);
	}
	template <typename R = bool> static R AreClanMembers(IClanEntity* entity1, IClanEntity* entity2) {
		return ((R (*)(void *, IClanEntity*, IClanEntity*))(Il2CppBase() + 0x1584724))(0, entity1, entity2);
	}
	template <typename R = bool> static R ClansAreFriends(ICommonContexts* world, int64_t clanId1, int64_t clanId2) {
		return ((R (*)(void *, ICommonContexts*, int64_t, int64_t))(Il2CppBase() + 0x1584930))(0, world, clanId1, clanId2);
	}
	template <typename R = bool> static R AreClanMembersOrFriends(IClanEntity* entity1, ICommonContexts* world, IClanEntity* entity2) {
		return ((R (*)(void *, IClanEntity*, ICommonContexts*, IClanEntity*))(Il2CppBase() + 0x158493C))(0, entity1, world, entity2);
	}
	template <typename R = bool> static R CanHasClanOrGuild(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1584C28))(0, entity);
	}
	template <typename R = Il2CppString*> static R GetClanName(IClanContexts* world, GameEntity* entity) {
		return ((R (*)(void *, IClanContexts*, GameEntity*))(Il2CppBase() + 0x1584C70))(0, world, entity);
	}
	template <typename R = Il2CppString*> static R GetClanName_1(IClanContexts* world, int64_t clanId) {
		return ((R (*)(void *, IClanContexts*, int64_t))(Il2CppBase() + 0x1584CFC))(0, world, clanId);
	}
	template <typename R = bool> static R InClan(IClanContexts* world, IClanEntity* entity) {
		return ((R (*)(void *, IClanContexts*, IClanEntity*))(Il2CppBase() + 0x1584DF0))(0, world, entity);
	}
	template <typename R = int64_t> static R GetPvPId(ClanEntity* clan) {
		return ((R (*)(void *, ClanEntity*))(Il2CppBase() + 0x1584FC0))(0, clan);
	}
	template <typename R = void> static R UpdateCellLocks(ClanEntity* clan, Il2CppArray<int64_t>* cellsLockTime) {
		return ((R (*)(void *, ClanEntity*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x158500C))(0, clan, cellsLockTime);
	}
	template <typename R = void> static R UpdateCellLock(ClanEntity* clan, int64_t lockTime, uint8_t cellId) {
		return ((R (*)(void *, ClanEntity*, int64_t, uint8_t))(Il2CppBase() + 0x1585208))(0, clan, lockTime, cellId);
	}
	template <typename R = int64_t> static R GetCellLock(ClanEntity* clan, uint8_t cellId) {
		return ((R (*)(void *, ClanEntity*, uint8_t))(Il2CppBase() + 0x1585250))(0, clan, cellId);
	}
	template <typename R = int64_t> static R GetLockedCellsCount(ClanEntity* clan, IWorld* world) {
		return ((R (*)(void *, ClanEntity*, IWorld*))(Il2CppBase() + 0x1585358))(0, clan, world);
	}
	template <typename R = bool> static R IsLocked(ClanEntity* clan, ICommonContexts* world) {
		return ((R (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x158555C))(0, clan, world);
	}
	template <typename R = bool> static R IsBuilderLocked(ClanEntity* clan, ICommonContexts* world) {
		return ((R (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x15856CC))(0, clan, world);
	}
	template <typename R = bool> static R IsBuilderLocked_1(AccountEntity* account, ICommonContexts* world) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*))(Il2CppBase() + 0x158583C))(0, account, world);
	}
	template <typename R = bool> static R IsDiplomacyLocked(ClanEntity* clan, ICommonContexts* world) {
		return ((R (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x1585948))(0, clan, world);
	}
	template <typename R = int64_t> static R ShieldTime(ClanEntity* clan) {
		return ((R (*)(void *, ClanEntity*))(Il2CppBase() + 0x1585AB8))(0, clan);
	}
	template <typename R = uintptr_t> static R ShieldLeft(ClanEntity* clan, ICommonContexts* world) {
		return ((R (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x1585B04))(0, clan, world);
	}
	template <typename R = bool> static R IsShieldActive(ClanEntity* clan, ICommonContexts* world) {
		return ((R (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x1585C84))(0, clan, world);
	}

};

