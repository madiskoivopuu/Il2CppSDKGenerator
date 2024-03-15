#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildEntity"));
	}

	template <typename R = AvatarComponent*> static R& avatarComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EDF80))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(GuildEntity*, bool))(Il2CppBase() + 0x12EBE54))(this, value);
	}
	template <typename R = CurrentWeekRankPointsComponent*> R get_currentWeekRankPoints() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EDF8C))(this);
	}
	template <typename R = bool> R get_hasCurrentWeekRankPoints() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE014))(this);
	}
	template <typename R = void> R AddCurrentWeekRankPoints(int32_t newCount) {
		return ((R (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EE020))(this, newCount);
	}
	template <typename R = void> R ReplaceCurrentWeekRankPoints(int32_t newCount) {
		return ((R (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EE124))(this, newCount);
	}
	template <typename R = void> R RemoveCurrentWeekRankPoints() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE228))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE234))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE2BC))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(GuildEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12EE2C8))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(GuildEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12EE3F0))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE518))(this);
	}
	template <typename R = GuildComponent*> R get_guild() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE524))(this);
	}
	template <typename R = bool> R get_hasGuild() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE5AC))(this);
	}
	template <typename R = void> R AddGuild(int64_t newId) {
		return ((R (*)(GuildEntity*, int64_t))(Il2CppBase() + 0x12EB9B8))(this, newId);
	}
	template <typename R = void> R ReplaceGuild(int64_t newId) {
		return ((R (*)(GuildEntity*, int64_t))(Il2CppBase() + 0x12EE5B8))(this, newId);
	}
	template <typename R = void> R RemoveGuild() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE6BC))(this);
	}
	template <typename R = GuildLanguageComponent*> R get_guildLanguage() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE6C8))(this);
	}
	template <typename R = bool> R get_hasGuildLanguage() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE750))(this);
	}
	template <typename R = void> R AddGuildLanguage(int32_t newValue) {
		return ((R (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EE75C))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildLanguage(int32_t newValue) {
		return ((R (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EE860))(this, newValue);
	}
	template <typename R = void> R RemoveGuildLanguage() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE964))(this);
	}
	template <typename R = GuildTagComponent*> R get_guildTag() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE970))(this);
	}
	template <typename R = bool> R get_hasGuildTag() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EE9F8))(this);
	}
	template <typename R = void> R AddGuildTag(Il2CppString* newValue) {
		return ((R (*)(GuildEntity*, Il2CppString*))(Il2CppBase() + 0x12EEA04))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildTag(Il2CppString* newValue) {
		return ((R (*)(GuildEntity*, Il2CppString*))(Il2CppBase() + 0x12EEB18))(this, newValue);
	}
	template <typename R = void> R RemoveGuildTag() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EEC2C))(this);
	}
	template <typename R = GuildTypeComponent*> R get_guildType() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EEC38))(this);
	}
	template <typename R = bool> R get_hasGuildType() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EECC0))(this);
	}
	template <typename R = void> R AddGuildType(GuildType newType) {
		return ((R (*)(GuildEntity*, GuildType))(Il2CppBase() + 0x12EECCC))(this, newType);
	}
	template <typename R = void> R ReplaceGuildType(GuildType newType) {
		return ((R (*)(GuildEntity*, GuildType))(Il2CppBase() + 0x12EEDD0))(this, newType);
	}
	template <typename R = void> R RemoveGuildType() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EEED4))(this);
	}
	template <typename R = KilledBosses*> R get_killedBosses() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EEEE0))(this);
	}
	template <typename R = bool> R get_hasKilledBosses() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EEF68))(this);
	}
	template <typename R = void> R AddKilledBosses(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GuildEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x12EEF74))(this, newNames);
	}
	template <typename R = void> R ReplaceKilledBosses(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GuildEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x12EF088))(this, newNames);
	}
	template <typename R = void> R RemoveKilledBosses() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EF19C))(this);
	}
	template <typename R = LeaderComponent*> R get_leader() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EF1A8))(this);
	}
	template <typename R = bool> R get_hasLeader() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EF230))(this);
	}
	template <typename R = void> R AddLeader(int64_t newId) {
		return ((R (*)(GuildEntity*, int64_t))(Il2CppBase() + 0x12EF23C))(this, newId);
	}
	template <typename R = void> R ReplaceLeader(int64_t newId) {
		return ((R (*)(GuildEntity*, int64_t))(Il2CppBase() + 0x12EF340))(this, newId);
	}
	template <typename R = void> R RemoveLeader() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EF444))(this);
	}
	template <typename R = MembersCountComponent*> R get_membersCount() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12E4998))(this);
	}
	template <typename R = bool> R get_hasMembersCount() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EF450))(this);
	}
	template <typename R = void> R AddMembersCount(int32_t newCount) {
		return ((R (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EF45C))(this, newCount);
	}
	template <typename R = void> R ReplaceMembersCount(int32_t newCount) {
		return ((R (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EF560))(this, newCount);
	}
	template <typename R = void> R RemoveMembersCount() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EF664))(this);
	}
	template <typename R = MessageOfTheDayComponent*> R get_messageOfTheDay() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EC4C8))(this);
	}
	template <typename R = bool> R get_hasMessageOfTheDay() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EC4BC))(this);
	}
	template <typename R = void> R AddMessageOfTheDay(uint8_t newType, Il2CppString* newText) {
		return ((R (*)(GuildEntity*, uint8_t, Il2CppString*))(Il2CppBase() + 0x12EF670))(this, newType, newText);
	}
	template <typename R = void> R ReplaceMessageOfTheDay(uint8_t newType, Il2CppString* newText) {
		return ((R (*)(GuildEntity*, uint8_t, Il2CppString*))(Il2CppBase() + 0x12EF78C))(this, newType, newText);
	}
	template <typename R = void> R RemoveMessageOfTheDay() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EF8A8))(this);
	}
	template <typename R = NameComponent*> R get_name() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EF8B4))(this);
	}
	template <typename R = bool> R get_hasName() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EF93C))(this);
	}
	template <typename R = void> R AddName(Il2CppString* newValue) {
		return ((R (*)(GuildEntity*, Il2CppString*))(Il2CppBase() + 0x12EF948))(this, newValue);
	}
	template <typename R = void> R ReplaceName(Il2CppString* newValue) {
		return ((R (*)(GuildEntity*, Il2CppString*))(Il2CppBase() + 0x12EFA5C))(this, newValue);
	}
	template <typename R = void> R RemoveName() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EFB70))(this);
	}
	template <typename R = PreviousWeekRankPointsComponent*> R get_previousWeekRankPoints() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EFB7C))(this);
	}
	template <typename R = bool> R get_hasPreviousWeekRankPoints() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EFC04))(this);
	}
	template <typename R = void> R AddPreviousWeekRankPoints(int32_t newCount) {
		return ((R (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EFC10))(this, newCount);
	}
	template <typename R = void> R ReplacePreviousWeekRankPoints(int32_t newCount) {
		return ((R (*)(GuildEntity*, int32_t))(Il2CppBase() + 0x12EFD14))(this, newCount);
	}
	template <typename R = void> R RemovePreviousWeekRankPoints() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EFE18))(this);
	}
	template <typename R = RegionComponent*> R get_region() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EFE24))(this);
	}
	template <typename R = bool> R get_hasRegion() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12EFEAC))(this);
	}
	template <typename R = void> R AddRegion(Il2CppString* newName) {
		return ((R (*)(GuildEntity*, Il2CppString*))(Il2CppBase() + 0x12EFEB8))(this, newName);
	}
	template <typename R = void> R ReplaceRegion(Il2CppString* newName) {
		return ((R (*)(GuildEntity*, Il2CppString*))(Il2CppBase() + 0x12EFFCC))(this, newName);
	}
	template <typename R = void> R RemoveRegion() {
		return ((R (*)(GuildEntity*))(Il2CppBase() + 0x12F00E0))(this);
	}

};

