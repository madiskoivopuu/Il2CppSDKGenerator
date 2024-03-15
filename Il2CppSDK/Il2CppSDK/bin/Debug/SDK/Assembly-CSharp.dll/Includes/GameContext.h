#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NewBlueprintContext2.h" 
#include "GameEntity.h" 
#include "GameDataEntity.h" 

class GameContext : public NewBlueprintContext2<GameEntity*, GameDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameContext"));
	}

	template <typename R = Il2CppArray<bool>*> static R& RequiredForSendComponents() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<int32_t>*> static R& RequiredForSendComponentsIndexes() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = Il2CppArray<bool>*> static R& RequiredForSaveComponents() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = Il2CppArray<bool>*> static R& RequiredForChildSaveComponents() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 PrimaryEntityIndex2GameEntity*, int32_t>*& _idIndex() {
		return *(PrimaryEntityIndex2GameEntity*, int32_t>**)((uintptr_t)this + 0x110);
	}
	 EntityIndex2GameEntity*, Il2CppString*>*& _blueprintIndex() {
		return *(EntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x118);
	}
	 EntityIndex2GameEntity*, int64_t>*& _clanIndex() {
		return *(EntityIndex2GameEntity*, int64_t>**)((uintptr_t)this + 0x120);
	}
	 EntityIndex2GameEntity*, int64_t>*& _playerWithClanIndex() {
		return *(EntityIndex2GameEntity*, int64_t>**)((uintptr_t)this + 0x128);
	}
	 EntityIndex2GameEntity*, int64_t>*& _guildIndex() {
		return *(EntityIndex2GameEntity*, int64_t>**)((uintptr_t)this + 0x130);
	}
	 EntityIndex2GameEntity*, int64_t>*& _playerWithGuildIndex() {
		return *(EntityIndex2GameEntity*, int64_t>**)((uintptr_t)this + 0x138);
	}
	 EntityIndex2GameEntity*, int32_t>*& _groupChildIndex() {
		return *(EntityIndex2GameEntity*, int32_t>**)((uintptr_t)this + 0x140);
	}
	 PrimaryEntityIndex2GameEntity*, int32_t>*& _mountInventoryIdIndex() {
		return *(PrimaryEntityIndex2GameEntity*, int32_t>**)((uintptr_t)this + 0x148);
	}
	 PrimaryEntityIndex2GameEntity*, int32_t>*& _runeInventoryIdIndex() {
		return *(PrimaryEntityIndex2GameEntity*, int32_t>**)((uintptr_t)this + 0x150);
	}
	 PrimaryEntityIndex2GameEntity*, int32_t>*& _petInventoryIdIndex() {
		return *(PrimaryEntityIndex2GameEntity*, int32_t>**)((uintptr_t)this + 0x158);
	}
	 PrimaryEntityIndex2GameEntity*, int64_t>*& _playerIdIndex() {
		return *(PrimaryEntityIndex2GameEntity*, int64_t>**)((uintptr_t)this + 0x160);
	}
	 PrimaryEntityIndex2GameEntity*, Il2CppString*>*& _uniqueLookupIndex() {
		return *(PrimaryEntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x168);
	}
	 EntityIndex2GameEntity*, Il2CppString*>*& _tagIndex() {
		return *(EntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x170);
	}
	 EntityIndex2GameEntity*, int64_t>*& _personalIdIndex() {
		return *(EntityIndex2GameEntity*, int64_t>**)((uintptr_t)this + 0x178);
	}
	 EntityIndex2GameEntity*, int64_t>*& _clanPersonalIdIndex() {
		return *(EntityIndex2GameEntity*, int64_t>**)((uintptr_t)this + 0x180);
	}
	 EntityIndex2GameEntity*, Il2CppString*>*& _personalKeyIndex() {
		return *(EntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x188);
	}
	 PrimaryEntityIndex2GameEntity*, LongString*>*& _personalIndex() {
		return *(PrimaryEntityIndex2GameEntity*, LongString*>**)((uintptr_t)this + 0x190);
	}
	 PrimaryEntityIndex2GameEntity*, LongString*>*& _clanPersonalIndex() {
		return *(PrimaryEntityIndex2GameEntity*, LongString*>**)((uintptr_t)this + 0x198);
	}
	 EntityIndex2GameEntity*, Il2CppString*>*& _forBuildTargetIndex() {
		return *(EntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x1A0);
	}
	 EntityIndex2GameEntity*, int64_t>*& _placeOwnerIndex() {
		return *(EntityIndex2GameEntity*, int64_t>**)((uintptr_t)this + 0x1A8);
	}
	 EntityIndex2GameEntity*, LongString*>*& _placeOwnerWithBlueprintIndex() {
		return *(EntityIndex2GameEntity*, LongString*>**)((uintptr_t)this + 0x1B0);
	}
	 EntityIndex2GameEntity*, int64_t>*& _ownerIdIndex() {
		return *(EntityIndex2GameEntity*, int64_t>**)((uintptr_t)this + 0x1B8);
	}
	 EntityIndex2GameEntity*, int32_t>*& _parentIndex() {
		return *(EntityIndex2GameEntity*, int32_t>**)((uintptr_t)this + 0x1C0);
	}
	 EntityIndex2GameEntity*, Il2CppString*>*& _singlePlaceIndex() {
		return *(EntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x1C8);
	}
	 EntityIndex2GameEntity*, bool>*& _playerAvatarIndex() {
		return *(EntityIndex2GameEntity*, bool>**)((uintptr_t)this + 0x1D0);
	}
	 EntityIndex2GameEntity*, int64_t>*& _hashPositionIndex() {
		return *(EntityIndex2GameEntity*, int64_t>**)((uintptr_t)this + 0x1D8);
	}
	 EntityIndex2GameEntity*, int64_t>*& _targetsWithHashPositionIndex() {
		return *(EntityIndex2GameEntity*, int64_t>**)((uintptr_t)this + 0x1E0);
	}
	 EntityIndex2GameEntity*, int64_t>*& _obstaclesWithHashPositionIndex() {
		return *(EntityIndex2GameEntity*, int64_t>**)((uintptr_t)this + 0x1E8);
	}
	 EntityIndex2GameEntity*, int32_t>*& _aggroTargetIndex() {
		return *(EntityIndex2GameEntity*, int32_t>**)((uintptr_t)this + 0x1F0);
	}
	 EntityIndex2GameEntity*, Il2CppString*>*& _placeMaxGroupIndex() {
		return *(EntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x1F8);
	}
	 EntityIndex2GameEntity*, PositionPlace*>*& _positionPlaceIndex() {
		return *(EntityIndex2GameEntity*, PositionPlace*>**)((uintptr_t)this + 0x200);
	}
	 EntityIndex2GameEntity*, Il2CppString*>*& _roomIndex() {
		return *(EntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x208);
	}
	 EntityIndex2GameEntity*, Il2CppString*>*& _roomDoorIndex() {
		return *(EntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x210);
	}
	 EntityIndex2GameEntity*, EntityId*>*& _aliveWithBindIndex() {
		return *(EntityIndex2GameEntity*, EntityId*>**)((uintptr_t)this + 0x218);
	}
	 EntityIndex2GameEntity*, Il2CppString*>*& _pursuitGroupIndex() {
		return *(EntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x220);
	}
	 EntityIndex2GameEntity*, Il2CppString*>*& _aliveWaveItemIndex() {
		return *(EntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x228);
	}
	 EntityIndex2GameEntity*, Il2CppString*>*& _endIndex() {
		return *(EntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x230);
	}
	 EntityIndex2GameEntity*, Il2CppString*>*& _regionEnterIndex() {
		return *(EntityIndex2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x238);
	}
	 IGroup1GameEntity*>*& _uniqueLookupGroup() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x240);
	}
	 IGroup1GameEntity*>*& _playerGroup() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x248);
	}
	 IGroup1GameEntity*>*& _gradeGroup() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x250);
	}
	 IGroup1GameEntity*>*& _ravenNests() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x258);
	}
	 IGroup1GameEntity*>*& _activeWavesEvents() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x260);
	}
	 IGroup1GameEntity*>*& _aiBattleStateGroup() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x268);
	}
	 IGroup1GameEntity*>*& _statusBarView() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x270);
	}
	 IGroup1GameEntity*>*& _showNameEntities() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x278);
	}
	 IGroup1GameEntity*>*& _showMagicStatus() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x280);
	}
	 IGroup1GameEntity*>*& _playersEntities() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x288);
	}
	 IGroup1GameEntity*>*& _gameEntitiesWithArrow() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x290);
	}
	 IGroup1GameEntity*>*& _extractWorkEntities() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x298);
	}
	 IGroup1GameEntity*>*& _fusionGroup() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x2A0);
	}
	 IGroup1GameEntity*>*& _finalizeGroup() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x2A8);
	}
	 IGroup1GameEntity*>*& _extractGroup() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x2B0);
	}
	 IGroup1GameEntity*>*& _aiBattleGroup() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x2B8);
	}

	template <typename R = GameEntity*> R CreateFromData(GameDataEntity* source) {
		return ((R (*)(GameContext*, GameDataEntity*))(Il2CppBase() + 0x160FB38))(this, source);
	}
	template <typename R = GameEntity*> R CreateUsingBlueprint(Il2CppString* entityName, EntityBlueprint* entityData) {
		return ((R (*)(GameContext*, Il2CppString*, EntityBlueprint*))(Il2CppBase() + 0x160FBC0))(this, entityName, entityData);
	}
	template <typename R = GameEntity*> R CreateDefault() {
		return ((R (*)(GameContext*))(Il2CppBase() + 0x160FC50))(this);
	}
	template <typename R = void> R OnReset() {
		return ((R (*)(GameContext*))(Il2CppBase() + 0x160FEB4))(this);
	}
	template <typename R = void> R SetActiveIndexesOnJoin(bool active) {
		return ((R (*)(GameContext*, bool))(Il2CppBase() + 0x1610700))(this, active);
	}
	 HashSet1GameEntity*>* GetEntitiesWithGroupChild(int32_t id) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int32_t))(Il2CppBase() + 0x16017B4))(this, id);
	}
	 HashSet1GameEntity*>* GetEntitiesWithClan(int64_t clanId) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x1610814))(this, clanId);
	}
	 HashSet1GameEntity*>* GetPlayersWithClan(int64_t clanId) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x1610A24))(this, clanId);
	}
	 HashSet1GameEntity*>* GetEntitiesWithGuild(int64_t guildId) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x1610CF8))(this, guildId);
	}
	 HashSet1GameEntity*>* GetPlayersWithGuild(int64_t guildId) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x1610F08))(this, guildId);
	}
	 HashSet1GameEntity*>* GetEntitiesWithBlueprint(Il2CppString* name) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x16111DC))(this, name);
	}
	 HashSet1GameEntity*>* GetEntitiesWithSinglePlace(Il2CppString* name) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x16113EC))(this, name);
	}
	template <typename R = GameEntity*> R GetEntityWithId(int32_t id) {
		return ((R (*)(GameContext*, int32_t))(Il2CppBase() + 0x15FA2B8))(this, id);
	}
	template <typename R = GameEntity*> R GetEntityWithMountInventoryId(int32_t mountInventoryId) {
		return ((R (*)(GameContext*, int32_t))(Il2CppBase() + 0x16115FC))(this, mountInventoryId);
	}
	template <typename R = GameEntity*> R GetEntityWithRuneInventoryId(int32_t runeInventoryId) {
		return ((R (*)(GameContext*, int32_t))(Il2CppBase() + 0x161180C))(this, runeInventoryId);
	}
	template <typename R = GameEntity*> R GetEntityWithPetInventoryId(int32_t petInventoryId) {
		return ((R (*)(GameContext*, int32_t))(Il2CppBase() + 0x1611A1C))(this, petInventoryId);
	}
	template <typename R = GameEntity*> R GetEntityWithPlayerId(int64_t playerId) {
		return ((R (*)(GameContext*, int64_t))(Il2CppBase() + 0x1611C2C))(this, playerId);
	}
	 HashSet1GameEntity*>* GetEntitiesWithTag(Il2CppString* tag) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1611E3C))(this, tag);
	}
	template <typename R = GameEntity*> R GetEntityWithUniqueLookup(Il2CppString* name) {
		return ((R (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x161214C))(this, name);
	}
	 HashSet1GameEntity*>* GetPersonalEntitiesWithPlayerId(int64_t playerId) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x1612388))(this, playerId);
	}
	 HashSet1GameEntity*>* GetClanPersonalEntitiesWithId(int64_t clanId) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x1612598))(this, clanId);
	}
	 HashSet1GameEntity*>* GetPersonalEntitiesWithKey(Il2CppString* key) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x16127A8))(this, key);
	}
	template <typename R = GameEntity*> R GetPersonalEntityWithPlayerIdAndKey(int64_t playerId, Il2CppString* key) {
		return ((R (*)(GameContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x16129E4))(this, playerId, key);
	}
	template <typename R = GameEntity*> R GetClanPersonalEntityWithClanIdAndKey(int64_t clanId, Il2CppString* key) {
		return ((R (*)(GameContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x1612CEC))(this, clanId, key);
	}
	 HashSet1GameEntity*>* GetEntityForBuildTarget(Il2CppString* targetName) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1612FF4))(this, targetName);
	}
	 HashSet1GameEntity*>* GetFurnitureWithBlueprintAndPlaceOwner(int64_t playerId, Il2CppString* blueprint) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x1613204))(this, playerId, blueprint);
	}
	 HashSet1GameEntity*>* GetEntitiesWithPlaceOwner(int64_t ownerId) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x16135D8))(this, ownerId);
	}
	 HashSet1GameEntity*>* GetEntitiesWithOwnerId(int64_t ownerId) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x16137E8))(this, ownerId);
	}
	 HashSet1GameEntity*>* GetEntitiesWithParent(int32_t id) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int32_t))(Il2CppBase() + 0x16139F8))(this, id);
	}
	 HashSet1GameEntity*>* GetPlayerAvatars() {
		return ((HashSet1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1613C08))(this);
	}
	 HashSet1GameEntity*>* GetEntitiesWithPlaceMaxGroup(Il2CppString* group) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1613E14))(this, group);
	}
	 EntityIndex2GameEntity*, int64_t>* GetHashPositionIndex() {
		return ((EntityIndex2GameEntity*, int64_t>* (*)(GameContext*))(Il2CppBase() + 0x1614150))(this);
	}
	 HashSet1GameEntity*>* GetEntitiesWithHashPosition(float x, float y) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, float, float))(Il2CppBase() + 0x1614338))(this, x, y);
	}
	 EntityIndex2GameEntity*, int64_t>* GetTargetsWithHashPositionIndex() {
		return ((EntityIndex2GameEntity*, int64_t>* (*)(GameContext*))(Il2CppBase() + 0x16143EC))(this);
	}
	 HashSet1GameEntity*>* GetTargetsWithHashPosition(float x, float y) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, float, float))(Il2CppBase() + 0x16147E8))(this, x, y);
	}
	 EntityIndex2GameEntity*, int64_t>* GetObstaclesWithHashPositionIndex() {
		return ((EntityIndex2GameEntity*, int64_t>* (*)(GameContext*))(Il2CppBase() + 0x161489C))(this);
	}
	 HashSet1GameEntity*>* GetObstaclesWithHashPosition(float x, float y) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, float, float))(Il2CppBase() + 0x1614C1C))(this, x, y);
	}
	 EntitiesWithPositionNear1GameEntity*>* GetEntitiesWithPositionNear(float x, float y, float radius) {
		return ((EntitiesWithPositionNear1GameEntity*>* (*)(GameContext*, float, float, float))(Il2CppBase() + 0x1614CD0))(this, x, y, radius);
	}
	 EntitiesWithPositionNear1GameEntity*>* GetTargetsWithPositionNear(float x, float y, float radius) {
		return ((EntitiesWithPositionNear1GameEntity*>* (*)(GameContext*, float, float, float))(Il2CppBase() + 0x1614D64))(this, x, y, radius);
	}
	 EntitiesWithPositionNear1GameEntity*>* GetObstaclesWithPositionNear(float x, float y, float radius) {
		return ((EntitiesWithPositionNear1GameEntity*>* (*)(GameContext*, float, float, float))(Il2CppBase() + 0x1614DF8))(this, x, y, radius);
	}
	template <typename R = GameEntity*> R GetRoofWithPosition(float x, float y) {
		return ((R (*)(GameContext*, float, float))(Il2CppBase() + 0x1614E8C))(this, x, y);
	}
	 HashSet1GameEntity*>* GetEntitiesWithAggroTarget(int32_t id) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int32_t))(Il2CppBase() + 0x1615000))(this, id);
	}
	template <typename R = GameEntity*> R GetCoverWithPosition(float x, float y) {
		return ((R (*)(GameContext*, float, float))(Il2CppBase() + 0x1615214))(this, x, y);
	}
	 HashSet1GameEntity*>* GetEntitiesWithRoom(Il2CppString* name) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1615388))(this, name);
	}
	 HashSet1GameEntity*>* GetDoorsWithRoom(Il2CppString* name) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x161559C))(this, name);
	}
	 HashSet1GameEntity*>* GetAliveWithBind(EntityId* targetId) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, EntityId*))(Il2CppBase() + 0x16157B0))(this, targetId);
	}
	 HashSet1GameEntity*>* GetAliveWithBind_1(int32_t targetId, EntityTypes* type) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, int32_t, EntityTypes*))(Il2CppBase() + 0x1615B1C))(this, targetId, type);
	}
	template <typename R = GameEntity*> R GetAliveWithBind_2(int32_t targetId, Il2CppString* name) {
		return ((R (*)(GameContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1615B54))(this, targetId, name);
	}
	 HashSet1GameEntity*>* GetEntitiesWithPursuitGroup(Il2CppString* name) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1615D08))(this, name);
	}
	template <typename R = GameEntity*> R GetGenerateWallWithPosition(float x, float y) {
		return ((R (*)(GameContext*, float, float))(Il2CppBase() + 0x1615F48))(this, x, y);
	}
	template <typename R = GameEntity*> R GetPositionPlaceEntity(PositionPlace* place, uint8_t quadId) {
		return ((R (*)(GameContext*, PositionPlace*, uint8_t))(Il2CppBase() + 0x16160BC))(this, place, quadId);
	}
	 HashSet1GameEntity*>* GetAliveWaveItems(Il2CppString* eventName) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1616444))(this, eventName);
	}
	 HashSet1GameEntity*>* GetEntitiesOnEndPath(Il2CppString* name) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x16167E0))(this, name);
	}
	 HashSet1GameEntity*>* GetPointWithRegionEnter(Il2CppString* name) {
		return ((HashSet1GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1616B4C))(this, name);
	}
	template <typename R = GameEntity*> R GetShieldWithId(int32_t id) {
		return ((R (*)(GameContext*, int32_t))(Il2CppBase() + 0x1616DE4))(this, id);
	}
	 IGroup1GameEntity*>* GetUniqueLookupGroup() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1616FA4))(this);
	}
	 IGroup1GameEntity*>* GetPlayerGroup() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x161701C))(this);
	}
	 IGroup1GameEntity*>* GetGradeGroup() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617094))(this);
	}
	 IGroup1GameEntity*>* GetRavenNests() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x161710C))(this);
	}
	 IGroup1GameEntity*>* GetActiveWavesEvents() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617184))(this);
	}
	 IGroup1GameEntity*>* GetAIBattleStateGroup() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x161730C))(this);
	}
	 IGroup1GameEntity*>* GetStatusBarView() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617384))(this);
	}
	 IGroup1GameEntity*>* GetShowNameEntities() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x16173FC))(this);
	}
	 IGroup1GameEntity*>* GetShowMagicStatus() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617618))(this);
	}
	 IGroup1GameEntity*>* GetPlayersEntities() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617690))(this);
	}
	 IGroup1GameEntity*>* GetGameEntitiesWithArrow() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x161786C))(this);
	}
	 IGroup1GameEntity*>* GetExtractWorkEntities() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x16178E4))(this);
	}
	 IGroup1GameEntity*>* GetFusionGroup() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x161795C))(this);
	}
	 IGroup1GameEntity*>* GetFinalizeGroup() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617B8C))(this);
	}
	 IGroup1GameEntity*>* GetExtractGroup() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617DBC))(this);
	}
	 IGroup1GameEntity*>* GetAIBattleGroup() {
		return ((IGroup1GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617FEC))(this);
	}
	template <typename R = void> R SetOnDeathEntities(HashSet1GameEntity*>* entities) {
		return ((R (*)(GameContext*, HashSet1GameEntity*>*))(Il2CppBase() + 0x161821C))(this, entities);
	}
	template <typename R = void> R WriteEntity(GameEntity* entity, uintptr_t writer) {
		return ((R (*)(GameContext*, GameEntity*, uintptr_t))(Il2CppBase() + 0x1618530))(this, entity, writer);
	}
	template <typename R = Il2CppString*> R ReadEntity(uintptr_t reader, uintptr_t* result) {
		return ((R (*)(GameContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x16187FC))(this, reader, result);
	}
	template <typename R = GameEntity*> R get_avatarEntity() {
		return ((R (*)(GameContext*))(Il2CppBase() + 0x15F6F0C))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(GameContext*))(Il2CppBase() + 0x1618A9C))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(GameContext*, bool))(Il2CppBase() + 0x1618AB8))(this, value);
	}
	template <typename R = GameEntity*> R get_draggedEntity() {
		return ((R (*)(GameContext*))(Il2CppBase() + 0x1618B68))(this);
	}
	template <typename R = bool> R get_isDragged() {
		return ((R (*)(GameContext*))(Il2CppBase() + 0x1618C44))(this);
	}
	template <typename R = void> R set_isDragged(bool value) {
		return ((R (*)(GameContext*, bool))(Il2CppBase() + 0x1618C60))(this, value);
	}

};

