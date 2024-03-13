#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NewBlueprintContext2.h" 

class GameContext : public NewBlueprintContext2<GameEntity*, GameDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameContext"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& RequiredForSendComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& RequiredForSendComponentsIndexes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& RequiredForSaveComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& RequiredForChildSaveComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = PrimaryEntityIndex2GameEntity*, int32_t>*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = EntityIndex2GameEntity*, Il2CppString*>*> T& _blueprintIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T& _clanIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T& _playerWithClanIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T& _guildIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T& _playerWithGuildIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = EntityIndex2GameEntity*, int32_t>*> T& _groupChildIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = PrimaryEntityIndex2GameEntity*, int32_t>*> T& _mountInventoryIdIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = PrimaryEntityIndex2GameEntity*, int32_t>*> T& _runeInventoryIdIndex() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = PrimaryEntityIndex2GameEntity*, int32_t>*> T& _petInventoryIdIndex() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = PrimaryEntityIndex2GameEntity*, int64_t>*> T& _playerIdIndex() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = PrimaryEntityIndex2GameEntity*, Il2CppString*>*> T& _uniqueLookupIndex() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = EntityIndex2GameEntity*, Il2CppString*>*> T& _tagIndex() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T& _personalIdIndex() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T& _clanPersonalIdIndex() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = EntityIndex2GameEntity*, Il2CppString*>*> T& _personalKeyIndex() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = PrimaryEntityIndex2GameEntity*, LongString*>*> T& _personalIndex() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = PrimaryEntityIndex2GameEntity*, LongString*>*> T& _clanPersonalIndex() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = EntityIndex2GameEntity*, Il2CppString*>*> T& _forBuildTargetIndex() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T& _placeOwnerIndex() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = EntityIndex2GameEntity*, LongString*>*> T& _placeOwnerWithBlueprintIndex() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T& _ownerIdIndex() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = EntityIndex2GameEntity*, int32_t>*> T& _parentIndex() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = EntityIndex2GameEntity*, Il2CppString*>*> T& _singlePlaceIndex() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = EntityIndex2GameEntity*, bool>*> T& _playerAvatarIndex() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T& _hashPositionIndex() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T& _targetsWithHashPositionIndex() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T& _obstaclesWithHashPositionIndex() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = EntityIndex2GameEntity*, int32_t>*> T& _aggroTargetIndex() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = EntityIndex2GameEntity*, Il2CppString*>*> T& _placeMaxGroupIndex() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = EntityIndex2GameEntity*, PositionPlace*>*> T& _positionPlaceIndex() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = EntityIndex2GameEntity*, Il2CppString*>*> T& _roomIndex() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = EntityIndex2GameEntity*, Il2CppString*>*> T& _roomDoorIndex() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = EntityIndex2GameEntity*, EntityId*>*> T& _aliveWithBindIndex() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = EntityIndex2GameEntity*, Il2CppString*>*> T& _pursuitGroupIndex() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = EntityIndex2GameEntity*, Il2CppString*>*> T& _aliveWaveItemIndex() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = EntityIndex2GameEntity*, Il2CppString*>*> T& _endIndex() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = EntityIndex2GameEntity*, Il2CppString*>*> T& _regionEnterIndex() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = IGroup1GameEntity*>*> T& _uniqueLookupGroup() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = IGroup1GameEntity*>*> T& _playerGroup() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = IGroup1GameEntity*>*> T& _gradeGroup() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = IGroup1GameEntity*>*> T& _ravenNests() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = IGroup1GameEntity*>*> T& _activeWavesEvents() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = IGroup1GameEntity*>*> T& _aiBattleStateGroup() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = IGroup1GameEntity*>*> T& _statusBarView() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = IGroup1GameEntity*>*> T& _showNameEntities() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = IGroup1GameEntity*>*> T& _showMagicStatus() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = IGroup1GameEntity*>*> T& _playersEntities() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = IGroup1GameEntity*>*> T& _gameEntitiesWithArrow() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = IGroup1GameEntity*>*> T& _extractWorkEntities() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = IGroup1GameEntity*>*> T& _fusionGroup() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = IGroup1GameEntity*>*> T& _finalizeGroup() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = IGroup1GameEntity*>*> T& _extractGroup() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = IGroup1GameEntity*>*> T& _aiBattleGroup() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}

	template <typename T = GameEntity*> T CreateFromData(GameDataEntity* source) {
		return ((T (*)(GameContext*, GameDataEntity*))(Il2CppBase() + 0x160FB38))(this, source);
	}
	template <typename T = GameEntity*> T CreateUsingBlueprint(Il2CppString* entityName, EntityBlueprint* entityData) {
		return ((T (*)(GameContext*, Il2CppString*, EntityBlueprint*))(Il2CppBase() + 0x160FBC0))(this, entityName, entityData);
	}
	template <typename T = GameEntity*> T CreateDefault() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x160FC50))(this);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x160FEB4))(this);
	}
	template <typename T = void> T SetActiveIndexesOnJoin(bool active) {
		return ((T (*)(GameContext*, bool))(Il2CppBase() + 0x1610700))(this, active);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithGroupChild(int32_t id) {
		return ((T (*)(GameContext*, int32_t))(Il2CppBase() + 0x16017B4))(this, id);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithClan(int64_t clanId) {
		return ((T (*)(GameContext*, int64_t))(Il2CppBase() + 0x1610814))(this, clanId);
	}
	template <typename T = HashSet1GameEntity*>*> T GetPlayersWithClan(int64_t clanId) {
		return ((T (*)(GameContext*, int64_t))(Il2CppBase() + 0x1610A24))(this, clanId);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithGuild(int64_t guildId) {
		return ((T (*)(GameContext*, int64_t))(Il2CppBase() + 0x1610CF8))(this, guildId);
	}
	template <typename T = HashSet1GameEntity*>*> T GetPlayersWithGuild(int64_t guildId) {
		return ((T (*)(GameContext*, int64_t))(Il2CppBase() + 0x1610F08))(this, guildId);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithBlueprint(Il2CppString* name) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x16111DC))(this, name);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithSinglePlace(Il2CppString* name) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x16113EC))(this, name);
	}
	template <typename T = GameEntity*> T GetEntityWithId(int32_t id) {
		return ((T (*)(GameContext*, int32_t))(Il2CppBase() + 0x15FA2B8))(this, id);
	}
	template <typename T = GameEntity*> T GetEntityWithMountInventoryId(int32_t mountInventoryId) {
		return ((T (*)(GameContext*, int32_t))(Il2CppBase() + 0x16115FC))(this, mountInventoryId);
	}
	template <typename T = GameEntity*> T GetEntityWithRuneInventoryId(int32_t runeInventoryId) {
		return ((T (*)(GameContext*, int32_t))(Il2CppBase() + 0x161180C))(this, runeInventoryId);
	}
	template <typename T = GameEntity*> T GetEntityWithPetInventoryId(int32_t petInventoryId) {
		return ((T (*)(GameContext*, int32_t))(Il2CppBase() + 0x1611A1C))(this, petInventoryId);
	}
	template <typename T = GameEntity*> T GetEntityWithPlayerId(int64_t playerId) {
		return ((T (*)(GameContext*, int64_t))(Il2CppBase() + 0x1611C2C))(this, playerId);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithTag(Il2CppString* tag) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1611E3C))(this, tag);
	}
	template <typename T = GameEntity*> T GetEntityWithUniqueLookup(Il2CppString* name) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x161214C))(this, name);
	}
	template <typename T = HashSet1GameEntity*>*> T GetPersonalEntitiesWithPlayerId(int64_t playerId) {
		return ((T (*)(GameContext*, int64_t))(Il2CppBase() + 0x1612388))(this, playerId);
	}
	template <typename T = HashSet1GameEntity*>*> T GetClanPersonalEntitiesWithId(int64_t clanId) {
		return ((T (*)(GameContext*, int64_t))(Il2CppBase() + 0x1612598))(this, clanId);
	}
	template <typename T = HashSet1GameEntity*>*> T GetPersonalEntitiesWithKey(Il2CppString* key) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x16127A8))(this, key);
	}
	template <typename T = GameEntity*> T GetPersonalEntityWithPlayerIdAndKey(int64_t playerId, Il2CppString* key) {
		return ((T (*)(GameContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x16129E4))(this, playerId, key);
	}
	template <typename T = GameEntity*> T GetClanPersonalEntityWithClanIdAndKey(int64_t clanId, Il2CppString* key) {
		return ((T (*)(GameContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x1612CEC))(this, clanId, key);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntityForBuildTarget(Il2CppString* targetName) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1612FF4))(this, targetName);
	}
	template <typename T = HashSet1GameEntity*>*> T GetFurnitureWithBlueprintAndPlaceOwner(int64_t playerId, Il2CppString* blueprint) {
		return ((T (*)(GameContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x1613204))(this, playerId, blueprint);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithPlaceOwner(int64_t ownerId) {
		return ((T (*)(GameContext*, int64_t))(Il2CppBase() + 0x16135D8))(this, ownerId);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithOwnerId(int64_t ownerId) {
		return ((T (*)(GameContext*, int64_t))(Il2CppBase() + 0x16137E8))(this, ownerId);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithParent(int32_t id) {
		return ((T (*)(GameContext*, int32_t))(Il2CppBase() + 0x16139F8))(this, id);
	}
	template <typename T = HashSet1GameEntity*>*> T GetPlayerAvatars() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1613C08))(this);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithPlaceMaxGroup(Il2CppString* group) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1613E14))(this, group);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T GetHashPositionIndex() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1614150))(this);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithHashPosition(float x, float y) {
		return ((T (*)(GameContext*, float, float))(Il2CppBase() + 0x1614338))(this, x, y);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T GetTargetsWithHashPositionIndex() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x16143EC))(this);
	}
	template <typename T = HashSet1GameEntity*>*> T GetTargetsWithHashPosition(float x, float y) {
		return ((T (*)(GameContext*, float, float))(Il2CppBase() + 0x16147E8))(this, x, y);
	}
	template <typename T = EntityIndex2GameEntity*, int64_t>*> T GetObstaclesWithHashPositionIndex() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x161489C))(this);
	}
	template <typename T = HashSet1GameEntity*>*> T GetObstaclesWithHashPosition(float x, float y) {
		return ((T (*)(GameContext*, float, float))(Il2CppBase() + 0x1614C1C))(this, x, y);
	}
	template <typename T = EntitiesWithPositionNear1GameEntity*>*> T GetEntitiesWithPositionNear(float x, float y, float radius) {
		return ((T (*)(GameContext*, float, float, float))(Il2CppBase() + 0x1614CD0))(this, x, y, radius);
	}
	template <typename T = EntitiesWithPositionNear1GameEntity*>*> T GetTargetsWithPositionNear(float x, float y, float radius) {
		return ((T (*)(GameContext*, float, float, float))(Il2CppBase() + 0x1614D64))(this, x, y, radius);
	}
	template <typename T = EntitiesWithPositionNear1GameEntity*>*> T GetObstaclesWithPositionNear(float x, float y, float radius) {
		return ((T (*)(GameContext*, float, float, float))(Il2CppBase() + 0x1614DF8))(this, x, y, radius);
	}
	template <typename T = GameEntity*> T GetRoofWithPosition(float x, float y) {
		return ((T (*)(GameContext*, float, float))(Il2CppBase() + 0x1614E8C))(this, x, y);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithAggroTarget(int32_t id) {
		return ((T (*)(GameContext*, int32_t))(Il2CppBase() + 0x1615000))(this, id);
	}
	template <typename T = GameEntity*> T GetCoverWithPosition(float x, float y) {
		return ((T (*)(GameContext*, float, float))(Il2CppBase() + 0x1615214))(this, x, y);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithRoom(Il2CppString* name) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1615388))(this, name);
	}
	template <typename T = HashSet1GameEntity*>*> T GetDoorsWithRoom(Il2CppString* name) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x161559C))(this, name);
	}
	template <typename T = HashSet1GameEntity*>*> T GetAliveWithBind(EntityId* targetId) {
		return ((T (*)(GameContext*, EntityId*))(Il2CppBase() + 0x16157B0))(this, targetId);
	}
	template <typename T = HashSet1GameEntity*>*> T GetAliveWithBind_1(int32_t targetId, EntityTypes* type) {
		return ((T (*)(GameContext*, int32_t, EntityTypes*))(Il2CppBase() + 0x1615B1C))(this, targetId, type);
	}
	template <typename T = GameEntity*> T GetAliveWithBind_2(int32_t targetId, Il2CppString* name) {
		return ((T (*)(GameContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1615B54))(this, targetId, name);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesWithPursuitGroup(Il2CppString* name) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1615D08))(this, name);
	}
	template <typename T = GameEntity*> T GetGenerateWallWithPosition(float x, float y) {
		return ((T (*)(GameContext*, float, float))(Il2CppBase() + 0x1615F48))(this, x, y);
	}
	template <typename T = GameEntity*> T GetPositionPlaceEntity(PositionPlace* place, uint8_t quadId) {
		return ((T (*)(GameContext*, PositionPlace*, uint8_t))(Il2CppBase() + 0x16160BC))(this, place, quadId);
	}
	template <typename T = HashSet1GameEntity*>*> T GetAliveWaveItems(Il2CppString* eventName) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1616444))(this, eventName);
	}
	template <typename T = HashSet1GameEntity*>*> T GetEntitiesOnEndPath(Il2CppString* name) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x16167E0))(this, name);
	}
	template <typename T = HashSet1GameEntity*>*> T GetPointWithRegionEnter(Il2CppString* name) {
		return ((T (*)(GameContext*, Il2CppString*))(Il2CppBase() + 0x1616B4C))(this, name);
	}
	template <typename T = GameEntity*> T GetShieldWithId(int32_t id) {
		return ((T (*)(GameContext*, int32_t))(Il2CppBase() + 0x1616DE4))(this, id);
	}
	template <typename T = IGroup1GameEntity*>*> T GetUniqueLookupGroup() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1616FA4))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetPlayerGroup() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x161701C))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetGradeGroup() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1617094))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetRavenNests() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x161710C))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetActiveWavesEvents() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1617184))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetAIBattleStateGroup() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x161730C))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetStatusBarView() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1617384))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetShowNameEntities() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x16173FC))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetShowMagicStatus() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1617618))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetPlayersEntities() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1617690))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetGameEntitiesWithArrow() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x161786C))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetExtractWorkEntities() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x16178E4))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetFusionGroup() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x161795C))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetFinalizeGroup() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1617B8C))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetExtractGroup() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1617DBC))(this);
	}
	template <typename T = IGroup1GameEntity*>*> T GetAIBattleGroup() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1617FEC))(this);
	}
	template <typename T = void> T SetOnDeathEntities(HashSet1GameEntity*>* entities) {
		return ((T (*)(GameContext*, HashSet1GameEntity*>*))(Il2CppBase() + 0x161821C))(this, entities);
	}
	template <typename T = void> T WriteEntity(GameEntity* entity, uintptr_t writer) {
		return ((T (*)(GameContext*, GameEntity*, uintptr_t))(Il2CppBase() + 0x1618530))(this, entity, writer);
	}
	template <typename T = Il2CppString*> T ReadEntity(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(GameContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x16187FC))(this, reader, result);
	}
	template <typename T = GameEntity*> T get_avatarEntity() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x15F6F0C))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1618A9C))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(GameContext*, bool))(Il2CppBase() + 0x1618AB8))(this, value);
	}
	template <typename T = GameEntity*> T get_draggedEntity() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1618B68))(this);
	}
	template <typename T = bool> T get_isDragged() {
		return ((T (*)(GameContext*))(Il2CppBase() + 0x1618C44))(this);
	}
	template <typename T = void> T set_isDragged(bool value) {
		return ((T (*)(GameContext*, bool))(Il2CppBase() + 0x1618C60))(this, value);
	}

};

