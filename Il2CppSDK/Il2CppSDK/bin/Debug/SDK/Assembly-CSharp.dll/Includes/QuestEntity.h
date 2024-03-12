#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestEntity"));
	}

	template <typename T = uintptr_t> static T& actualComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& aliveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& completedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& noStartedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& notAutoCompleteComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& premiumRewardedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& replicatedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& rewardedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& trackingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = Il2CppString*> T get_DataName() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31BA4))(this);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31C74))(this);
	}
	template <typename T = void> T AddData(Il2CppString* name, uintptr_t data) {
		return ((T (*)(QuestEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1C31F5C))(this, name, data);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C32088))(this);
	}
	template <typename T = bool> T get_isActual() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31EA0))(this);
	}
	template <typename T = void> T set_isActual(bool value) {
		return ((T (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C322D8))(this, value);
	}
	template <typename T = bool> T get_isAlive() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C323F4))(this);
	}
	template <typename T = void> T set_isAlive(bool value) {
		return ((T (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C32400))(this, value);
	}
	template <typename T = uintptr_t> T get_checkTime() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C32518))(this);
	}
	template <typename T = bool> T get_hasCheckTime() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C325A0))(this);
	}
	template <typename T = void> T AddCheckTime(int64_t newValue) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C325AC))(this, newValue);
	}
	template <typename T = void> T ReplaceCheckTime(int64_t newValue) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C326B0))(this, newValue);
	}
	template <typename T = void> T RemoveCheckTime() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C327B4))(this);
	}
	template <typename T = uintptr_t> T get_clan() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C327C0))(this);
	}
	template <typename T = bool> T get_hasClan() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C32848))(this);
	}
	template <typename T = void> T AddClan(int64_t newId) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C32854))(this, newId);
	}
	template <typename T = void> T ReplaceClan(int64_t newId) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C32958))(this, newId);
	}
	template <typename T = void> T RemoveClan() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C32A5C))(this);
	}
	template <typename T = bool> T get_isCompleted() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31E94))(this);
	}
	template <typename T = void> T set_isCompleted(bool value) {
		return ((T (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C32A68))(this, value);
	}
	template <typename T = uintptr_t> T get_endTime() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31DF4))(this);
	}
	template <typename T = bool> T get_hasEndTime() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31DE8))(this);
	}
	template <typename T = void> T AddEndTime(int64_t newValue) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C32B80))(this, newValue);
	}
	template <typename T = void> T ReplaceEndTime(int64_t newValue) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C32C84))(this, newValue);
	}
	template <typename T = void> T RemoveEndTime() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C32D88))(this);
	}
	template <typename T = uintptr_t> T get_generatedReward() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C32D94))(this);
	}
	template <typename T = bool> T get_hasGeneratedReward() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C32E1C))(this);
	}
	template <typename T = void> T AddGeneratedReward(Il2CppArray<uintptr_t>* newResources, Il2CppArray<uintptr_t>* newPremiumResources) {
		return ((T (*)(QuestEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C32E28))(this, newResources, newPremiumResources);
	}
	template <typename T = void> T ReplaceGeneratedReward(Il2CppArray<uintptr_t>* newResources, Il2CppArray<uintptr_t>* newPremiumResources) {
		return ((T (*)(QuestEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C32F50))(this, newResources, newPremiumResources);
	}
	template <typename T = void> T RemoveGeneratedReward() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33078))(this);
	}
	template <typename T = uintptr_t> T get_guildQuest() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33084))(this);
	}
	template <typename T = bool> T get_hasGuildQuest() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C3310C))(this);
	}
	template <typename T = void> T AddGuildQuest(int64_t newId) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C33118))(this, newId);
	}
	template <typename T = void> T ReplaceGuildQuest(int64_t newId) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C3321C))(this, newId);
	}
	template <typename T = void> T RemoveGuildQuest() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33320))(this);
	}
	template <typename T = uintptr_t> T get_id() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31B1C))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C322CC))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C3332C))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C33430))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33534))(this);
	}
	template <typename T = uintptr_t> T get_lastProgress() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33540))(this);
	}
	template <typename T = bool> T get_hasLastProgress() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C335C8))(this);
	}
	template <typename T = void> T AddLastProgress(int32_t newValue) {
		return ((T (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C335D4))(this, newValue);
	}
	template <typename T = void> T ReplaceLastProgress(int32_t newValue) {
		return ((T (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C336D8))(this, newValue);
	}
	template <typename T = void> T RemoveLastProgress() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C337DC))(this);
	}
	template <typename T = uintptr_t> T get_manualTracking() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C337E8))(this);
	}
	template <typename T = bool> T get_hasManualTracking() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33870))(this);
	}
	template <typename T = void> T AddManualTracking(int32_t newValue) {
		return ((T (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C3387C))(this, newValue);
	}
	template <typename T = void> T ReplaceManualTracking(int32_t newValue) {
		return ((T (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C33980))(this, newValue);
	}
	template <typename T = void> T RemoveManualTracking() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33A84))(this);
	}
	template <typename T = uintptr_t> T get_nextActiveTime() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33A90))(this);
	}
	template <typename T = bool> T get_hasNextActiveTime() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33B18))(this);
	}
	template <typename T = void> T AddNextActiveTime(int64_t newValue) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C33B24))(this, newValue);
	}
	template <typename T = void> T ReplaceNextActiveTime(int64_t newValue) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C33C28))(this, newValue);
	}
	template <typename T = void> T RemoveNextActiveTime() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33D2C))(this);
	}
	template <typename T = uintptr_t> T get_noSaveable() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33D38))(this);
	}
	template <typename T = bool> T get_hasNoSaveable() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33DC0))(this);
	}
	template <typename T = void> T AddNoSaveable(bool newSaveInLocation) {
		return ((T (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C33DCC))(this, newSaveInLocation);
	}
	template <typename T = void> T ReplaceNoSaveable(bool newSaveInLocation) {
		return ((T (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C33ED4))(this, newSaveInLocation);
	}
	template <typename T = void> T RemoveNoSaveable() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C33FDC))(this);
	}
	template <typename T = bool> T get_isNoStarted() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31EAC))(this);
	}
	template <typename T = void> T set_isNoStarted(bool value) {
		return ((T (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C33FE8))(this, value);
	}
	template <typename T = bool> T get_isNotAutoComplete() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C34100))(this);
	}
	template <typename T = void> T set_isNotAutoComplete(bool value) {
		return ((T (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C3410C))(this, value);
	}
	template <typename T = uintptr_t> T get_notified() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C34224))(this);
	}
	template <typename T = bool> T get_hasNotified() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C342AC))(this);
	}
	template <typename T = void> T AddNotified(int32_t newValue) {
		return ((T (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C342B8))(this, newValue);
	}
	template <typename T = void> T ReplaceNotified(int32_t newValue) {
		return ((T (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C343BC))(this, newValue);
	}
	template <typename T = void> T RemoveNotified() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C344C0))(this);
	}
	template <typename T = uintptr_t> T get_owner() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C344CC))(this);
	}
	template <typename T = bool> T get_hasOwner() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C34554))(this);
	}
	template <typename T = void> T AddOwner(int64_t newId) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C34560))(this, newId);
	}
	template <typename T = void> T ReplaceOwner(int64_t newId) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C34664))(this, newId);
	}
	template <typename T = void> T RemoveOwner() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C34768))(this);
	}
	template <typename T = bool> T get_isPremiumRewarded() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31E7C))(this);
	}
	template <typename T = void> T set_isPremiumRewarded(bool value) {
		return ((T (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C34774))(this, value);
	}
	template <typename T = uintptr_t> T get_progress() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31BEC))(this);
	}
	template <typename T = bool> T get_hasProgress() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C3488C))(this);
	}
	template <typename T = void> T AddProgress(int32_t newValue) {
		return ((T (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C34898))(this, newValue);
	}
	template <typename T = void> T ReplaceProgress(int32_t newValue) {
		return ((T (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C3499C))(this, newValue);
	}
	template <typename T = void> T RemoveProgress() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C34AA0))(this);
	}
	template <typename T = uintptr_t> T get_progressPerLocation() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C34AAC))(this);
	}
	template <typename T = bool> T get_hasProgressPerLocation() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C34B34))(this);
	}
	template <typename T = void> T AddProgressPerLocation(int32_t newLocationId) {
		return ((T (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C34B40))(this, newLocationId);
	}
	template <typename T = void> T ReplaceProgressPerLocation(int32_t newLocationId) {
		return ((T (*)(QuestEntity*, int32_t))(Il2CppBase() + 0x1C34C44))(this, newLocationId);
	}
	template <typename T = void> T RemoveProgressPerLocation() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C34D48))(this);
	}
	template <typename T = uintptr_t> T get_questData() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31ED4))(this);
	}
	template <typename T = bool> T get_hasQuestData() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31EC8))(this);
	}
	template <typename T = void> T AddQuestData(Il2CppString* newName, uintptr_t newDataEntity) {
		return ((T (*)(QuestEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1C34D54))(this, newName, newDataEntity);
	}
	template <typename T = void> T ReplaceQuestData(Il2CppString* newName, uintptr_t newDataEntity) {
		return ((T (*)(QuestEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1C31F60))(this, newName, newDataEntity);
	}
	template <typename T = void> T RemoveQuestData() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C34E7C))(this);
	}
	template <typename T = bool> T get_isReplicated() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C34E88))(this);
	}
	template <typename T = void> T set_isReplicated(bool value) {
		return ((T (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C34E94))(this, value);
	}
	template <typename T = uintptr_t> T get_rewardCoef() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C34FAC))(this);
	}
	template <typename T = bool> T get_hasRewardCoef() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C35034))(this);
	}
	template <typename T = void> T AddRewardCoef(float newValue) {
		return ((T (*)(QuestEntity*, float))(Il2CppBase() + 0x1C35040))(this, newValue);
	}
	template <typename T = void> T ReplaceRewardCoef(float newValue) {
		return ((T (*)(QuestEntity*, float))(Il2CppBase() + 0x1C35144))(this, newValue);
	}
	template <typename T = void> T RemoveRewardCoef() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C35248))(this);
	}
	template <typename T = bool> T get_isRewarded() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C31E88))(this);
	}
	template <typename T = void> T set_isRewarded(bool value) {
		return ((T (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C35254))(this, value);
	}
	template <typename T = uintptr_t> T get_sourceItem() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C3536C))(this);
	}
	template <typename T = bool> T get_hasSourceItem() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C353F4))(this);
	}
	template <typename T = void> T AddSourceItem(Il2CppString* newName) {
		return ((T (*)(QuestEntity*, Il2CppString*))(Il2CppBase() + 0x1C35400))(this, newName);
	}
	template <typename T = void> T ReplaceSourceItem(Il2CppString* newName) {
		return ((T (*)(QuestEntity*, Il2CppString*))(Il2CppBase() + 0x1C35514))(this, newName);
	}
	template <typename T = void> T RemoveSourceItem() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C35628))(this);
	}
	template <typename T = uintptr_t> T get_startTime() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C35634))(this);
	}
	template <typename T = bool> T get_hasStartTime() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C356BC))(this);
	}
	template <typename T = void> T AddStartTime(int64_t newValue) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C356C8))(this, newValue);
	}
	template <typename T = void> T ReplaceStartTime(int64_t newValue) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C357CC))(this, newValue);
	}
	template <typename T = void> T RemoveStartTime() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C358D0))(this);
	}
	template <typename T = uintptr_t> T get_tournament() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C358DC))(this);
	}
	template <typename T = bool> T get_hasTournament() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C35964))(this);
	}
	template <typename T = void> T AddTournament(int64_t newId) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C35970))(this, newId);
	}
	template <typename T = void> T ReplaceTournament(int64_t newId) {
		return ((T (*)(QuestEntity*, int64_t))(Il2CppBase() + 0x1C35A74))(this, newId);
	}
	template <typename T = void> T RemoveTournament() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C35B78))(this);
	}
	template <typename T = bool> T get_isTracking() {
		return ((T (*)(QuestEntity*))(Il2CppBase() + 0x1C35B84))(this);
	}
	template <typename T = void> T set_isTracking(bool value) {
		return ((T (*)(QuestEntity*, bool))(Il2CppBase() + 0x1C35B90))(this, value);
	}

};

}
