#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReplicationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReplicationEntity"));
	}

	template <typename R = ClanContextComponent*> static R& clanContextComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ClanInviteReasonComponent*> static R& clanInviteReasonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = ClanReasonComponent*> static R& clanReasonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = DiplomacyContextComponent*> static R& diplomacyContextComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = GuildContextComponent*> static R& guildContextComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = GuildInviteContextComponent*> static R& guildInviteContextComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = GuildInviteReasonComponent*> static R& guildInviteReasonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = GuildQuestContextComponent*> static R& guildQuestContextComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = GuildQuestReasonComponent*> static R& guildQuestReasonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = GuildReasonComponent*> static R& guildReasonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = InviteContextComponent*> static R& inviteContextComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = PlayerContextComponent*> static R& playerContextComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = PvPContextComponent*> static R& pvPContextComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = StoreDataContextComponent*> static R& storeDataContextComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename R = TournamentContextComponent*> static R& tournamentContextComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = TournamentReasonComponent*> static R& tournamentReasonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename R = VIPDataContextComponent*> static R& vIPDataContextComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename R = ArenaWorldComponent*> R get_arenaWorld() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x11933E8))(this);
	}
	template <typename R = bool> R get_hasArenaWorld() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1193470))(this);
	}
	template <typename R = void> R AddArenaWorld(int64_t newId) {
		return ((R (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x119347C))(this, newId);
	}
	template <typename R = void> R ReplaceArenaWorld(int64_t newId) {
		return ((R (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1193580))(this, newId);
	}
	template <typename R = void> R RemoveArenaWorld() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1193684))(this);
	}
	template <typename R = bool> R get_isClanContext() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1193690))(this);
	}
	template <typename R = void> R set_isClanContext(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x119369C))(this, value);
	}
	template <typename R = bool> R get_isClanInviteReason() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x11937B4))(this);
	}
	template <typename R = void> R set_isClanInviteReason(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x11937C0))(this, value);
	}
	template <typename R = bool> R get_isClanReason() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x11938D8))(this);
	}
	template <typename R = void> R set_isClanReason(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x11938E4))(this, value);
	}
	template <typename R = bool> R get_isDiplomacyContext() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x11939FC))(this);
	}
	template <typename R = void> R set_isDiplomacyContext(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1193A08))(this, value);
	}
	template <typename R = EntityComponent*> R get_entity() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1193B20))(this);
	}
	template <typename R = bool> R get_hasEntity() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1193BA8))(this);
	}
	template <typename R = void> R AddEntity(int64_t newId) {
		return ((R (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1193BB4))(this, newId);
	}
	template <typename R = void> R ReplaceEntity(int64_t newId) {
		return ((R (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1193CB8))(this, newId);
	}
	template <typename R = void> R RemoveEntity() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1193DBC))(this);
	}
	template <typename R = bool> R get_isGuildContext() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1193DC8))(this);
	}
	template <typename R = void> R set_isGuildContext(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1193DD4))(this, value);
	}
	template <typename R = bool> R get_isGuildInviteContext() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1193EEC))(this);
	}
	template <typename R = void> R set_isGuildInviteContext(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1193EF8))(this, value);
	}
	template <typename R = bool> R get_isGuildInviteReason() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194010))(this);
	}
	template <typename R = void> R set_isGuildInviteReason(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x119401C))(this, value);
	}
	template <typename R = bool> R get_isGuildQuestContext() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194134))(this);
	}
	template <typename R = void> R set_isGuildQuestContext(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1194140))(this, value);
	}
	template <typename R = bool> R get_isGuildQuestReason() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194258))(this);
	}
	template <typename R = void> R set_isGuildQuestReason(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1194264))(this, value);
	}
	template <typename R = bool> R get_isGuildReason() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x119437C))(this);
	}
	template <typename R = void> R set_isGuildReason(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1194388))(this, value);
	}
	template <typename R = IncomeComponent*> R get_income() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x11944A0))(this);
	}
	template <typename R = bool> R get_hasIncome() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194528))(this);
	}
	template <typename R = void> R AddIncome(bool newValue) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1194534))(this, newValue);
	}
	template <typename R = void> R ReplaceIncome(bool newValue) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x119463C))(this, newValue);
	}
	template <typename R = void> R RemoveIncome() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194744))(this);
	}
	template <typename R = bool> R get_isInviteContext() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194750))(this);
	}
	template <typename R = void> R set_isInviteContext(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x119475C))(this, value);
	}
	template <typename R = MapWorldComponent*> R get_mapWorld() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194874))(this);
	}
	template <typename R = bool> R get_hasMapWorld() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x11948FC))(this);
	}
	template <typename R = void> R AddMapWorld(int64_t newId) {
		return ((R (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1194908))(this, newId);
	}
	template <typename R = void> R ReplaceMapWorld(int64_t newId) {
		return ((R (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1194A0C))(this, newId);
	}
	template <typename R = void> R RemoveMapWorld() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194B10))(this);
	}
	template <typename R = bool> R get_isPlayerContext() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194B1C))(this);
	}
	template <typename R = void> R set_isPlayerContext(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1194B28))(this, value);
	}
	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194C40))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194CC8))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1194CD4))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(ReplicationEntity*, int64_t))(Il2CppBase() + 0x1194DD8))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194EDC))(this);
	}
	template <typename R = bool> R get_isPvPContext() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1194EE8))(this);
	}
	template <typename R = void> R set_isPvPContext(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1194EF4))(this, value);
	}
	template <typename R = bool> R get_isStoreDataContext() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x119500C))(this);
	}
	template <typename R = void> R set_isStoreDataContext(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1195018))(this, value);
	}
	template <typename R = bool> R get_isTournamentContext() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1195130))(this);
	}
	template <typename R = void> R set_isTournamentContext(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x119513C))(this, value);
	}
	template <typename R = bool> R get_isTournamentReason() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1195254))(this);
	}
	template <typename R = void> R set_isTournamentReason(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1195260))(this, value);
	}
	template <typename R = bool> R get_isVIPDataContext() {
		return ((R (*)(ReplicationEntity*))(Il2CppBase() + 0x1195378))(this);
	}
	template <typename R = void> R set_isVIPDataContext(bool value) {
		return ((R (*)(ReplicationEntity*, bool))(Il2CppBase() + 0x1195384))(this, value);
	}

};

