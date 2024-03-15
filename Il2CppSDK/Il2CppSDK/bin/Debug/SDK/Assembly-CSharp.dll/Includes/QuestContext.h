#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NewBlueprintContext2.h" 
#include "QuestEntity.h" 
#include "QuestDataEntity.h" 

class QuestContext : public NewBlueprintContext2<QuestEntity*, QuestDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestContext"));
	}

	template <typename R = QuestDataContext*> R& Data() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = Il2CppString*> static R& InitQuestName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GoHomeQuest() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& AutoCompleteForOldPlayersTag() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& AutoClassForOldPlayersTag() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ShowShield() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& FirstAct() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& FirstBuildQuest() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ScoutQuestTag() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& StartGuild() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& StartHUDCustomization() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GuildQuestTag() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SeasonQuestTag() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& NpcQuestTag() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& FirstBanner() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& IgnoreForQuestsTag() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 PrimaryEntityIndex2<QuestEntity*, int32_t>*& _idIndex() {
		return *(PrimaryEntityIndex2<QuestEntity*, int32_t>**)((uintptr_t)this + 0x118);
	}
	 PrimaryEntityIndex2<QuestEntity*, LongString>*& _aliveNameIndex() {
		return *(PrimaryEntityIndex2<QuestEntity*, LongString>**)((uintptr_t)this + 0x120);
	}
	 EntityIndex2<QuestEntity*, int64_t>*& _alivesIndex() {
		return *(EntityIndex2<QuestEntity*, int64_t>**)((uintptr_t)this + 0x128);
	}
	 EntityIndex2<QuestEntity*, int64_t>*& _actualIndex() {
		return *(EntityIndex2<QuestEntity*, int64_t>**)((uintptr_t)this + 0x130);
	}
	 EntityIndex2<QuestEntity*, LongString>*& _aliveActIndex() {
		return *(EntityIndex2<QuestEntity*, LongString>**)((uintptr_t)this + 0x138);
	}
	 EntityIndex2<QuestEntity*, int64_t>*& _completedNotRewardedIndex() {
		return *(EntityIndex2<QuestEntity*, int64_t>**)((uintptr_t)this + 0x140);
	}
	 EntityIndex2<QuestEntity*, int64_t>*& _completedNotFullRewardedIndex() {
		return *(EntityIndex2<QuestEntity*, int64_t>**)((uintptr_t)this + 0x148);
	}
	 EntityIndex2<QuestEntity*, IntLong>*& _aliveTrackingIndex() {
		return *(EntityIndex2<QuestEntity*, IntLong>**)((uintptr_t)this + 0x150);
	}
	 EntityIndex2<QuestEntity*, int64_t>*& _aliveWithActiveConditionIndex() {
		return *(EntityIndex2<QuestEntity*, int64_t>**)((uintptr_t)this + 0x158);
	}
	 EntityIndex2<QuestEntity*, LongString>*& _aliveTagIndex() {
		return *(EntityIndex2<QuestEntity*, LongString>**)((uintptr_t)this + 0x160);
	}
	 PrimaryEntityIndex2<QuestEntity*, int64_t>*& _aliveTournamentIndex() {
		return *(PrimaryEntityIndex2<QuestEntity*, int64_t>**)((uintptr_t)this + 0x168);
	}
	 EntityIndex2<QuestEntity*, int64_t>*& _aliveActivateTournamentIndex() {
		return *(EntityIndex2<QuestEntity*, int64_t>**)((uintptr_t)this + 0x170);
	}
	 EntityIndex2<QuestEntity*, int64_t>*& _aliveGuildQuestsIndex() {
		return *(EntityIndex2<QuestEntity*, int64_t>**)((uintptr_t)this + 0x178);
	}
	 EntityIndex2<QuestEntity*, int64_t>*& _aliveTrackedQuestIndex() {
		return *(EntityIndex2<QuestEntity*, int64_t>**)((uintptr_t)this + 0x180);
	}
	 EntityIndex2<QuestEntity*, int64_t>*& _aliveEquipIndex() {
		return *(EntityIndex2<QuestEntity*, int64_t>**)((uintptr_t)this + 0x188);
	}
	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	 IGroup1<QuestEntity*>*& _aliveActQuests() {
		return *(IGroup1<QuestEntity*>**)((uintptr_t)this + 0x198);
	}
	 IGroup1<QuestEntity*>*& _aliveWithTags() {
		return *(IGroup1<QuestEntity*>**)((uintptr_t)this + 0x1A0);
	}
	 IGroup1<QuestEntity*>*& _aliveActivateTournament() {
		return *(IGroup1<QuestEntity*>**)((uintptr_t)this + 0x1A8);
	}
	 IGroup1<QuestEntity*>*& _actualTargetMarker() {
		return *(IGroup1<QuestEntity*>**)((uintptr_t)this + 0x1B0);
	}
	 IGroup1<QuestEntity*>*& _aliveWithAliveCondition() {
		return *(IGroup1<QuestEntity*>**)((uintptr_t)this + 0x1B8);
	}
	 IGroup1<QuestEntity*>*& _aliveWithActiveCondition() {
		return *(IGroup1<QuestEntity*>**)((uintptr_t)this + 0x1C0);
	}

	template <typename R = QuestDataContext*> R get_Data() {
		return ((R (*)(QuestContext*))(Il2CppBase() + 0x11C8388))(this);
	}
	template <typename R = void> R set_Data(QuestDataContext* value) {
		return ((R (*)(QuestContext*, QuestDataContext*))(Il2CppBase() + 0x11C8390))(this, value);
	}
	template <typename R = void> R OnReset() {
		return ((R (*)(QuestContext*))(Il2CppBase() + 0x11C8574))(this);
	}
	template <typename R = QuestEntity*> R GetEntityWithId(int32_t Id) {
		return ((R (*)(QuestContext*, int32_t))(Il2CppBase() + 0x11C890C))(this, Id);
	}
	template <typename R = int32_t> R GetQuestProgress(int64_t owner, Il2CppString* name) {
		return ((R (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11C8B1C))(this, owner, name);
	}
	template <typename R = QuestEntity*> R GetAliveQuest(int64_t owner, Il2CppString* name) {
		return ((R (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11C8B6C))(this, owner, name);
	}
	 IGroup1<QuestEntity*>* GetAliveActQuests() {
		return ((IGroup1<QuestEntity*>* (*)(QuestContext*))(Il2CppBase() + 0x11C8EB4))(this);
	}
	 HashSet1<QuestEntity*>* GetAliveActQuests_1(int64_t owner, Il2CppString* actName) {
		return ((HashSet1<QuestEntity*>* (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11C9160))(this, owner, actName);
	}
	 HashSet1<QuestEntity*>* GetAliveQuests(int64_t owner) {
		return ((HashSet1<QuestEntity*>* (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11C9384))(this, owner);
	}
	 HashSet1<QuestEntity*>* GetActualQuests(int64_t owner) {
		return ((HashSet1<QuestEntity*>* (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11C9658))(this, owner);
	}
	 HashSet1<QuestEntity*>* GetCompletedNotRewarded(int64_t owner) {
		return ((HashSet1<QuestEntity*>* (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11C996C))(this, owner);
	}
	 HashSet1<QuestEntity*>* GetCompletedNotFullRewarded(int64_t owner) {
		return ((HashSet1<QuestEntity*>* (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11C9D54))(this, owner);
	}
	 HashSet1<QuestEntity*>* GetAliveTracking(int64_t owner, TrackingSlot slot) {
		return ((HashSet1<QuestEntity*>* (*)(QuestContext*, int64_t, TrackingSlot))(Il2CppBase() + 0x11CA13C))(this, owner, slot);
	}
	 IGroup1<QuestEntity*>* GetAliveWithTags() {
		return ((IGroup1<QuestEntity*>* (*)(QuestContext*))(Il2CppBase() + 0x11CA590))(this);
	}
	 HashSet1<QuestEntity*>* GetAliveWithTag(int64_t owner, Il2CppString* tag) {
		return ((HashSet1<QuestEntity*>* (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11CA83C))(this, owner, tag);
	}
	template <typename R = QuestEntity*> R GetAliveTournament(int64_t owner) {
		return ((R (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CAA60))(this, owner);
	}
	 IGroup1<QuestEntity*>* GetAliveActivateTournament() {
		return ((IGroup1<QuestEntity*>* (*)(QuestContext*))(Il2CppBase() + 0x11CAD74))(this);
	}
	 HashSet1<QuestEntity*>* GetAliveActivateTournament_1(int64_t owner) {
		return ((HashSet1<QuestEntity*>* (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CB020))(this, owner);
	}
	 HashSet1<QuestEntity*>* GetAliveGuildQuests(int64_t owner) {
		return ((HashSet1<QuestEntity*>* (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CB210))(this, owner);
	}
	 HashSet1<QuestEntity*>* GetAliveEquipped(int64_t owner) {
		return ((HashSet1<QuestEntity*>* (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CB524))(this, owner);
	}
	 IGroup1<QuestEntity*>* GetActualTargetMarker() {
		return ((IGroup1<QuestEntity*>* (*)(QuestContext*))(Il2CppBase() + 0x11CB838))(this);
	}
	 IGroup1<QuestEntity*>* GetAliveWithAliveCondition() {
		return ((IGroup1<QuestEntity*>* (*)(QuestContext*))(Il2CppBase() + 0x11CBB74))(this);
	}
	template <typename R = QuestEntity*> R GetAliveGuildQuest(int64_t owner, int64_t guildQuestId) {
		return ((R (*)(QuestContext*, int64_t, int64_t))(Il2CppBase() + 0x11CBDE0))(this, owner, guildQuestId);
	}
	 IGroup1<QuestEntity*>* GetAliveWithActiveCondition() {
		return ((IGroup1<QuestEntity*>* (*)(QuestContext*))(Il2CppBase() + 0x11CBF5C))(this);
	}
	 HashSet1<QuestEntity*>* GetAliveWithActiveCondition_1(int64_t owner) {
		return ((HashSet1<QuestEntity*>* (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CC318))(this, owner);
	}
	template <typename R = QuestEntity*> R GetActiveFailQuest(int64_t owner) {
		return ((R (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CC508))(this, owner);
	}
	template <typename R = void> R ActivateQuests(QuestEntity* sourceQuest, ActivateQuestsState state, int64_t now) {
		return ((R (*)(QuestContext*, QuestEntity*, ActivateQuestsState, int64_t))(Il2CppBase() + 0x11CC6B0))(this, sourceQuest, state, now);
	}
	template <typename R = QuestEntity*> R CreateOrStartQuest(Il2CppString* name, int64_t ownerId, int64_t now, int64_t endTime) {
		return ((R (*)(QuestContext*, Il2CppString*, int64_t, int64_t, int64_t))(Il2CppBase() + 0x11CCCF0))(this, name, ownerId, now, endTime);
	}
	template <typename R = void> R StartQuestAndUpdateProgress(QuestEntity* quest) {
		return ((R (*)(QuestContext*, QuestEntity*))(Il2CppBase() + 0x11CCE28))(this, quest);
	}
	template <typename R = QuestEntity*> R CreateNewQuest(Il2CppString* name, int64_t ownerId, int64_t now, int64_t endTime) {
		return ((R (*)(QuestContext*, Il2CppString*, int64_t, int64_t, int64_t))(Il2CppBase() + 0x11CCA38))(this, name, ownerId, now, endTime);
	}
	template <typename R = void> R UpdateTriggerQuestCompleted(QuestEntity* questEntity) {
		return ((R (*)(QuestContext*, QuestEntity*))(Il2CppBase() + 0x11CD26C))(this, questEntity);
	}
	template <typename R = QuestEntity*> R CreateQuest(QuestDataEntity* questData, int32_t id, int64_t ownerId, int32_t progress, bool completed, bool rewarded, bool premiumRewarded) {
		return ((R (*)(QuestContext*, QuestDataEntity*, int32_t, int64_t, int32_t, bool, bool, bool))(Il2CppBase() + 0x11CD550))(this, questData, id, ownerId, progress, completed, rewarded, premiumRewarded);
	}
	template <typename R = QuestEntity*> R CreateQuest_1(Il2CppString* name, int32_t id, int64_t ownerId, int32_t progress, bool completed, bool rewarded, bool premiumRewarded) {
		return ((R (*)(QuestContext*, Il2CppString*, int32_t, int64_t, int32_t, bool, bool, bool))(Il2CppBase() + 0x11CD1B0))(this, name, id, ownerId, progress, completed, rewarded, premiumRewarded);
	}
	template <typename R = QuestEntity*> R FinishQuest(int64_t ownerId, Il2CppString* questName) {
		return ((R (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11CD6EC))(this, ownerId, questName);
	}
	template <typename R = bool> R FinishQuest_1(QuestEntity* quest, bool checkMaxProgress, bool ignoreStart) {
		return ((R (*)(QuestContext*, QuestEntity*, bool, bool))(Il2CppBase() + 0x11CD724))(this, quest, checkMaxProgress, ignoreStart);
	}
	template <typename R = QuestEntity*> R ProgressQuest(int64_t ownerId, Il2CppString* questName, int32_t progress) {
		return ((R (*)(QuestContext*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x11CD814))(this, ownerId, questName, progress);
	}
	template <typename R = void> R HardFinishQuest(int64_t ownerId, Il2CppString* questName, int64_t now, bool disableCompleteNotify) {
		return ((R (*)(QuestContext*, int64_t, Il2CppString*, int64_t, bool))(Il2CppBase() + 0x11CD958))(this, ownerId, questName, now, disableCompleteNotify);
	}
	template <typename R = QuestEntity*> R ProgressQuest_1(QuestEntity* quest, int32_t progress) {
		return ((R (*)(QuestContext*, QuestEntity*, int32_t))(Il2CppBase() + 0x11CD83C))(this, quest, progress);
	}
	template <typename R = void> R RemoveAllQuests(HashSet1<QuestEntity*>* quests) {
		return ((R (*)(QuestContext*, HashSet1<QuestEntity*>*))(Il2CppBase() + 0x11CDA74))(this, quests);
	}
	template <typename R = QuestEntity*> R CreateQuestFromData(CreateQuestData data) {
		return ((R (*)(QuestContext*, CreateQuestData))(Il2CppBase() + 0x11CDD70))(this, data);
	}
	template <typename R = QuestEntity*> R UpdateQuestFormData(UpdateQuestData data) {
		return ((R (*)(QuestContext*, UpdateQuestData))(Il2CppBase() + 0x11CE0D0))(this, data);
	}
	 Il2CppList<QuestEntity*>* GetQuestsToProgress(Il2CppArray<Il2CppString*>* tags, HashSet1<QuestEntity*>* quests, int32_t triggerIndex, Il2CppList<QuestEntity*>* buffer, bool onlyShareable) {
		return ((Il2CppList<QuestEntity*>* (*)(QuestContext*, Il2CppArray<Il2CppString*>*, HashSet1<QuestEntity*>*, int32_t, Il2CppList<QuestEntity*>*, bool))(Il2CppBase() + 0x11CE28C))(this, tags, quests, triggerIndex, buffer, onlyShareable);
	}
	template <typename R = void> R ProgressQuestCompletedQuests(int64_t playerId, QuestEntity* questCompleted) {
		return ((R (*)(QuestContext*, int64_t, QuestEntity*))(Il2CppBase() + 0x11CEBD0))(this, playerId, questCompleted);
	}
	template <typename R = void> R FinishLeavingQuests(int64_t playerId, LocationEntity* location) {
		return ((R (*)(QuestContext*, int64_t, LocationEntity*))(Il2CppBase() + 0x11CEDF8))(this, playerId, location);
	}
	template <typename R = void> R ProgressVisitQuests(int64_t playerId, LocationEntity* location) {
		return ((R (*)(QuestContext*, int64_t, LocationEntity*))(Il2CppBase() + 0x11CF090))(this, playerId, location);
	}
	template <typename R = void> R ProgressVisitGlobalMapQuests(int64_t playerId) {
		return ((R (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11CF33C))(this, playerId);
	}
	template <typename R = void> R ProgressCraftQuests(int64_t playerId, ItemEntity* item, int32_t count) {
		return ((R (*)(QuestContext*, int64_t, ItemEntity*, int32_t))(Il2CppBase() + 0x11CF5B0))(this, playerId, item, count);
	}
	template <typename R = void> R ProgressGameEventQuests(int64_t playerId, GameEntity* targetEvent) {
		return ((R (*)(QuestContext*, int64_t, GameEntity*))(Il2CppBase() + 0x11CF7C4))(this, playerId, targetEvent);
	}
	template <typename R = void> R ProgressDonateQuests(int64_t playerId, ItemEntity* item, int32_t exp, ITagsEntity* targetEntity) {
		return ((R (*)(QuestContext*, int64_t, ItemEntity*, int32_t, ITagsEntity*))(Il2CppBase() + 0x11CF9F0))(this, playerId, item, exp, targetEntity);
	}
	template <typename R = void> R ProgressBuildQuests(int64_t playerId, GameEntity* target, bool upgrade) {
		return ((R (*)(QuestContext*, int64_t, GameEntity*, bool))(Il2CppBase() + 0x11CFD04))(this, playerId, target, upgrade);
	}
	template <typename R = void> R UpdateProgressBuildOwnQuests(ICommonContexts* world, int64_t playerId) {
		return ((R (*)(QuestContext*, ICommonContexts*, int64_t))(Il2CppBase() + 0x11CFF90))(this, world, playerId);
	}
	template <typename R = void> R ProgressFinalizeQuests(int64_t playerId, GameEntity* target) {
		return ((R (*)(QuestContext*, int64_t, GameEntity*))(Il2CppBase() + 0x11D0504))(this, playerId, target);
	}
	template <typename R = void> R ProgressOwnQuests(int64_t playerId, ItemEntity* item, int32_t count) {
		return ((R (*)(QuestContext*, int64_t, ItemEntity*, int32_t))(Il2CppBase() + 0x11D0724))(this, playerId, item, count);
	}
	template <typename R = void> R ProgressUseQuests(int64_t playerId, ItemEntity* tool, GameEntity* target, ICommonContexts* world, bool onlyShareable) {
		return ((R (*)(QuestContext*, int64_t, ItemEntity*, GameEntity*, ICommonContexts*, bool))(Il2CppBase() + 0x11D0944))(this, playerId, tool, target, world, onlyShareable);
	}
	template <typename R = void> R ProgressAutoFarmPickupQuests(ICommonContexts* world, int64_t playerId, Il2CppArray<Resource>* resources, LocationEntity* location) {
		return ((R (*)(QuestContext*, ICommonContexts*, int64_t, Il2CppArray<Resource>*, LocationEntity*))(Il2CppBase() + 0x11D0E5C))(this, world, playerId, resources, location);
	}
	template <typename R = void> R ProgressPickupQuests(int64_t playerId, ItemEntity* resource, int32_t count, ItemEntity* tool) {
		return ((R (*)(QuestContext*, int64_t, ItemEntity*, int32_t, ItemEntity*))(Il2CppBase() + 0x11D1494))(this, playerId, resource, count, tool);
	}
	template <typename R = void> R ProgressDamageQuests(int64_t playerId, GameEntity* target, int32_t damage, ItemEntity* tool) {
		return ((R (*)(QuestContext*, int64_t, GameEntity*, int32_t, ItemEntity*))(Il2CppBase() + 0x11D16E0))(this, playerId, target, damage, tool);
	}
	template <typename R = void> R ProgressHealQuests(int64_t playerId, GameEntity* target, int32_t heal, ItemEntity* tool) {
		return ((R (*)(QuestContext*, int64_t, GameEntity*, int32_t, ItemEntity*))(Il2CppBase() + 0x11D1950))(this, playerId, target, heal, tool);
	}
	template <typename R = void> R ProgressSneakDamageQuests(int64_t playerId, GameEntity* target, int32_t damage, ItemEntity* tool) {
		return ((R (*)(QuestContext*, int64_t, GameEntity*, int32_t, ItemEntity*))(Il2CppBase() + 0x11D1C30))(this, playerId, target, damage, tool);
	}
	template <typename R = void> R ProgressSneakQuests(int64_t playerId, GameEntity* target, ItemEntity* tool) {
		return ((R (*)(QuestContext*, int64_t, GameEntity*, ItemEntity*))(Il2CppBase() + 0x11D1EA0))(this, playerId, target, tool);
	}
	template <typename R = void> R ProgressUnlockQuests(int64_t playerId, GameEntity* target, ItemEntity* tool) {
		return ((R (*)(QuestContext*, int64_t, GameEntity*, ItemEntity*))(Il2CppBase() + 0x11D210C))(this, playerId, target, tool);
	}
	template <typename R = void> R ProgressDeathQuests(int64_t playerId, DamageStatType damageStat) {
		return ((R (*)(QuestContext*, int64_t, DamageStatType))(Il2CppBase() + 0x11D2378))(this, playerId, damageStat);
	}
	template <typename R = void> R ProgressCurrencyQuests(int64_t playerId, CurrencyType currency, int32_t delta) {
		return ((R (*)(QuestContext*, int64_t, CurrencyType, int32_t))(Il2CppBase() + 0x11D25B0))(this, playerId, currency, delta);
	}
	template <typename R = void> R ProgressExtractorQuests(int64_t playerId, int32_t extractorId, RequestType type) {
		return ((R (*)(QuestContext*, int64_t, int32_t, RequestType))(Il2CppBase() + 0x11D2848))(this, playerId, extractorId, type);
	}
	template <typename R = bool> R IsCompleted(int64_t ownerId, Il2CppString* questName) {
		return ((R (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11D2A78))(this, ownerId, questName);
	}
	template <typename R = bool> R IsActual(int64_t ownerId, Il2CppString* questName) {
		return ((R (*)(QuestContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x11D2A9C))(this, ownerId, questName);
	}
	template <typename R = QuestEntity*> R CheatAddQuestProgress(int64_t ownerId, Il2CppString* questName, int32_t progress, int64_t now) {
		return ((R (*)(QuestContext*, int64_t, Il2CppString*, int32_t, int64_t))(Il2CppBase() + 0x11D2AC0))(this, ownerId, questName, progress, now);
	}
	 HashSet1<QuestEntity*>* GetAliveTrackedQuests(int64_t owner) {
		return ((HashSet1<QuestEntity*>* (*)(QuestContext*, int64_t))(Il2CppBase() + 0x11D2E78))(this, owner);
	}

};

