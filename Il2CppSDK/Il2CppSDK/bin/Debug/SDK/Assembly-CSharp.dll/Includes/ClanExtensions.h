#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanExtensions"));
	}


	template <typename T = bool> static T ReplaceClanIfNeed(uintptr_t entity, int64_t newClanId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1584338))(0, entity, newClanId);
	}
	template <typename T = bool> static T CloneClanIdFrom(uintptr_t entity, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x158450C))(0, entity, target);
	}
	template <typename T = bool> static T AreClanMembers(uintptr_t entity1, uintptr_t entity2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1584724))(0, entity1, entity2);
	}
	template <typename T = bool> static T ClansAreFriends(uintptr_t world, int64_t clanId1, int64_t clanId2) {
		return ((T (*)(void *, uintptr_t, int64_t, int64_t))(Il2CppBase() + 0x1584930))(0, world, clanId1, clanId2);
	}
	template <typename T = bool> static T AreClanMembersOrFriends(uintptr_t entity1, uintptr_t world, uintptr_t entity2) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x158493C))(0, entity1, world, entity2);
	}
	template <typename T = bool> static T CanHasClanOrGuild(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1584C28))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetClanName(uintptr_t world, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1584C70))(0, world, entity);
	}
	template <typename T = Il2CppString*> static T GetClanName_1(uintptr_t world, int64_t clanId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1584CFC))(0, world, clanId);
	}
	template <typename T = bool> static T InClan(uintptr_t world, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1584DF0))(0, world, entity);
	}
	template <typename T = int64_t> static T GetPvPId(uintptr_t clan) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1584FC0))(0, clan);
	}
	template <typename T = void> static T UpdateCellLocks(uintptr_t clan, Il2CppArray<uintptr_t>* cellsLockTime) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x158500C))(0, clan, cellsLockTime);
	}
	template <typename T = void> static T UpdateCellLock(uintptr_t clan, int64_t lockTime, unsigned char cellId) {
		return ((T (*)(void *, uintptr_t, int64_t, unsigned char))(Il2CppBase() + 0x1585208))(0, clan, lockTime, cellId);
	}
	template <typename T = int64_t> static T GetCellLock(uintptr_t clan, unsigned char cellId) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x1585250))(0, clan, cellId);
	}
	template <typename T = int64_t> static T GetLockedCellsCount(uintptr_t clan, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1585358))(0, clan, world);
	}
	template <typename T = bool> static T IsLocked(uintptr_t clan, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x158555C))(0, clan, world);
	}
	template <typename T = bool> static T IsBuilderLocked(uintptr_t clan, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15856CC))(0, clan, world);
	}
	template <typename T = bool> static T IsBuilderLocked_1(uintptr_t account, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x158583C))(0, account, world);
	}
	template <typename T = bool> static T IsDiplomacyLocked(uintptr_t clan, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1585948))(0, clan, world);
	}
	template <typename T = int64_t> static T ShieldTime(uintptr_t clan) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1585AB8))(0, clan);
	}
	template <typename T = uintptr_t> static T ShieldLeft(uintptr_t clan, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1585B04))(0, clan, world);
	}
	template <typename T = bool> static T IsShieldActive(uintptr_t clan, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1585C84))(0, clan, world);
	}

};

}
