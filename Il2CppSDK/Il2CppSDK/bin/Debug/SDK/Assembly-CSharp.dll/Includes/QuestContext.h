#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NewBlueprintContext`2" 

class QuestContext: NewBlueprintContext2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestContext"));
	}

	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppString*> static T& InitQuestName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GoHomeQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AutoCompleteForOldPlayersTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AutoClassForOldPlayersTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ShowShield() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FirstAct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FirstBuildQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ScoutQuestTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& StartGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& StartHUDCustomization() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GuildQuestTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SeasonQuestTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& NpcQuestTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FirstBanner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IgnoreForQuestsTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = void*> T& _aliveNameIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = void*> T& _alivesIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = void*> T& _actualIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = void*> T& _aliveActIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = void*> T& _completedNotRewardedIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = void*> T& _completedNotFullRewardedIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = void*> T& _aliveTrackingIndex() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = void*> T& _aliveWithActiveConditionIndex() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = void*> T& _aliveTagIndex() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = void*> T& _aliveTournamentIndex() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = void*> T& _aliveActivateTournamentIndex() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = void*> T& _aliveGuildQuestsIndex() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = void*> T& _aliveTrackedQuestIndex() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = void*> T& _aliveEquipIndex() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = void*> T& _aliveActQuests() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = void*> T& _aliveWithTags() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = void*> T& _aliveActivateTournament() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = void*> T& _actualTargetMarker() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = void*> T& _aliveWithAliveCondition() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = void*> T& _aliveWithActiveCondition() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}

	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11C8388))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(QuestContext*, uintptr_t))(Il2CppBase() + 0x11C8390))(this, value);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11C8574))(this);
	}
	template <typename T = uintptr_t> T GetEntityWithId(int32_t Id) {
		return ((T (*)(QuestContext*, int32_t))(Il2CppBase() + 0x11C890C))(this, Id);
	}
	template <typename T = int32_t> T GetQuestProgress(int64_t owner, Il2CppString* name) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11C8B1C))(this, owner, name);
	}
	template <typename T = uintptr_t> T GetAliveQuest(int64_t owner, Il2CppString* name) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11C8B6C))(this, owner, name);
	}
	template <typename T = void*> T GetAliveActQuests() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11C8EB4))(this);
	}
	template <typename T = void*> T GetAliveActQuests_1(int64_t owner, Il2CppString* actName) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11C9160))(this, owner, actName);
	}
	template <typename T = void*> T GetAliveQuests(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11C9384))(this, owner);
	}
	template <typename T = void*> T GetActualQuests(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11C9658))(this, owner);
	}
	template <typename T = void*> T GetCompletedNotRewarded(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11C996C))(this, owner);
	}
	template <typename T = void*> T GetCompletedNotFullRewarded(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11C9D54))(this, owner);
	}
	template <typename T = void*> T GetAliveTracking(int64_t owner, uintptr_t slot) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t))(Il2CppBase() + 0x11CA13C))(this, owner, slot);
	}
	template <typename T = void*> T GetAliveWithTags() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11CA590))(this);
	}
	template <typename T = void*> T GetAliveWithTag(int64_t owner, Il2CppString* tag) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11CA83C))(this, owner, tag);
	}
	template <typename T = uintptr_t> T GetAliveTournament(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CAA60))(this, owner);
	}
	template <typename T = void*> T GetAliveActivateTournament() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11CAD74))(this);
	}
	template <typename T = void*> T GetAliveActivateTournament_1(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CB020))(this, owner);
	}
	template <typename T = void*> T GetAliveGuildQuests(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CB210))(this, owner);
	}
	template <typename T = void*> T GetAliveEquipped(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CB524))(this, owner);
	}
	template <typename T = void*> T GetActualTargetMarker() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11CB838))(this);
	}
	template <typename T = void*> T GetAliveWithAliveCondition() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11CBB74))(this);
	}
	template <typename T = uintptr_t> T GetAliveGuildQuest(int64_t owner, int64_t guildQuestId) {
		return ((T (*)(QuestContext*, int64_t, int64_t))(Il2CppBase() + 0x11CBDE0))(this, owner, guildQuestId);
	}
	template <typename T = void*> T GetAliveWithActiveCondition() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11CBF5C))(this);
	}
	template <typename T = void*> T GetAliveWithActiveCondition_1(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CC318))(this, owner);
	}
	template <typename T = uintptr_t> T GetActiveFailQuest(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CC508))(this, owner);
	}
	template <typename T = void> T ActivateQuests(uintptr_t sourceQuest, uintptr_t state, int64_t now) {
		return ((T (*)(QuestContext*, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x11CC6B0))(this, sourceQuest, state, now);
	}
	template <typename T = uintptr_t> T CreateOrStartQuest(Il2CppString* name, int64_t ownerId, int64_t now, int64_t endTime) {
		return ((T (*)(QuestContext*, Il2CppString*, int64_t, int64_t, int64_t))(Il2CppBase() + 0x11CCCF0))(this, name, ownerId, now, endTime);
	}
	template <typename T = void> T StartQuestAndUpdateProgress(uintptr_t quest) {
		return ((T (*)(QuestContext*, uintptr_t))(Il2CppBase() + 0x11CCE28))(this, quest);
	}
	template <typename T = uintptr_t> T CreateNewQuest(Il2CppString* name, int64_t ownerId, int64_t now, int64_t endTime) {
		return ((T (*)(QuestContext*, Il2CppString*, int64_t, int64_t, int64_t))(Il2CppBase() + 0x11CCA38))(this, name, ownerId, now, endTime);
	}
	template <typename T = void> T UpdateTriggerQuestCompleted(uintptr_t questEntity) {
		return ((T (*)(QuestContext*, uintptr_t))(Il2CppBase() + 0x11CD26C))(this, questEntity);
	}
	template <typename T = uintptr_t> T CreateQuest(uintptr_t questData, int32_t id, int64_t ownerId, int32_t progress, bool completed, bool rewarded, bool premiumRewarded) {
		return ((T (*)(QuestContext*, uintptr_t, int32_t, int64_t, int32_t, bool, bool, bool))(Il2CppBase() + 0x11CD550))(this, questData, id, ownerId, progress, completed, rewarded, premiumRewarded);
	}
	template <typename T = uintptr_t> T CreateQuest_1(Il2CppString* name, int32_t id, int64_t ownerId, int32_t progress, bool completed, bool rewarded, bool premiumRewarded) {
		return ((T (*)(QuestContext*, Il2CppString*, int32_t, int64_t, int32_t, bool, bool, bool))(Il2CppBase() + 0x11CD1B0))(this, name, id, ownerId, progress, completed, rewarded, premiumRewarded);
	}
	template <typename T = uintptr_t> T FinishQuest(int64_t ownerId, Il2CppString* questName) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11CD6EC))(this, ownerId, questName);
	}
	template <typename T = bool> T FinishQuest_1(uintptr_t quest, bool checkMaxProgress, bool ignoreStart) {
		return ((T (*)(QuestContext*, uintptr_t, bool, bool))(Il2CppBase() + 0x11CD724))(this, quest, checkMaxProgress, ignoreStart);
	}
	template <typename T = uintptr_t> T ProgressQuest(int64_t ownerId, Il2CppString* questName, int32_t progress) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x11CD814))(this, ownerId, questName, progress);
	}
	template <typename T = void> T HardFinishQuest(int64_t ownerId, Il2CppString* questName, int64_t now, bool disableCompleteNotify) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*, int64_t, bool))(Il2CppBase() + 0x11CD958))(this, ownerId, questName, now, disableCompleteNotify);
	}
	template <typename T = uintptr_t> T ProgressQuest_1(uintptr_t quest, int32_t progress) {
		return ((T (*)(QuestContext*, uintptr_t, int32_t))(Il2CppBase() + 0x11CD83C))(this, quest, progress);
	}
	template <typename T = void> T RemoveAllQuests(void* quests) {
		return ((T (*)(QuestContext*, void*))(Il2CppBase() + 0x11CDA74))(this, quests);
	}
	template <typename T = uintptr_t> T CreateQuestFromData(uintptr_t data) {
		return ((T (*)(QuestContext*, uintptr_t))(Il2CppBase() + 0x11CDD70))(this, data);
	}
	template <typename T = uintptr_t> T UpdateQuestFormData(uintptr_t data) {
		return ((T (*)(QuestContext*, uintptr_t))(Il2CppBase() + 0x11CE0D0))(this, data);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetQuestsToProgress(Il2CppArray<uintptr_t>* tags, void* quests, int32_t triggerIndex, Il2CppList<uintptr_t>* buffer, bool onlyShareable) {
		return ((T (*)(QuestContext*, Il2CppArray<uintptr_t>*, void*, int32_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x11CE28C))(this, tags, quests, triggerIndex, buffer, onlyShareable);
	}
	template <typename T = void> T ProgressQuestCompletedQuests(int64_t playerId, uintptr_t questCompleted) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t))(Il2CppBase() + 0x11CEBD0))(this, playerId, questCompleted);
	}
	template <typename T = void> T FinishLeavingQuests(int64_t playerId, uintptr_t location) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t))(Il2CppBase() + 0x11CEDF8))(this, playerId, location);
	}
	template <typename T = void> T ProgressVisitQuests(int64_t playerId, uintptr_t location) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t))(Il2CppBase() + 0x11CF090))(this, playerId, location);
	}
	template <typename T = void> T ProgressVisitGlobalMapQuests(int64_t playerId) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CF33C))(this, playerId);
	}
	template <typename T = void> T ProgressCraftQuests(int64_t playerId, uintptr_t item, int32_t count) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t, int32_t))(Il2CppBase() + 0x11CF5B0))(this, playerId, item, count);
	}
	template <typename T = void> T ProgressGameEventQuests(int64_t playerId, uintptr_t targetEvent) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t))(Il2CppBase() + 0x11CF7C4))(this, playerId, targetEvent);
	}
	template <typename T = void> T ProgressDonateQuests(int64_t playerId, uintptr_t item, int32_t exp, uintptr_t targetEntity) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x11CF9F0))(this, playerId, item, exp, targetEntity);
	}
	template <typename T = void> T ProgressBuildQuests(int64_t playerId, uintptr_t target, bool upgrade) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t, bool))(Il2CppBase() + 0x11CFD04))(this, playerId, target, upgrade);
	}
	template <typename T = void> T UpdateProgressBuildOwnQuests(uintptr_t world, int64_t playerId) {
		return ((T (*)(QuestContext*, uintptr_t, int64_t))(Il2CppBase() + 0x11CFF90))(this, world, playerId);
	}
	template <typename T = void> T ProgressFinalizeQuests(int64_t playerId, uintptr_t target) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t))(Il2CppBase() + 0x11D0504))(this, playerId, target);
	}
	template <typename T = void> T ProgressOwnQuests(int64_t playerId, uintptr_t item, int32_t count) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t, int32_t))(Il2CppBase() + 0x11D0724))(this, playerId, item, count);
	}
	template <typename T = void> T ProgressUseQuests(int64_t playerId, uintptr_t tool, uintptr_t target, uintptr_t world, bool onlyShareable) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x11D0944))(this, playerId, tool, target, world, onlyShareable);
	}
	template <typename T = void> T ProgressAutoFarmPickupQuests(uintptr_t world, int64_t playerId, Il2CppArray<uintptr_t>* resources, uintptr_t location) {
		return ((T (*)(QuestContext*, uintptr_t, int64_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x11D0E5C))(this, world, playerId, resources, location);
	}
	template <typename T = void> T ProgressPickupQuests(int64_t playerId, uintptr_t resource, int32_t count, uintptr_t tool) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x11D1494))(this, playerId, resource, count, tool);
	}
	template <typename T = void> T ProgressDamageQuests(int64_t playerId, uintptr_t target, int32_t damage, uintptr_t tool) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x11D16E0))(this, playerId, target, damage, tool);
	}
	template <typename T = void> T ProgressHealQuests(int64_t playerId, uintptr_t target, int32_t heal, uintptr_t tool) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x11D1950))(this, playerId, target, heal, tool);
	}
	template <typename T = void> T ProgressSneakDamageQuests(int64_t playerId, uintptr_t target, int32_t damage, uintptr_t tool) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x11D1C30))(this, playerId, target, damage, tool);
	}
	template <typename T = void> T ProgressSneakQuests(int64_t playerId, uintptr_t target, uintptr_t tool) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11D1EA0))(this, playerId, target, tool);
	}
	template <typename T = void> T ProgressUnlockQuests(int64_t playerId, uintptr_t target, uintptr_t tool) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11D210C))(this, playerId, target, tool);
	}
	template <typename T = void> T ProgressDeathQuests(int64_t playerId, uintptr_t damageStat) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t))(Il2CppBase() + 0x11D2378))(this, playerId, damageStat);
	}
	template <typename T = void> T ProgressCurrencyQuests(int64_t playerId, uintptr_t currency, int32_t delta) {
		return ((T (*)(QuestContext*, int64_t, uintptr_t, int32_t))(Il2CppBase() + 0x11D25B0))(this, playerId, currency, delta);
	}
	template <typename T = void> T ProgressExtractorQuests(int64_t playerId, int32_t extractorId, uintptr_t type) {
		return ((T (*)(QuestContext*, int64_t, int32_t, uintptr_t))(Il2CppBase() + 0x11D2848))(this, playerId, extractorId, type);
	}
	template <typename T = bool> T IsCompleted(int64_t ownerId, Il2CppString* questName) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11D2A78))(this, ownerId, questName);
	}
	template <typename T = bool> T IsActual(int64_t ownerId, Il2CppString* questName) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11D2A9C))(this, ownerId, questName);
	}
	template <typename T = uintptr_t> T CheatAddQuestProgress(int64_t ownerId, Il2CppString* questName, int32_t progress, int64_t now) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*, int32_t, int64_t))(Il2CppBase() + 0x11D2AC0))(this, ownerId, questName, progress, now);
	}
	template <typename T = void*> T GetAliveTrackedQuests(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11D2E78))(this, owner);
	}

};

}
