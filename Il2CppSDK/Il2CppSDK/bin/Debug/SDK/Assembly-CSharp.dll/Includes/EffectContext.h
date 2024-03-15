#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BlueprintContext2.h" 

class EffectContext : public BlueprintContext2<EffectEntity*, EffectEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectContext"));
	}

	 PrimaryEntityIndex2EffectEntity*, int32_t>*& _idIndex() {
		return *(PrimaryEntityIndex2EffectEntity*, int32_t>**)((uintptr_t)this + 0x110);
	}
	 PrimaryEntityIndex2EffectEntity*, IntString*>*& _singleIndex() {
		return *(PrimaryEntityIndex2EffectEntity*, IntString*>**)((uintptr_t)this + 0x118);
	}
	 EntityIndex2EffectEntity*, IntString*>*& _withBlueprintIndex() {
		return *(EntityIndex2EffectEntity*, IntString*>**)((uintptr_t)this + 0x120);
	}
	 EntityIndex2EffectEntity*, int32_t>*& _withTrailIndex() {
		return *(EntityIndex2EffectEntity*, int32_t>**)((uintptr_t)this + 0x128);
	}
	 EntityIndex2EffectEntity*, int32_t>*& _targetIndex() {
		return *(EntityIndex2EffectEntity*, int32_t>**)((uintptr_t)this + 0x130);
	}
	 EntityIndex2EffectEntity*, int32_t>*& _withArmedIndex() {
		return *(EntityIndex2EffectEntity*, int32_t>**)((uintptr_t)this + 0x138);
	}
	 EntityIndex2EffectEntity*, IntString*>*& _withToolFxIndex() {
		return *(EntityIndex2EffectEntity*, IntString*>**)((uintptr_t)this + 0x140);
	}
	 EntityIndex2EffectEntity*, int32_t>*& _parentIndex() {
		return *(EntityIndex2EffectEntity*, int32_t>**)((uintptr_t)this + 0x148);
	}
	 EntityIndex2EffectEntity*, int32_t>*& _invisibleIndex() {
		return *(EntityIndex2EffectEntity*, int32_t>**)((uintptr_t)this + 0x150);
	}
	 IGroup1EffectEntity*>*& _effectsWithArrow() {
		return *(IGroup1EffectEntity*>**)((uintptr_t)this + 0x158);
	}

	template <typename R = EffectEntity*> R GetEntityWithId(int32_t id) {
		return ((R (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA0958))(this, id);
	}
	template <typename R = EffectEntity*> R GetEntityWithSingle(Il2CppString* singleName, int32_t targetId) {
		return ((R (*)(EffectContext*, Il2CppString*, int32_t))(Il2CppBase() + 0x1AA09BC))(this, singleName, targetId);
	}
	 HashSet1EffectEntity*>* GetActiveOnTargetWithBlueprint(Il2CppString* name, int32_t targetId) {
		return ((HashSet1EffectEntity*>* (*)(EffectContext*, Il2CppString*, int32_t))(Il2CppBase() + 0x1AA0A4C))(this, name, targetId);
	}
	 HashSet1EffectEntity*>* GetEntitiesOnTarget(int32_t targetId) {
		return ((HashSet1EffectEntity*>* (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA0ADC))(this, targetId);
	}
	 HashSet1EffectEntity*>* GetActiveWithParent(int32_t parentId) {
		return ((HashSet1EffectEntity*>* (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA0B40))(this, parentId);
	}
	 HashSet1EffectEntity*>* GetActiveOnTargetWithTrail(int32_t targetId) {
		return ((HashSet1EffectEntity*>* (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA0BA4))(this, targetId);
	}
	template <typename R = bool> R IsToolFxActive(int32_t targetId, Il2CppString* name) {
		return ((R (*)(EffectContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1AA0C08))(this, targetId, name);
	}
	template <typename R = bool> R IsInvisible(int32_t targetId) {
		return ((R (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA0CB4))(this, targetId);
	}
	 Nullable1int32_t>* GetActiveArmed(int32_t targetId) {
		return ((Nullable1int32_t>* (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA0D38))(this, targetId);
	}
	 IGroup1EffectEntity*>* GetEffectsWithArrow() {
		return ((IGroup1EffectEntity*>* (*)(EffectContext*))(Il2CppBase() + 0x1AA10EC))(this);
	}
	template <typename R = void> R RemoveAllEffects(HashSet1EffectEntity*>* effects) {
		return ((R (*)(EffectContext*, HashSet1EffectEntity*>*))(Il2CppBase() + 0x1AA1458))(this, effects);
	}
	template <typename R = void> R SpawnOrExtendEffects(BaseApplyEffectComponent* effectComponent, GameEntity* target, GameEntity* other, float radius) {
		return ((R (*)(EffectContext*, BaseApplyEffectComponent*, GameEntity*, GameEntity*, float))(Il2CppBase() + 0x1AA1868))(this, effectComponent, target, other, radius);
	}
	template <typename R = void> R SpawnEffects(BaseApplyEffectComponent* effectComponent, GameEntity* target, GameEntity* other, int32_t sourceId, int32_t sourceCount, float radius) {
		return ((R (*)(EffectContext*, BaseApplyEffectComponent*, GameEntity*, GameEntity*, int32_t, int32_t, float))(Il2CppBase() + 0x1AA1ECC))(this, effectComponent, target, other, sourceId, sourceCount, radius);
	}
	template <typename R = void> R EndSingleEffects(GameEntity* target, BaseApplyEffectComponent* effectComponent, int32_t sourceId, int32_t count) {
		return ((R (*)(EffectContext*, GameEntity*, BaseApplyEffectComponent*, int32_t, int32_t))(Il2CppBase() + 0x1AA41D4))(this, target, effectComponent, sourceId, count);
	}
	template <typename R = void> R ShowChangeHealthEffect(ArenaUnityWorld* world, GameEntity* target, GameEntity* actor, GameEntity* source, float delta, float blocked, float shielded, DamageType* damageType) {
		return ((R (*)(EffectContext*, ArenaUnityWorld*, GameEntity*, GameEntity*, GameEntity*, float, float, float, DamageType*))(Il2CppBase() + 0x1AA4484))(this, world, target, actor, source, delta, blocked, shielded, damageType);
	}
	template <typename R = bool> R ShowChangeHealth(ArenaUnityWorld* world, GameEntity* target, GameEntity* actor, GameEntity* source) {
		return ((R (*)(EffectContext*, ArenaUnityWorld*, GameEntity*, GameEntity*, GameEntity*))(Il2CppBase() + 0x1AA48E4))(this, world, target, actor, source);
	}
	template <typename R = bool> R Owned(int64_t playerId, GameEntity* target) {
		return ((R (*)(EffectContext*, int64_t, GameEntity*))(Il2CppBase() + 0x1AA49B8))(this, playerId, target);
	}
	template <typename R = EffectEntity*> R SpawnOrExtendEffect(Il2CppString* effectName, GameEntity* target, GameEntity* other, float radius) {
		return ((R (*)(EffectContext*, Il2CppString*, GameEntity*, GameEntity*, float))(Il2CppBase() + 0x1AA1C2C))(this, effectName, target, other, radius);
	}
	template <typename R = EffectEntity*> R SpawnEffect(Il2CppString* effectName, GameEntity* target, GameEntity* other, float radius, int32_t count) {
		return ((R (*)(EffectContext*, Il2CppString*, GameEntity*, GameEntity*, float, int32_t))(Il2CppBase() + 0x1AA4B38))(this, effectName, target, other, radius, count);
	}
	template <typename R = EffectEntity*> R SpawnChildEffect(EffectEntity* parentEffect, Il2CppString* childName) {
		return ((R (*)(EffectContext*, EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA4B5C))(this, parentEffect, childName);
	}
	template <typename R = EffectEntity*> R SpawnEffect_1(Il2CppString* effectName, GameEntity* target, GameEntity* other, int32_t sourceId, int32_t sourceCount, int32_t parentId, float radius) {
		return ((R (*)(EffectContext*, Il2CppString*, GameEntity*, GameEntity*, int32_t, int32_t, int32_t, float))(Il2CppBase() + 0x1AA22E8))(this, effectName, target, other, sourceId, sourceCount, parentId, radius);
	}
	template <typename R = uintptr_t> R SpawnEffectPrefab(EffectEntity* effect, GameEntity* target, ViewComponent* targetView, float radius, GameEntity* other) {
		return ((R (*)(EffectContext*, EffectEntity*, GameEntity*, ViewComponent*, float, GameEntity*))(Il2CppBase() + 0x1AA5964))(this, effect, target, targetView, radius, other);
	}
	template <typename R = void> R EndSingleEffect(GameEntity* target, Il2CppString* effectName, int32_t sourceId, int32_t count) {
		return ((R (*)(EffectContext*, GameEntity*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1AA4304))(this, target, effectName, sourceId, count);
	}
	template <typename R = void> R StopSingleTrailEffects(int32_t parenId) {
		return ((R (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA8114))(this, parenId);
	}

};

