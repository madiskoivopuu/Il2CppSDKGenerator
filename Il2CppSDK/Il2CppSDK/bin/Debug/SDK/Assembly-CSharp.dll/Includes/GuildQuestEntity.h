#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestEntity"));
	}


	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933AA8))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933B30))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(GuildQuestEntity*, float))(Il2CppBase() + 0x1933B3C))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(GuildQuestEntity*, float))(Il2CppBase() + 0x1933C40))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933D44))(this);
	}
	template <typename R = EndTimeComponent*> R get_endTime() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933D50))(this);
	}
	template <typename R = bool> R get_hasEndTime() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933DD8))(this);
	}
	template <typename R = void> R AddEndTime(int64_t newValue) {
		return ((R (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x1933DE4))(this, newValue);
	}
	template <typename R = void> R ReplaceEndTime(int64_t newValue) {
		return ((R (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x1933EE8))(this, newValue);
	}
	template <typename R = void> R RemoveEndTime() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933FEC))(this);
	}
	template <typename R = GuildComponent*> R get_guild() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1933FF8))(this);
	}
	template <typename R = bool> R get_hasGuild() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934080))(this);
	}
	template <typename R = void> R AddGuild(int64_t newId) {
		return ((R (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x193408C))(this, newId);
	}
	template <typename R = void> R ReplaceGuild(int64_t newId) {
		return ((R (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x1934190))(this, newId);
	}
	template <typename R = void> R RemoveGuild() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934294))(this);
	}
	template <typename R = GuildQuestComponent*> R get_guildQuest() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x19342A0))(this);
	}
	template <typename R = bool> R get_hasGuildQuest() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934328))(this);
	}
	template <typename R = void> R AddGuildQuest(int64_t newId) {
		return ((R (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x19336F0))(this, newId);
	}
	template <typename R = void> R ReplaceGuildQuest(int64_t newId) {
		return ((R (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x1934334))(this, newId);
	}
	template <typename R = void> R RemoveGuildQuest() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934438))(this);
	}
	template <typename R = MaxProgressComponent*> R get_maxProgress() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934444))(this);
	}
	template <typename R = bool> R get_hasMaxProgress() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x19344CC))(this);
	}
	template <typename R = void> R AddMaxProgress(int32_t newValue) {
		return ((R (*)(GuildQuestEntity*, int32_t))(Il2CppBase() + 0x19344D8))(this, newValue);
	}
	template <typename R = void> R ReplaceMaxProgress(int32_t newValue) {
		return ((R (*)(GuildQuestEntity*, int32_t))(Il2CppBase() + 0x19345DC))(this, newValue);
	}
	template <typename R = void> R RemoveMaxProgress() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x19346E0))(this);
	}
	template <typename R = MembersProgressComponent*> R get_membersProgress() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x19346EC))(this);
	}
	template <typename R = bool> R get_hasMembersProgress() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934774))(this);
	}
	template <typename R = void> R AddMembersProgress(Il2CppArray<MemberProgress*>* newValues) {
		return ((R (*)(GuildQuestEntity*, Il2CppArray<MemberProgress*>*))(Il2CppBase() + 0x1934780))(this, newValues);
	}
	template <typename R = void> R ReplaceMembersProgress(Il2CppArray<MemberProgress*>* newValues) {
		return ((R (*)(GuildQuestEntity*, Il2CppArray<MemberProgress*>*))(Il2CppBase() + 0x1934894))(this, newValues);
	}
	template <typename R = void> R RemoveMembersProgress() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x19349A8))(this);
	}
	template <typename R = ProgressComponent*> R get_progress() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x19349B4))(this);
	}
	template <typename R = bool> R get_hasProgress() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934A3C))(this);
	}
	template <typename R = void> R AddProgress(int32_t newValue) {
		return ((R (*)(GuildQuestEntity*, int32_t))(Il2CppBase() + 0x1934A48))(this, newValue);
	}
	template <typename R = void> R ReplaceProgress(int32_t newValue) {
		return ((R (*)(GuildQuestEntity*, int32_t))(Il2CppBase() + 0x1934B4C))(this, newValue);
	}
	template <typename R = void> R RemoveProgress() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934C50))(this);
	}
	template <typename R = QuestComponent*> R get_quest() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x19333FC))(this);
	}
	template <typename R = bool> R get_hasQuest() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934C5C))(this);
	}
	template <typename R = void> R AddQuest(Il2CppString* newName) {
		return ((R (*)(GuildQuestEntity*, Il2CppString*))(Il2CppBase() + 0x1934C68))(this, newName);
	}
	template <typename R = void> R ReplaceQuest(Il2CppString* newName) {
		return ((R (*)(GuildQuestEntity*, Il2CppString*))(Il2CppBase() + 0x1934D7C))(this, newName);
	}
	template <typename R = void> R RemoveQuest() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934E90))(this);
	}
	template <typename R = ResultComponent*> R get_result() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934E9C))(this);
	}
	template <typename R = bool> R get_hasResult() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1934F24))(this);
	}
	template <typename R = void> R AddResult(bool newWin, int32_t newBonusReward) {
		return ((R (*)(GuildQuestEntity*, bool, int32_t))(Il2CppBase() + 0x1934F30))(this, newWin, newBonusReward);
	}
	template <typename R = void> R ReplaceResult(bool newWin, int32_t newBonusReward) {
		return ((R (*)(GuildQuestEntity*, bool, int32_t))(Il2CppBase() + 0x1935040))(this, newWin, newBonusReward);
	}
	template <typename R = void> R RemoveResult() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x1935150))(this);
	}
	template <typename R = StartTimeComponent*> R get_startTime() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x193515C))(this);
	}
	template <typename R = bool> R get_hasStartTime() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x19351E4))(this);
	}
	template <typename R = void> R AddStartTime(int64_t newValue) {
		return ((R (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x19351F0))(this, newValue);
	}
	template <typename R = void> R ReplaceStartTime(int64_t newValue) {
		return ((R (*)(GuildQuestEntity*, int64_t))(Il2CppBase() + 0x19352F4))(this, newValue);
	}
	template <typename R = void> R RemoveStartTime() {
		return ((R (*)(GuildQuestEntity*))(Il2CppBase() + 0x19353F8))(this);
	}

};

