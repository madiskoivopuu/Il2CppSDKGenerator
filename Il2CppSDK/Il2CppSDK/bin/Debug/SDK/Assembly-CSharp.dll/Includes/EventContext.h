#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context`1" 

class EventContext: Context1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventContext"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = void*> T& _inventoryChangedIndex() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = void*> T& _questTargetChangedIndex() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = void*> T& _questsChangedIndex() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = void*> T& _currencyChangedIndex() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = void*> T& _playerGuildChangedIndex() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = void*> T& _guildQuestChangedIndex() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = void*> T& _vipChangedIndex() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = void*> T& _waveEventItemIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& _changeCooldownIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = void*> T& _addExpIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = void*> T& _addPetExpIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}

	template <typename T = void*> T GetEntitiesWithWaveEvent(Il2CppString* eventName) {
		return ((T (*)(EventContext*, Il2CppString*))(Il2CppBase() + 0x13850A8))(this, eventName);
	}
	template <typename T = uintptr_t> T GetInventoryChanged(int32_t actorId) {
		return ((T (*)(EventContext*, int32_t))(Il2CppBase() + 0x1385130))(this, actorId);
	}
	template <typename T = uintptr_t> T GetQuestTargetChanged(int64_t playerId) {
		return ((T (*)(EventContext*, int64_t))(Il2CppBase() + 0x1385194))(this, playerId);
	}
	template <typename T = uintptr_t> T GetGuildQuestChanged(int64_t playerId, int64_t guildQuestId) {
		return ((T (*)(EventContext*, int64_t, int64_t))(Il2CppBase() + 0x13851F8))(this, playerId, guildQuestId);
	}
	template <typename T = uintptr_t> T GetQuestsChanged(int64_t ownerId) {
		return ((T (*)(EventContext*, int64_t))(Il2CppBase() + 0x1385288))(this, ownerId);
	}
	template <typename T = uintptr_t> T GetCurrencyChanged(int64_t ownerId) {
		return ((T (*)(EventContext*, int64_t))(Il2CppBase() + 0x13852EC))(this, ownerId);
	}
	template <typename T = uintptr_t> T GetPlayerGuildChanged(int64_t playerId) {
		return ((T (*)(EventContext*, int64_t))(Il2CppBase() + 0x1385350))(this, playerId);
	}
	template <typename T = uintptr_t> T GetVipChanged(int64_t ownerId, uintptr_t vipBonusType) {
		return ((T (*)(EventContext*, int64_t, uintptr_t))(Il2CppBase() + 0x13853B4))(this, ownerId, vipBonusType);
	}
	template <typename T = uintptr_t> T GetChangeCooldown(int32_t targetId, Il2CppString* itemTag) {
		return ((T (*)(EventContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1385444))(this, targetId, itemTag);
	}
	template <typename T = void> T DestroyAll(void* eventEntities) {
		return ((T (*)(EventContext*, void*))(Il2CppBase() + 0x13854D4))(this, eventEntities);
	}
	template <typename T = uintptr_t> T CreateLockUnlock(int32_t targetId, bool unlock, uintptr_t actor) {
		return ((T (*)(EventContext*, int32_t, bool, uintptr_t))(Il2CppBase() + 0x13857E0))(this, targetId, unlock, actor);
	}
	template <typename T = uintptr_t> T CreateRemoveBuild(uintptr_t actor, int32_t targetId) {
		return ((T (*)(EventContext*, uintptr_t, int32_t))(Il2CppBase() + 0x1385964))(this, actor, targetId);
	}
	template <typename T = uintptr_t> T CreateCraftResult(uintptr_t actor, uintptr_t target, Il2CppString* resource, int32_t count) {
		return ((T (*)(EventContext*, uintptr_t, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1385A74))(this, actor, target, resource, count);
	}
	template <typename T = uintptr_t> T CreateTakeBuild(uintptr_t actor, int32_t targetId, bool disassemble) {
		return ((T (*)(EventContext*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1385C84))(this, actor, targetId, disassemble);
	}
	template <typename T = uintptr_t> T CreateUpgradeBuild(uintptr_t actor, int32_t targetId) {
		return ((T (*)(EventContext*, uintptr_t, int32_t))(Il2CppBase() + 0x1385DA0))(this, actor, targetId);
	}
	template <typename T = uintptr_t> T CreateBuild(uintptr_t actor, Il2CppString* buildName, float x, float y, unsigned char orientation) {
		return ((T (*)(EventContext*, uintptr_t, Il2CppString*, float, float, unsigned char))(Il2CppBase() + 0x1385EB0))(this, actor, buildName, x, y, orientation);
	}
	template <typename T = uintptr_t> T CreateMoveBuild(uintptr_t actor, int32_t targetId, float x, float y, unsigned char orientation) {
		return ((T (*)(EventContext*, uintptr_t, int32_t, float, float, unsigned char))(Il2CppBase() + 0x1385FF0))(this, actor, targetId, x, y, orientation);
	}
	template <typename T = uintptr_t> T CreateCraftBlueprint(uintptr_t actor, Il2CppString* blueprintName) {
		return ((T (*)(EventContext*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1386140))(this, actor, blueprintName);
	}
	template <typename T = uintptr_t> T CreateAddExperience(uintptr_t player, float value, bool addForPet) {
		return ((T (*)(EventContext*, uintptr_t, float, bool))(Il2CppBase() + 0x1386240))(this, player, value, addForPet);
	}
	template <typename T = uintptr_t> T CreateAddExperience_1(int64_t playerId, float value) {
		return ((T (*)(EventContext*, int64_t, float))(Il2CppBase() + 0x1386678))(this, playerId, value);
	}
	template <typename T = uintptr_t> T CreateAddPetExperience(uintptr_t player, float value) {
		return ((T (*)(EventContext*, uintptr_t, float))(Il2CppBase() + 0x1386564))(this, player, value);
	}
	template <typename T = uintptr_t> T CreateAddPetExperience_1(int64_t playerId, float value) {
		return ((T (*)(EventContext*, int64_t, float))(Il2CppBase() + 0x1386770))(this, playerId, value);
	}
	template <typename T = uintptr_t> T CreatePlayerEnter(uintptr_t actor, bool creation) {
		return ((T (*)(EventContext*, uintptr_t, bool))(Il2CppBase() + 0x1386868))(this, actor, creation);
	}
	template <typename T = uintptr_t> T CreateSetPlayerKill(uintptr_t actor, bool isPlayerKill) {
		return ((T (*)(EventContext*, uintptr_t, bool))(Il2CppBase() + 0x1386968))(this, actor, isPlayerKill);
	}
	template <typename T = uintptr_t> T DistributeDamage(uintptr_t damageEvent, uintptr_t target) {
		return ((T (*)(EventContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1386A68))(this, damageEvent, target);
	}
	template <typename T = uintptr_t> T CreateDamage(uintptr_t actor, uintptr_t target, float baseDamage, Il2CppString* itemName, uintptr_t damageType, uintptr_t damageConfig, bool showDamage, float maxTargetHealthCoef, uintptr_t action) {
		return ((T (*)(EventContext*, uintptr_t, uintptr_t, float, Il2CppString*, uintptr_t, uintptr_t, bool, float, uintptr_t))(Il2CppBase() + 0x1386F78))(this, actor, target, baseDamage, itemName, damageType, damageConfig, showDamage, maxTargetHealthCoef, action);
	}
	template <typename T = uintptr_t> T CreateHeal(uintptr_t actor, uintptr_t target, float heal, Il2CppString* itemName, uintptr_t healParams, bool showHeal, Il2CppString* healEffectName) {
		return ((T (*)(EventContext*, uintptr_t, uintptr_t, float, Il2CppString*, uintptr_t, bool, Il2CppString*))(Il2CppBase() + 0x1387678))(this, actor, target, heal, itemName, healParams, showHeal, healEffectName);
	}
	template <typename T = uintptr_t> T CreateChangeCooldown(uintptr_t target, Il2CppString* itemTag, float delta) {
		return ((T (*)(EventContext*, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x13879D8))(this, target, itemTag, delta);
	}
	template <typename T = uintptr_t> T CreateTenacityRegeneration(uintptr_t actor, uintptr_t target, float regeneration, bool showRegeneration) {
		return ((T (*)(EventContext*, uintptr_t, uintptr_t, float, bool))(Il2CppBase() + 0x1387AF4))(this, actor, target, regeneration, showRegeneration);
	}
	template <typename T = uintptr_t> T CreateResurrect(uintptr_t actor, uintptr_t target, float heal, bool showHeal) {
		return ((T (*)(EventContext*, uintptr_t, uintptr_t, float, bool))(Il2CppBase() + 0x1387D0C))(this, actor, target, heal, showHeal);
	}
	template <typename T = uintptr_t> T CreatePickup(uintptr_t actor, uintptr_t target, Il2CppString* randomGroup, bool destroyTarget, int32_t count) {
		return ((T (*)(EventContext*, uintptr_t, uintptr_t, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x1387EEC))(this, actor, target, randomGroup, destroyTarget, count);
	}
	template <typename T = uintptr_t> T CreatePlace(uintptr_t actor, Il2CppString* name, float posX, float posY, Il2CppString* magic, float pushOutRadius, bool saveable) {
		return ((T (*)(EventContext*, uintptr_t, Il2CppString*, float, float, Il2CppString*, float, bool))(Il2CppBase() + 0x13880B0))(this, actor, name, posX, posY, magic, pushOutRadius, saveable);
	}
	template <typename T = uintptr_t> T RaisePlayerGuildChanged(int64_t playerId) {
		return ((T (*)(EventContext*, int64_t))(Il2CppBase() + 0x13883FC))(this, playerId);
	}
	template <typename T = uintptr_t> T RaiseCurrencyChanged(int64_t playerId, uintptr_t currencies) {
		return ((T (*)(EventContext*, int64_t, uintptr_t))(Il2CppBase() + 0x13884A8))(this, playerId, currencies);
	}
	template <typename T = uintptr_t> T RaiseCurrencyChanged_1(int64_t playerId, uintptr_t currency, int32_t delta) {
		return ((T (*)(EventContext*, int64_t, uintptr_t, int32_t))(Il2CppBase() + 0x13885A8))(this, playerId, currency, delta);
	}
	template <typename T = uintptr_t> T RaiseGuildQuestChanged(int64_t playerId, int64_t guildQuestId, int32_t add) {
		return ((T (*)(EventContext*, int64_t, int64_t, int32_t))(Il2CppBase() + 0x13886D8))(this, playerId, guildQuestId, add);
	}
	template <typename T = uintptr_t> T CreatePlace_1(Il2CppString* name, float posX, float posY, bool saveable) {
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
	template <typename T = void> T RaiseVipChanged(int64_t ownerId, uintptr_t type) {
		return ((T (*)(EventContext*, int64_t, uintptr_t))(Il2CppBase() + 0x1388CC4))(this, ownerId, type);
	}

};

}
