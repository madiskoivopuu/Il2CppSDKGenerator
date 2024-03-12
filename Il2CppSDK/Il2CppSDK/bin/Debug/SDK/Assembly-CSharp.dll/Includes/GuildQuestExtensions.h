#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestExtensions"));
	}


	template <typename T = bool> static T HasPermissionToStartGuildQuest(uintptr_t account) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x193540C))(0, account);
	}
	template <typename T = bool> static T IsActive(uintptr_t guildQuest) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19335EC))(0, guildQuest);
	}
	template <typename T = bool> static T IsWin(uintptr_t guildQuest) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1935430))(0, guildQuest);
	}
	template <typename T = bool> static T IsLose(uintptr_t guildQuest) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1935484))(0, guildQuest);
	}
	template <typename T = bool> static T IsActual(uintptr_t guildQuest, int64_t now) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1933348))(0, guildQuest, now);
	}
	template <typename T = int64_t> static T FinishTime(uintptr_t guildQuest) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19354D8))(0, guildQuest);
	}
	template <typename T = int32_t> static T GetPlayerProgress(uintptr_t guildQuest, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x193557C))(0, guildQuest, playerId);
	}
	template <typename T = uintptr_t> static T GetDifficulty(uintptr_t guildQuest, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1935608))(0, guildQuest, world);
	}
	template <typename T = uintptr_t> static T CanStartAnyGuildQuest(uintptr_t account, uintptr_t world, uintptr_t configFromServer, int64_t now, uintptr_t guildEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x1935720))(0, account, world, configFromServer, now, guildEntity);
	}
	template <typename T = uintptr_t> static T CanStartGuildQuest(uintptr_t account, uintptr_t world, uintptr_t configFromServer, Il2CppString* questName, int64_t now, uintptr_t guildEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, int64_t, uintptr_t))(Il2CppBase() + 0x1935B1C))(0, account, world, configFromServer, questName, now, guildEntity);
	}
	template <typename T = bool> static T GuildQuestsAvailableTime(int64_t now, uintptr_t configFromServer) {
		return ((T (*)(void *, int64_t, uintptr_t))(Il2CppBase() + 0x1935A5C))(0, now, configFromServer);
	}
	template <typename T = bool> static T GuildQuestsRestTime(int64_t now, uintptr_t configFromServer) {
		return ((T (*)(void *, int64_t, uintptr_t))(Il2CppBase() + 0x1936018))(0, now, configFromServer);
	}
	template <typename T = uintptr_t> static T CanStartGuildQuest_1(uintptr_t guild, uintptr_t world, uintptr_t configFromServer, Il2CppString* questName, int64_t now) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, int64_t))(Il2CppBase() + 0x1935CA4))(0, guild, world, configFromServer, questName, now);
	}

};

}
