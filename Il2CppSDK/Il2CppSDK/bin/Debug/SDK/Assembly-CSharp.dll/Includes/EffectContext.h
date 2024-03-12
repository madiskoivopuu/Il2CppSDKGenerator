#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BlueprintContext`2" 

class EffectContext: BlueprintContext2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectContext"));
	}

	template <typename T = void*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& _singleIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = void*> T& _withBlueprintIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = void*> T& _withTrailIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = void*> T& _targetIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = void*> T& _withArmedIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = void*> T& _withToolFxIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = void*> T& _parentIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = void*> T& _invisibleIndex() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = void*> T& _effectsWithArrow() {
		return *(T*)((uintptr_t)this + 0x158);
	}

	template <typename T = uintptr_t> T GetEntityWithId(int32_t id) {
		return ((T (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA0958))(this, id);
	}
	template <typename T = uintptr_t> T GetEntityWithSingle(Il2CppString* singleName, int32_t targetId) {
		return ((T (*)(EffectContext*, Il2CppString*, int32_t))(Il2CppBase() + 0x1AA09BC))(this, singleName, targetId);
	}
	template <typename T = void*> T GetActiveOnTargetWithBlueprint(Il2CppString* name, int32_t targetId) {
		return ((T (*)(EffectContext*, Il2CppString*, int32_t))(Il2CppBase() + 0x1AA0A4C))(this, name, targetId);
	}
	template <typename T = void*> T GetEntitiesOnTarget(int32_t targetId) {
		return ((T (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA0ADC))(this, targetId);
	}
	template <typename T = void*> T GetActiveWithParent(int32_t parentId) {
		return ((T (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA0B40))(this, parentId);
	}
	template <typename T = void*> T GetActiveOnTargetWithTrail(int32_t targetId) {
		return ((T (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA0BA4))(this, targetId);
	}
	template <typename T = bool> T IsToolFxActive(int32_t targetId, Il2CppString* name) {
		return ((T (*)(EffectContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1AA0C08))(this, targetId, name);
	}
	template <typename T = bool> T IsInvisible(int32_t targetId) {
		return ((T (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA0CB4))(this, targetId);
	}
	template <typename T = void*> T GetActiveArmed(int32_t targetId) {
		return ((T (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA0D38))(this, targetId);
	}
	template <typename T = void*> T GetEffectsWithArrow() {
		return ((T (*)(EffectContext*))(Il2CppBase() + 0x1AA10EC))(this);
	}
	template <typename T = void> T RemoveAllEffects(void* effects) {
		return ((T (*)(EffectContext*, void*))(Il2CppBase() + 0x1AA1458))(this, effects);
	}
	template <typename T = void> T SpawnOrExtendEffects(uintptr_t effectComponent, uintptr_t target, uintptr_t other, float radius) {
		return ((T (*)(EffectContext*, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1AA1868))(this, effectComponent, target, other, radius);
	}
	template <typename T = void> T SpawnEffects(uintptr_t effectComponent, uintptr_t target, uintptr_t other, int32_t sourceId, int32_t sourceCount, float radius) {
		return ((T (*)(EffectContext*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x1AA1ECC))(this, effectComponent, target, other, sourceId, sourceCount, radius);
	}
	template <typename T = void> T EndSingleEffects(uintptr_t target, uintptr_t effectComponent, int32_t sourceId, int32_t count) {
		return ((T (*)(EffectContext*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1AA41D4))(this, target, effectComponent, sourceId, count);
	}
	template <typename T = void> T ShowChangeHealthEffect(uintptr_t world, uintptr_t target, uintptr_t actor, uintptr_t source, float delta, float blocked, float shielded, uintptr_t damageType) {
		return ((T (*)(EffectContext*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, float, float, uintptr_t))(Il2CppBase() + 0x1AA4484))(this, world, target, actor, source, delta, blocked, shielded, damageType);
	}
	template <typename T = bool> T ShowChangeHealth(uintptr_t world, uintptr_t target, uintptr_t actor, uintptr_t source) {
		return ((T (*)(EffectContext*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AA48E4))(this, world, target, actor, source);
	}
	template <typename T = bool> T Owned(int64_t playerId, uintptr_t target) {
		return ((T (*)(EffectContext*, int64_t, uintptr_t))(Il2CppBase() + 0x1AA49B8))(this, playerId, target);
	}
	template <typename T = uintptr_t> T SpawnOrExtendEffect(Il2CppString* effectName, uintptr_t target, uintptr_t other, float radius) {
		return ((T (*)(EffectContext*, Il2CppString*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1AA1C2C))(this, effectName, target, other, radius);
	}
	template <typename T = uintptr_t> T SpawnEffect(Il2CppString* effectName, uintptr_t target, uintptr_t other, float radius, int32_t count) {
		return ((T (*)(EffectContext*, Il2CppString*, uintptr_t, uintptr_t, float, int32_t))(Il2CppBase() + 0x1AA4B38))(this, effectName, target, other, radius, count);
	}
	template <typename T = uintptr_t> T SpawnChildEffect(uintptr_t parentEffect, Il2CppString* childName) {
		return ((T (*)(EffectContext*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1AA4B5C))(this, parentEffect, childName);
	}
	template <typename T = uintptr_t> T SpawnEffect_1(Il2CppString* effectName, uintptr_t target, uintptr_t other, int32_t sourceId, int32_t sourceCount, int32_t parentId, float radius) {
		return ((T (*)(EffectContext*, Il2CppString*, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, float))(Il2CppBase() + 0x1AA22E8))(this, effectName, target, other, sourceId, sourceCount, parentId, radius);
	}
	template <typename T = uintptr_t> T SpawnEffectPrefab(uintptr_t effect, uintptr_t target, uintptr_t targetView, float radius, uintptr_t other) {
		return ((T (*)(EffectContext*, uintptr_t, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1AA5964))(this, effect, target, targetView, radius, other);
	}
	template <typename T = void> T EndSingleEffect(uintptr_t target, Il2CppString* effectName, int32_t sourceId, int32_t count) {
		return ((T (*)(EffectContext*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1AA4304))(this, target, effectName, sourceId, count);
	}
	template <typename T = void> T StopSingleTrailEffects(int32_t parenId) {
		return ((T (*)(EffectContext*, int32_t))(Il2CppBase() + 0x1AA8114))(this, parenId);
	}

};

}
