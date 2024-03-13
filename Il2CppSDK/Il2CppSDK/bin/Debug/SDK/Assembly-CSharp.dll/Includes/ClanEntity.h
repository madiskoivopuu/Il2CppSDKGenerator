#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanEntity"));
	}

	template <typename T = AvatarComponent*> static T& avatarComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MembersStartRaidComponent*> static T& membersStartRaidComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x15808E4))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1580C6C))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(ClanEntity*, bool))(Il2CppBase() + 0x15800E8))(this, value);
	}
	template <typename T = Cell0LockTimeComponent*> T get_cell0LockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1580C78))(this);
	}
	template <typename T = bool> T get_hasCell0LockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1580D00))(this);
	}
	template <typename T = void> T AddCell0LockTime(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1580D0C))(this, newValue);
	}
	template <typename T = void> T ReplaceCell0LockTime(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1580E10))(this, newValue);
	}
	template <typename T = void> T RemoveCell0LockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1580F14))(this);
	}
	template <typename T = Cell1LockTimeComponent*> T get_cell1LockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1580F20))(this);
	}
	template <typename T = bool> T get_hasCell1LockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1580FA8))(this);
	}
	template <typename T = void> T AddCell1LockTime(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1580FB4))(this, newValue);
	}
	template <typename T = void> T ReplaceCell1LockTime(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x15810B8))(this, newValue);
	}
	template <typename T = void> T RemoveCell1LockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x15811BC))(this);
	}
	template <typename T = Cell2LockTimeComponent*> T get_cell2LockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x15811C8))(this);
	}
	template <typename T = bool> T get_hasCell2LockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1581250))(this);
	}
	template <typename T = void> T AddCell2LockTime(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x158125C))(this, newValue);
	}
	template <typename T = void> T ReplaceCell2LockTime(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1581360))(this, newValue);
	}
	template <typename T = void> T RemoveCell2LockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1581464))(this);
	}
	template <typename T = Cell3LockTimeComponent*> T get_cell3LockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1581470))(this);
	}
	template <typename T = bool> T get_hasCell3LockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x15814F8))(this);
	}
	template <typename T = void> T AddCell3LockTime(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1581504))(this, newValue);
	}
	template <typename T = void> T ReplaceCell3LockTime(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1581608))(this, newValue);
	}
	template <typename T = void> T RemoveCell3LockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x158170C))(this);
	}
	template <typename T = ClanComponent*> T get_clan() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1580BE4))(this);
	}
	template <typename T = bool> T get_hasClan() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1580BD8))(this);
	}
	template <typename T = void> T AddClan(int64_t newId) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x157FAD0))(this, newId);
	}
	template <typename T = void> T ReplaceClan(int64_t newId) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1581718))(this, newId);
	}
	template <typename T = void> T RemoveClan() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x158181C))(this);
	}
	template <typename T = ClanPersonalEntitiesComponent*> T get_clanPersonalEntities() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1581828))(this);
	}
	template <typename T = bool> T get_hasClanPersonalEntities() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x15818B0))(this);
	}
	template <typename T = void> T AddClanPersonalEntities(Il2CppDictionary<Il2CppString*, Il2CppString*>* newList) {
		return ((T (*)(ClanEntity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x15818BC))(this, newList);
	}
	template <typename T = void> T ReplaceClanPersonalEntities(Il2CppDictionary<Il2CppString*, Il2CppString*>* newList) {
		return ((T (*)(ClanEntity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x15819D0))(this, newList);
	}
	template <typename T = void> T RemoveClanPersonalEntities() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1581AE4))(this);
	}
	template <typename T = LeaderComponent*> T get_leader() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1581AF0))(this);
	}
	template <typename T = bool> T get_hasLeader() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1581B78))(this);
	}
	template <typename T = void> T AddLeader(int64_t newId) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1581B84))(this, newId);
	}
	template <typename T = void> T ReplaceLeader(int64_t newId) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1581C88))(this, newId);
	}
	template <typename T = void> T RemoveLeader() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1581D8C))(this);
	}
	template <typename T = LocationGradeComponent*> T get_locationGrade() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1581D98))(this);
	}
	template <typename T = bool> T get_hasLocationGrade() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1581E20))(this);
	}
	template <typename T = void> T AddLocationGrade(Il2CppDictionary<Il2CppString*, int32_t>* newLocations) {
		return ((T (*)(ClanEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x1581E2C))(this, newLocations);
	}
	template <typename T = void> T ReplaceLocationGrade(Il2CppDictionary<Il2CppString*, int32_t>* newLocations) {
		return ((T (*)(ClanEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x1581F40))(this, newLocations);
	}
	template <typename T = void> T RemoveLocationGrade() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1582054))(this);
	}
	template <typename T = LockTimeBuilderComponent*> T get_lockTimeBuilder() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1582060))(this);
	}
	template <typename T = bool> T get_hasLockTimeBuilder() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x15820E8))(this);
	}
	template <typename T = void> T AddLockTimeBuilder(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x15820F4))(this, newValue);
	}
	template <typename T = void> T ReplaceLockTimeBuilder(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x15821F8))(this, newValue);
	}
	template <typename T = void> T RemoveLockTimeBuilder() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x15822FC))(this);
	}
	template <typename T = LockTimeComponent*> T get_lockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1582308))(this);
	}
	template <typename T = bool> T get_hasLockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1582390))(this);
	}
	template <typename T = void> T AddLockTime(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x158239C))(this, newValue);
	}
	template <typename T = void> T ReplaceLockTime(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x15824A0))(this, newValue);
	}
	template <typename T = void> T RemoveLockTime() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x15825A4))(this);
	}
	template <typename T = LockTimeDiplomacyComponent*> T get_lockTimeDiplomacy() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x15825B0))(this);
	}
	template <typename T = bool> T get_hasLockTimeDiplomacy() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1582638))(this);
	}
	template <typename T = void> T AddLockTimeDiplomacy(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1582644))(this, newValue);
	}
	template <typename T = void> T ReplaceLockTimeDiplomacy(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1582748))(this, newValue);
	}
	template <typename T = void> T RemoveLockTimeDiplomacy() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x158284C))(this);
	}
	template <typename T = bool> T get_allowMembersStartRaid() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1582858))(this);
	}
	template <typename T = void> T set_allowMembersStartRaid(bool value) {
		return ((T (*)(ClanEntity*, bool))(Il2CppBase() + 0x1582864))(this, value);
	}
	template <typename T = NameComponent*> T get_name() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1580B50))(this);
	}
	template <typename T = bool> T get_hasName() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1580B44))(this);
	}
	template <typename T = void> T AddName(Il2CppString* newValue) {
		return ((T (*)(ClanEntity*, Il2CppString*))(Il2CppBase() + 0x158297C))(this, newValue);
	}
	template <typename T = void> T ReplaceName(Il2CppString* newValue) {
		return ((T (*)(ClanEntity*, Il2CppString*))(Il2CppBase() + 0x1582A90))(this, newValue);
	}
	template <typename T = void> T RemoveName() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1582BA4))(this);
	}
	template <typename T = PvPComponent*> T get_pvP() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1582BB0))(this);
	}
	template <typename T = bool> T get_hasPvP() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1582C38))(this);
	}
	template <typename T = void> T AddPvP(int64_t newId) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1582C44))(this, newId);
	}
	template <typename T = void> T ReplacePvP(int64_t newId) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1582D48))(this, newId);
	}
	template <typename T = void> T RemovePvP() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1582E4C))(this);
	}
	template <typename T = PvpGroupClansComponent*> T get_pvpGroupClans() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1582E58))(this);
	}
	template <typename T = bool> T get_hasPvpGroupClans() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1582EE0))(this);
	}
	template <typename T = void> T AddPvpGroupClans(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ClanEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1582EEC))(this, newValues);
	}
	template <typename T = void> T ReplacePvpGroupClans(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ClanEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1583000))(this, newValues);
	}
	template <typename T = void> T RemovePvpGroupClans() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1583114))(this);
	}
	template <typename T = ScoutStateComponent*> T get_scoutState() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1583120))(this);
	}
	template <typename T = bool> T get_hasScoutState() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x15831A8))(this);
	}
	template <typename T = void> T AddScoutState(int64_t newEndTime, int64_t newResetTime, Il2CppString* newName) {
		return ((T (*)(ClanEntity*, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0x15831B4))(this, newEndTime, newResetTime, newName);
	}
	template <typename T = void> T ReplaceScoutState(int64_t newEndTime, int64_t newResetTime, Il2CppString* newName) {
		return ((T (*)(ClanEntity*, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0x15832DC))(this, newEndTime, newResetTime, newName);
	}
	template <typename T = void> T RemoveScoutState() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1583404))(this);
	}
	template <typename T = ShieldComponent*> T get_shield() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1583410))(this);
	}
	template <typename T = bool> T get_hasShield() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1583498))(this);
	}
	template <typename T = void> T AddShield(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x15834A4))(this, newValue);
	}
	template <typename T = void> T ReplaceShield(int64_t newValue) {
		return ((T (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x15835A8))(this, newValue);
	}
	template <typename T = void> T RemoveShield() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x15836AC))(this);
	}
	template <typename T = StatueStateComponent*> T get_statueState() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x15836B8))(this);
	}
	template <typename T = bool> T get_hasStatueState() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x1583740))(this);
	}
	template <typename T = void> T AddStatueState(int64_t newEndTime, int64_t newResetTime) {
		return ((T (*)(ClanEntity*, int64_t, int64_t))(Il2CppBase() + 0x158374C))(this, newEndTime, newResetTime);
	}
	template <typename T = void> T ReplaceStatueState(int64_t newEndTime, int64_t newResetTime) {
		return ((T (*)(ClanEntity*, int64_t, int64_t))(Il2CppBase() + 0x1583854))(this, newEndTime, newResetTime);
	}
	template <typename T = void> T RemoveStatueState() {
		return ((T (*)(ClanEntity*))(Il2CppBase() + 0x158395C))(this);
	}

};

