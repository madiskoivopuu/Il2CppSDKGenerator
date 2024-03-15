#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 
#include "EventEntity.h" 

class EventContext : public Context1<EventEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventContext"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	 PrimaryEntityIndex2<EventEntity*, int32_t>*& _inventoryChangedIndex() {
		return *(PrimaryEntityIndex2<EventEntity*, int32_t>**)((uintptr_t)this + 0xD8);
	}
	 PrimaryEntityIndex2<EventEntity*, int64_t>*& _questTargetChangedIndex() {
		return *(PrimaryEntityIndex2<EventEntity*, int64_t>**)((uintptr_t)this + 0xE0);
	}
	 PrimaryEntityIndex2<EventEntity*, int64_t>*& _questsChangedIndex() {
		return *(PrimaryEntityIndex2<EventEntity*, int64_t>**)((uintptr_t)this + 0xE8);
	}
	 PrimaryEntityIndex2<EventEntity*, int64_t>*& _currencyChangedIndex() {
		return *(PrimaryEntityIndex2<EventEntity*, int64_t>**)((uintptr_t)this + 0xF0);
	}
	 PrimaryEntityIndex2<EventEntity*, int64_t>*& _playerGuildChangedIndex() {
		return *(PrimaryEntityIndex2<EventEntity*, int64_t>**)((uintptr_t)this + 0xF8);
	}
	 PrimaryEntityIndex2<EventEntity*, LongLong>*& _guildQuestChangedIndex() {
		return *(PrimaryEntityIndex2<EventEntity*, LongLong>**)((uintptr_t)this + 0x100);
	}
	 PrimaryEntityIndex2<EventEntity*, IntLong>*& _vipChangedIndex() {
		return *(PrimaryEntityIndex2<EventEntity*, IntLong>**)((uintptr_t)this + 0x108);
	}
	 EntityIndex2<EventEntity*, Il2CppString*>*& _waveEventItemIndex() {
		return *(EntityIndex2<EventEntity*, Il2CppString*>**)((uintptr_t)this + 0x110);
	}
	 PrimaryEntityIndex2<EventEntity*, IntString>*& _changeCooldownIndex() {
		return *(PrimaryEntityIndex2<EventEntity*, IntString>**)((uintptr_t)this + 0x118);
	}
	 PrimaryEntityIndex2<EventEntity*, int64_t>*& _addExpIndex() {
		return *(PrimaryEntityIndex2<EventEntity*, int64_t>**)((uintptr_t)this + 0x120);
	}
	 PrimaryEntityIndex2<EventEntity*, int64_t>*& _addPetExpIndex() {
		return *(PrimaryEntityIndex2<EventEntity*, int64_t>**)((uintptr_t)this + 0x128);
	}

	 HashSet1<EventEntity*>* GetEntitiesWithWaveEvent(Il2CppString* eventName) {
		return ((HashSet1<EventEntity*>* (*)(EventContext*, Il2CppString*))(Il2CppBase() + 0x13850A8))(this, eventName);
	}
	template <typename R = EventEntity*> R GetInventoryChanged(int32_t actorId) {
		return ((R (*)(EventContext*, int32_t))(Il2CppBase() + 0x1385130))(this, actorId);
	}
	template <typename R = EventEntity*> R GetQuestTargetChanged(int64_t playerId) {
		return ((R (*)(EventContext*, int64_t))(Il2CppBase() + 0x1385194))(this, playerId);
	}
	template <typename R = EventEntity*> R GetGuildQuestChanged(int64_t playerId, int64_t guildQuestId) {
		return ((R (*)(EventContext*, int64_t, int64_t))(Il2CppBase() + 0x13851F8))(this, playerId, guildQuestId);
	}
	template <typename R = EventEntity*> R GetQuestsChanged(int64_t ownerId) {
		return ((R (*)(EventContext*, int64_t))(Il2CppBase() + 0x1385288))(this, ownerId);
	}
	template <typename R = EventEntity*> R GetCurrencyChanged(int64_t ownerId) {
		return ((R (*)(EventContext*, int64_t))(Il2CppBase() + 0x13852EC))(this, ownerId);
	}
	template <typename R = EventEntity*> R GetPlayerGuildChanged(int64_t playerId) {
		return ((R (*)(EventContext*, int64_t))(Il2CppBase() + 0x1385350))(this, playerId);
	}
	template <typename R = EventEntity*> R GetVipChanged(int64_t ownerId, VipBonusType vipBonusType) {
		return ((R (*)(EventContext*, int64_t, VipBonusType))(Il2CppBase() + 0x13853B4))(this, ownerId, vipBonusType);
	}
	template <typename R = EventEntity*> R GetChangeCooldown(int32_t targetId, Il2CppString* itemTag) {
		return ((R (*)(EventContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1385444))(this, targetId, itemTag);
	}
	template <typename R = void> R DestroyAll(HashSet1<EventEntity*>* eventEntities) {
		return ((R (*)(EventContext*, HashSet1<EventEntity*>*))(Il2CppBase() + 0x13854D4))(this, eventEntities);
	}
	template <typename R = EventEntity*> R CreateLockUnlock(int32_t targetId, bool unlock, GameEntity* actor) {
		return ((R (*)(EventContext*, int32_t, bool, GameEntity*))(Il2CppBase() + 0x13857E0))(this, targetId, unlock, actor);
	}
	template <typename R = EventEntity*> R CreateRemoveBuild(GameEntity* actor, int32_t targetId) {
		return ((R (*)(EventContext*, GameEntity*, int32_t))(Il2CppBase() + 0x1385964))(this, actor, targetId);
	}
	template <typename R = EventEntity*> R CreateCraftResult(GameEntity* actor, GameEntity* target, Il2CppString* resource, int32_t count) {
		return ((R (*)(EventContext*, GameEntity*, GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1385A74))(this, actor, target, resource, count);
	}
	template <typename R = EventEntity*> R CreateTakeBuild(GameEntity* actor, int32_t targetId, bool disassemble) {
		return ((R (*)(EventContext*, GameEntity*, int32_t, bool))(Il2CppBase() + 0x1385C84))(this, actor, targetId, disassemble);
	}
	template <typename R = EventEntity*> R CreateUpgradeBuild(GameEntity* actor, int32_t targetId) {
		return ((R (*)(EventContext*, GameEntity*, int32_t))(Il2CppBase() + 0x1385DA0))(this, actor, targetId);
	}
	template <typename R = EventEntity*> R CreateBuild(GameEntity* actor, Il2CppString* buildName, float x, float y, uint8_t orientation) {
		return ((R (*)(EventContext*, GameEntity*, Il2CppString*, float, float, uint8_t))(Il2CppBase() + 0x1385EB0))(this, actor, buildName, x, y, orientation);
	}
	template <typename R = EventEntity*> R CreateMoveBuild(GameEntity* actor, int32_t targetId, float x, float y, uint8_t orientation) {
		return ((R (*)(EventContext*, GameEntity*, int32_t, float, float, uint8_t))(Il2CppBase() + 0x1385FF0))(this, actor, targetId, x, y, orientation);
	}
	template <typename R = EventEntity*> R CreateCraftBlueprint(GameEntity* actor, Il2CppString* blueprintName) {
		return ((R (*)(EventContext*, GameEntity*, Il2CppString*))(Il2CppBase() + 0x1386140))(this, actor, blueprintName);
	}
	template <typename R = EventEntity*> R CreateAddExperience(GameEntity* player, float value, bool addForPet) {
		return ((R (*)(EventContext*, GameEntity*, float, bool))(Il2CppBase() + 0x1386240))(this, player, value, addForPet);
	}
	template <typename R = EventEntity*> R CreateAddExperience_1(int64_t playerId, float value) {
		return ((R (*)(EventContext*, int64_t, float))(Il2CppBase() + 0x1386678))(this, playerId, value);
	}
	template <typename R = EventEntity*> R CreateAddPetExperience(GameEntity* player, float value) {
		return ((R (*)(EventContext*, GameEntity*, float))(Il2CppBase() + 0x1386564))(this, player, value);
	}
	template <typename R = EventEntity*> R CreateAddPetExperience_1(int64_t playerId, float value) {
		return ((R (*)(EventContext*, int64_t, float))(Il2CppBase() + 0x1386770))(this, playerId, value);
	}
	template <typename R = EventEntity*> R CreatePlayerEnter(GameEntity* actor, bool creation) {
		return ((R (*)(EventContext*, GameEntity*, bool))(Il2CppBase() + 0x1386868))(this, actor, creation);
	}
	template <typename R = EventEntity*> R CreateSetPlayerKill(GameEntity* actor, bool isPlayerKill) {
		return ((R (*)(EventContext*, GameEntity*, bool))(Il2CppBase() + 0x1386968))(this, actor, isPlayerKill);
	}
	template <typename R = EventEntity*> R DistributeDamage(EventEntity* damageEvent, GameEntity* target) {
		return ((R (*)(EventContext*, EventEntity*, GameEntity*))(Il2CppBase() + 0x1386A68))(this, damageEvent, target);
	}
	template <typename R = EventEntity*> R CreateDamage(GameEntity* actor, GameEntity* target, float baseDamage, Il2CppString* itemName, DamageType damageType, ConfigEntity* damageConfig, bool showDamage, float maxTargetHealthCoef, ActionEntity* action) {
		return ((R (*)(EventContext*, GameEntity*, GameEntity*, float, Il2CppString*, DamageType, ConfigEntity*, bool, float, ActionEntity*))(Il2CppBase() + 0x1386F78))(this, actor, target, baseDamage, itemName, damageType, damageConfig, showDamage, maxTargetHealthCoef, action);
	}
	template <typename R = EventEntity*> R CreateHeal(GameEntity* actor, GameEntity* target, float heal, Il2CppString* itemName, HealParams healParams, bool showHeal, Il2CppString* healEffectName) {
		return ((R (*)(EventContext*, GameEntity*, GameEntity*, float, Il2CppString*, HealParams, bool, Il2CppString*))(Il2CppBase() + 0x1387678))(this, actor, target, heal, itemName, healParams, showHeal, healEffectName);
	}
	template <typename R = EventEntity*> R CreateChangeCooldown(GameEntity* target, Il2CppString* itemTag, float delta) {
		return ((R (*)(EventContext*, GameEntity*, Il2CppString*, float))(Il2CppBase() + 0x13879D8))(this, target, itemTag, delta);
	}
	template <typename R = EventEntity*> R CreateTenacityRegeneration(GameEntity* actor, GameEntity* target, float regeneration, bool showRegeneration) {
		return ((R (*)(EventContext*, GameEntity*, GameEntity*, float, bool))(Il2CppBase() + 0x1387AF4))(this, actor, target, regeneration, showRegeneration);
	}
	template <typename R = EventEntity*> R CreateResurrect(GameEntity* actor, GameEntity* target, float heal, bool showHeal) {
		return ((R (*)(EventContext*, GameEntity*, GameEntity*, float, bool))(Il2CppBase() + 0x1387D0C))(this, actor, target, heal, showHeal);
	}
	template <typename R = EventEntity*> R CreatePickup(GameEntity* actor, GameEntity* target, Il2CppString* randomGroup, bool destroyTarget, int32_t count) {
		return ((R (*)(EventContext*, GameEntity*, GameEntity*, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x1387EEC))(this, actor, target, randomGroup, destroyTarget, count);
	}
	template <typename R = EventEntity*> R CreatePlace(GameEntity* actor, Il2CppString* name, float posX, float posY, Il2CppString* magic, float pushOutRadius, bool saveable) {
		return ((R (*)(EventContext*, GameEntity*, Il2CppString*, float, float, Il2CppString*, float, bool))(Il2CppBase() + 0x13880B0))(this, actor, name, posX, posY, magic, pushOutRadius, saveable);
	}
	template <typename R = EventEntity*> R RaisePlayerGuildChanged(int64_t playerId) {
		return ((R (*)(EventContext*, int64_t))(Il2CppBase() + 0x13883FC))(this, playerId);
	}
	template <typename R = EventEntity*> R RaiseCurrencyChanged(int64_t playerId, Currencies currencies) {
		return ((R (*)(EventContext*, int64_t, Currencies))(Il2CppBase() + 0x13884A8))(this, playerId, currencies);
	}
	template <typename R = EventEntity*> R RaiseCurrencyChanged_1(int64_t playerId, CurrencyType currency, int32_t delta) {
		return ((R (*)(EventContext*, int64_t, CurrencyType, int32_t))(Il2CppBase() + 0x13885A8))(this, playerId, currency, delta);
	}
	template <typename R = EventEntity*> R RaiseGuildQuestChanged(int64_t playerId, int64_t guildQuestId, int32_t add) {
		return ((R (*)(EventContext*, int64_t, int64_t, int32_t))(Il2CppBase() + 0x13886D8))(this, playerId, guildQuestId, add);
	}
	template <typename R = EventEntity*> R CreatePlace_1(Il2CppString* name, float posX, float posY, bool saveable) {
		return ((R (*)(EventContext*, Il2CppString*, float, float, bool))(Il2CppBase() + 0x13887E4))(this, name, posX, posY, saveable);
	}
	template <typename R = void> R RaiseQuestTargetChanged(int64_t playerId) {
		return ((R (*)(EventContext*, int64_t))(Il2CppBase() + 0x13888A4))(this, playerId);
	}
	template <typename R = void> R RaiseInventoryChanged(int32_t actorId) {
		return ((R (*)(EventContext*, int32_t))(Il2CppBase() + 0x1388954))(this, actorId);
	}
	template <typename R = void> R RaiseMountInventoryChanged(int32_t mountInventoryId) {
		return ((R (*)(EventContext*, int32_t))(Il2CppBase() + 0x1388A04))(this, mountInventoryId);
	}
	template <typename R = void> R RaiseRuneInventoryChanged(int32_t runeInventoryId) {
		return ((R (*)(EventContext*, int32_t))(Il2CppBase() + 0x1388AB4))(this, runeInventoryId);
	}
	template <typename R = void> R RaisePetInventoryChanged(int32_t petInventoryId) {
		return ((R (*)(EventContext*, int32_t))(Il2CppBase() + 0x1388B64))(this, petInventoryId);
	}
	template <typename R = void> R RaiseQuestsChanged(int64_t ownerId) {
		return ((R (*)(EventContext*, int64_t))(Il2CppBase() + 0x1388C14))(this, ownerId);
	}
	template <typename R = void> R RaiseVipChanged(int64_t ownerId, VipBonusType type) {
		return ((R (*)(EventContext*, int64_t, VipBonusType))(Il2CppBase() + 0x1388CC4))(this, ownerId, type);
	}

};

