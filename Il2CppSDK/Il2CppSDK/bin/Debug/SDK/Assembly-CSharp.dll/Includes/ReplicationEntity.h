#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReplicationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReplicationEntity"));
	}

	template <typename T = ClanContextComponent*> static T& clanContextComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ClanInviteReasonComponent*> static T& clanInviteReasonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = ClanReasonComponent*> static T& clanReasonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = DiplomacyContextComponent*> static T& diplomacyContextComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = GuildContextComponent*> static T& guildContextComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = GuildInviteContextComponent*> static T& guildInviteContextComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = GuildInviteReasonComponent*> static T& guildInviteReasonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = GuildQuestContextComponent*> static T& guildQuestContextComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = GuildQuestReasonComponent*> static T& guildQuestReasonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = GuildReasonComponent*> static T& guildReasonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = InviteContextComponent*> static T& inviteContextComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = PlayerContextComponent*> static T& playerContextComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = PvPContextComponent*> static T& pvPContextComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = StoreDataContextComponent*> static T& storeDataContextComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = TournamentContextComponent*> static T& tournamentContextComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = TournamentReasonComponent*> static T& tournamentReasonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = VIPDataContextComponent*> static T& vIPDataContextComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = ArenaWorldComponent*> T get_arenaWorld() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x11933E8))(this);
	}
	template <typename T = bool> T get_hasArenaWorld() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1193470))(this);
	}
	template <typename T = void> T AddArenaWorld(int64_t newId) {
		return ((T (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x119347C))(this, newId);
	}
	template <typename T = void> T ReplaceArenaWorld(int64_t newId) {
		return ((T (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1193580))(this, newId);
	}
	template <typename T = void> T RemoveArenaWorld() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1193684))(this);
	}
	template <typename T = bool> T get_isClanContext() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1193690))(this);
	}
	template <typename T = void> T set_isClanContext(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x119369C))(this, value);
	}
	template <typename T = bool> T get_isClanInviteReason() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x11937B4))(this);
	}
	template <typename T = void> T set_isClanInviteReason(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x11937C0))(this, value);
	}
	template <typename T = bool> T get_isClanReason() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x11938D8))(this);
	}
	template <typename T = void> T set_isClanReason(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x11938E4))(this, value);
	}
	template <typename T = bool> T get_isDiplomacyContext() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x11939FC))(this);
	}
	template <typename T = void> T set_isDiplomacyContext(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1193A08))(this, value);
	}
	template <typename T = EntityComponent*> T get_entity() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1193B20))(this);
	}
	template <typename T = bool> T get_hasEntity() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1193BA8))(this);
	}
	template <typename T = void> T AddEntity(int64_t newId) {
		return ((T (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1193BB4))(this, newId);
	}
	template <typename T = void> T ReplaceEntity(int64_t newId) {
		return ((T (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1193CB8))(this, newId);
	}
	template <typename T = void> T RemoveEntity() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1193DBC))(this);
	}
	template <typename T = bool> T get_isGuildContext() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1193DC8))(this);
	}
	template <typename T = void> T set_isGuildContext(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1193DD4))(this, value);
	}
	template <typename T = bool> T get_isGuildInviteContext() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1193EEC))(this);
	}
	template <typename T = void> T set_isGuildInviteContext(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1193EF8))(this, value);
	}
	template <typename T = bool> T get_isGuildInviteReason() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194010))(this);
	}
	template <typename T = void> T set_isGuildInviteReason(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x119401C))(this, value);
	}
	template <typename T = bool> T get_isGuildQuestContext() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194134))(this);
	}
	template <typename T = void> T set_isGuildQuestContext(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1194140))(this, value);
	}
	template <typename T = bool> T get_isGuildQuestReason() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194258))(this);
	}
	template <typename T = void> T set_isGuildQuestReason(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1194264))(this, value);
	}
	template <typename T = bool> T get_isGuildReason() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x119437C))(this);
	}
	template <typename T = void> T set_isGuildReason(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1194388))(this, value);
	}
	template <typename T = IncomeComponent*> T get_income() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x11944A0))(this);
	}
	template <typename T = bool> T get_hasIncome() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194528))(this);
	}
	template <typename T = void> T AddIncome(bool newValue) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1194534))(this, newValue);
	}
	template <typename T = void> T ReplaceIncome(bool newValue) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x119463C))(this, newValue);
	}
	template <typename T = void> T RemoveIncome() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194744))(this);
	}
	template <typename T = bool> T get_isInviteContext() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194750))(this);
	}
	template <typename T = void> T set_isInviteContext(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x119475C))(this, value);
	}
	template <typename T = MapWorldComponent*> T get_mapWorld() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194874))(this);
	}
	template <typename T = bool> T get_hasMapWorld() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x11948FC))(this);
	}
	template <typename T = void> T AddMapWorld(int64_t newId) {
		return ((T (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1194908))(this, newId);
	}
	template <typename T = void> T ReplaceMapWorld(int64_t newId) {
		return ((T (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1194A0C))(this, newId);
	}
	template <typename T = void> T RemoveMapWorld() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194B10))(this);
	}
	template <typename T = bool> T get_isPlayerContext() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194B1C))(this);
	}
	template <typename T = void> T set_isPlayerContext(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1194B28))(this, value);
	}
	template <typename T = PlayerIdComponent*> T get_playerId() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194C40))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194CC8))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1194CD4))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1194DD8))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194EDC))(this);
	}
	template <typename T = bool> T get_isPvPContext() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1194EE8))(this);
	}
	template <typename T = void> T set_isPvPContext(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1194EF4))(this, value);
	}
	template <typename T = bool> T get_isStoreDataContext() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x119500C))(this);
	}
	template <typename T = void> T set_isStoreDataContext(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1195018))(this, value);
	}
	template <typename T = bool> T get_isTournamentContext() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1195130))(this);
	}
	template <typename T = void> T set_isTournamentContext(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x119513C))(this, value);
	}
	template <typename T = bool> T get_isTournamentReason() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1195254))(this);
	}
	template <typename T = void> T set_isTournamentReason(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1195260))(this, value);
	}
	template <typename T = bool> T get_isVIPDataContext() {
		return ((T (*)(ReplicationEntity*))(Il2CppBase() + 0x1195378))(this);
	}
	template <typename T = void> T set_isVIPDataContext(bool value) {
		return ((T (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1195384))(this, value);
	}

};

