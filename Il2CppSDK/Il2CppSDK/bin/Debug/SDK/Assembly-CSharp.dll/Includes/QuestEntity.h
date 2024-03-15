#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestEntity"));
	}

	template <typename R = ActualComponent*> static R& actualComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = AliveComponent*> static R& aliveComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = CompletedComponent*> static R& completedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = NoStartedComponent*> static R& noStartedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = NotAutoCompleteComponent*> static R& notAutoCompleteComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = PremiumRewardedComponent*> static R& premiumRewardedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = ReplicatedComponent*> static R& replicatedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = RewardedComponent*> static R& rewardedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = TrackingComponent*> static R& trackingComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename R = Il2CppString*> R get_DataName() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31BA4))(this);
	}
	template <typename R = QuestDataEntity*> R get_Data() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31C74))(this);
	}
	template <typename R = void> R AddData(Il2CppString* name, QuestDataEntity* data) {
		return ((R (*)(QuestEntity*, Il2CppString*, QuestDataEntity*))(Il2CppBase() + 0x1C31F5C))(this, name, data);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C32088))(this);
	}
	template <typename R = bool> R get_isActual() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31EA0))(this);
	}
	template <typename R = void> R set_isActual(bool value) {
		return ((R (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C322D8))(this, value);
	}
	template <typename R = bool> R get_isAlive() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C323F4))(this);
	}
	template <typename R = void> R set_isAlive(bool value) {
		return ((R (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C32400))(this, value);
	}
	template <typename R = CheckTimeComponent*> R get_checkTime() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C32518))(this);
	}
	template <typename R = bool> R get_hasCheckTime() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C325A0))(this);
	}
	template <typename R = void> R AddCheckTime(int64_t newValue) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C325AC))(this, newValue);
	}
	template <typename R = void> R ReplaceCheckTime(int64_t newValue) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C326B0))(this, newValue);
	}
	template <typename R = void> R RemoveCheckTime() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C327B4))(this);
	}
	template <typename R = ClanComponent*> R get_clan() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C327C0))(this);
	}
	template <typename R = bool> R get_hasClan() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C32848))(this);
	}
	template <typename R = void> R AddClan(int64_t newId) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C32854))(this, newId);
	}
	template <typename R = void> R ReplaceClan(int64_t newId) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C32958))(this, newId);
	}
	template <typename R = void> R RemoveClan() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C32A5C))(this);
	}
	template <typename R = bool> R get_isCompleted() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31E94))(this);
	}
	template <typename R = void> R set_isCompleted(bool value) {
		return ((R (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C32A68))(this, value);
	}
	template <typename R = EndTimeComponent*> R get_endTime() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31DF4))(this);
	}
	template <typename R = bool> R get_hasEndTime() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31DE8))(this);
	}
	template <typename R = void> R AddEndTime(int64_t newValue) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C32B80))(this, newValue);
	}
	template <typename R = void> R ReplaceEndTime(int64_t newValue) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C32C84))(this, newValue);
	}
	template <typename R = void> R RemoveEndTime() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C32D88))(this);
	}
	template <typename R = GeneratedRewardComponent*> R get_generatedReward() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C32D94))(this);
	}
	template <typename R = bool> R get_hasGeneratedReward() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C32E1C))(this);
	}
	template <typename R = void> R AddGeneratedReward(Il2CppArray<Resource>* newResources, Il2CppArray<Resource>* newPremiumResources) {
		return ((R (*)(QuestEntity*, Il2CppArray<Resource>*, Il2CppArray<Resource>*))(Il2CppBase() + 0x1C32E28))(this, newResources, newPremiumResources);
	}
	template <typename R = void> R ReplaceGeneratedReward(Il2CppArray<Resource>* newResources, Il2CppArray<Resource>* newPremiumResources) {
		return ((R (*)(QuestEntity*, Il2CppArray<Resource>*, Il2CppArray<Resource>*))(Il2CppBase() + 0x1C32F50))(this, newResources, newPremiumResources);
	}
	template <typename R = void> R RemoveGeneratedReward() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33078))(this);
	}
	template <typename R = GuildQuestComponent*> R get_guildQuest() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33084))(this);
	}
	template <typename R = bool> R get_hasGuildQuest() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C3310C))(this);
	}
	template <typename R = void> R AddGuildQuest(int64_t newId) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C33118))(this, newId);
	}
	template <typename R = void> R ReplaceGuildQuest(int64_t newId) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C3321C))(this, newId);
	}
	template <typename R = void> R RemoveGuildQuest() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33320))(this);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31B1C))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C322CC))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C3332C))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C33430))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33534))(this);
	}
	template <typename R = LastProgressComponent*> R get_lastProgress() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33540))(this);
	}
	template <typename R = bool> R get_hasLastProgress() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C335C8))(this);
	}
	template <typename R = void> R AddLastProgress(int32_t newValue) {
		return ((R (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C335D4))(this, newValue);
	}
	template <typename R = void> R ReplaceLastProgress(int32_t newValue) {
		return ((R (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C336D8))(this, newValue);
	}
	template <typename R = void> R RemoveLastProgress() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C337DC))(this);
	}
	template <typename R = ManualTrackingComponent*> R get_manualTracking() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C337E8))(this);
	}
	template <typename R = bool> R get_hasManualTracking() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33870))(this);
	}
	template <typename R = void> R AddManualTracking(int32_t newValue) {
		return ((R (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C3387C))(this, newValue);
	}
	template <typename R = void> R ReplaceManualTracking(int32_t newValue) {
		return ((R (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C33980))(this, newValue);
	}
	template <typename R = void> R RemoveManualTracking() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33A84))(this);
	}
	template <typename R = NextActiveTimeComponent*> R get_nextActiveTime() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33A90))(this);
	}
	template <typename R = bool> R get_hasNextActiveTime() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33B18))(this);
	}
	template <typename R = void> R AddNextActiveTime(int64_t newValue) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C33B24))(this, newValue);
	}
	template <typename R = void> R ReplaceNextActiveTime(int64_t newValue) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C33C28))(this, newValue);
	}
	template <typename R = void> R RemoveNextActiveTime() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33D2C))(this);
	}
	template <typename R = NoSaveableComponent*> R get_noSaveable() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33D38))(this);
	}
	template <typename R = bool> R get_hasNoSaveable() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33DC0))(this);
	}
	template <typename R = void> R AddNoSaveable(bool newSaveInLocation) {
		return ((R (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C33DCC))(this, newSaveInLocation);
	}
	template <typename R = void> R ReplaceNoSaveable(bool newSaveInLocation) {
		return ((R (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C33ED4))(this, newSaveInLocation);
	}
	template <typename R = void> R RemoveNoSaveable() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C33FDC))(this);
	}
	template <typename R = bool> R get_isNoStarted() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31EAC))(this);
	}
	template <typename R = void> R set_isNoStarted(bool value) {
		return ((R (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C33FE8))(this, value);
	}
	template <typename R = bool> R get_isNotAutoComplete() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C34100))(this);
	}
	template <typename R = void> R set_isNotAutoComplete(bool value) {
		return ((R (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C3410C))(this, value);
	}
	template <typename R = NotifiedComponent*> R get_notified() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C34224))(this);
	}
	template <typename R = bool> R get_hasNotified() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C342AC))(this);
	}
	template <typename R = void> R AddNotified(int32_t newValue) {
		return ((R (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C342B8))(this, newValue);
	}
	template <typename R = void> R ReplaceNotified(int32_t newValue) {
		return ((R (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C343BC))(this, newValue);
	}
	template <typename R = void> R RemoveNotified() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C344C0))(this);
	}
	template <typename R = OwnerComponent*> R get_owner() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C344CC))(this);
	}
	template <typename R = bool> R get_hasOwner() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C34554))(this);
	}
	template <typename R = void> R AddOwner(int64_t newId) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C34560))(this, newId);
	}
	template <typename R = void> R ReplaceOwner(int64_t newId) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C34664))(this, newId);
	}
	template <typename R = void> R RemoveOwner() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C34768))(this);
	}
	template <typename R = bool> R get_isPremiumRewarded() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31E7C))(this);
	}
	template <typename R = void> R set_isPremiumRewarded(bool value) {
		return ((R (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C34774))(this, value);
	}
	template <typename R = ProgressComponent*> R get_progress() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31BEC))(this);
	}
	template <typename R = bool> R get_hasProgress() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C3488C))(this);
	}
	template <typename R = void> R AddProgress(int32_t newValue) {
		return ((R (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C34898))(this, newValue);
	}
	template <typename R = void> R ReplaceProgress(int32_t newValue) {
		return ((R (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C3499C))(this, newValue);
	}
	template <typename R = void> R RemoveProgress() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C34AA0))(this);
	}
	template <typename R = ProgressPerLocationComponent*> R get_progressPerLocation() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C34AAC))(this);
	}
	template <typename R = bool> R get_hasProgressPerLocation() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C34B34))(this);
	}
	template <typename R = void> R AddProgressPerLocation(int32_t newLocationId) {
		return ((R (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C34B40))(this, newLocationId);
	}
	template <typename R = void> R ReplaceProgressPerLocation(int32_t newLocationId) {
		return ((R (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C34C44))(this, newLocationId);
	}
	template <typename R = void> R RemoveProgressPerLocation() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C34D48))(this);
	}
	template <typename R = QuestDataComponent*> R get_questData() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31ED4))(this);
	}
	template <typename R = bool> R get_hasQuestData() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31EC8))(this);
	}
	template <typename R = void> R AddQuestData(Il2CppString* newName, QuestDataEntity* newDataEntity) {
		return ((R (*)(QuestEntity*, Il2CppString*, QuestDataEntity*))(Il2CppBase() + 0x1C34D54))(this, newName, newDataEntity);
	}
	template <typename R = void> R ReplaceQuestData(Il2CppString* newName, QuestDataEntity* newDataEntity) {
		return ((R (*)(QuestEntity*, Il2CppString*, QuestDataEntity*))(Il2CppBase() + 0x1C31F60))(this, newName, newDataEntity);
	}
	template <typename R = void> R RemoveQuestData() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C34E7C))(this);
	}
	template <typename R = bool> R get_isReplicated() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C34E88))(this);
	}
	template <typename R = void> R set_isReplicated(bool value) {
		return ((R (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C34E94))(this, value);
	}
	template <typename R = RewardCoefComponent*> R get_rewardCoef() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C34FAC))(this);
	}
	template <typename R = bool> R get_hasRewardCoef() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C35034))(this);
	}
	template <typename R = void> R AddRewardCoef(float newValue) {
		return ((R (*)(QuestEntity*, float))(Il2CppBase() + 0x1C35040))(this, newValue);
	}
	template <typename R = void> R ReplaceRewardCoef(float newValue) {
		return ((R (*)(QuestEntity*, float))(Il2CppBase() + 0x1C35144))(this, newValue);
	}
	template <typename R = void> R RemoveRewardCoef() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C35248))(this);
	}
	template <typename R = bool> R get_isRewarded() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C31E88))(this);
	}
	template <typename R = void> R set_isRewarded(bool value) {
		return ((R (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C35254))(this, value);
	}
	template <typename R = SourceItemComponent*> R get_sourceItem() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C3536C))(this);
	}
	template <typename R = bool> R get_hasSourceItem() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C353F4))(this);
	}
	template <typename R = void> R AddSourceItem(Il2CppString* newName) {
		return ((R (*)(QuestEntity*, Il2CppString*))(Il2CppBase() + 0x1C35400))(this, newName);
	}
	template <typename R = void> R ReplaceSourceItem(Il2CppString* newName) {
		return ((R (*)(QuestEntity*, Il2CppString*))(Il2CppBase() + 0x1C35514))(this, newName);
	}
	template <typename R = void> R RemoveSourceItem() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C35628))(this);
	}
	template <typename R = StartTimeComponent*> R get_startTime() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C35634))(this);
	}
	template <typename R = bool> R get_hasStartTime() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C356BC))(this);
	}
	template <typename R = void> R AddStartTime(int64_t newValue) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C356C8))(this, newValue);
	}
	template <typename R = void> R ReplaceStartTime(int64_t newValue) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C357CC))(this, newValue);
	}
	template <typename R = void> R RemoveStartTime() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C358D0))(this);
	}
	template <typename R = TournamentComponent*> R get_tournament() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C358DC))(this);
	}
	template <typename R = bool> R get_hasTournament() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C35964))(this);
	}
	template <typename R = void> R AddTournament(int64_t newId) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C35970))(this, newId);
	}
	template <typename R = void> R ReplaceTournament(int64_t newId) {
		return ((R (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C35A74))(this, newId);
	}
	template <typename R = void> R RemoveTournament() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C35B78))(this);
	}
	template <typename R = bool> R get_isTracking() {
		return ((R (*)(QuestEntity*))(Il2CppBase() + 0x1C35B84))(this);
	}
	template <typename R = void> R set_isTracking(bool value) {
		return ((R (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C35B90))(this, value);
	}

};

