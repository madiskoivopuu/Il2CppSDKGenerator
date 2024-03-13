#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanExtensions"));
	}


	template <typename T = bool> static T ReplaceClanIfNeed(IClanEntity* entity, int64_t newClanId) {
		return ((T (*)(void *, IClanEntity*, int64_t))(Il2CppBase() + 0x1584338))(0, entity, newClanId);
	}
	template <typename T = bool> static T CloneClanIdFrom(IClanEntity* entity, IClanEntity* target) {
		return ((T (*)(void *, IClanEntity*, IClanEntity*))(Il2CppBase() + 0x158450C))(0, entity, target);
	}
	template <typename T = bool> static T AreClanMembers(IClanEntity* entity1, IClanEntity* entity2) {
		return ((T (*)(void *, IClanEntity*, IClanEntity*))(Il2CppBase() + 0x1584724))(0, entity1, entity2);
	}
	template <typename T = bool> static T ClansAreFriends(ICommonContexts* world, int64_t clanId1, int64_t clanId2) {
		return ((T (*)(void *, ICommonContexts*, int64_t, int64_t))(Il2CppBase() + 0x1584930))(0, world, clanId1, clanId2);
	}
	template <typename T = bool> static T AreClanMembersOrFriends(IClanEntity* entity1, ICommonContexts* world, IClanEntity* entity2) {
		return ((T (*)(void *, IClanEntity*, ICommonContexts*, IClanEntity*))(Il2CppBase() + 0x158493C))(0, entity1, world, entity2);
	}
	template <typename T = bool> static T CanHasClanOrGuild(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1584C28))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetClanName(IClanContexts* world, GameEntity* entity) {
		return ((T (*)(void *, IClanContexts*, GameEntity*))(Il2CppBase() + 0x1584C70))(0, world, entity);
	}
	template <typename T = Il2CppString*> static T GetClanName_1(IClanContexts* world, int64_t clanId) {
		return ((T (*)(void *, IClanContexts*, int64_t))(Il2CppBase() + 0x1584CFC))(0, world, clanId);
	}
	template <typename T = bool> static T InClan(IClanContexts* world, IClanEntity* entity) {
		return ((T (*)(void *, IClanContexts*, IClanEntity*))(Il2CppBase() + 0x1584DF0))(0, world, entity);
	}
	template <typename T = int64_t> static T GetPvPId(ClanEntity* clan) {
		return ((T (*)(void *, ClanEntity*))(Il2CppBase() + 0x1584FC0))(0, clan);
	}
	template <typename T = void> static T UpdateCellLocks(ClanEntity* clan, Il2CppArray<uintptr_t>* cellsLockTime) {
		return ((T (*)(void *, ClanEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x158500C))(0, clan, cellsLockTime);
	}
	template <typename T = void> static T UpdateCellLock(ClanEntity* clan, int64_t lockTime, uint8_t cellId) {
		return ((T (*)(void *, ClanEntity*, int64_t, uint8_t))(Il2CppBase() + 0x1585208))(0, clan, lockTime, cellId);
	}
	template <typename T = int64_t> static T GetCellLock(ClanEntity* clan, uint8_t cellId) {
		return ((T (*)(void *, ClanEntity*, uint8_t))(Il2CppBase() + 0x1585250))(0, clan, cellId);
	}
	template <typename T = int64_t> static T GetLockedCellsCount(ClanEntity* clan, IWorld* world) {
		return ((T (*)(void *, ClanEntity*, IWorld*))(Il2CppBase() + 0x1585358))(0, clan, world);
	}
	template <typename T = bool> static T IsLocked(ClanEntity* clan, ICommonContexts* world) {
		return ((T (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x158555C))(0, clan, world);
	}
	template <typename T = bool> static T IsBuilderLocked(ClanEntity* clan, ICommonContexts* world) {
		return ((T (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x15856CC))(0, clan, world);
	}
	template <typename T = bool> static T IsBuilderLocked_1(AccountEntity* account, ICommonContexts* world) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*))(Il2CppBase() + 0x158583C))(0, account, world);
	}
	template <typename T = bool> static T IsDiplomacyLocked(ClanEntity* clan, ICommonContexts* world) {
		return ((T (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x1585948))(0, clan, world);
	}
	template <typename T = int64_t> static T ShieldTime(ClanEntity* clan) {
		return ((T (*)(void *, ClanEntity*))(Il2CppBase() + 0x1585AB8))(0, clan);
	}
	template <typename T = uintptr_t> static T ShieldLeft(ClanEntity* clan, ICommonContexts* world) {
		return ((T (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x1585B04))(0, clan, world);
	}
	template <typename T = bool> static T IsShieldActive(ClanEntity* clan, ICommonContexts* world) {
		return ((T (*)(void *, ClanEntity*, ICommonContexts*))(Il2CppBase() + 0x1585C84))(0, clan, world);
	}

};

