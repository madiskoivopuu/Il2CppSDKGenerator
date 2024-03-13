#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseClientWorld.h" 

class ArenaClientWorld : public BaseClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaClientWorld"));
	}

	template <typename T = PlaceManager*> T& PlaceManager() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = DoorsAndWalls*> T& DoorsAndWalls() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = bool> T& IsActiveShield() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = IGroup1GameEntity*>*> T& _vectorFieldEntities() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = bool> T& IsBot() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = Action2Il2CppString*, Il2CppString*>*> T& OnLeaveArene() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = Action1ArmingData*>*> T& OnUpdateArming() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = Action2int32_t, bool>*> T& TakeAllResultEvent() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _arenaCommandsActions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& Ping() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}

	template <typename T = GameContext*> T get_MainContext() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1EBA4))(this);
	}
	template <typename T = EntitiesWithPositionNear1GameEntity*>*> T GetEntitiesWithPositionNear(float x, float y, float radius) {
		return ((T (*)(ArenaClientWorld*, float, float, float))(Il2CppBase() + 0x1A1EBAC))(this, x, y, radius);
	}
	template <typename T = EntitiesWithPositionNear1GameEntity*>*> T GetTargetsWithPositionNear(float x, float y, float radius) {
		return ((T (*)(ArenaClientWorld*, float, float, float))(Il2CppBase() + 0x1A1EBF8))(this, x, y, radius);
	}
	template <typename T = EntitiesWithPositionNear1GameEntity*>*> T GetObstaclesWithPositionNear(float x, float y, float radius) {
		return ((T (*)(ArenaClientWorld*, float, float, float))(Il2CppBase() + 0x1A1EC44))(this, x, y, radius);
	}
	template <typename T = LocationEntity*> T get_WorldParams() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1EC90))(this);
	}
	template <typename T = PlaceManager*> T get_PlaceManager() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1ECAC))(this);
	}
	template <typename T = void> T set_PlaceManager(PlaceManager* value) {
		return ((T (*)(ArenaClientWorld*, PlaceManager*))(Il2CppBase() + 0x1A1ECB4))(this, value);
	}
	template <typename T = DoorsAndWalls*> T get_DoorsAndWalls() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1ECC4))(this);
	}
	template <typename T = void> T set_DoorsAndWalls(DoorsAndWalls* value) {
		return ((T (*)(ArenaClientWorld*, DoorsAndWalls*))(Il2CppBase() + 0x1A1ECCC))(this, value);
	}
	template <typename T = bool> T get_IsActiveShield() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1ECDC))(this);
	}
	template <typename T = void> T set_IsActiveShield(bool value) {
		return ((T (*)(ArenaClientWorld*, bool))(Il2CppBase() + 0x1A1ECE4))(this, value);
	}
	template <typename T = void> T CreateContexts() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1EE24))(this);
	}
	template <typename T = GameEntity*> T CreateEntity(Il2CppString* name, EntityBlueprint* blueprint) {
		return ((T (*)(ArenaClientWorld*, Il2CppString*, EntityBlueprint*))(Il2CppBase() + 0x1A1EF6C))(this, name, blueprint);
	}
	template <typename T = uintptr_t> T Create(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((T (*)(ArenaClientWorld*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0x1A1F004))(this, blueprints);
	}
	template <typename T = bool> T QuadIsEmpty(int32_t quadId) {
		return ((T (*)(ArenaClientWorld*, int32_t))(Il2CppBase() + 0x1A1F098))(this, quadId);
	}
	template <typename T = bool> T QuadIsEmpty_1(float x, float y) {
		return ((T (*)(ArenaClientWorld*, float, float))(Il2CppBase() + 0x1A1F108))(this, x, y);
	}
	template <typename T = int32_t> T QuadsIsEmptyCount() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1F1EC))(this);
	}
	template <typename T = PlayerEntity*> T GetQuadOwner(int32_t quadId) {
		return ((T (*)(ArenaClientWorld*, int32_t))(Il2CppBase() + 0x1A1F27C))(this, quadId);
	}
	template <typename T = Il2CppString*> T GetUserName(int32_t quadId) {
		return ((T (*)(ArenaClientWorld*, int32_t))(Il2CppBase() + 0x1A1F2F0))(this, quadId);
	}
	template <typename T = GameEntity*> T GetAvatarExperience() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1F31C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1F338))(this);
	}
	template <typename T = void> T add_OnUpdateArming(Action1ArmingData*>* value) {
		return ((T (*)(ArenaClientWorld*, Action1ArmingData*>*))(Il2CppBase() + 0x1A1F4E4))(this, value);
	}
	template <typename T = void> T remove_OnUpdateArming(Action1ArmingData*>* value) {
		return ((T (*)(ArenaClientWorld*, Action1ArmingData*>*))(Il2CppBase() + 0x1A1F588))(this, value);
	}
	template <typename T = void> T add_TakeAllResultEvent(Action2int32_t, bool>* value) {
		return ((T (*)(ArenaClientWorld*, Action2int32_t, bool>*))(Il2CppBase() + 0x1A1F62C))(this, value);
	}
	template <typename T = void> T remove_TakeAllResultEvent(Action2int32_t, bool>* value) {
		return ((T (*)(ArenaClientWorld*, Action2int32_t, bool>*))(Il2CppBase() + 0x1A1F6D0))(this, value);
	}
	template <typename T = void> T OnMaxHealthAndDmgCoef(MaxHealthAndDmgCoefData* data) {
		return ((T (*)(ArenaClientWorld*, MaxHealthAndDmgCoefData*))(Il2CppBase() + 0x1A21C2C))(this, data);
	}
	template <typename T = GameEntity*> T OnFinalizeResult(FinalizeResultData* data) {
		return ((T (*)(ArenaClientWorld*, FinalizeResultData*))(Il2CppBase() + 0x1A21E4C))(this, data);
	}
	template <typename T = void> T OnInventoryUpdate(InventoryData* data, int64_t updateTime) {
		return ((T (*)(ArenaClientWorld*, InventoryData*, int64_t))(Il2CppBase() + 0x1A21E68))(this, data, updateTime);
	}
	template <typename T = bool> T OnCommand(Commands* commandId, uintptr_t reader, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, Commands*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A21EB0))(this, commandId, reader, peer);
	}
	template <typename T = GameEntity*> T OnPlayerKillMode(PlayerKillData* data) {
		return ((T (*)(ArenaClientWorld*, PlayerKillData*))(Il2CppBase() + 0x1A21FBC))(this, data);
	}
	template <typename T = void> T OnMinimapPing(MinimapPingData* data) {
		return ((T (*)(ArenaClientWorld*, MinimapPingData*))(Il2CppBase() + 0x1A2200C))(this, data);
	}
	template <typename T = void> T OnDonationResult(DonationResult* data) {
		return ((T (*)(ArenaClientWorld*, DonationResult*))(Il2CppBase() + 0x1A22010))(this, data);
	}
	template <typename T = void> T OnExchangeResult(ExchangeResult* data) {
		return ((T (*)(ArenaClientWorld*, ExchangeResult*))(Il2CppBase() + 0x1A22104))(this, data);
	}
	template <typename T = void> T OnOpenBossResult(BossOperationResultData* data) {
		return ((T (*)(ArenaClientWorld*, BossOperationResultData*))(Il2CppBase() + 0x1A221D0))(this, data);
	}
	template <typename T = void> T OnBossOpenState(BossOpenStateData* data) {
		return ((T (*)(ArenaClientWorld*, BossOpenStateData*))(Il2CppBase() + 0x1A222AC))(this, data);
	}
	template <typename T = void> T OnSetCurrency(SetCurrencyData* data) {
		return ((T (*)(ArenaClientWorld*, SetCurrencyData*))(Il2CppBase() + 0x1A22580))(this, data);
	}
	template <typename T = void> T OnWavesEventStatus(WavesEventStatusData* data) {
		return ((T (*)(ArenaClientWorld*, WavesEventStatusData*))(Il2CppBase() + 0x1A22654))(this, data);
	}
	template <typename T = void> T OnSetActive(SetActiveData* data) {
		return ((T (*)(ArenaClientWorld*, SetActiveData*))(Il2CppBase() + 0x1A22658))(this, data);
	}
	template <typename T = void> T OnRavenNestStats(RavenNestStatsData* data) {
		return ((T (*)(ArenaClientWorld*, RavenNestStatsData*))(Il2CppBase() + 0x1A226D0))(this, data);
	}
	template <typename T = void> T OnSetEndTime(SetEndTimeData* data) {
		return ((T (*)(ArenaClientWorld*, SetEndTimeData*))(Il2CppBase() + 0x1A2293C))(this, data);
	}
	template <typename T = void> T OnSetResetTime(SetResetTimeData* data) {
		return ((T (*)(ArenaClientWorld*, SetResetTimeData*))(Il2CppBase() + 0x1A229B8))(this, data);
	}
	template <typename T = void> T OnSetBattleState(BattleStateData* data) {
		return ((T (*)(ArenaClientWorld*, BattleStateData*))(Il2CppBase() + 0x1A22A34))(this, data);
	}
	template <typename T = void> T OnTakeAllResult(TakeAllData* data) {
		return ((T (*)(ArenaClientWorld*, TakeAllData*))(Il2CppBase() + 0x1A22AB4))(this, data);
	}
	template <typename T = void> T OnBuyDailyItemResult(BuyDailyItemData* data) {
		return ((T (*)(ArenaClientWorld*, BuyDailyItemData*))(Il2CppBase() + 0x1A22B2C))(this, data);
	}
	template <typename T = void> T OnLevelUp(LevelUpData* data) {
		return ((T (*)(ArenaClientWorld*, LevelUpData*))(Il2CppBase() + 0x1A22B30))(this, data);
	}
	template <typename T = GameEntity*> T OnCreateAvatarCmd(CreateArenaAvatarEntityData* data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, CreateArenaAvatarEntityData*, uintptr_t))(Il2CppBase() + 0x1A22B34))(this, data, peer);
	}
	template <typename T = void> T ConnectToChat() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A22E64))(this);
	}
	template <typename T = void> T OnArming(ArmingData* data) {
		return ((T (*)(ArenaClientWorld*, ArmingData*))(Il2CppBase() + 0x1A22EEC))(this, data);
	}
	template <typename T = GameEntity*> T OnCreateEntityCmd(CreateEntityData* data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, CreateEntityData*, uintptr_t))(Il2CppBase() + 0x1A22FA0))(this, data, peer);
	}
	template <typename T = void> T OnDeathTimeOut(int64_t value) {
		return ((T (*)(ArenaClientWorld*, int64_t))(Il2CppBase() + 0x1A234E8))(this, value);
	}
	template <typename T = int64_t> T get_Ping() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A23648))(this);
	}
	template <typename T = void> T set_Ping(int64_t value) {
		return ((T (*)(ArenaClientWorld*, int64_t))(Il2CppBase() + 0x1A23650))(this, value);
	}
	template <typename T = GameEntity*> T OnMoveEntityCmd(PositionData* data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, PositionData*, uintptr_t))(Il2CppBase() + 0x1A23658))(this, data, peer);
	}
	template <typename T = void> T OnHideEntityCmd(int32_t id) {
		return ((T (*)(ArenaClientWorld*, int32_t))(Il2CppBase() + 0x1A2381C))(this, id);
	}
	template <typename T = GameEntity*> T OnMoveBuildEntityCmd(MoveBuildEntityData* data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, MoveBuildEntityData*, uintptr_t))(Il2CppBase() + 0x1A23820))(this, data, peer);
	}
	template <typename T = void> T OnAggroTargetCmd(AggroTargetData* data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, AggroTargetData*, uintptr_t))(Il2CppBase() + 0x1A23928))(this, data, peer);
	}
	template <typename T = void> T OnInteractTargetCmd(InteractTargetData* data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, InteractTargetData*, uintptr_t))(Il2CppBase() + 0x1A23A48))(this, data, peer);
	}
	template <typename T = GameEntity*> T OnSetHealthCommand(SetHealthData* data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, SetHealthData*, uintptr_t))(Il2CppBase() + 0x1A23B70))(this, data, peer);
	}
	template <typename T = GameEntity*> T OnSetTenacityCommand(SetTenacityData* data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, SetTenacityData*, uintptr_t))(Il2CppBase() + 0x1A23CE4))(this, data, peer);
	}
	template <typename T = void> T OnEffectCommand(EffectData* data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, EffectData*, uintptr_t))(Il2CppBase() + 0x1A23DF4))(this, data, peer);
	}
	template <typename T = void> T OnChangeHealthCommand(ChangeHealthData* data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, ChangeHealthData*, uintptr_t))(Il2CppBase() + 0x1A23DF8))(this, data, peer);
	}
	template <typename T = void> T OnChestRewardEffectDataCommand(ChestRewardEffectData* data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, ChestRewardEffectData*, uintptr_t))(Il2CppBase() + 0x1A23DFC))(this, data, peer);
	}
	template <typename T = void> T OnPickupCmd(PickupData* data) {
		return ((T (*)(ArenaClientWorld*, PickupData*))(Il2CppBase() + 0x1A23E84))(this, data);
	}
	template <typename T = void> T OnTournamentPointsNotificationCmd(TournamentPointsNotificationData* data) {
		return ((T (*)(ArenaClientWorld*, TournamentPointsNotificationData*))(Il2CppBase() + 0x1A23E88))(this, data);
	}
	template <typename T = void> T OnStoreExperienceNotificationCmd(StoreExperienceNotificationData* data) {
		return ((T (*)(ArenaClientWorld*, StoreExperienceNotificationData*))(Il2CppBase() + 0x1A23F54))(this, data);
	}
	template <typename T = void> T OnCraftWork(CraftWorkData* data) {
		return ((T (*)(ArenaClientWorld*, CraftWorkData*))(Il2CppBase() + 0x1A24058))(this, data);
	}
	template <typename T = bool> T OnQuadFill(QuadFillData* data) {
		return ((T (*)(ArenaClientWorld*, QuadFillData*))(Il2CppBase() + 0x1A24174))(this, data);
	}
	template <typename T = void> T OnExplode(ExplodeData* data) {
		return ((T (*)(ArenaClientWorld*, ExplodeData*))(Il2CppBase() + 0x1A241B8))(this, data);
	}
	template <typename T = void> T OnRemoveTool(RemoveToolData* data) {
		return ((T (*)(ArenaClientWorld*, RemoveToolData*))(Il2CppBase() + 0x1A241BC))(this, data);
	}
	template <typename T = GameEntity*> T OnUnlock(UnlockData* data) {
		return ((T (*)(ArenaClientWorld*, UnlockData*))(Il2CppBase() + 0x1A2426C))(this, data);
	}
	template <typename T = void> T OnShare(int32_t targetId, bool isShared, bool cantSwitch) {
		return ((T (*)(ArenaClientWorld*, int32_t, bool, bool))(Il2CppBase() + 0x1A243E8))(this, targetId, isShared, cantSwitch);
	}
	template <typename T = void> T OnActorDeath(ActorDeathData* data) {
		return ((T (*)(ArenaClientWorld*, ActorDeathData*))(Il2CppBase() + 0x1A24438))(this, data);
	}
	template <typename T = void> T OnChangeLeaveTime(int64_t tick) {
		return ((T (*)(ArenaClientWorld*, int64_t))(Il2CppBase() + 0x1A2443C))(this, tick);
	}
	template <typename T = GameEntity*> T OnTeleport(TeleportData* data) {
		return ((T (*)(ArenaClientWorld*, TeleportData*))(Il2CppBase() + 0x1A24470))(this, data);
	}
	template <typename T = void> T OnControlled(LostControlData* data) {
		return ((T (*)(ArenaClientWorld*, LostControlData*))(Il2CppBase() + 0x1A245E0))(this, data);
	}
	template <typename T = void> T OnMannequinSwapResult(MannequinSwapData* data) {
		return ((T (*)(ArenaClientWorld*, MannequinSwapData*))(Il2CppBase() + 0x1A2474C))(this, data);
	}
	template <typename T = void> T OnRollChestRewardResponse(RollChestRewardResponse* data) {
		return ((T (*)(ArenaClientWorld*, RollChestRewardResponse*))(Il2CppBase() + 0x1A24750))(this, data);
	}
	template <typename T = void> T OnProductionWorkUpdated(ProductionWorkData* data) {
		return ((T (*)(ArenaClientWorld*, ProductionWorkData*))(Il2CppBase() + 0x1A247D8))(this, data);
	}
	template <typename T = void> T OnWorkerUniqueLookupUpdated(WorkerUniqueLookupData* data) {
		return ((T (*)(ArenaClientWorld*, WorkerUniqueLookupData*))(Il2CppBase() + 0x1A24908))(this, data);
	}
	template <typename T = void> T OnCreateLobby(LobbyEntity* lobbyEntity) {
		return ((T (*)(ArenaClientWorld*, LobbyEntity*))(Il2CppBase() + 0x1A24A18))(this, lobbyEntity);
	}
	template <typename T = void> T OnAcceptLobbyReceive(AcceptLobbyData* data) {
		return ((T (*)(ArenaClientWorld*, AcceptLobbyData*))(Il2CppBase() + 0x1A24BC0))(this, data);
	}
	template <typename T = void> T OnFindPlayersLobby(FindPlayersLobbyData* data) {
		return ((T (*)(ArenaClientWorld*, FindPlayersLobbyData*))(Il2CppBase() + 0x1A24E44))(this, data);
	}
	template <typename T = void> T OnCycleResponse(CyclicResponseData* data) {
		return ((T (*)(ArenaClientWorld*, CyclicResponseData*))(Il2CppBase() + 0x1A24E48))(this, data);
	}
	template <typename T = void> T OnExtractWork(ExtractWorkData* data) {
		return ((T (*)(ArenaClientWorld*, ExtractWorkData*))(Il2CppBase() + 0x1A24E4C))(this, data);
	}

};

