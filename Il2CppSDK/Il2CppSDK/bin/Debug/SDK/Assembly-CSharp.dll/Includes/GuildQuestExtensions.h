#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestExtensions"));
	}


	template <typename R = bool> static R HasPermissionToStartGuildQuest(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0x193540C))(0, account);
	}
	template <typename R = bool> static R IsActive(GuildQuestEntity* guildQuest) {
		return ((R (*)(void *, GuildQuestEntity*))(Il2CppBase() + 0x19335EC))(0, guildQuest);
	}
	template <typename R = bool> static R IsWin(GuildQuestEntity* guildQuest) {
		return ((R (*)(void *, GuildQuestEntity*))(Il2CppBase() + 0x1935430))(0, guildQuest);
	}
	template <typename R = bool> static R IsLose(GuildQuestEntity* guildQuest) {
		return ((R (*)(void *, GuildQuestEntity*))(Il2CppBase() + 0x1935484))(0, guildQuest);
	}
	template <typename R = bool> static R IsActual(GuildQuestEntity* guildQuest, int64_t now) {
		return ((R (*)(void *, GuildQuestEntity*, int64_t))(Il2CppBase() + 0x1933348))(0, guildQuest, now);
	}
	template <typename R = int64_t> static R FinishTime(GuildQuestEntity* guildQuest) {
		return ((R (*)(void *, GuildQuestEntity*))(Il2CppBase() + 0x19354D8))(0, guildQuest);
	}
	template <typename R = int32_t> static R GetPlayerProgress(GuildQuestEntity* guildQuest, int64_t playerId) {
		return ((R (*)(void *, GuildQuestEntity*, int64_t))(Il2CppBase() + 0x193557C))(0, guildQuest, playerId);
	}
	template <typename R = GuildQuestDifficulty> static R GetDifficulty(GuildQuestEntity* guildQuest, ICommonContexts* world) {
		return ((R (*)(void *, GuildQuestEntity*, ICommonContexts*))(Il2CppBase() + 0x1935608))(0, guildQuest, world);
	}
	template <typename R = StartGuildQuestResult> static R CanStartAnyGuildQuest(AccountEntity* account, ICommonContexts* world, ConfigFromServer configFromServer, int64_t now, GuildEntity* guildEntity) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*, ConfigFromServer, int64_t, GuildEntity*))(Il2CppBase() + 0x1935720))(0, account, world, configFromServer, now, guildEntity);
	}
	template <typename R = StartGuildQuestResult> static R CanStartGuildQuest(AccountEntity* account, ICommonContexts* world, ConfigFromServer configFromServer, Il2CppString* questName, int64_t now, GuildEntity* guildEntity) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*, ConfigFromServer, Il2CppString*, int64_t, GuildEntity*))(Il2CppBase() + 0x1935B1C))(0, account, world, configFromServer, questName, now, guildEntity);
	}
	template <typename R = bool> static R GuildQuestsAvailableTime(int64_t now, ConfigFromServer configFromServer) {
		return ((R (*)(void *, int64_t, ConfigFromServer))(Il2CppBase() + 0x1935A5C))(0, now, configFromServer);
	}
	template <typename R = bool> static R GuildQuestsRestTime(int64_t now, ConfigFromServer configFromServer) {
		return ((R (*)(void *, int64_t, ConfigFromServer))(Il2CppBase() + 0x1936018))(0, now, configFromServer);
	}
	template <typename R = StartGuildQuestResult> static R CanStartGuildQuest_1(GuildEntity* guild, ICommonContexts* world, ConfigFromServer configFromServer, Il2CppString* questName, int64_t now) {
		return ((R (*)(void *, GuildEntity*, ICommonContexts*, ConfigFromServer, Il2CppString*, int64_t))(Il2CppBase() + 0x1935CA4))(0, guild, world, configFromServer, questName, now);
	}

};

