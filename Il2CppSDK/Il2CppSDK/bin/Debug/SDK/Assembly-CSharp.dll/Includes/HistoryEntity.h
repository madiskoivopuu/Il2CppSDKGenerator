#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HistoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistoryEntity"));
	}

	template <typename R = KilledComponent*> static R& killedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ReplicatedComponent*> static R& replicatedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = ActionIdComponent*> R get_actionId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C503A4))(this);
	}
	template <typename R = bool> R get_hasActionId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C5042C))(this);
	}
	template <typename R = void> R AddActionId(int32_t newId) {
		return ((R (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C4BF08))(this, newId);
	}
	template <typename R = void> R ReplaceActionId(int32_t newId) {
		return ((R (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C50438))(this, newId);
	}
	template <typename R = void> R RemoveActionId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C5053C))(this);
	}
	template <typename R = ActorComponent*> R get_actor() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C50548))(this);
	}
	template <typename R = bool> R get_hasActor() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C505D0))(this);
	}
	template <typename R = void> R AddActor(int32_t newId) {
		return ((R (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C4E304))(this, newId);
	}
	template <typename R = void> R ReplaceActor(int32_t newId) {
		return ((R (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C505DC))(this, newId);
	}
	template <typename R = void> R RemoveActor() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C506E0))(this);
	}
	template <typename R = ActorPlayerIdComponent*> R get_actorPlayerId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C506EC))(this);
	}
	template <typename R = bool> R get_hasActorPlayerId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C50774))(this);
	}
	template <typename R = void> R AddActorPlayerId(int64_t newValue) {
		return ((R (*)(HistoryEntity*, int64_t))(Il2CppBase() + 0x1C4C110))(this, newValue);
	}
	template <typename R = void> R ReplaceActorPlayerId(int64_t newValue) {
		return ((R (*)(HistoryEntity*, int64_t))(Il2CppBase() + 0x1C50780))(this, newValue);
	}
	template <typename R = void> R RemoveActorPlayerId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C50884))(this);
	}
	template <typename R = BattleIdComponent*> R get_battleId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C50008))(this);
	}
	template <typename R = bool> R get_hasBattleId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C4DDA8))(this);
	}
	template <typename R = void> R AddBattleId(int32_t newId) {
		return ((R (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C4CC58))(this, newId);
	}
	template <typename R = void> R ReplaceBattleId(int32_t newId) {
		return ((R (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C50890))(this, newId);
	}
	template <typename R = void> R RemoveBattleId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C50994))(this);
	}
	template <typename R = BattleStatisticComponent*> R get_battleStatistic() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C4DD20))(this);
	}
	template <typename R = bool> R get_hasBattleStatistic() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C4DD14))(this);
	}
	template <typename R = void> R AddBattleStatistic(BattleStatistic* newValue) {
		return ((R (*)(HistoryEntity*, BattleStatistic*))(Il2CppBase() + 0x1C4CD5C))(this, newValue);
	}
	template <typename R = void> R ReplaceBattleStatistic(BattleStatistic* newValue) {
		return ((R (*)(HistoryEntity*, BattleStatistic*))(Il2CppBase() + 0x1C509A0))(this, newValue);
	}
	template <typename R = void> R RemoveBattleStatistic() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C50AB4))(this);
	}
	template <typename R = CreationTimeComponent*> R get_creationTime() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C4BBB0))(this);
	}
	template <typename R = bool> R get_hasCreationTime() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C50AC0))(this);
	}
	template <typename R = void> R AddCreationTime(int64_t newValue) {
		return ((R (*)(HistoryEntity*, int64_t))(Il2CppBase() + 0x1C4C00C))(this, newValue);
	}
	template <typename R = void> R ReplaceCreationTime(int64_t newValue) {
		return ((R (*)(HistoryEntity*, int64_t))(Il2CppBase() + 0x1C50ACC))(this, newValue);
	}
	template <typename R = void> R RemoveCreationTime() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C50BD0))(this);
	}
	template <typename R = DamageResultComponent*> R get_damageResult() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C4FE64))(this);
	}
	template <typename R = bool> R get_hasDamageResult() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C50BDC))(this);
	}
	template <typename R = void> R AddDamageResult(DamageResultParams* newParams) {
		return ((R (*)(HistoryEntity*, DamageResultParams*))(Il2CppBase() + 0x1C4DAE4))(this, newParams);
	}
	template <typename R = void> R ReplaceDamageResult(DamageResultParams* newParams) {
		return ((R (*)(HistoryEntity*, DamageResultParams*))(Il2CppBase() + 0x1C50BE8))(this, newParams);
	}
	template <typename R = void> R RemoveDamageResult() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C50D14))(this);
	}
	template <typename R = DamageStatComponent*> R get_damageStat() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C4FDDC))(this);
	}
	template <typename R = bool> R get_hasDamageStat() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C50D20))(this);
	}
	template <typename R = void> R AddDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(HistoryEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1C50D2C))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R ReplaceDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(HistoryEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1C50EF0))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R RemoveDamageStat() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C510B4))(this);
	}
	template <typename R = DamageSumComponent*> R get_damageSum() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C4DEB8))(this);
	}
	template <typename R = bool> R get_hasDamageSum() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C510C0))(this);
	}
	template <typename R = void> R AddDamageSum(float newValue) {
		return ((R (*)(HistoryEntity*, float))(Il2CppBase() + 0x1C4DDB4))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageSum(float newValue) {
		return ((R (*)(HistoryEntity*, float))(Il2CppBase() + 0x1C510CC))(this, newValue);
	}
	template <typename R = void> R RemoveDamageSum() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C511D0))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C511DC))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C51264))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(HistoryEntity*, float))(Il2CppBase() + 0x1C4C328))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(HistoryEntity*, float))(Il2CppBase() + 0x1C4DF40))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C51270))(this);
	}
	template <typename R = FishingStatisticComponent*> R get_fishingStatistic() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C5127C))(this);
	}
	template <typename R = bool> R get_hasFishingStatistic() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C51304))(this);
	}
	template <typename R = void> R AddFishingStatistic(FishingStatistic* newValue) {
		return ((R (*)(HistoryEntity*, FishingStatistic*))(Il2CppBase() + 0x1C4C214))(this, newValue);
	}
	template <typename R = void> R ReplaceFishingStatistic(FishingStatistic* newValue) {
		return ((R (*)(HistoryEntity*, FishingStatistic*))(Il2CppBase() + 0x1C51310))(this, newValue);
	}
	template <typename R = void> R RemoveFishingStatistic() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C51424))(this);
	}
	template <typename R = HealResultComponent*> R get_healResult() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C4FF80))(this);
	}
	template <typename R = bool> R get_hasHealResult() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C51430))(this);
	}
	template <typename R = void> R AddHealResult(HealResultParams* newParams) {
		return ((R (*)(HistoryEntity*, HealResultParams*))(Il2CppBase() + 0x1C4EB1C))(this, newParams);
	}
	template <typename R = void> R ReplaceHealResult(HealResultParams* newParams) {
		return ((R (*)(HistoryEntity*, HealResultParams*))(Il2CppBase() + 0x1C5143C))(this, newParams);
	}
	template <typename R = void> R RemoveHealResult() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C51544))(this);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C4CBD0))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C51550))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C4B808))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C5155C))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C51660))(this);
	}
	template <typename R = bool> R get_isKilled() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C5166C))(this);
	}
	template <typename R = void> R set_isKilled(bool value) {
		return ((R (*)(HistoryEntity*, bool))(Il2CppBase() + 0x1C4E6DC))(this, value);
	}
	template <typename R = bool> R get_isReplicated() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C51678))(this);
	}
	template <typename R = void> R set_isReplicated(bool value) {
		return ((R (*)(HistoryEntity*, bool))(Il2CppBase() + 0x1C51684))(this, value);
	}
	template <typename R = TargetComponent*> R get_target() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C4FD54))(this);
	}
	template <typename R = bool> R get_hasTarget() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C5179C))(this);
	}
	template <typename R = void> R AddTarget(int32_t newId) {
		return ((R (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C4CACC))(this, newId);
	}
	template <typename R = void> R ReplaceTarget(int32_t newId) {
		return ((R (*)(HistoryEntity*, int32_t))(Il2CppBase() + 0x1C517A8))(this, newId);
	}
	template <typename R = void> R RemoveTarget() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C518AC))(this);
	}
	template <typename R = TargetPlayerIdComponent*> R get_targetPlayerId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C4FEF8))(this);
	}
	template <typename R = bool> R get_hasTargetPlayerId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C4FEEC))(this);
	}
	template <typename R = void> R AddTargetPlayerId(int64_t newValue) {
		return ((R (*)(HistoryEntity*, int64_t))(Il2CppBase() + 0x1C4DC10))(this, newValue);
	}
	template <typename R = void> R ReplaceTargetPlayerId(int64_t newValue) {
		return ((R (*)(HistoryEntity*, int64_t))(Il2CppBase() + 0x1C518B8))(this, newValue);
	}
	template <typename R = void> R RemoveTargetPlayerId() {
		return ((R (*)(HistoryEntity*))(Il2CppBase() + 0x1C519BC))(this);
	}

};

