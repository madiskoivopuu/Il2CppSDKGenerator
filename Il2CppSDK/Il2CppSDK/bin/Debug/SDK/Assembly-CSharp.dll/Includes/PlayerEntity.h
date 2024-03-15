#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerEntity"));
	}

	template <typename R = AvatarComponent*> static R& avatarComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = OnlineComponent*> static R& onlineComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1564138))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15644C0))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(PlayerEntity*, bool))(Il2CppBase() + 0x1562FD4))(this, value);
	}
	template <typename R = CellComponent*> R get_cell() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1562628))(this);
	}
	template <typename R = bool> R get_hasCell() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x156261C))(this);
	}
	template <typename R = void> R AddCell(uint8_t newId) {
		return ((R (*)(PlayerEntity*, uint8_t))(Il2CppBase() + 0x15644CC))(this, newId);
	}
	template <typename R = void> R ReplaceCell(uint8_t newId) {
		return ((R (*)(PlayerEntity*, uint8_t))(Il2CppBase() + 0x15645D0))(this, newId);
	}
	template <typename R = void> R RemoveCell() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15646D4))(this);
	}
	template <typename R = ClanComponent*> R get_clan() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15646E0))(this);
	}
	template <typename R = bool> R get_hasClan() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1564768))(this);
	}
	template <typename R = void> R AddClan(int64_t newId) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1564774))(this, newId);
	}
	template <typename R = void> R ReplaceClan(int64_t newId) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1564878))(this, newId);
	}
	template <typename R = void> R RemoveClan() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x156497C))(this);
	}
	template <typename R = ClanJoinTimeComponent*> R get_clanJoinTime() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1564988))(this);
	}
	template <typename R = bool> R get_hasClanJoinTime() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1564A10))(this);
	}
	template <typename R = void> R AddClanJoinTime(int64_t newValue) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1564A1C))(this, newValue);
	}
	template <typename R = void> R ReplaceClanJoinTime(int64_t newValue) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1564B20))(this, newValue);
	}
	template <typename R = void> R RemoveClanJoinTime() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1564C24))(this);
	}
	template <typename R = DailyTournamentsComponent*> R get_dailyTournaments() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1562C2C))(this);
	}
	template <typename R = bool> R get_hasDailyTournaments() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1562C20))(this);
	}
	template <typename R = void> R AddDailyTournaments(int32_t newCount, int64_t newNextTimeActivated, int64_t newSearchStarted) {
		return ((R (*)(PlayerEntity*, int32_t, int64_t, int64_t))(Il2CppBase() + 0x1564C30))(this, newCount, newNextTimeActivated, newSearchStarted);
	}
	template <typename R = void> R ReplaceDailyTournaments(int32_t newCount, int64_t newNextTimeActivated, int64_t newSearchStarted) {
		return ((R (*)(PlayerEntity*, int32_t, int64_t, int64_t))(Il2CppBase() + 0x1564D48))(this, newCount, newNextTimeActivated, newSearchStarted);
	}
	template <typename R = void> R RemoveDailyTournaments() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1564E60))(this);
	}
	template <typename R = DistrictLevelComponent*> R get_districtLevel() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1564E6C))(this);
	}
	template <typename R = bool> R get_hasDistrictLevel() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1564EF4))(this);
	}
	template <typename R = void> R AddDistrictLevel(int32_t newValue) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1564F00))(this, newValue);
	}
	template <typename R = void> R ReplaceDistrictLevel(int32_t newValue) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1565004))(this, newValue);
	}
	template <typename R = void> R RemoveDistrictLevel() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1565108))(this);
	}
	template <typename R = GlobalTournamentPointsComponent*> R get_globalTournamentPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1565114))(this);
	}
	template <typename R = bool> R get_hasGlobalTournamentPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x156519C))(this);
	}
	template <typename R = void> R AddGlobalTournamentPoints(int32_t newCount) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x15651A8))(this, newCount);
	}
	template <typename R = void> R ReplaceGlobalTournamentPoints(int32_t newCount) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x15652AC))(this, newCount);
	}
	template <typename R = void> R RemoveGlobalTournamentPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15653B0))(this);
	}
	template <typename R = GuildCoinsComponent*> R get_guildCoins() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15653BC))(this);
	}
	template <typename R = bool> R get_hasGuildCoins() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1565444))(this);
	}
	template <typename R = void> R AddGuildCoins(int32_t newCount) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1565450))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildCoins(int32_t newCount) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1565554))(this, newCount);
	}
	template <typename R = void> R RemoveGuildCoins() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1565658))(this);
	}
	template <typename R = GuildComponent*> R get_guild() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1562780))(this);
	}
	template <typename R = bool> R get_hasGuild() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1562774))(this);
	}
	template <typename R = void> R AddGuild(int64_t newId) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1565664))(this, newId);
	}
	template <typename R = void> R ReplaceGuild(int64_t newId) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1565768))(this, newId);
	}
	template <typename R = void> R RemoveGuild() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x156586C))(this);
	}
	template <typename R = GuildJoinTimeComponent*> R get_guildJoinTime() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1565878))(this);
	}
	template <typename R = bool> R get_hasGuildJoinTime() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1565900))(this);
	}
	template <typename R = void> R AddGuildJoinTime(int64_t newValue) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x156590C))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildJoinTime(int64_t newValue) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1565A10))(this, newValue);
	}
	template <typename R = void> R RemoveGuildJoinTime() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1565B14))(this);
	}
	template <typename R = GuildRoleComponent*> R get_guildRole() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1565B20))(this);
	}
	template <typename R = bool> R get_hasGuildRole() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1565BA8))(this);
	}
	template <typename R = void> R AddGuildRole(GuildRole* newType) {
		return ((R (*)(PlayerEntity*, GuildRole*))(Il2CppBase() + 0x1565BB4))(this, newType);
	}
	template <typename R = void> R ReplaceGuildRole(GuildRole* newType) {
		return ((R (*)(PlayerEntity*, GuildRole*))(Il2CppBase() + 0x1565CB8))(this, newType);
	}
	template <typename R = void> R RemoveGuildRole() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1565DBC))(this);
	}
	template <typename R = GuildTagComponent*> R get_guildTag() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1565DC8))(this);
	}
	template <typename R = bool> R get_hasGuildTag() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1565E50))(this);
	}
	template <typename R = void> R AddGuildTag(Il2CppString* newValue) {
		return ((R (*)(PlayerEntity*, Il2CppString*))(Il2CppBase() + 0x1565E5C))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildTag(Il2CppString* newValue) {
		return ((R (*)(PlayerEntity*, Il2CppString*))(Il2CppBase() + 0x1565F70))(this, newValue);
	}
	template <typename R = void> R RemoveGuildTag() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1566084))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1566090))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1566118))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(PlayerEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1566124))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(PlayerEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x156627C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15663D4))(this);
	}
	template <typename R = LastLoginComponent*> R get_lastLogin() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15663E0))(this);
	}
	template <typename R = bool> R get_hasLastLogin() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1566468))(this);
	}
	template <typename R = void> R AddLastLogin(int64_t newValue) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1566474))(this, newValue);
	}
	template <typename R = void> R ReplaceLastLogin(int64_t newValue) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1566578))(this, newValue);
	}
	template <typename R = void> R RemoveLastLogin() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x156667C))(this);
	}
	template <typename R = LevelComponent*> R get_level() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1566688))(this);
	}
	template <typename R = bool> R get_hasLevel() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1566710))(this);
	}
	template <typename R = void> R AddLevel(float newValue) {
		return ((R (*)(PlayerEntity*, float))(Il2CppBase() + 0x156671C))(this, newValue);
	}
	template <typename R = void> R ReplaceLevel(float newValue) {
		return ((R (*)(PlayerEntity*, float))(Il2CppBase() + 0x1566820))(this, newValue);
	}
	template <typename R = void> R RemoveLevel() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1566924))(this);
	}
	template <typename R = bool> R get_isOnline() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1566930))(this);
	}
	template <typename R = void> R set_isOnline(bool value) {
		return ((R (*)(PlayerEntity*, bool))(Il2CppBase() + 0x156693C))(this, value);
	}
	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1564438))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x156442C))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x15629FC))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x1566A54))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1566B58))(this);
	}
	template <typename R = PlayerNameComponent*> R get_playerName() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15643A4))(this);
	}
	template <typename R = bool> R get_hasPlayerName() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1564398))(this);
	}
	template <typename R = void> R AddPlayerName(Il2CppString* newValue) {
		return ((R (*)(PlayerEntity*, Il2CppString*))(Il2CppBase() + 0x1566B64))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerName(Il2CppString* newValue) {
		return ((R (*)(PlayerEntity*, Il2CppString*))(Il2CppBase() + 0x1566C78))(this, newValue);
	}
	template <typename R = void> R RemovePlayerName() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1566D8C))(this);
	}
	template <typename R = PortalsPointsComponent*> R get_portalsPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1566D98))(this);
	}
	template <typename R = bool> R get_hasPortalsPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1566E20))(this);
	}
	template <typename R = void> R AddPortalsPoints(int32_t newCount) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1566E2C))(this, newCount);
	}
	template <typename R = void> R ReplacePortalsPoints(int32_t newCount) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1566F30))(this, newCount);
	}
	template <typename R = void> R RemovePortalsPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1567034))(this);
	}
	template <typename R = RegionComponent*> R get_region() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1567040))(this);
	}
	template <typename R = bool> R get_hasRegion() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15670C8))(this);
	}
	template <typename R = void> R AddRegion(Il2CppString* newName) {
		return ((R (*)(PlayerEntity*, Il2CppString*))(Il2CppBase() + 0x15670D4))(this, newName);
	}
	template <typename R = void> R ReplaceRegion(Il2CppString* newName) {
		return ((R (*)(PlayerEntity*, Il2CppString*))(Il2CppBase() + 0x15671E8))(this, newName);
	}
	template <typename R = void> R RemoveRegion() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15672FC))(this);
	}
	template <typename R = SaviorPointsComponent*> R get_saviorPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1567308))(this);
	}
	template <typename R = bool> R get_hasSaviorPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1567390))(this);
	}
	template <typename R = void> R AddSaviorPoints(int32_t newCount) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x156739C))(this, newCount);
	}
	template <typename R = void> R ReplaceSaviorPoints(int32_t newCount) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x15674A0))(this, newCount);
	}
	template <typename R = void> R RemoveSaviorPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15675A4))(this);
	}
	template <typename R = TournamentComponent*> R get_tournament() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1562B98))(this);
	}
	template <typename R = bool> R get_hasTournament() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1562B8C))(this);
	}
	template <typename R = void> R AddTournament(int64_t newId) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x15675B0))(this, newId);
	}
	template <typename R = void> R ReplaceTournament(int64_t newId) {
		return ((R (*)(PlayerEntity*, int64_t))(Il2CppBase() + 0x15676B4))(this, newId);
	}
	template <typename R = void> R RemoveTournament() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15677B8))(this);
	}
	template <typename R = TournamentPointsComponent*> R get_tournamentPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x15677C4))(this);
	}
	template <typename R = bool> R get_hasTournamentPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x156784C))(this);
	}
	template <typename R = void> R AddTournamentPoints(int32_t newCount) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1567858))(this, newCount);
	}
	template <typename R = void> R ReplaceTournamentPoints(int32_t newCount) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x156795C))(this, newCount);
	}
	template <typename R = void> R RemoveTournamentPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1567A60))(this);
	}
	template <typename R = WeeklyGuildPointsComponent*> R get_weeklyGuildPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1567A6C))(this);
	}
	template <typename R = bool> R get_hasWeeklyGuildPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1567AF4))(this);
	}
	template <typename R = void> R AddWeeklyGuildPoints(int32_t newCount) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1567B00))(this, newCount);
	}
	template <typename R = void> R ReplaceWeeklyGuildPoints(int32_t newCount) {
		return ((R (*)(PlayerEntity*, int32_t))(Il2CppBase() + 0x1567C04))(this, newCount);
	}
	template <typename R = void> R RemoveWeeklyGuildPoints() {
		return ((R (*)(PlayerEntity*))(Il2CppBase() + 0x1567D08))(this);
	}

};

