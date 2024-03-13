#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 

class EventContext : public Context1<EventEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventContext"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = PrimaryEntityIndex2EventEntity*, int32_t>*> T& _inventoryChangedIndex() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = PrimaryEntityIndex2EventEntity*, int64_t>*> T& _questTargetChangedIndex() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = PrimaryEntityIndex2EventEntity*, int64_t>*> T& _questsChangedIndex() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = PrimaryEntityIndex2EventEntity*, int64_t>*> T& _currencyChangedIndex() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = PrimaryEntityIndex2EventEntity*, int64_t>*> T& _playerGuildChangedIndex() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = PrimaryEntityIndex2EventEntity*, LongLong*>*> T& _guildQuestChangedIndex() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = PrimaryEntityIndex2EventEntity*, IntLong*>*> T& _vipChangedIndex() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = EntityIndex2EventEntity*, Il2CppString*>*> T& _waveEventItemIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = PrimaryEntityIndex2EventEntity*, IntString*>*> T& _changeCooldownIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = PrimaryEntityIndex2EventEntity*, int64_t>*> T& _addExpIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = PrimaryEntityIndex2EventEntity*, int64_t>*> T& _addPetExpIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}

	template <typename T = HashSet1EventEntity*>*> T GetEntitiesWithWaveEvent(Il2CppString* eventName) {
		return ((T (*)(EventContext*, Il2CppString*))(Il2CppBase() + 0x13850A8))(this, eventName);
	}
	template <typename T = EventEntity*> T GetInventoryChanged(int32_t actorId) {
		return ((T (*)(EventContext*, int32_t))(Il2CppBase() + 0x1385130))(this, actorId);
	}
	template <typename T = EventEntity*> T GetQuestTargetChanged(int64_t playerId) {
		return ((T (*)(EventContext*, int64_t))(Il2CppBase() + 0x1385194))(this, playerId);
	}
	template <typename T = EventEntity*> T GetGuildQuestChanged(int64_t playerId, int64_t guildQuestId) {
		return ((T (*)(EventContext*, int64_t, int64_t))(Il2CppBase() + 0x13851F8))(this, playerId, guildQuestId);
	}
	template <typename T = EventEntity*> T GetQuestsChanged(int64_t ownerId) {
		return ((T (*)(EventContext*, int64_t))(Il2CppBase() + 0x1385288))(this, ownerId);
	}
	template <typename T = EventEntity*> T GetCurrencyChanged(int64_t ownerId) {
		return ((T (*)(EventContext*, int64_t))(Il2CppBase() + 0x13852EC))(this, ownerId);
	}
	template <typename T = EventEntity*> T GetPlayerGuildChanged(int64_t playerId) {
		return ((T (*)(EventContext*, int64_t))(Il2CppBase() + 0x1385350))(this, playerId);
	}
	template <typename T = EventEntity*> T GetVipChanged(int64_t ownerId, VipBonusType* vipBonusType) {
		return ((T (*)(EventContext*, int64_t, VipBonusType*))(Il2CppBase() + 0x13853B4))(this, ownerId, vipBonusType);
	}
	template <typename T = EventEntity*> T GetChangeCooldown(int32_t targetId, Il2CppString* itemTag) {
		return ((T (*)(EventContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1385444))(this, targetId, itemTag);
	}
	template <typename T = void> T DestroyAll(HashSet1EventEntity*>* eventEntities) {
		return ((T (*)(EventContext*, HashSet1EventEntity*>*))(Il2CppBase() + 0x13854D4))(this, eventEntities);
	}
	template <typename T = EventEntity*> T CreateLockUnlock(int32_t targetId, bool unlock, GameEntity* actor) {
		return ((T (*)(EventContext*, int32_t, bool, GameEntity*))(Il2CppBase() + 0x13857E0))(this, targetId, unlock, actor);
	}
	template <typename T = EventEntity*> T CreateRemoveBuild(GameEntity* actor, int32_t targetId) {
		return ((T (*)(EventContext*, GameEntity*, int32_t))(Il2CppBase() + 0x1385964))(this, actor, targetId);
	}
	template <typename T = EventEntity*> T CreateCraftResult(GameEntity* actor, GameEntity* target, Il2CppString* resource, int32_t count) {
		return ((T (*)(EventContext*, GameEntity*, GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1385A74))(this, actor, target, resource, count);
	}
	template <typename T = EventEntity*> T CreateTakeBuild(GameEntity* actor, int32_t targetId, bool disassemble) {
		return ((T (*)(EventContext*, GameEntity*, int32_t, bool))(Il2CppBase() + 0x1385C84))(this, actor, targetId, disassemble);
	}
	template <typename T = EventEntity*> T CreateUpgradeBuild(GameEntity* actor, int32_t targetId) {
		return ((T (*)(EventContext*, GameEntity*, int32_t))(Il2CppBase() + 0x1385DA0))(this, actor, targetId);
	}
	template <typename T = EventEntity*> T CreateBuild(GameEntity* actor, Il2CppString* buildName, float x, float y, uint8_t orientation) {
		return ((T (*)(EventContext*, GameEntity*, Il2CppString*, float, float, uint8_t))(Il2CppBase() + 0x1385EB0))(this, actor, buildName, x, y, orientation);
	}
	template <typename T = EventEntity*> T CreateMoveBuild(GameEntity* actor, int32_t targetId, float x, float y, uint8_t orientation) {
		return ((T (*)(EventContext*, GameEntity*, int32_t, float, float, uint8_t))(Il2CppBase() + 0x1385FF0))(this, actor, targetId, x, y, orientation);
	}
	template <typename T = EventEntity*> T CreateCraftBlueprint(GameEntity* actor, Il2CppString* blueprintName) {
		return ((T (*)(EventContext*, GameEntity*, Il2CppString*))(Il2CppBase() + 0x1386140))(this, actor, blueprintName);
	}
	template <typename T = EventEntity*> T CreateAddExperience(GameEntity* player, float value, bool addForPet) {
		return ((T (*)(EventContext*, GameEntity*, float, bool))(Il2CppBase() + 0x1386240))(this, player, value, addForPet);
	}
	template <typename T = EventEntity*> T CreateAddExperience_1(int64_t playerId, float value) {
		return ((T (*)(EventContext*, int64_t, float))(Il2CppBase() + 0x1386678))(this, playerId, value);
	}
	template <typename T = EventEntity*> T CreateAddPetExperience(GameEntity* player, float value) {
		return ((T (*)(EventContext*, GameEntity*, float))(Il2CppBase() + 0x1386564))(this, player, value);
	}
	template <typename T = EventEntity*> T CreateAddPetExperience_1(int64_t playerId, float value) {
		return ((T (*)(EventContext*, int64_t, float))(Il2CppBase() + 0x1386770))(this, playerId, value);
	}
	template <typename T = EventEntity*> T CreatePlayerEnter(GameEntity* actor, bool creation) {
		return ((T (*)(EventContext*, GameEntity*, bool))(Il2CppBase() + 0x1386868))(this, actor, creation);
	}
	template <typename T = EventEntity*> T CreateSetPlayerKill(GameEntity* actor, bool isPlayerKill) {
		return ((T (*)(EventContext*, GameEntity*, bool))(Il2CppBase() + 0x1386968))(this, actor, isPlayerKill);
	}
	template <typename T = EventEntity*> T DistributeDamage(EventEntity* damageEvent, GameEntity* target) {
		return ((T (*)(EventContext*, EventEntity*, GameEntity*))(Il2CppBase() + 0x1386A68))(this, damageEvent, target);
	}
	template <typename T = EventEntity*> T CreateDamage(GameEntity* actor, GameEntity* target, float baseDamage, Il2CppString* itemName, DamageType* damageType, ConfigEntity* damageConfig, bool showDamage, float maxTargetHealthCoef, ActionEntity* action) {
		return ((T (*)(EventContext*, GameEntity*, GameEntity*, float, Il2CppString*, DamageType*, ConfigEntity*, bool, float, ActionEntity*))(Il2CppBase() + 0x1386F78))(this, actor, target, baseDamage, itemName, damageType, damageConfig, showDamage, maxTargetHealthCoef, action);
	}
	template <typename T = EventEntity*> T CreateHeal(GameEntity* actor, GameEntity* target, float heal, Il2CppString* itemName, HealParams* healParams, bool showHeal, Il2CppString* healEffectName) {
		return ((T (*)(EventContext*, GameEntity*, GameEntity*, float, Il2CppString*, HealParams*, bool, Il2CppString*))(Il2CppBase() + 0x1387678))(this, actor, target, heal, itemName, healParams, showHeal, healEffectName);
	}
	template <typename T = EventEntity*> T CreateChangeCooldown(GameEntity* target, Il2CppString* itemTag, float delta) {
		return ((T (*)(EventContext*, GameEntity*, Il2CppString*, float))(Il2CppBase() + 0x13879D8))(this, target, itemTag, delta);
	}
	template <typename T = EventEntity*> T CreateTenacityRegeneration(GameEntity* actor, GameEntity* target, float regeneration, bool showRegeneration) {
		return ((T (*)(EventContext*, GameEntity*, GameEntity*, float, bool))(Il2CppBase() + 0x1387AF4))(this, actor, target, regeneration, showRegeneration);
	}
	template <typename T = EventEntity*> T CreateResurrect(GameEntity* actor, GameEntity* target, float heal, bool showHeal) {
		return ((T (*)(EventContext*, GameEntity*, GameEntity*, float, bool))(Il2CppBase() + 0x1387D0C))(this, actor, target, heal, showHeal);
	}
	template <typename T = EventEntity*> T CreatePickup(GameEntity* actor, GameEntity* target, Il2CppString* randomGroup, bool destroyTarget, int32_t count) {
		return ((T (*)(EventContext*, GameEntity*, GameEntity*, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x1387EEC))(this, actor, target, randomGroup, destroyTarget, count);
	}
	template <typename T = EventEntity*> T CreatePlace(GameEntity* actor, Il2CppString* name, float posX, float posY, Il2CppString* magic, float pushOutRadius, bool saveable) {
		return ((T (*)(EventContext*, GameEntity*, Il2CppString*, float, float, Il2CppString*, float, bool))(Il2CppBase() + 0x13880B0))(this, actor, name, posX, posY, magic, pushOutRadius, saveable);
	}
	template <typename T = EventEntity*> T RaisePlayerGuildChanged(int64_t playerId) {
		return ((T (*)(EventContext*, int64_t))(Il2CppBase() + 0x13883FC))(this, playerId);
	}
	template <typename T = EventEntity*> T RaiseCurrencyChanged(int64_t playerId, Currencies* currencies) {
		return ((T (*)(EventContext*, int64_t, Currencies*))(Il2CppBase() + 0x13884A8))(this, playerId, currencies);
	}
	template <typename T = EventEntity*> T RaiseCurrencyChanged_1(int64_t playerId, CurrencyType* currency, int32_t delta) {
		return ((T (*)(EventContext*, int64_t, CurrencyType*, int32_t))(Il2CppBase() + 0x13885A8))(this, playerId, currency, delta);
	}
	template <typename T = EventEntity*> T RaiseGuildQuestChanged(int64_t playerId, int64_t guildQuestId, int32_t add) {
		return ((T (*)(EventContext*, int64_t, int64_t, int32_t))(Il2CppBase() + 0x13886D8))(this, playerId, guildQuestId, add);
	}
	template <typename T = EventEntity*> T CreatePlace_1(Il2CppString* name, float posX, float posY, bool saveable) {
		return ((T (*)(EventContext*, Il2CppString*, float, float, bool))(Il2CppBase() + 0x13887E4))(this, name, posX, posY, saveable);
	}
	template <typename T = void> T RaiseQuestTargetChanged(int64_t playerId) {
		return ((T (*)(EventContext*, int64_t))(Il2CppBase() + 0x13888A4))(this, playerId);
	}
	template <typename T = void> T RaiseInventoryChanged(int32_t actorId) {
		return ((T (*)(EventContext*, int32_t))(Il2CppBase() + 0x1388954))(this, actorId);
	}
	template <typename T = void> T RaiseMountInventoryChanged(int32_t mountInventoryId) {
		return ((T (*)(EventContext*, int32_t))(Il2CppBase() + 0x1388A04))(this, mountInventoryId);
	}
	template <typename T = void> T RaiseRuneInventoryChanged(int32_t runeInventoryId) {
		return ((T (*)(EventContext*, int32_t))(Il2CppBase() + 0x1388AB4))(this, runeInventoryId);
	}
	template <typename T = void> T RaisePetInventoryChanged(int32_t petInventoryId) {
		return ((T (*)(EventContext*, int32_t))(Il2CppBase() + 0x1388B64))(this, petInventoryId);
	}
	template <typename T = void> T RaiseQuestsChanged(int64_t ownerId) {
		return ((T (*)(EventContext*, int64_t))(Il2CppBase() + 0x1388C14))(this, ownerId);
	}
	template <typename T = void> T RaiseVipChanged(int64_t ownerId, VipBonusType* type) {
		return ((T (*)(EventContext*, int64_t, VipBonusType*))(Il2CppBase() + 0x1388CC4))(this, ownerId, type);
	}

};

