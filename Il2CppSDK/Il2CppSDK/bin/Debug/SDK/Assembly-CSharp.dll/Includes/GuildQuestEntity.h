#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestEntity"));
	}


	template <typename T = uintptr_t> T get_duration() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933AA8))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933B30))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(GuildQuestEntity*, float))(Il2CppBase() + 0x1933B3C))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(GuildQuestEntity*, float))(Il2CppBase() + 0x1933C40))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933D44))(this);
	}
	template <typename T = uintptr_t> T get_endTime() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933D50))(this);
	}
	template <typename T = bool> T get_hasEndTime() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933DD8))(this);
	}
	template <typename T = void> T AddEndTime(int64_t newValue) {
		return ((T (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x1933DE4))(this, newValue);
	}
	template <typename T = void> T ReplaceEndTime(int64_t newValue) {
		return ((T (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x1933EE8))(this, newValue);
	}
	template <typename T = void> T RemoveEndTime() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933FEC))(this);
	}
	template <typename T = uintptr_t> T get_guild() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933FF8))(this);
	}
	template <typename T = bool> T get_hasGuild() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934080))(this);
	}
	template <typename T = void> T AddGuild(int64_t newId) {
		return ((T (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x193408C))(this, newId);
	}
	template <typename T = void> T ReplaceGuild(int64_t newId) {
		return ((T (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x1934190))(this, newId);
	}
	template <typename T = void> T RemoveGuild() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934294))(this);
	}
	template <typename T = uintptr_t> T get_guildQuest() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x19342A0))(this);
	}
	template <typename T = bool> T get_hasGuildQuest() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934328))(this);
	}
	template <typename T = void> T AddGuildQuest(int64_t newId) {
		return ((T (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x19336F0))(this, newId);
	}
	template <typename T = void> T ReplaceGuildQuest(int64_t newId) {
		return ((T (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x1934334))(this, newId);
	}
	template <typename T = void> T RemoveGuildQuest() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934438))(this);
	}
	template <typename T = uintptr_t> T get_maxProgress() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934444))(this);
	}
	template <typename T = bool> T get_hasMaxProgress() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x19344CC))(this);
	}
	template <typename T = void> T AddMaxProgress(int32_t newValue) {
		return ((T (*)(GuildQuestEntity*, int32_t))(Il2CppBase() + 0x19344D8))(this, newValue);
	}
	template <typename T = void> T ReplaceMaxProgress(int32_t newValue) {
		return ((T (*)(GuildQuestEntity*, int32_t))(Il2CppBase() + 0x19345DC))(this, newValue);
	}
	template <typename T = void> T RemoveMaxProgress() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x19346E0))(this);
	}
	template <typename T = uintptr_t> T get_membersProgress() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x19346EC))(this);
	}
	template <typename T = bool> T get_hasMembersProgress() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934774))(this);
	}
	template <typename T = void> T AddMembersProgress(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GuildQuestEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1934780))(this, newValues);
	}
	template <typename T = void> T ReplaceMembersProgress(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GuildQuestEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1934894))(this, newValues);
	}
	template <typename T = void> T RemoveMembersProgress() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x19349A8))(this);
	}
	template <typename T = uintptr_t> T get_progress() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x19349B4))(this);
	}
	template <typename T = bool> T get_hasProgress() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934A3C))(this);
	}
	template <typename T = void> T AddProgress(int32_t newValue) {
		return ((T (*)(GuildQuestEntity*, int32_t))(Il2CppBase() + 0x1934A48))(this, newValue);
	}
	template <typename T = void> T ReplaceProgress(int32_t newValue) {
		return ((T (*)(GuildQuestEntity*, int32_t))(Il2CppBase() + 0x1934B4C))(this, newValue);
	}
	template <typename T = void> T RemoveProgress() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934C50))(this);
	}
	template <typename T = uintptr_t> T get_quest() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x19333FC))(this);
	}
	template <typename T = bool> T get_hasQuest() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934C5C))(this);
	}
	template <typename T = void> T AddQuest(Il2CppString* newName) {
		return ((T (*)(GuildQuestEntity*, Il2CppString*))(Il2CppBase() + 0x1934C68))(this, newName);
	}
	template <typename T = void> T ReplaceQuest(Il2CppString* newName) {
		return ((T (*)(GuildQuestEntity*, Il2CppString*))(Il2CppBase() + 0x1934D7C))(this, newName);
	}
	template <typename T = void> T RemoveQuest() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934E90))(this);
	}
	template <typename T = uintptr_t> T get_result() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934E9C))(this);
	}
	template <typename T = bool> T get_hasResult() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934F24))(this);
	}
	template <typename T = void> T AddResult(bool newWin, int32_t newBonusReward) {
		return ((T (*)(GuildQuestEntity*, bool, int32_t))(Il2CppBase() + 0x1934F30))(this, newWin, newBonusReward);
	}
	template <typename T = void> T ReplaceResult(bool newWin, int32_t newBonusReward) {
		return ((T (*)(GuildQuestEntity*, bool, int32_t))(Il2CppBase() + 0x1935040))(this, newWin, newBonusReward);
	}
	template <typename T = void> T RemoveResult() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x1935150))(this);
	}
	template <typename T = uintptr_t> T get_startTime() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x193515C))(this);
	}
	template <typename T = bool> T get_hasStartTime() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x19351E4))(this);
	}
	template <typename T = void> T AddStartTime(int64_t newValue) {
		return ((T (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x19351F0))(this, newValue);
	}
	template <typename T = void> T ReplaceStartTime(int64_t newValue) {
		return ((T (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x19352F4))(this, newValue);
	}
	template <typename T = void> T RemoveStartTime() {
		return ((T (*)(GuildQuestEntity*))(Il2CppBase() + 0x19353F8))(this);
	}

};

}
