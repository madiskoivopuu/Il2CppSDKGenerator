#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NewBlueprintContext2.h" 

class QuestContext : public NewBlueprintContext2<QuestEntity*, QuestDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestContext"));
	}

	template <typename T = QuestDataContext*> T& Data() {
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
	template <typename T = PrimaryEntityIndex2QuestEntity*, int32_t>*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = PrimaryEntityIndex2QuestEntity*, LongString*>*> T& _aliveNameIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = EntityIndex2QuestEntity*, int64_t>*> T& _alivesIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = EntityIndex2QuestEntity*, int64_t>*> T& _actualIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = EntityIndex2QuestEntity*, LongString*>*> T& _aliveActIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = EntityIndex2QuestEntity*, int64_t>*> T& _completedNotRewardedIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = EntityIndex2QuestEntity*, int64_t>*> T& _completedNotFullRewardedIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = EntityIndex2QuestEntity*, IntLong*>*> T& _aliveTrackingIndex() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = EntityIndex2QuestEntity*, int64_t>*> T& _aliveWithActiveConditionIndex() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = EntityIndex2QuestEntity*, LongString*>*> T& _aliveTagIndex() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = PrimaryEntityIndex2QuestEntity*, int64_t>*> T& _aliveTournamentIndex() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = EntityIndex2QuestEntity*, int64_t>*> T& _aliveActivateTournamentIndex() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = EntityIndex2QuestEntity*, int64_t>*> T& _aliveGuildQuestsIndex() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = EntityIndex2QuestEntity*, int64_t>*> T& _aliveTrackedQuestIndex() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = EntityIndex2QuestEntity*, int64_t>*> T& _aliveEquipIndex() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = IGroup1QuestEntity*>*> T& _aliveActQuests() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = IGroup1QuestEntity*>*> T& _aliveWithTags() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = IGroup1QuestEntity*>*> T& _aliveActivateTournament() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = IGroup1QuestEntity*>*> T& _actualTargetMarker() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = IGroup1QuestEntity*>*> T& _aliveWithAliveCondition() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = IGroup1QuestEntity*>*> T& _aliveWithActiveCondition() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}

	template <typename T = QuestDataContext*> T get_Data() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11C8388))(this);
	}
	template <typename T = void> T set_Data(QuestDataContext* value) {
		return ((T (*)(QuestContext*, QuestDataContext*))(Il2CppBase() + 0x11C8390))(this, value);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11C8574))(this);
	}
	template <typename T = QuestEntity*> T GetEntityWithId(int32_t Id) {
		return ((T (*)(QuestContext*, int32_t))(Il2CppBase() + 0x11C890C))(this, Id);
	}
	template <typename T = int32_t> T GetQuestProgress(int64_t owner, Il2CppString* name) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11C8B1C))(this, owner, name);
	}
	template <typename T = QuestEntity*> T GetAliveQuest(int64_t owner, Il2CppString* name) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11C8B6C))(this, owner, name);
	}
	template <typename T = IGroup1QuestEntity*>*> T GetAliveActQuests() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11C8EB4))(this);
	}
	template <typename T = HashSet1QuestEntity*>*> T GetAliveActQuests_1(int64_t owner, Il2CppString* actName) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11C9160))(this, owner, actName);
	}
	template <typename T = HashSet1QuestEntity*>*> T GetAliveQuests(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11C9384))(this, owner);
	}
	template <typename T = HashSet1QuestEntity*>*> T GetActualQuests(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11C9658))(this, owner);
	}
	template <typename T = HashSet1QuestEntity*>*> T GetCompletedNotRewarded(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11C996C))(this, owner);
	}
	template <typename T = HashSet1QuestEntity*>*> T GetCompletedNotFullRewarded(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11C9D54))(this, owner);
	}
	template <typename T = HashSet1QuestEntity*>*> T GetAliveTracking(int64_t owner, TrackingSlot* slot) {
		return ((T (*)(QuestContext*, int64_t, TrackingSlot*))(Il2CppBase() + 0x11CA13C))(this, owner, slot);
	}
	template <typename T = IGroup1QuestEntity*>*> T GetAliveWithTags() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11CA590))(this);
	}
	template <typename T = HashSet1QuestEntity*>*> T GetAliveWithTag(int64_t owner, Il2CppString* tag) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11CA83C))(this, owner, tag);
	}
	template <typename T = QuestEntity*> T GetAliveTournament(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CAA60))(this, owner);
	}
	template <typename T = IGroup1QuestEntity*>*> T GetAliveActivateTournament() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11CAD74))(this);
	}
	template <typename T = HashSet1QuestEntity*>*> T GetAliveActivateTournament_1(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CB020))(this, owner);
	}
	template <typename T = HashSet1QuestEntity*>*> T GetAliveGuildQuests(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CB210))(this, owner);
	}
	template <typename T = HashSet1QuestEntity*>*> T GetAliveEquipped(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CB524))(this, owner);
	}
	template <typename T = IGroup1QuestEntity*>*> T GetActualTargetMarker() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11CB838))(this);
	}
	template <typename T = IGroup1QuestEntity*>*> T GetAliveWithAliveCondition() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11CBB74))(this);
	}
	template <typename T = QuestEntity*> T GetAliveGuildQuest(int64_t owner, int64_t guildQuestId) {
		return ((T (*)(QuestContext*, int64_t, int64_t))(Il2CppBase() + 0x11CBDE0))(this, owner, guildQuestId);
	}
	template <typename T = IGroup1QuestEntity*>*> T GetAliveWithActiveCondition() {
		return ((T (*)(QuestContext*))(Il2CppBase() + 0x11CBF5C))(this);
	}
	template <typename T = HashSet1QuestEntity*>*> T GetAliveWithActiveCondition_1(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CC318))(this, owner);
	}
	template <typename T = QuestEntity*> T GetActiveFailQuest(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CC508))(this, owner);
	}
	template <typename T = void> T ActivateQuests(QuestEntity* sourceQuest, ActivateQuestsState* state, int64_t now) {
		return ((T (*)(QuestContext*, QuestEntity*, ActivateQuestsState*, int64_t))(Il2CppBase() + 0x11CC6B0))(this, sourceQuest, state, now);
	}
	template <typename T = QuestEntity*> T CreateOrStartQuest(Il2CppString* name, int64_t ownerId, int64_t now, int64_t endTime) {
		return ((T (*)(QuestContext*, Il2CppString*, int64_t, int64_t, int64_t))(Il2CppBase() + 0x11CCCF0))(this, name, ownerId, now, endTime);
	}
	template <typename T = void> T StartQuestAndUpdateProgress(QuestEntity* quest) {
		return ((T (*)(QuestContext*, QuestEntity*))(Il2CppBase() + 0x11CCE28))(this, quest);
	}
	template <typename T = QuestEntity*> T CreateNewQuest(Il2CppString* name, int64_t ownerId, int64_t now, int64_t endTime) {
		return ((T (*)(QuestContext*, Il2CppString*, int64_t, int64_t, int64_t))(Il2CppBase() + 0x11CCA38))(this, name, ownerId, now, endTime);
	}
	template <typename T = void> T UpdateTriggerQuestCompleted(QuestEntity* questEntity) {
		return ((T (*)(QuestContext*, QuestEntity*))(Il2CppBase() + 0x11CD26C))(this, questEntity);
	}
	template <typename T = QuestEntity*> T CreateQuest(QuestDataEntity* questData, int32_t id, int64_t ownerId, int32_t progress, bool completed, bool rewarded, bool premiumRewarded) {
		return ((T (*)(QuestContext*, QuestDataEntity*, int32_t, int64_t, int32_t, bool, bool, bool))(Il2CppBase() + 0x11CD550))(this, questData, id, ownerId, progress, completed, rewarded, premiumRewarded);
	}
	template <typename T = QuestEntity*> T CreateQuest_1(Il2CppString* name, int32_t id, int64_t ownerId, int32_t progress, bool completed, bool rewarded, bool premiumRewarded) {
		return ((T (*)(QuestContext*, Il2CppString*, int32_t, int64_t, int32_t, bool, bool, bool))(Il2CppBase() + 0x11CD1B0))(this, name, id, ownerId, progress, completed, rewarded, premiumRewarded);
	}
	template <typename T = QuestEntity*> T FinishQuest(int64_t ownerId, Il2CppString* questName) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11CD6EC))(this, ownerId, questName);
	}
	template <typename T = bool> T FinishQuest_1(QuestEntity* quest, bool checkMaxProgress, bool ignoreStart) {
		return ((T (*)(QuestContext*, QuestEntity*, bool, bool))(Il2CppBase() + 0x11CD724))(this, quest, checkMaxProgress, ignoreStart);
	}
	template <typename T = QuestEntity*> T ProgressQuest(int64_t ownerId, Il2CppString* questName, int32_t progress) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x11CD814))(this, ownerId, questName, progress);
	}
	template <typename T = void> T HardFinishQuest(int64_t ownerId, Il2CppString* questName, int64_t now, bool disableCompleteNotify) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*, int64_t, bool))(Il2CppBase() + 0x11CD958))(this, ownerId, questName, now, disableCompleteNotify);
	}
	template <typename T = QuestEntity*> T ProgressQuest_1(QuestEntity* quest, int32_t progress) {
		return ((T (*)(QuestContext*, QuestEntity*, int32_t))(Il2CppBase() + 0x11CD83C))(this, quest, progress);
	}
	template <typename T = void> T RemoveAllQuests(HashSet1QuestEntity*>* quests) {
		return ((T (*)(QuestContext*, HashSet1QuestEntity*>*))(Il2CppBase() + 0x11CDA74))(this, quests);
	}
	template <typename T = QuestEntity*> T CreateQuestFromData(CreateQuestData* data) {
		return ((T (*)(QuestContext*, CreateQuestData*))(Il2CppBase() + 0x11CDD70))(this, data);
	}
	template <typename T = QuestEntity*> T UpdateQuestFormData(UpdateQuestData* data) {
		return ((T (*)(QuestContext*, UpdateQuestData*))(Il2CppBase() + 0x11CE0D0))(this, data);
	}
	template <typename T = Il2CppList<QuestEntity*>*> T GetQuestsToProgress(Il2CppArray<uintptr_t>* tags, HashSet1QuestEntity*>* quests, int32_t triggerIndex, Il2CppList<QuestEntity*>* buffer, bool onlyShareable) {
		return ((T (*)(QuestContext*, Il2CppArray<uintptr_t>*, HashSet1QuestEntity*>*, int32_t, Il2CppList<QuestEntity*>*, bool))(Il2CppBase() + 0x11CE28C))(this, tags, quests, triggerIndex, buffer, onlyShareable);
	}
	template <typename T = void> T ProgressQuestCompletedQuests(int64_t playerId, QuestEntity* questCompleted) {
		return ((T (*)(QuestContext*, int64_t, QuestEntity*))(Il2CppBase() + 0x11CEBD0))(this, playerId, questCompleted);
	}
	template <typename T = void> T FinishLeavingQuests(int64_t playerId, LocationEntity* location) {
		return ((T (*)(QuestContext*, int64_t, LocationEntity*))(Il2CppBase() + 0x11CEDF8))(this, playerId, location);
	}
	template <typename T = void> T ProgressVisitQuests(int64_t playerId, LocationEntity* location) {
		return ((T (*)(QuestContext*, int64_t, LocationEntity*))(Il2CppBase() + 0x11CF090))(this, playerId, location);
	}
	template <typename T = void> T ProgressVisitGlobalMapQuests(int64_t playerId) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CF33C))(this, playerId);
	}
	template <typename T = void> T ProgressCraftQuests(int64_t playerId, ItemEntity* item, int32_t count) {
		return ((T (*)(QuestContext*, int64_t, ItemEntity*, int32_t))(Il2CppBase() + 0x11CF5B0))(this, playerId, item, count);
	}
	template <typename T = void> T ProgressGameEventQuests(int64_t playerId, GameEntity* targetEvent) {
		return ((T (*)(QuestContext*, int64_t, GameEntity*))(Il2CppBase() + 0x11CF7C4))(this, playerId, targetEvent);
	}
	template <typename T = void> T ProgressDonateQuests(int64_t playerId, ItemEntity* item, int32_t exp, ITagsEntity* targetEntity) {
		return ((T (*)(QuestContext*, int64_t, ItemEntity*, int32_t, ITagsEntity*))(Il2CppBase() + 0x11CF9F0))(this, playerId, item, exp, targetEntity);
	}
	template <typename T = void> T ProgressBuildQuests(int64_t playerId, GameEntity* target, bool upgrade) {
		return ((T (*)(QuestContext*, int64_t, GameEntity*, bool))(Il2CppBase() + 0x11CFD04))(this, playerId, target, upgrade);
	}
	template <typename T = void> T UpdateProgressBuildOwnQuests(ICommonContexts* world, int64_t playerId) {
		return ((T (*)(QuestContext*, ICommonContexts*, int64_t))(Il2CppBase() + 0x11CFF90))(this, world, playerId);
	}
	template <typename T = void> T ProgressFinalizeQuests(int64_t playerId, GameEntity* target) {
		return ((T (*)(QuestContext*, int64_t, GameEntity*))(Il2CppBase() + 0x11D0504))(this, playerId, target);
	}
	template <typename T = void> T ProgressOwnQuests(int64_t playerId, ItemEntity* item, int32_t count) {
		return ((T (*)(QuestContext*, int64_t, ItemEntity*, int32_t))(Il2CppBase() + 0x11D0724))(this, playerId, item, count);
	}
	template <typename T = void> T ProgressUseQuests(int64_t playerId, ItemEntity* tool, GameEntity* target, ICommonContexts* world, bool onlyShareable) {
		return ((T (*)(QuestContext*, int64_t, ItemEntity*, GameEntity*, ICommonContexts*, bool))(Il2CppBase() + 0x11D0944))(this, playerId, tool, target, world, onlyShareable);
	}
	template <typename T = void> T ProgressAutoFarmPickupQuests(ICommonContexts* world, int64_t playerId, Il2CppArray<uintptr_t>* resources, LocationEntity* location) {
		return ((T (*)(QuestContext*, ICommonContexts*, int64_t, Il2CppArray<uintptr_t>*, LocationEntity*))(Il2CppBase() + 0x11D0E5C))(this, world, playerId, resources, location);
	}
	template <typename T = void> T ProgressPickupQuests(int64_t playerId, ItemEntity* resource, int32_t count, ItemEntity* tool) {
		return ((T (*)(QuestContext*, int64_t, ItemEntity*, int32_t, ItemEntity*))(Il2CppBase() + 0x11D1494))(this, playerId, resource, count, tool);
	}
	template <typename T = void> T ProgressDamageQuests(int64_t playerId, GameEntity* target, int32_t damage, ItemEntity* tool) {
		return ((T (*)(QuestContext*, int64_t, GameEntity*, int32_t, ItemEntity*))(Il2CppBase() + 0x11D16E0))(this, playerId, target, damage, tool);
	}
	template <typename T = void> T ProgressHealQuests(int64_t playerId, GameEntity* target, int32_t heal, ItemEntity* tool) {
		return ((T (*)(QuestContext*, int64_t, GameEntity*, int32_t, ItemEntity*))(Il2CppBase() + 0x11D1950))(this, playerId, target, heal, tool);
	}
	template <typename T = void> T ProgressSneakDamageQuests(int64_t playerId, GameEntity* target, int32_t damage, ItemEntity* tool) {
		return ((T (*)(QuestContext*, int64_t, GameEntity*, int32_t, ItemEntity*))(Il2CppBase() + 0x11D1C30))(this, playerId, target, damage, tool);
	}
	template <typename T = void> T ProgressSneakQuests(int64_t playerId, GameEntity* target, ItemEntity* tool) {
		return ((T (*)(QuestContext*, int64_t, GameEntity*, ItemEntity*))(Il2CppBase() + 0x11D1EA0))(this, playerId, target, tool);
	}
	template <typename T = void> T ProgressUnlockQuests(int64_t playerId, GameEntity* target, ItemEntity* tool) {
		return ((T (*)(QuestContext*, int64_t, GameEntity*, ItemEntity*))(Il2CppBase() + 0x11D210C))(this, playerId, target, tool);
	}
	template <typename T = void> T ProgressDeathQuests(int64_t playerId, DamageStatType* damageStat) {
		return ((T (*)(QuestContext*, int64_t, DamageStatType*))(Il2CppBase() + 0x11D2378))(this, playerId, damageStat);
	}
	template <typename T = void> T ProgressCurrencyQuests(int64_t playerId, CurrencyType* currency, int32_t delta) {
		return ((T (*)(QuestContext*, int64_t, CurrencyType*, int32_t))(Il2CppBase() + 0x11D25B0))(this, playerId, currency, delta);
	}
	template <typename T = void> T ProgressExtractorQuests(int64_t playerId, int32_t extractorId, RequestType* type) {
		return ((T (*)(QuestContext*, int64_t, int32_t, RequestType*))(Il2CppBase() + 0x11D2848))(this, playerId, extractorId, type);
	}
	template <typename T = bool> T IsCompleted(int64_t ownerId, Il2CppString* questName) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11D2A78))(this, ownerId, questName);
	}
	template <typename T = bool> T IsActual(int64_t ownerId, Il2CppString* questName) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11D2A9C))(this, ownerId, questName);
	}
	template <typename T = QuestEntity*> T CheatAddQuestProgress(int64_t ownerId, Il2CppString* questName, int32_t progress, int64_t now) {
		return ((T (*)(QuestContext*, int64_t, Il2CppString*, int32_t, int64_t))(Il2CppBase() + 0x11D2AC0))(this, ownerId, questName, progress, now);
	}
	template <typename T = HashSet1QuestEntity*>*> T GetAliveTrackedQuests(int64_t owner) {
		return ((T (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11D2E78))(this, owner);
	}

};

