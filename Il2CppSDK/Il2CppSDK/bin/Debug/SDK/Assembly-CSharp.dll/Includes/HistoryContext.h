#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class HistoryContext : public BaseReplicatedContext1<HistoryEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistoryContext"));
	}

	template <typename T = float> T& BattleRecordLifetime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& PlayerRecordLifeTime() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = PrimaryEntityIndex2HistoryEntity*, int32_t>*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = PrimaryEntityIndex2HistoryEntity*, int32_t>*> T& _actionIndex() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = EntityIndex2HistoryEntity*, int32_t>*> T& _targetIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = PrimaryEntityIndex2HistoryEntity*, IntLong*>*> T& _damageSumIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = EntityIndex2HistoryEntity*, int64_t>*> T& _damageToPlayerIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = EntityIndex2HistoryEntity*, int64_t>*> T& _playerDeathIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = EntityIndex2HistoryEntity*, int64_t>*> T& _healToPlayerIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = EntityIndex2HistoryEntity*, int32_t>*> T& _damageInBattleIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = EntityIndex2HistoryEntity*, int32_t>*> T& _damageToTargetIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = EntityIndex2HistoryEntity*, int32_t>*> T& _healToTargetIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x150);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(HistoryContext*))(Il2CppBase() + 0x1C48FBC))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(HistoryContext*))(Il2CppBase() + 0x1C48FC4))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(HistoryContext*))(Il2CppBase() + 0x1C48FCC))(this);
	}
	template <typename T = HistoryEntity*> T GetEntityWithId(int32_t id) {
		return ((T (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C4B264))(this, id);
	}
	template <typename T = HistoryEntity*> T GetEntityWithActionId(int32_t actionId) {
		return ((T (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C4B2C8))(this, actionId);
	}
	template <typename T = HistoryEntity*> T GetDamageSumToTarget(int32_t targetId, int64_t actorPlayerId) {
		return ((T (*)(HistoryContext*, int32_t, int64_t))(Il2CppBase() + 0x1C4B32C))(this, targetId, actorPlayerId);
	}
	template <typename T = HashSet1HistoryEntity*>*> T GetDamagesToPlayer(int64_t playerId) {
		return ((T (*)(HistoryContext*, int64_t))(Il2CppBase() + 0x1C4B3BC))(this, playerId);
	}
	template <typename T = HashSet1HistoryEntity*>*> T GetPlayerDeath(int64_t playerId) {
		return ((T (*)(HistoryContext*, int64_t))(Il2CppBase() + 0x1C4B420))(this, playerId);
	}
	template <typename T = HashSet1HistoryEntity*>*> T GetHealsToPlayer(int64_t playerId) {
		return ((T (*)(HistoryContext*, int64_t))(Il2CppBase() + 0x1C4B484))(this, playerId);
	}
	template <typename T = HashSet1HistoryEntity*>*> T GetDamagesInBattle(int32_t battleId) {
		return ((T (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C4B4E8))(this, battleId);
	}
	template <typename T = HashSet1HistoryEntity*>*> T GetDamagesToTarget(int32_t id) {
		return ((T (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C4B54C))(this, id);
	}
	template <typename T = HashSet1HistoryEntity*>*> T GetHealsToTarget(int32_t id) {
		return ((T (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C4B5B0))(this, id);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(HistoryContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1C4B614))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(HistoryContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1C4B71C))(this, reader, entity);
	}
	template <typename T = HistoryEntity*> T GetLastDamageToPlayer(int64_t playerId) {
		return ((T (*)(HistoryContext*, int64_t))(Il2CppBase() + 0x1C4B90C))(this, playerId);
	}
	template <typename T = HistoryEntity*> T CreateStartFishing(ICommonContexts* world, GameEntity* player, GameEntity* target, ActionEntity* actionEntity) {
		return ((T (*)(HistoryContext*, ICommonContexts*, GameEntity*, GameEntity*, ActionEntity*))(Il2CppBase() + 0x1C4BC38))(this, world, player, target, actionEntity);
	}
	template <typename T = HistoryEntity*> T CreateStartBattleRecord(GameEntity* target) {
		return ((T (*)(HistoryContext*, GameEntity*))(Il2CppBase() + 0x1C4C42C))(this, target);
	}
	template <typename T = PlayerStatistic*> T CreateStartPlayerStatistic(GameEntity* player) {
		return ((T (*)(HistoryContext*, GameEntity*))(Il2CppBase() + 0x1C4CE70))(this, player);
	}
	template <typename T = void> T CreateDamageRecord(GameEntity* target, DamageStatComponent* damageStat, DamageResultParams* damageResult) {
		return ((T (*)(HistoryContext*, GameEntity*, DamageStatComponent*, DamageResultParams*))(Il2CppBase() + 0x1C4D260))(this, target, damageStat, damageResult);
	}
	template <typename T = void> T CreateDamageRecord_1(ChangeHealthData* data) {
		return ((T (*)(HistoryContext*, ChangeHealthData*))(Il2CppBase() + 0x1C4E044))(this, data);
	}
	template <typename T = HistoryEntity*> T CreateKillRecord(GameEntity* target) {
		return ((T (*)(HistoryContext*, GameEntity*))(Il2CppBase() + 0x1C4E408))(this, target);
	}
	template <typename T = HistoryEntity*> T CreateHealRecord(GameEntity* target, DamageStatComponent* damageStat, HealResultParams* healResult) {
		return ((T (*)(HistoryContext*, GameEntity*, DamageStatComponent*, HealResultParams*))(Il2CppBase() + 0x1C4E7F4))(this, target, damageStat, healResult);
	}
	template <typename T = void> T DestroyAll(HashSet1HistoryEntity*>* records, Predicate1HistoryEntity*>* predicate) {
		return ((T (*)(HistoryContext*, HashSet1HistoryEntity*>*, Predicate1HistoryEntity*>*))(Il2CppBase() + 0x1C4EC24))(this, records, predicate);
	}
	template <typename T = BattleStatistic*> T СollectBattleStatistics(int32_t battleId) {
		return ((T (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C4F080))(this, battleId);
	}
	template <typename T = void> T ClearTarget(int32_t targetId) {
		return ((T (*)(HistoryContext*, int32_t))(Il2CppBase() + 0x1C50090))(this, targetId);
	}

};

