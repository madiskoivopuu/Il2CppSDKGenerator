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
	 PrimaryEntityIndex2<GameEntity*, int32_t>*& _idIndex() {
		return *(PrimaryEntityIndex2<GameEntity*, int32_t>**)((uintptr_t)this + 0x110);
	}
	 EntityIndex2<GameEntity*, Il2CppString*>*& _blueprintIndex() {
		return *(EntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x118);
	}
	 EntityIndex2<GameEntity*, int64_t>*& _clanIndex() {
		return *(EntityIndex2<GameEntity*, int64_t>**)((uintptr_t)this + 0x120);
	}
	 EntityIndex2<GameEntity*, int64_t>*& _playerWithClanIndex() {
		return *(EntityIndex2<GameEntity*, int64_t>**)((uintptr_t)this + 0x128);
	}
	 EntityIndex2<GameEntity*, int64_t>*& _guildIndex() {
		return *(EntityIndex2<GameEntity*, int64_t>**)((uintptr_t)this + 0x130);
	}
	 EntityIndex2<GameEntity*, int64_t>*& _playerWithGuildIndex() {
		return *(EntityIndex2<GameEntity*, int64_t>**)((uintptr_t)this + 0x138);
	}
	 EntityIndex2<GameEntity*, int32_t>*& _groupChildIndex() {
		return *(EntityIndex2<GameEntity*, int32_t>**)((uintptr_t)this + 0x140);
	}
	 PrimaryEntityIndex2<GameEntity*, int32_t>*& _mountInventoryIdIndex() {
		return *(PrimaryEntityIndex2<GameEntity*, int32_t>**)((uintptr_t)this + 0x148);
	}
	 PrimaryEntityIndex2<GameEntity*, int32_t>*& _runeInventoryIdIndex() {
		return *(PrimaryEntityIndex2<GameEntity*, int32_t>**)((uintptr_t)this + 0x150);
	}
	 PrimaryEntityIndex2<GameEntity*, int32_t>*& _petInventoryIdIndex() {
		return *(PrimaryEntityIndex2<GameEntity*, int32_t>**)((uintptr_t)this + 0x158);
	}
	 PrimaryEntityIndex2<GameEntity*, int64_t>*& _playerIdIndex() {
		return *(PrimaryEntityIndex2<GameEntity*, int64_t>**)((uintptr_t)this + 0x160);
	}
	 PrimaryEntityIndex2<GameEntity*, Il2CppString*>*& _uniqueLookupIndex() {
		return *(PrimaryEntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x168);
	}
	 EntityIndex2<GameEntity*, Il2CppString*>*& _tagIndex() {
		return *(EntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x170);
	}
	 EntityIndex2<GameEntity*, int64_t>*& _personalIdIndex() {
		return *(EntityIndex2<GameEntity*, int64_t>**)((uintptr_t)this + 0x178);
	}
	 EntityIndex2<GameEntity*, int64_t>*& _clanPersonalIdIndex() {
		return *(EntityIndex2<GameEntity*, int64_t>**)((uintptr_t)this + 0x180);
	}
	 EntityIndex2<GameEntity*, Il2CppString*>*& _personalKeyIndex() {
		return *(EntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x188);
	}
	 PrimaryEntityIndex2<GameEntity*, LongString>*& _personalIndex() {
		return *(PrimaryEntityIndex2<GameEntity*, LongString>**)((uintptr_t)this + 0x190);
	}
	 PrimaryEntityIndex2<GameEntity*, LongString>*& _clanPersonalIndex() {
		return *(PrimaryEntityIndex2<GameEntity*, LongString>**)((uintptr_t)this + 0x198);
	}
	 EntityIndex2<GameEntity*, Il2CppString*>*& _forBuildTargetIndex() {
		return *(EntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x1A0);
	}
	 EntityIndex2<GameEntity*, int64_t>*& _placeOwnerIndex() {
		return *(EntityIndex2<GameEntity*, int64_t>**)((uintptr_t)this + 0x1A8);
	}
	 EntityIndex2<GameEntity*, LongString>*& _placeOwnerWithBlueprintIndex() {
		return *(EntityIndex2<GameEntity*, LongString>**)((uintptr_t)this + 0x1B0);
	}
	 EntityIndex2<GameEntity*, int64_t>*& _ownerIdIndex() {
		return *(EntityIndex2<GameEntity*, int64_t>**)((uintptr_t)this + 0x1B8);
	}
	 EntityIndex2<GameEntity*, int32_t>*& _parentIndex() {
		return *(EntityIndex2<GameEntity*, int32_t>**)((uintptr_t)this + 0x1C0);
	}
	 EntityIndex2<GameEntity*, Il2CppString*>*& _singlePlaceIndex() {
		return *(EntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x1C8);
	}
	 EntityIndex2<GameEntity*, bool>*& _playerAvatarIndex() {
		return *(EntityIndex2<GameEntity*, bool>**)((uintptr_t)this + 0x1D0);
	}
	 EntityIndex2<GameEntity*, int64_t>*& _hashPositionIndex() {
		return *(EntityIndex2<GameEntity*, int64_t>**)((uintptr_t)this + 0x1D8);
	}
	 EntityIndex2<GameEntity*, int64_t>*& _targetsWithHashPositionIndex() {
		return *(EntityIndex2<GameEntity*, int64_t>**)((uintptr_t)this + 0x1E0);
	}
	 EntityIndex2<GameEntity*, int64_t>*& _obstaclesWithHashPositionIndex() {
		return *(EntityIndex2<GameEntity*, int64_t>**)((uintptr_t)this + 0x1E8);
	}
	 EntityIndex2<GameEntity*, int32_t>*& _aggroTargetIndex() {
		return *(EntityIndex2<GameEntity*, int32_t>**)((uintptr_t)this + 0x1F0);
	}
	 EntityIndex2<GameEntity*, Il2CppString*>*& _placeMaxGroupIndex() {
		return *(EntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x1F8);
	}
	 EntityIndex2<GameEntity*, PositionPlace>*& _positionPlaceIndex() {
		return *(EntityIndex2<GameEntity*, PositionPlace>**)((uintptr_t)this + 0x200);
	}
	 EntityIndex2<GameEntity*, Il2CppString*>*& _roomIndex() {
		return *(EntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x208);
	}
	 EntityIndex2<GameEntity*, Il2CppString*>*& _roomDoorIndex() {
		return *(EntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x210);
	}
	 EntityIndex2<GameEntity*, EntityId>*& _aliveWithBindIndex() {
		return *(EntityIndex2<GameEntity*, EntityId>**)((uintptr_t)this + 0x218);
	}
	 EntityIndex2<GameEntity*, Il2CppString*>*& _pursuitGroupIndex() {
		return *(EntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x220);
	}
	 EntityIndex2<GameEntity*, Il2CppString*>*& _aliveWaveItemIndex() {
		return *(EntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x228);
	}
	 EntityIndex2<GameEntity*, Il2CppString*>*& _endIndex() {
		return *(EntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x230);
	}
	 EntityIndex2<GameEntity*, Il2CppString*>*& _regionEnterIndex() {
		return *(EntityIndex2<GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x238);
	}
	 IGroup1<GameEntity*>*& _uniqueLookupGroup() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x240);
	}
	 IGroup1<GameEntity*>*& _playerGroup() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x248);
	}
	 IGroup1<GameEntity*>*& _gradeGroup() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x250);
	}
	 IGroup1<GameEntity*>*& _ravenNests() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x258);
	}
	 IGroup1<GameEntity*>*& _activeWavesEvents() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x260);
	}
	 IGroup1<GameEntity*>*& _aiBattleStateGroup() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x268);
	}
	 IGroup1<GameEntity*>*& _statusBarView() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x270);
	}
	 IGroup1<GameEntity*>*& _showNameEntities() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x278);
	}
	 IGroup1<GameEntity*>*& _showMagicStatus() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x280);
	}
	 IGroup1<GameEntity*>*& _playersEntities() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x288);
	}
	 IGroup1<GameEntity*>*& _gameEntitiesWithArrow() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x290);
	}
	 IGroup1<GameEntity*>*& _extractWorkEntities() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x298);
	}
	 IGroup1<GameEntity*>*& _fusionGroup() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x2A0);
	}
	 IGroup1<GameEntity*>*& _finalizeGroup() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x2A8);
	}
	 IGroup1<GameEntity*>*& _extractGroup() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x2B0);
	}
	 IGroup1<GameEntity*>*& _aiBattleGroup() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x2B8);
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
	 HashSet1<GameEntity*>* GetEntitiesWithGroupChild(int32_t id) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int32_t))(Il2CppBase() + 0x16017B4))(this, id);
	}
	 HashSet1<GameEntity*>* GetEntitiesWithClan(int64_t clanId) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x1610814))(this, clanId);
	}
	 HashSet1<GameEntity*>* GetPlayersWithClan(int64_t clanId) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x1610A24))(this, clanId);
	}
	 HashSet1<GameEntity*>* GetEntitiesWithGuild(int64_t guildId) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x1610CF8))(this, guildId);
	}
	 HashSet1<GameEntity*>* GetPlayersWithGuild(int64_t guildId) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x1610F08))(this, guildId);
	}
	 HashSet1<GameEntity*>* GetEntitiesWithBlueprint(Il2CppString* name) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x16111DC))(this, name);
	}
	 HashSet1<GameEntity*>* GetEntitiesWithSinglePlace(Il2CppString* name) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x16113EC))(this, name);
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
	 HashSet1<GameEntity*>* GetEntitiesWithTag(Il2CppString* tag) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1611E3C))(this, tag);
	}
	template <typename R = GameEntity*> R GetEntityWithUniqueLookup(Il2CppString* name) {
		return ((R (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x161214C))(this, name);
	}
	 HashSet1<GameEntity*>* GetPersonalEntitiesWithPlayerId(int64_t playerId) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x1612388))(this, playerId);
	}
	 HashSet1<GameEntity*>* GetClanPersonalEntitiesWithId(int64_t clanId) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x1612598))(this, clanId);
	}
	 HashSet1<GameEntity*>* GetPersonalEntitiesWithKey(Il2CppString* key) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x16127A8))(this, key);
	}
	template <typename R = GameEntity*> R GetPersonalEntityWithPlayerIdAndKey(int64_t playerId, Il2CppString* key) {
		return ((R (*)(GameContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x16129E4))(this, playerId, key);
	}
	template <typename R = GameEntity*> R GetClanPersonalEntityWithClanIdAndKey(int64_t clanId, Il2CppString* key) {
		return ((R (*)(GameContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x1612CEC))(this, clanId, key);
	}
	 HashSet1<GameEntity*>* GetEntityForBuildTarget(Il2CppString* targetName) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1612FF4))(this, targetName);
	}
	 HashSet1<GameEntity*>* GetFurnitureWithBlueprintAndPlaceOwner(int64_t playerId, Il2CppString* blueprint) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x1613204))(this, playerId, blueprint);
	}
	 HashSet1<GameEntity*>* GetEntitiesWithPlaceOwner(int64_t ownerId) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x16135D8))(this, ownerId);
	}
	 HashSet1<GameEntity*>* GetEntitiesWithOwnerId(int64_t ownerId) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int64_t))(Il2CppBase() + 0x16137E8))(this, ownerId);
	}
	 HashSet1<GameEntity*>* GetEntitiesWithParent(int32_t id) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int32_t))(Il2CppBase() + 0x16139F8))(this, id);
	}
	 HashSet1<GameEntity*>* GetPlayerAvatars() {
		return ((HashSet1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1613C08))(this);
	}
	 HashSet1<GameEntity*>* GetEntitiesWithPlaceMaxGroup(Il2CppString* group) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1613E14))(this, group);
	}
	 EntityIndex2<GameEntity*, int64_t>* GetHashPositionIndex() {
		return ((EntityIndex2<GameEntity*, int64_t>* (*)(GameContext*))(Il2CppBase() + 0x1614150))(this);
	}
	 HashSet1<GameEntity*>* GetEntitiesWithHashPosition(float x, float y) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, float, float))(Il2CppBase() + 0x1614338))(this, x, y);
	}
	 EntityIndex2<GameEntity*, int64_t>* GetTargetsWithHashPositionIndex() {
		return ((EntityIndex2<GameEntity*, int64_t>* (*)(GameContext*))(Il2CppBase() + 0x16143EC))(this);
	}
	 HashSet1<GameEntity*>* GetTargetsWithHashPosition(float x, float y) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, float, float))(Il2CppBase() + 0x16147E8))(this, x, y);
	}
	 EntityIndex2<GameEntity*, int64_t>* GetObstaclesWithHashPositionIndex() {
		return ((EntityIndex2<GameEntity*, int64_t>* (*)(GameContext*))(Il2CppBase() + 0x161489C))(this);
	}
	 HashSet1<GameEntity*>* GetObstaclesWithHashPosition(float x, float y) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, float, float))(Il2CppBase() + 0x1614C1C))(this, x, y);
	}
	 EntitiesWithPositionNear1<GameEntity*>* GetEntitiesWithPositionNear(float x, float y, float radius) {
		return ((EntitiesWithPositionNear1<GameEntity*>* (*)(GameContext*, float, float, float))(Il2CppBase() + 0x1614CD0))(this, x, y, radius);
	}
	 EntitiesWithPositionNear1<GameEntity*>* GetTargetsWithPositionNear(float x, float y, float radius) {
		return ((EntitiesWithPositionNear1<GameEntity*>* (*)(GameContext*, float, float, float))(Il2CppBase() + 0x1614D64))(this, x, y, radius);
	}
	 EntitiesWithPositionNear1<GameEntity*>* GetObstaclesWithPositionNear(float x, float y, float radius) {
		return ((EntitiesWithPositionNear1<GameEntity*>* (*)(GameContext*, float, float, float))(Il2CppBase() + 0x1614DF8))(this, x, y, radius);
	}
	template <typename R = GameEntity*> R GetRoofWithPosition(float x, float y) {
		return ((R (*)(GameContext*, float, float))(Il2CppBase() + 0x1614E8C))(this, x, y);
	}
	 HashSet1<GameEntity*>* GetEntitiesWithAggroTarget(int32_t id) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int32_t))(Il2CppBase() + 0x1615000))(this, id);
	}
	template <typename R = GameEntity*> R GetCoverWithPosition(float x, float y) {
		return ((R (*)(GameContext*, float, float))(Il2CppBase() + 0x1615214))(this, x, y);
	}
	 HashSet1<GameEntity*>* GetEntitiesWithRoom(Il2CppString* name) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1615388))(this, name);
	}
	 HashSet1<GameEntity*>* GetDoorsWithRoom(Il2CppString* name) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x161559C))(this, name);
	}
	 HashSet1<GameEntity*>* GetAliveWithBind(EntityId targetId) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, EntityId))(Il2CppBase() + 0x16157B0))(this, targetId);
	}
	 HashSet1<GameEntity*>* GetAliveWithBind_1(int32_t targetId, EntityTypes type) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, int32_t, EntityTypes))(Il2CppBase() + 0x1615B1C))(this, targetId, type);
	}
	template <typename R = GameEntity*> R GetAliveWithBind_2(int32_t targetId, Il2CppString* name) {
		return ((R (*)(GameContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1615B54))(this, targetId, name);
	}
	 HashSet1<GameEntity*>* GetEntitiesWithPursuitGroup(Il2CppString* name) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1615D08))(this, name);
	}
	template <typename R = GameEntity*> R GetGenerateWallWithPosition(float x, float y) {
		return ((R (*)(GameContext*, float, float))(Il2CppBase() + 0x1615F48))(this, x, y);
	}
	template <typename R = GameEntity*> R GetPositionPlaceEntity(PositionPlace place, uint8_t quadId) {
		return ((R (*)(GameContext*, PositionPlace, uint8_t))(Il2CppBase() + 0x16160BC))(this, place, quadId);
	}
	 HashSet1<GameEntity*>* GetAliveWaveItems(Il2CppString* eventName) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1616444))(this, eventName);
	}
	 HashSet1<GameEntity*>* GetEntitiesOnEndPath(Il2CppString* name) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x16167E0))(this, name);
	}
	 HashSet1<GameEntity*>* GetPointWithRegionEnter(Il2CppString* name) {
		return ((HashSet1<GameEntity*>* (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1616B4C))(this, name);
	}
	template <typename R = GameEntity*> R GetShieldWithId(int32_t id) {
		return ((R (*)(GameContext*, int32_t))(Il2CppBase() + 0x1616DE4))(this, id);
	}
	 IGroup1<GameEntity*>* GetUniqueLookupGroup() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1616FA4))(this);
	}
	 IGroup1<GameEntity*>* GetPlayerGroup() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x161701C))(this);
	}
	 IGroup1<GameEntity*>* GetGradeGroup() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617094))(this);
	}
	 IGroup1<GameEntity*>* GetRavenNests() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x161710C))(this);
	}
	 IGroup1<GameEntity*>* GetActiveWavesEvents() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617184))(this);
	}
	 IGroup1<GameEntity*>* GetAIBattleStateGroup() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x161730C))(this);
	}
	 IGroup1<GameEntity*>* GetStatusBarView() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617384))(this);
	}
	 IGroup1<GameEntity*>* GetShowNameEntities() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x16173FC))(this);
	}
	 IGroup1<GameEntity*>* GetShowMagicStatus() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617618))(this);
	}
	 IGroup1<GameEntity*>* GetPlayersEntities() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617690))(this);
	}
	 IGroup1<GameEntity*>* GetGameEntitiesWithArrow() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x161786C))(this);
	}
	 IGroup1<GameEntity*>* GetExtractWorkEntities() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x16178E4))(this);
	}
	 IGroup1<GameEntity*>* GetFusionGroup() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x161795C))(this);
	}
	 IGroup1<GameEntity*>* GetFinalizeGroup() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617B8C))(this);
	}
	 IGroup1<GameEntity*>* GetExtractGroup() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617DBC))(this);
	}
	 IGroup1<GameEntity*>* GetAIBattleGroup() {
		return ((IGroup1<GameEntity*>* (*)(GameContext*))(Il2CppBase() + 0x1617FEC))(this);
	}
	template <typename R = void> R SetOnDeathEntities(HashSet1<GameEntity*>* entities) {
		return ((R (*)(GameContext*, HashSet1<GameEntity*>*))(Il2CppBase() + 0x161821C))(this, entities);
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

