#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestExtensions"));
	}


	template <typename T = bool> static T HasPermissionToStartGuildQuest(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0x193540C))(0, account);
	}
	template <typename T = bool> static T IsActive(GuildQuestEntity* guildQuest) {
		return ((T (*)(void *, GuildQuestEntity*))(Il2CppBase() + 0x19335EC))(0, guildQuest);
	}
	template <typename T = bool> static T IsWin(GuildQuestEntity* guildQuest) {
		return ((T (*)(void *, GuildQuestEntity*))(Il2CppBase() + 0x1935430))(0, guildQuest);
	}
	template <typename T = bool> static T IsLose(GuildQuestEntity* guildQuest) {
		return ((T (*)(void *, GuildQuestEntity*))(Il2CppBase() + 0x1935484))(0, guildQuest);
	}
	template <typename T = bool> static T IsActual(GuildQuestEntity* guildQuest, int64_t now) {
		return ((T (*)(void *, GuildQuestEntity*, int64_t))(Il2CppBase() + 0x1933348))(0, guildQuest, now);
	}
	template <typename T = int64_t> static T FinishTime(GuildQuestEntity* guildQuest) {
		return ((T (*)(void *, GuildQuestEntity*))(Il2CppBase() + 0x19354D8))(0, guildQuest);
	}
	template <typename T = int32_t> static T GetPlayerProgress(GuildQuestEntity* guildQuest, int64_t playerId) {
		return ((T (*)(void *, GuildQuestEntity*, int64_t))(Il2CppBase() + 0x193557C))(0, guildQuest, playerId);
	}
	template <typename T = GuildQuestDifficulty*> static T GetDifficulty(GuildQuestEntity* guildQuest, ICommonContexts* world) {
		return ((T (*)(void *, GuildQuestEntity*, ICommonContexts*))(Il2CppBase() + 0x1935608))(0, guildQuest, world);
	}
	template <typename T = StartGuildQuestResult*> static T CanStartAnyGuildQuest(AccountEntity* account, ICommonContexts* world, ConfigFromServer* configFromServer, int64_t now, GuildEntity* guildEntity) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*, ConfigFromServer*, int64_t, GuildEntity*))(Il2CppBase() + 0x1935720))(0, account, world, configFromServer, now, guildEntity);
	}
	template <typename T = StartGuildQuestResult*> static T CanStartGuildQuest(AccountEntity* account, ICommonContexts* world, ConfigFromServer* configFromServer, Il2CppString* questName, int64_t now, GuildEntity* guildEntity) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*, ConfigFromServer*, Il2CppString*, int64_t, GuildEntity*))(Il2CppBase() + 0x1935B1C))(0, account, world, configFromServer, questName, now, guildEntity);
	}
	template <typename T = bool> static T GuildQuestsAvailableTime(int64_t now, ConfigFromServer* configFromServer) {
		return ((T (*)(void *, int64_t, ConfigFromServer*))(Il2CppBase() + 0x1935A5C))(0, now, configFromServer);
	}
	template <typename T = bool> static T GuildQuestsRestTime(int64_t now, ConfigFromServer* configFromServer) {
		return ((T (*)(void *, int64_t, ConfigFromServer*))(Il2CppBase() + 0x1936018))(0, now, configFromServer);
	}
	template <typename T = StartGuildQuestResult*> static T CanStartGuildQuest_1(GuildEntity* guild, ICommonContexts* world, ConfigFromServer* configFromServer, Il2CppString* questName, int64_t now) {
		return ((T (*)(void *, GuildEntity*, ICommonContexts*, ConfigFromServer*, Il2CppString*, int64_t))(Il2CppBase() + 0x1935CA4))(0, guild, world, configFromServer, questName, now);
	}

};

