#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerEntity"));
	}

	template <typename T = uintptr_t> static T& avatarComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& onlineComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1564138))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15644C0))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(PlayerEntity*, bool))(Il2CppBase() + 0x1562FD4))(this, value);
	}
	template <typename T = uintptr_t> T get_cell() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1562628))(this);
	}
	template <typename T = bool> T get_hasCell() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x156261C))(this);
	}
	template <typename T = void> T AddCell(unsigned char newId) {
		return ((T (*)(PlayerEntity*, unsigned char))(Il2CppBase() + 0x15644CC))(this, newId);
	}
	template <typename T = void> T ReplaceCell(unsigned char newId) {
		return ((T (*)(PlayerEntity*, unsigned char))(Il2CppBase() + 0x15645D0))(this, newId);
	}
	template <typename T = void> T RemoveCell() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15646D4))(this);
	}
	template <typename T = uintptr_t> T get_clan() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15646E0))(this);
	}
	template <typename T = bool> T get_hasClan() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1564768))(this);
	}
	template <typename T = void> T AddClan(int64_t newId) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1564774))(this, newId);
	}
	template <typename T = void> T ReplaceClan(int64_t newId) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1564878))(this, newId);
	}
	template <typename T = void> T RemoveClan() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x156497C))(this);
	}
	template <typename T = uintptr_t> T get_clanJoinTime() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1564988))(this);
	}
	template <typename T = bool> T get_hasClanJoinTime() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1564A10))(this);
	}
	template <typename T = void> T AddClanJoinTime(int64_t newValue) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1564A1C))(this, newValue);
	}
	template <typename T = void> T ReplaceClanJoinTime(int64_t newValue) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1564B20))(this, newValue);
	}
	template <typename T = void> T RemoveClanJoinTime() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1564C24))(this);
	}
	template <typename T = uintptr_t> T get_dailyTournaments() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1562C2C))(this);
	}
	template <typename T = bool> T get_hasDailyTournaments() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1562C20))(this);
	}
	template <typename T = void> T AddDailyTournaments(int32_t newCount, int64_t newNextTimeActivated, int64_t newSearchStarted) {
		return ((T (*)(PlayerEntity*, int32_t, int64_t, int64_t))(Il2CppBase() + 0x1564C30))(this, newCount, newNextTimeActivated, newSearchStarted);
	}
	template <typename T = void> T ReplaceDailyTournaments(int32_t newCount, int64_t newNextTimeActivated, int64_t newSearchStarted) {
		return ((T (*)(PlayerEntity*, int32_t, int64_t, int64_t))(Il2CppBase() + 0x1564D48))(this, newCount, newNextTimeActivated, newSearchStarted);
	}
	template <typename T = void> T RemoveDailyTournaments() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1564E60))(this);
	}
	template <typename T = uintptr_t> T get_districtLevel() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1564E6C))(this);
	}
	template <typename T = bool> T get_hasDistrictLevel() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1564EF4))(this);
	}
	template <typename T = void> T AddDistrictLevel(int32_t newValue) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1564F00))(this, newValue);
	}
	template <typename T = void> T ReplaceDistrictLevel(int32_t newValue) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1565004))(this, newValue);
	}
	template <typename T = void> T RemoveDistrictLevel() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1565108))(this);
	}
	template <typename T = uintptr_t> T get_globalTournamentPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1565114))(this);
	}
	template <typename T = bool> T get_hasGlobalTournamentPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x156519C))(this);
	}
	template <typename T = void> T AddGlobalTournamentPoints(int32_t newCount) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x15651A8))(this, newCount);
	}
	template <typename T = void> T ReplaceGlobalTournamentPoints(int32_t newCount) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x15652AC))(this, newCount);
	}
	template <typename T = void> T RemoveGlobalTournamentPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15653B0))(this);
	}
	template <typename T = uintptr_t> T get_guildCoins() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15653BC))(this);
	}
	template <typename T = bool> T get_hasGuildCoins() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1565444))(this);
	}
	template <typename T = void> T AddGuildCoins(int32_t newCount) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1565450))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildCoins(int32_t newCount) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1565554))(this, newCount);
	}
	template <typename T = void> T RemoveGuildCoins() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1565658))(this);
	}
	template <typename T = uintptr_t> T get_guild() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1562780))(this);
	}
	template <typename T = bool> T get_hasGuild() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1562774))(this);
	}
	template <typename T = void> T AddGuild(int64_t newId) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1565664))(this, newId);
	}
	template <typename T = void> T ReplaceGuild(int64_t newId) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1565768))(this, newId);
	}
	template <typename T = void> T RemoveGuild() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x156586C))(this);
	}
	template <typename T = uintptr_t> T get_guildJoinTime() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1565878))(this);
	}
	template <typename T = bool> T get_hasGuildJoinTime() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1565900))(this);
	}
	template <typename T = void> T AddGuildJoinTime(int64_t newValue) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x156590C))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildJoinTime(int64_t newValue) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1565A10))(this, newValue);
	}
	template <typename T = void> T RemoveGuildJoinTime() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1565B14))(this);
	}
	template <typename T = uintptr_t> T get_guildRole() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1565B20))(this);
	}
	template <typename T = bool> T get_hasGuildRole() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1565BA8))(this);
	}
	template <typename T = void> T AddGuildRole(uintptr_t newType) {
		return ((T (*)(PlayerEntity*, uintptr_t))(Il2CppBase() + 0x1565BB4))(this, newType);
	}
	template <typename T = void> T ReplaceGuildRole(uintptr_t newType) {
		return ((T (*)(PlayerEntity*, uintptr_t))(Il2CppBase() + 0x1565CB8))(this, newType);
	}
	template <typename T = void> T RemoveGuildRole() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1565DBC))(this);
	}
	template <typename T = uintptr_t> T get_guildTag() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1565DC8))(this);
	}
	template <typename T = bool> T get_hasGuildTag() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1565E50))(this);
	}
	template <typename T = void> T AddGuildTag(Il2CppString* newValue) {
		return ((T (*)(PlayerEntity*, Il2CppString*))(Il2CppBase() + 0x1565E5C))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildTag(Il2CppString* newValue) {
		return ((T (*)(PlayerEntity*, Il2CppString*))(Il2CppBase() + 0x1565F70))(this, newValue);
	}
	template <typename T = void> T RemoveGuildTag() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1566084))(this);
	}
	template <typename T = uintptr_t> T get_icon() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1566090))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1566118))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(PlayerEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1566124))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(PlayerEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x156627C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15663D4))(this);
	}
	template <typename T = uintptr_t> T get_lastLogin() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15663E0))(this);
	}
	template <typename T = bool> T get_hasLastLogin() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1566468))(this);
	}
	template <typename T = void> T AddLastLogin(int64_t newValue) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1566474))(this, newValue);
	}
	template <typename T = void> T ReplaceLastLogin(int64_t newValue) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1566578))(this, newValue);
	}
	template <typename T = void> T RemoveLastLogin() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x156667C))(this);
	}
	template <typename T = uintptr_t> T get_level() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1566688))(this);
	}
	template <typename T = bool> T get_hasLevel() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1566710))(this);
	}
	template <typename T = void> T AddLevel(float newValue) {
		return ((T (*)(PlayerEntity*, float))(Il2CppBase() + 0x156671C))(this, newValue);
	}
	template <typename T = void> T ReplaceLevel(float newValue) {
		return ((T (*)(PlayerEntity*, float))(Il2CppBase() + 0x1566820))(this, newValue);
	}
	template <typename T = void> T RemoveLevel() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1566924))(this);
	}
	template <typename T = bool> T get_isOnline() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1566930))(this);
	}
	template <typename T = void> T set_isOnline(bool value) {
		return ((T (*)(PlayerEntity*, bool))(Il2CppBase() + 0x156693C))(this, value);
	}
	template <typename T = uintptr_t> T get_playerId() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1564438))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x156442C))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x15629FC))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1566A54))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1566B58))(this);
	}
	template <typename T = uintptr_t> T get_playerName() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15643A4))(this);
	}
	template <typename T = bool> T get_hasPlayerName() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1564398))(this);
	}
	template <typename T = void> T AddPlayerName(Il2CppString* newValue) {
		return ((T (*)(PlayerEntity*, Il2CppString*))(Il2CppBase() + 0x1566B64))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerName(Il2CppString* newValue) {
		return ((T (*)(PlayerEntity*, Il2CppString*))(Il2CppBase() + 0x1566C78))(this, newValue);
	}
	template <typename T = void> T RemovePlayerName() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1566D8C))(this);
	}
	template <typename T = uintptr_t> T get_portalsPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1566D98))(this);
	}
	template <typename T = bool> T get_hasPortalsPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1566E20))(this);
	}
	template <typename T = void> T AddPortalsPoints(int32_t newCount) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1566E2C))(this, newCount);
	}
	template <typename T = void> T ReplacePortalsPoints(int32_t newCount) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1566F30))(this, newCount);
	}
	template <typename T = void> T RemovePortalsPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1567034))(this);
	}
	template <typename T = uintptr_t> T get_region() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1567040))(this);
	}
	template <typename T = bool> T get_hasRegion() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15670C8))(this);
	}
	template <typename T = void> T AddRegion(Il2CppString* newName) {
		return ((T (*)(PlayerEntity*, Il2CppString*))(Il2CppBase() + 0x15670D4))(this, newName);
	}
	template <typename T = void> T ReplaceRegion(Il2CppString* newName) {
		return ((T (*)(PlayerEntity*, Il2CppString*))(Il2CppBase() + 0x15671E8))(this, newName);
	}
	template <typename T = void> T RemoveRegion() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15672FC))(this);
	}
	template <typename T = uintptr_t> T get_saviorPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1567308))(this);
	}
	template <typename T = bool> T get_hasSaviorPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1567390))(this);
	}
	template <typename T = void> T AddSaviorPoints(int32_t newCount) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x156739C))(this, newCount);
	}
	template <typename T = void> T ReplaceSaviorPoints(int32_t newCount) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x15674A0))(this, newCount);
	}
	template <typename T = void> T RemoveSaviorPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15675A4))(this);
	}
	template <typename T = uintptr_t> T get_tournament() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1562B98))(this);
	}
	template <typename T = bool> T get_hasTournament() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1562B8C))(this);
	}
	template <typename T = void> T AddTournament(int64_t newId) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x15675B0))(this, newId);
	}
	template <typename T = void> T ReplaceTournament(int64_t newId) {
		return ((T (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x15676B4))(this, newId);
	}
	template <typename T = void> T RemoveTournament() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15677B8))(this);
	}
	template <typename T = uintptr_t> T get_tournamentPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x15677C4))(this);
	}
	template <typename T = bool> T get_hasTournamentPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x156784C))(this);
	}
	template <typename T = void> T AddTournamentPoints(int32_t newCount) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1567858))(this, newCount);
	}
	template <typename T = void> T ReplaceTournamentPoints(int32_t newCount) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x156795C))(this, newCount);
	}
	template <typename T = void> T RemoveTournamentPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1567A60))(this);
	}
	template <typename T = uintptr_t> T get_weeklyGuildPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1567A6C))(this);
	}
	template <typename T = bool> T get_hasWeeklyGuildPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1567AF4))(this);
	}
	template <typename T = void> T AddWeeklyGuildPoints(int32_t newCount) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1567B00))(this, newCount);
	}
	template <typename T = void> T ReplaceWeeklyGuildPoints(int32_t newCount) {
		return ((T (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1567C04))(this, newCount);
	}
	template <typename T = void> T RemoveWeeklyGuildPoints() {
		return ((T (*)(PlayerEntity*))(Il2CppBase() + 0x1567D08))(this);
	}

};

}
