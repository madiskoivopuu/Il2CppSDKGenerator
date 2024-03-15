#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 
#include "HistoryEntity.h" 

class HistoryContext : public BaseReplicatedContext1<HistoryEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistoryContext"));
	}

	template <typename R = float> R& BattleRecordLifetime() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = float> R& PlayerRecordLifeTime() {
		return *(R*)((uintptr_t)this + 0xFC);
	}
	 PrimaryEntityIndex2HistoryEntity*, int32_t>*& _idIndex() {
		return *(PrimaryEntityIndex2HistoryEntity*, int32_t>**)((uintptr_t)this + 0x100);
	}
	 PrimaryEntityIndex2HistoryEntity*, int32_t>*& _actionIndex() {
		return *(PrimaryEntityIndex2HistoryEntity*, int32_t>**)((uintptr_t)this + 0x108);
	}
	 EntityIndex2HistoryEntity*, int32_t>*& _targetIndex() {
		return *(EntityIndex2HistoryEntity*, int32_t>**)((uintptr_t)this + 0x110);
	}
	 PrimaryEntityIndex2HistoryEntity*, IntLong*>*& _damageSumIndex() {
		return *(PrimaryEntityIndex2HistoryEntity*, IntLong*>**)((uintptr_t)this + 0x118);
	}
	 EntityIndex2HistoryEntity*, int64_t>*& _damageToPlayerIndex() {
		return *(EntityIndex2HistoryEntity*, int64_t>**)((uintptr_t)this + 0x120);
	}
	 EntityIndex2HistoryEntity*, int64_t>*& _playerDeathIndex() {
		return *(EntityIndex2HistoryEntity*, int64_t>**)((uintptr_t)this + 0x128);
	}
	 EntityIndex2HistoryEntity*, int64_t>*& _healToPlayerIndex() {
		return *(EntityIndex2HistoryEntity*, int64_t>**)((uintptr_t)this + 0x130);
	}
	 EntityIndex2HistoryEntity*, int32_t>*& _damageInBattleIndex() {
		return *(EntityIndex2HistoryEntity*, int32_t>**)((uintptr_t)this + 0x138);
	}
	 EntityIndex2HistoryEntity*, int32_t>*& _damageToTargetIndex() {
		return *(EntityIndex2HistoryEntity*, int32_t>**)((uintptr_t)this + 0x140);
	}
	 EntityIndex2HistoryEntity*, int32_t>*& _healToTargetIndex() {
		return *(EntityIndex2HistoryEntity*, int32_t>**)((uintptr_t)this + 0x148);
	}
	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x150);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(HistoryContext*))(Il2CppBase() + 0x1C48FBC))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(HistoryContext*))(Il2CppBase() + 0x1C48FC4))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(HistoryContext*))(Il2CppBase() + 0x1C48FCC))(this);
	}
	template <typename R = HistoryEntity*> R GetEntityWithId(int32_t id) {
		return ((R (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C4B264))(this, id);
	}
	template <typename R = HistoryEntity*> R GetEntityWithActionId(int32_t actionId) {
		return ((R (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C4B2C8))(this, actionId);
	}
	template <typename R = HistoryEntity*> R GetDamageSumToTarget(int32_t targetId, int64_t actorPlayerId) {
		return ((R (*)(HistoryContext*, int32_t, int64_t))(Il2CppBase() + 0x1C4B32C))(this, targetId, actorPlayerId);
	}
	 HashSet1HistoryEntity*>* GetDamagesToPlayer(int64_t playerId) {
		return ((HashSet1HistoryEntity*>* (*)(HistoryContext*, int64_t))(Il2CppBase() + 0x1C4B3BC))(this, playerId);
	}
	 HashSet1HistoryEntity*>* GetPlayerDeath(int64_t playerId) {
		return ((HashSet1HistoryEntity*>* (*)(HistoryContext*, int64_t))(Il2CppBase() + 0x1C4B420))(this, playerId);
	}
	 HashSet1HistoryEntity*>* GetHealsToPlayer(int64_t playerId) {
		return ((HashSet1HistoryEntity*>* (*)(HistoryContext*, int64_t))(Il2CppBase() + 0x1C4B484))(this, playerId);
	}
	 HashSet1HistoryEntity*>* GetDamagesInBattle(int32_t battleId) {
		return ((HashSet1HistoryEntity*>* (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C4B4E8))(this, battleId);
	}
	 HashSet1HistoryEntity*>* GetDamagesToTarget(int32_t id) {
		return ((HashSet1HistoryEntity*>* (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C4B54C))(this, id);
	}
	 HashSet1HistoryEntity*>* GetHealsToTarget(int32_t id) {
		return ((HashSet1HistoryEntity*>* (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C4B5B0))(this, id);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(HistoryContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1C4B614))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(HistoryContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1C4B71C))(this, reader, entity);
	}
	template <typename R = HistoryEntity*> R GetLastDamageToPlayer(int64_t playerId) {
		return ((R (*)(HistoryContext*, int64_t))(Il2CppBase() + 0x1C4B90C))(this, playerId);
	}
	template <typename R = HistoryEntity*> R CreateStartFishing(ICommonContexts* world, GameEntity* player, GameEntity* target, ActionEntity* actionEntity) {
		return ((R (*)(HistoryContext*, ICommonContexts*, GameEntity*, GameEntity*, ActionEntity*))(Il2CppBase() + 0x1C4BC38))(this, world, player, target, actionEntity);
	}
	template <typename R = HistoryEntity*> R CreateStartBattleRecord(GameEntity* target) {
		return ((R (*)(HistoryContext*, GameEntity*))(Il2CppBase() + 0x1C4C42C))(this, target);
	}
	template <typename R = PlayerStatistic*> R CreateStartPlayerStatistic(GameEntity* player) {
		return ((R (*)(HistoryContext*, GameEntity*))(Il2CppBase() + 0x1C4CE70))(this, player);
	}
	template <typename R = void> R CreateDamageRecord(GameEntity* target, DamageStatComponent* damageStat, DamageResultParams* damageResult) {
		return ((R (*)(HistoryContext*, GameEntity*, DamageStatComponent*, DamageResultParams*))(Il2CppBase() + 0x1C4D260))(this, target, damageStat, damageResult);
	}
	template <typename R = void> R CreateDamageRecord_1(ChangeHealthData* data) {
		return ((R (*)(HistoryContext*, ChangeHealthData*))(Il2CppBase() + 0x1C4E044))(this, data);
	}
	template <typename R = HistoryEntity*> R CreateKillRecord(GameEntity* target) {
		return ((R (*)(HistoryContext*, GameEntity*))(Il2CppBase() + 0x1C4E408))(this, target);
	}
	template <typename R = HistoryEntity*> R CreateHealRecord(GameEntity* target, DamageStatComponent* damageStat, HealResultParams* healResult) {
		return ((R (*)(HistoryContext*, GameEntity*, DamageStatComponent*, HealResultParams*))(Il2CppBase() + 0x1C4E7F4))(this, target, damageStat, healResult);
	}
	template <typename R = void> R DestroyAll(HashSet1HistoryEntity*>* records, Predicate1HistoryEntity*>* predicate) {
		return ((R (*)(HistoryContext*, HashSet1HistoryEntity*>*, Predicate1HistoryEntity*>*))(Il2CppBase() + 0x1C4EC24))(this, records, predicate);
	}
	template <typename R = BattleStatistic*> R СollectBattleStatistics(int32_t battleId) {
		return ((R (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C4F080))(this, battleId);
	}
	template <typename R = void> R ClearTarget(int32_t targetId) {
		return ((R (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C50090))(this, targetId);
	}

};

