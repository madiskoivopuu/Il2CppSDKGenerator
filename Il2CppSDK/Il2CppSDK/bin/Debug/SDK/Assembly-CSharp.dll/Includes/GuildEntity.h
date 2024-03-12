#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildEntity"));
	}

	template <typename T = uintptr_t> static T& avatarComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EDF80))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(GuildEntity*, bool))(Il2CppBase() + 0x12EBE54))(this, value);
	}
	template <typename T = uintptr_t> T get_currentWeekRankPoints() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EDF8C))(this);
	}
	template <typename T = bool> T get_hasCurrentWeekRankPoints() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE014))(this);
	}
	template <typename T = void> T AddCurrentWeekRankPoints(int32_t newCount) {
		return ((T (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EE020))(this, newCount);
	}
	template <typename T = void> T ReplaceCurrentWeekRankPoints(int32_t newCount) {
		return ((T (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EE124))(this, newCount);
	}
	template <typename T = void> T RemoveCurrentWeekRankPoints() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE228))(this);
	}
	template <typename T = uintptr_t> T get_description() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE234))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE2BC))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(GuildEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12EE2C8))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(GuildEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12EE3F0))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE518))(this);
	}
	template <typename T = uintptr_t> T get_guild() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE524))(this);
	}
	template <typename T = bool> T get_hasGuild() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE5AC))(this);
	}
	template <typename T = void> T AddGuild(int64_t newId) {
		return ((T (*)(GuildEntity*, int64_t))(Il2CppBase() + 0x12EB9B8))(this, newId);
	}
	template <typename T = void> T ReplaceGuild(int64_t newId) {
		return ((T (*)(GuildEntity*, int64_t))(Il2CppBase() + 0x12EE5B8))(this, newId);
	}
	template <typename T = void> T RemoveGuild() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE6BC))(this);
	}
	template <typename T = uintptr_t> T get_guildLanguage() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE6C8))(this);
	}
	template <typename T = bool> T get_hasGuildLanguage() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE750))(this);
	}
	template <typename T = void> T AddGuildLanguage(int32_t newValue) {
		return ((T (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EE75C))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildLanguage(int32_t newValue) {
		return ((T (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EE860))(this, newValue);
	}
	template <typename T = void> T RemoveGuildLanguage() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE964))(this);
	}
	template <typename T = uintptr_t> T get_guildTag() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE970))(this);
	}
	template <typename T = bool> T get_hasGuildTag() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EE9F8))(this);
	}
	template <typename T = void> T AddGuildTag(Il2CppString* newValue) {
		return ((T (*)(GuildEntity*, Il2CppString*))(Il2CppBase() + 0x12EEA04))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildTag(Il2CppString* newValue) {
		return ((T (*)(GuildEntity*, Il2CppString*))(Il2CppBase() + 0x12EEB18))(this, newValue);
	}
	template <typename T = void> T RemoveGuildTag() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EEC2C))(this);
	}
	template <typename T = uintptr_t> T get_guildType() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EEC38))(this);
	}
	template <typename T = bool> T get_hasGuildType() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EECC0))(this);
	}
	template <typename T = void> T AddGuildType(uintptr_t newType) {
		return ((T (*)(GuildEntity*, uintptr_t))(Il2CppBase() + 0x12EECCC))(this, newType);
	}
	template <typename T = void> T ReplaceGuildType(uintptr_t newType) {
		return ((T (*)(GuildEntity*, uintptr_t))(Il2CppBase() + 0x12EEDD0))(this, newType);
	}
	template <typename T = void> T RemoveGuildType() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EEED4))(this);
	}
	template <typename T = uintptr_t> T get_killedBosses() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EEEE0))(this);
	}
	template <typename T = bool> T get_hasKilledBosses() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EEF68))(this);
	}
	template <typename T = void> T AddKilledBosses(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GuildEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12EEF74))(this, newNames);
	}
	template <typename T = void> T ReplaceKilledBosses(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GuildEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12EF088))(this, newNames);
	}
	template <typename T = void> T RemoveKilledBosses() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EF19C))(this);
	}
	template <typename T = uintptr_t> T get_leader() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EF1A8))(this);
	}
	template <typename T = bool> T get_hasLeader() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EF230))(this);
	}
	template <typename T = void> T AddLeader(int64_t newId) {
		return ((T (*)(GuildEntity*, int64_t))(Il2CppBase() + 0x12EF23C))(this, newId);
	}
	template <typename T = void> T ReplaceLeader(int64_t newId) {
		return ((T (*)(GuildEntity*, int64_t))(Il2CppBase() + 0x12EF340))(this, newId);
	}
	template <typename T = void> T RemoveLeader() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EF444))(this);
	}
	template <typename T = uintptr_t> T get_membersCount() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12E4998))(this);
	}
	template <typename T = bool> T get_hasMembersCount() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EF450))(this);
	}
	template <typename T = void> T AddMembersCount(int32_t newCount) {
		return ((T (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EF45C))(this, newCount);
	}
	template <typename T = void> T ReplaceMembersCount(int32_t newCount) {
		return ((T (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EF560))(this, newCount);
	}
	template <typename T = void> T RemoveMembersCount() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EF664))(this);
	}
	template <typename T = uintptr_t> T get_messageOfTheDay() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EC4C8))(this);
	}
	template <typename T = bool> T get_hasMessageOfTheDay() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EC4BC))(this);
	}
	template <typename T = void> T AddMessageOfTheDay(unsigned char newType, Il2CppString* newText) {
		return ((T (*)(GuildEntity*, unsigned char, Il2CppString*))(Il2CppBase() + 0x12EF670))(this, newType, newText);
	}
	template <typename T = void> T ReplaceMessageOfTheDay(unsigned char newType, Il2CppString* newText) {
		return ((T (*)(GuildEntity*, unsigned char, Il2CppString*))(Il2CppBase() + 0x12EF78C))(this, newType, newText);
	}
	template <typename T = void> T RemoveMessageOfTheDay() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EF8A8))(this);
	}
	template <typename T = uintptr_t> T get_name() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EF8B4))(this);
	}
	template <typename T = bool> T get_hasName() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EF93C))(this);
	}
	template <typename T = void> T AddName(Il2CppString* newValue) {
		return ((T (*)(GuildEntity*, Il2CppString*))(Il2CppBase() + 0x12EF948))(this, newValue);
	}
	template <typename T = void> T ReplaceName(Il2CppString* newValue) {
		return ((T (*)(GuildEntity*, Il2CppString*))(Il2CppBase() + 0x12EFA5C))(this, newValue);
	}
	template <typename T = void> T RemoveName() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EFB70))(this);
	}
	template <typename T = uintptr_t> T get_previousWeekRankPoints() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EFB7C))(this);
	}
	template <typename T = bool> T get_hasPreviousWeekRankPoints() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EFC04))(this);
	}
	template <typename T = void> T AddPreviousWeekRankPoints(int32_t newCount) {
		return ((T (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EFC10))(this, newCount);
	}
	template <typename T = void> T ReplacePreviousWeekRankPoints(int32_t newCount) {
		return ((T (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EFD14))(this, newCount);
	}
	template <typename T = void> T RemovePreviousWeekRankPoints() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EFE18))(this);
	}
	template <typename T = uintptr_t> T get_region() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EFE24))(this);
	}
	template <typename T = bool> T get_hasRegion() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12EFEAC))(this);
	}
	template <typename T = void> T AddRegion(Il2CppString* newName) {
		return ((T (*)(GuildEntity*, Il2CppString*))(Il2CppBase() + 0x12EFEB8))(this, newName);
	}
	template <typename T = void> T ReplaceRegion(Il2CppString* newName) {
		return ((T (*)(GuildEntity*, Il2CppString*))(Il2CppBase() + 0x12EFFCC))(this, newName);
	}
	template <typename T = void> T RemoveRegion() {
		return ((T (*)(GuildEntity*))(Il2CppBase() + 0x12F00E0))(this);
	}

};

}
