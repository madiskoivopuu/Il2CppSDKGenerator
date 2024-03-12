#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HistoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistoryEntity"));
	}

	template <typename T = uintptr_t> static T& killedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& replicatedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_actionId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C503A4))(this);
	}
	template <typename T = bool> T get_hasActionId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C5042C))(this);
	}
	template <typename T = void> T AddActionId(int32_t newId) {
		return ((T (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C4BF08))(this, newId);
	}
	template <typename T = void> T ReplaceActionId(int32_t newId) {
		return ((T (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C50438))(this, newId);
	}
	template <typename T = void> T RemoveActionId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C5053C))(this);
	}
	template <typename T = uintptr_t> T get_actor() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C50548))(this);
	}
	template <typename T = bool> T get_hasActor() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C505D0))(this);
	}
	template <typename T = void> T AddActor(int32_t newId) {
		return ((T (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C4E304))(this, newId);
	}
	template <typename T = void> T ReplaceActor(int32_t newId) {
		return ((T (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C505DC))(this, newId);
	}
	template <typename T = void> T RemoveActor() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C506E0))(this);
	}
	template <typename T = uintptr_t> T get_actorPlayerId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C506EC))(this);
	}
	template <typename T = bool> T get_hasActorPlayerId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C50774))(this);
	}
	template <typename T = void> T AddActorPlayerId(int64_t newValue) {
		return ((T (*)(HistoryEntity*, int64_t))(Il2CppBase() + 0x1C4C110))(this, newValue);
	}
	template <typename T = void> T ReplaceActorPlayerId(int64_t newValue) {
		return ((T (*)(HistoryEntity*, int64_t))(Il2CppBase() + 0x1C50780))(this, newValue);
	}
	template <typename T = void> T RemoveActorPlayerId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C50884))(this);
	}
	template <typename T = uintptr_t> T get_battleId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C50008))(this);
	}
	template <typename T = bool> T get_hasBattleId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C4DDA8))(this);
	}
	template <typename T = void> T AddBattleId(int32_t newId) {
		return ((T (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C4CC58))(this, newId);
	}
	template <typename T = void> T ReplaceBattleId(int32_t newId) {
		return ((T (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C50890))(this, newId);
	}
	template <typename T = void> T RemoveBattleId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C50994))(this);
	}
	template <typename T = uintptr_t> T get_battleStatistic() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C4DD20))(this);
	}
	template <typename T = bool> T get_hasBattleStatistic() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C4DD14))(this);
	}
	template <typename T = void> T AddBattleStatistic(uintptr_t newValue) {
		return ((T (*)(HistoryEntity*, uintptr_t))(Il2CppBase() + 0x1C4CD5C))(this, newValue);
	}
	template <typename T = void> T ReplaceBattleStatistic(uintptr_t newValue) {
		return ((T (*)(HistoryEntity*, uintptr_t))(Il2CppBase() + 0x1C509A0))(this, newValue);
	}
	template <typename T = void> T RemoveBattleStatistic() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C50AB4))(this);
	}
	template <typename T = uintptr_t> T get_creationTime() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C4BBB0))(this);
	}
	template <typename T = bool> T get_hasCreationTime() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C50AC0))(this);
	}
	template <typename T = void> T AddCreationTime(int64_t newValue) {
		return ((T (*)(HistoryEntity*, int64_t))(Il2CppBase() + 0x1C4C00C))(this, newValue);
	}
	template <typename T = void> T ReplaceCreationTime(int64_t newValue) {
		return ((T (*)(HistoryEntity*, int64_t))(Il2CppBase() + 0x1C50ACC))(this, newValue);
	}
	template <typename T = void> T RemoveCreationTime() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C50BD0))(this);
	}
	template <typename T = uintptr_t> T get_damageResult() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C4FE64))(this);
	}
	template <typename T = bool> T get_hasDamageResult() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C50BDC))(this);
	}
	template <typename T = void> T AddDamageResult(uintptr_t newParams) {
		return ((T (*)(HistoryEntity*, uintptr_t))(Il2CppBase() + 0x1C4DAE4))(this, newParams);
	}
	template <typename T = void> T ReplaceDamageResult(uintptr_t newParams) {
		return ((T (*)(HistoryEntity*, uintptr_t))(Il2CppBase() + 0x1C50BE8))(this, newParams);
	}
	template <typename T = void> T RemoveDamageResult() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C50D14))(this);
	}
	template <typename T = uintptr_t> T get_damageStat() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C4FDDC))(this);
	}
	template <typename T = bool> T get_hasDamageStat() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C50D20))(this);
	}
	template <typename T = void> T AddDamageStat(uintptr_t newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(HistoryEntity*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1C50D2C))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T ReplaceDamageStat(uintptr_t newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(HistoryEntity*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1C50EF0))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T RemoveDamageStat() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C510B4))(this);
	}
	template <typename T = uintptr_t> T get_damageSum() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C4DEB8))(this);
	}
	template <typename T = bool> T get_hasDamageSum() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C510C0))(this);
	}
	template <typename T = void> T AddDamageSum(float newValue) {
		return ((T (*)(HistoryEntity*, float))(Il2CppBase() + 0x1C4DDB4))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageSum(float newValue) {
		return ((T (*)(HistoryEntity*, float))(Il2CppBase() + 0x1C510CC))(this, newValue);
	}
	template <typename T = void> T RemoveDamageSum() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C511D0))(this);
	}
	template <typename T = uintptr_t> T get_duration() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C511DC))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C51264))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(HistoryEntity*, float))(Il2CppBase() + 0x1C4C328))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(HistoryEntity*, float))(Il2CppBase() + 0x1C4DF40))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C51270))(this);
	}
	template <typename T = uintptr_t> T get_fishingStatistic() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C5127C))(this);
	}
	template <typename T = bool> T get_hasFishingStatistic() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C51304))(this);
	}
	template <typename T = void> T AddFishingStatistic(uintptr_t newValue) {
		return ((T (*)(HistoryEntity*, uintptr_t))(Il2CppBase() + 0x1C4C214))(this, newValue);
	}
	template <typename T = void> T ReplaceFishingStatistic(uintptr_t newValue) {
		return ((T (*)(HistoryEntity*, uintptr_t))(Il2CppBase() + 0x1C51310))(this, newValue);
	}
	template <typename T = void> T RemoveFishingStatistic() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C51424))(this);
	}
	template <typename T = uintptr_t> T get_healResult() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C4FF80))(this);
	}
	template <typename T = bool> T get_hasHealResult() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C51430))(this);
	}
	template <typename T = void> T AddHealResult(uintptr_t newParams) {
		return ((T (*)(HistoryEntity*, uintptr_t))(Il2CppBase() + 0x1C4EB1C))(this, newParams);
	}
	template <typename T = void> T ReplaceHealResult(uintptr_t newParams) {
		return ((T (*)(HistoryEntity*, uintptr_t))(Il2CppBase() + 0x1C5143C))(this, newParams);
	}
	template <typename T = void> T RemoveHealResult() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C51544))(this);
	}
	template <typename T = uintptr_t> T get_id() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C4CBD0))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C51550))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C4B808))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C5155C))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C51660))(this);
	}
	template <typename T = bool> T get_isKilled() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C5166C))(this);
	}
	template <typename T = void> T set_isKilled(bool value) {
		return ((T (*)(HistoryEntity*, bool))(Il2CppBase() + 0x1C4E6DC))(this, value);
	}
	template <typename T = bool> T get_isReplicated() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C51678))(this);
	}
	template <typename T = void> T set_isReplicated(bool value) {
		return ((T (*)(HistoryEntity*, bool))(Il2CppBase() + 0x1C51684))(this, value);
	}
	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C4FD54))(this);
	}
	template <typename T = bool> T get_hasTarget() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C5179C))(this);
	}
	template <typename T = void> T AddTarget(int32_t newId) {
		return ((T (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C4CACC))(this, newId);
	}
	template <typename T = void> T ReplaceTarget(int32_t newId) {
		return ((T (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C517A8))(this, newId);
	}
	template <typename T = void> T RemoveTarget() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C518AC))(this);
	}
	template <typename T = uintptr_t> T get_targetPlayerId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C4FEF8))(this);
	}
	template <typename T = bool> T get_hasTargetPlayerId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C4FEEC))(this);
	}
	template <typename T = void> T AddTargetPlayerId(int64_t newValue) {
		return ((T (*)(HistoryEntity*, int64_t))(Il2CppBase() + 0x1C4DC10))(this, newValue);
	}
	template <typename T = void> T ReplaceTargetPlayerId(int64_t newValue) {
		return ((T (*)(HistoryEntity*, int64_t))(Il2CppBase() + 0x1C518B8))(this, newValue);
	}
	template <typename T = void> T RemoveTargetPlayerId() {
		return ((T (*)(HistoryEntity*))(Il2CppBase() + 0x1C519BC))(this);
	}

};

}
