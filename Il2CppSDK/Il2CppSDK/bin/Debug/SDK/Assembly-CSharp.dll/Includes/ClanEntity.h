#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanEntity"));
	}

	template <typename R = AvatarComponent*> static R& avatarComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = MembersStartRaidComponent*> static R& membersStartRaidComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x15808E4))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1580C6C))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(ClanEntity*, bool))(Il2CppBase() + 0x15800E8))(this, value);
	}
	template <typename R = Cell0LockTimeComponent*> R get_cell0LockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1580C78))(this);
	}
	template <typename R = bool> R get_hasCell0LockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1580D00))(this);
	}
	template <typename R = void> R AddCell0LockTime(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1580D0C))(this, newValue);
	}
	template <typename R = void> R ReplaceCell0LockTime(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1580E10))(this, newValue);
	}
	template <typename R = void> R RemoveCell0LockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1580F14))(this);
	}
	template <typename R = Cell1LockTimeComponent*> R get_cell1LockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1580F20))(this);
	}
	template <typename R = bool> R get_hasCell1LockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1580FA8))(this);
	}
	template <typename R = void> R AddCell1LockTime(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1580FB4))(this, newValue);
	}
	template <typename R = void> R ReplaceCell1LockTime(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x15810B8))(this, newValue);
	}
	template <typename R = void> R RemoveCell1LockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x15811BC))(this);
	}
	template <typename R = Cell2LockTimeComponent*> R get_cell2LockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x15811C8))(this);
	}
	template <typename R = bool> R get_hasCell2LockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1581250))(this);
	}
	template <typename R = void> R AddCell2LockTime(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x158125C))(this, newValue);
	}
	template <typename R = void> R ReplaceCell2LockTime(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1581360))(this, newValue);
	}
	template <typename R = void> R RemoveCell2LockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1581464))(this);
	}
	template <typename R = Cell3LockTimeComponent*> R get_cell3LockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1581470))(this);
	}
	template <typename R = bool> R get_hasCell3LockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x15814F8))(this);
	}
	template <typename R = void> R AddCell3LockTime(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1581504))(this, newValue);
	}
	template <typename R = void> R ReplaceCell3LockTime(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1581608))(this, newValue);
	}
	template <typename R = void> R RemoveCell3LockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x158170C))(this);
	}
	template <typename R = ClanComponent*> R get_clan() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1580BE4))(this);
	}
	template <typename R = bool> R get_hasClan() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1580BD8))(this);
	}
	template <typename R = void> R AddClan(int64_t newId) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x157FAD0))(this, newId);
	}
	template <typename R = void> R ReplaceClan(int64_t newId) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1581718))(this, newId);
	}
	template <typename R = void> R RemoveClan() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x158181C))(this);
	}
	template <typename R = ClanPersonalEntitiesComponent*> R get_clanPersonalEntities() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1581828))(this);
	}
	template <typename R = bool> R get_hasClanPersonalEntities() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x15818B0))(this);
	}
	template <typename R = void> R AddClanPersonalEntities(Il2CppDictionary<Il2CppString*, Il2CppString*>* newList) {
		return ((R (*)(ClanEntity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x15818BC))(this, newList);
	}
	template <typename R = void> R ReplaceClanPersonalEntities(Il2CppDictionary<Il2CppString*, Il2CppString*>* newList) {
		return ((R (*)(ClanEntity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x15819D0))(this, newList);
	}
	template <typename R = void> R RemoveClanPersonalEntities() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1581AE4))(this);
	}
	template <typename R = LeaderComponent*> R get_leader() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1581AF0))(this);
	}
	template <typename R = bool> R get_hasLeader() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1581B78))(this);
	}
	template <typename R = void> R AddLeader(int64_t newId) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1581B84))(this, newId);
	}
	template <typename R = void> R ReplaceLeader(int64_t newId) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1581C88))(this, newId);
	}
	template <typename R = void> R RemoveLeader() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1581D8C))(this);
	}
	template <typename R = LocationGradeComponent*> R get_locationGrade() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1581D98))(this);
	}
	template <typename R = bool> R get_hasLocationGrade() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1581E20))(this);
	}
	template <typename R = void> R AddLocationGrade(Il2CppDictionary<Il2CppString*, int32_t>* newLocations) {
		return ((R (*)(ClanEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x1581E2C))(this, newLocations);
	}
	template <typename R = void> R ReplaceLocationGrade(Il2CppDictionary<Il2CppString*, int32_t>* newLocations) {
		return ((R (*)(ClanEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x1581F40))(this, newLocations);
	}
	template <typename R = void> R RemoveLocationGrade() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1582054))(this);
	}
	template <typename R = LockTimeBuilderComponent*> R get_lockTimeBuilder() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1582060))(this);
	}
	template <typename R = bool> R get_hasLockTimeBuilder() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x15820E8))(this);
	}
	template <typename R = void> R AddLockTimeBuilder(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x15820F4))(this, newValue);
	}
	template <typename R = void> R ReplaceLockTimeBuilder(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x15821F8))(this, newValue);
	}
	template <typename R = void> R RemoveLockTimeBuilder() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x15822FC))(this);
	}
	template <typename R = LockTimeComponent*> R get_lockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1582308))(this);
	}
	template <typename R = bool> R get_hasLockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1582390))(this);
	}
	template <typename R = void> R AddLockTime(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x158239C))(this, newValue);
	}
	template <typename R = void> R ReplaceLockTime(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x15824A0))(this, newValue);
	}
	template <typename R = void> R RemoveLockTime() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x15825A4))(this);
	}
	template <typename R = LockTimeDiplomacyComponent*> R get_lockTimeDiplomacy() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x15825B0))(this);
	}
	template <typename R = bool> R get_hasLockTimeDiplomacy() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1582638))(this);
	}
	template <typename R = void> R AddLockTimeDiplomacy(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1582644))(this, newValue);
	}
	template <typename R = void> R ReplaceLockTimeDiplomacy(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1582748))(this, newValue);
	}
	template <typename R = void> R RemoveLockTimeDiplomacy() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x158284C))(this);
	}
	template <typename R = bool> R get_allowMembersStartRaid() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1582858))(this);
	}
	template <typename R = void> R set_allowMembersStartRaid(bool value) {
		return ((R (*)(ClanEntity*, bool))(Il2CppBase() + 0x1582864))(this, value);
	}
	template <typename R = NameComponent*> R get_name() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1580B50))(this);
	}
	template <typename R = bool> R get_hasName() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1580B44))(this);
	}
	template <typename R = void> R AddName(Il2CppString* newValue) {
		return ((R (*)(ClanEntity*, Il2CppString*))(Il2CppBase() + 0x158297C))(this, newValue);
	}
	template <typename R = void> R ReplaceName(Il2CppString* newValue) {
		return ((R (*)(ClanEntity*, Il2CppString*))(Il2CppBase() + 0x1582A90))(this, newValue);
	}
	template <typename R = void> R RemoveName() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1582BA4))(this);
	}
	template <typename R = PvPComponent*> R get_pvP() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1582BB0))(this);
	}
	template <typename R = bool> R get_hasPvP() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1582C38))(this);
	}
	template <typename R = void> R AddPvP(int64_t newId) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1582C44))(this, newId);
	}
	template <typename R = void> R ReplacePvP(int64_t newId) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x1582D48))(this, newId);
	}
	template <typename R = void> R RemovePvP() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1582E4C))(this);
	}
	template <typename R = PvpGroupClansComponent*> R get_pvpGroupClans() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1582E58))(this);
	}
	template <typename R = bool> R get_hasPvpGroupClans() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1582EE0))(this);
	}
	template <typename R = void> R AddPvpGroupClans(Il2CppArray<int64_t>* newValues) {
		return ((R (*)(ClanEntity*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x1582EEC))(this, newValues);
	}
	template <typename R = void> R ReplacePvpGroupClans(Il2CppArray<int64_t>* newValues) {
		return ((R (*)(ClanEntity*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x1583000))(this, newValues);
	}
	template <typename R = void> R RemovePvpGroupClans() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1583114))(this);
	}
	template <typename R = ScoutStateComponent*> R get_scoutState() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1583120))(this);
	}
	template <typename R = bool> R get_hasScoutState() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x15831A8))(this);
	}
	template <typename R = void> R AddScoutState(int64_t newEndTime, int64_t newResetTime, Il2CppString* newName) {
		return ((R (*)(ClanEntity*, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0x15831B4))(this, newEndTime, newResetTime, newName);
	}
	template <typename R = void> R ReplaceScoutState(int64_t newEndTime, int64_t newResetTime, Il2CppString* newName) {
		return ((R (*)(ClanEntity*, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0x15832DC))(this, newEndTime, newResetTime, newName);
	}
	template <typename R = void> R RemoveScoutState() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1583404))(this);
	}
	template <typename R = ShieldComponent*> R get_shield() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1583410))(this);
	}
	template <typename R = bool> R get_hasShield() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1583498))(this);
	}
	template <typename R = void> R AddShield(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x15834A4))(this, newValue);
	}
	template <typename R = void> R ReplaceShield(int64_t newValue) {
		return ((R (*)(ClanEntity*, int64_t))(Il2CppBase() + 0x15835A8))(this, newValue);
	}
	template <typename R = void> R RemoveShield() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x15836AC))(this);
	}
	template <typename R = StatueStateComponent*> R get_statueState() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x15836B8))(this);
	}
	template <typename R = bool> R get_hasStatueState() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x1583740))(this);
	}
	template <typename R = void> R AddStatueState(int64_t newEndTime, int64_t newResetTime) {
		return ((R (*)(ClanEntity*, int64_t, int64_t))(Il2CppBase() + 0x158374C))(this, newEndTime, newResetTime);
	}
	template <typename R = void> R ReplaceStatueState(int64_t newEndTime, int64_t newResetTime) {
		return ((R (*)(ClanEntity*, int64_t, int64_t))(Il2CppBase() + 0x1583854))(this, newEndTime, newResetTime);
	}
	template <typename R = void> R RemoveStatueState() {
		return ((R (*)(ClanEntity*))(Il2CppBase() + 0x158395C))(this);
	}

};

