#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseClientWorld.h" 

class ArenaClientWorld : public BaseClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaClientWorld"));
	}

	template <typename R = PlaceManager*> R& PlaceManager() {
		return *(R*)((uintptr_t)this + 0x298);
	}
	template <typename R = DoorsAndWalls*> R& DoorsAndWalls() {
		return *(R*)((uintptr_t)this + 0x2A0);
	}
	template <typename R = bool> R& IsActiveShield() {
		return *(R*)((uintptr_t)this + 0x2A8);
	}
	 IGroup1GameEntity*>*& _vectorFieldEntities() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x2B0);
	}
	template <typename R = bool> R& IsBot() {
		return *(R*)((uintptr_t)this + 0x2B8);
	}
	 Action2Il2CppString*, Il2CppString*>*& OnLeaveArene() {
		return *(Action2Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x2C0);
	}
	 Action1ArmingData*>*& OnUpdateArming() {
		return *(Action1ArmingData*>**)((uintptr_t)this + 0x2C8);
	}
	 Action2int32_t, bool>*& TakeAllResultEvent() {
		return *(Action2int32_t, bool>**)((uintptr_t)this + 0x2D0);
	}
	template <typename R = Il2CppArray<Action4ArenaClientWorld*, Commands*, uintptr_t, uintptr_t>*>*> static R& _arenaCommandsActions() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& Ping() {
		return *(R*)((uintptr_t)this + 0x2D8);
	}

	template <typename R = GameContext*> R get_MainContext() {
		return ((R (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1EBA4))(this);
	}
	 EntitiesWithPositionNear1GameEntity*>* GetEntitiesWithPositionNear(float x, float y, float radius) {
		return ((EntitiesWithPositionNear1GameEntity*>* (*)(ArenaClientWorld*, float, float, float))(Il2CppBase() + 0x1A1EBAC))(this, x, y, radius);
	}
	 EntitiesWithPositionNear1GameEntity*>* GetTargetsWithPositionNear(float x, float y, float radius) {
		return ((EntitiesWithPositionNear1GameEntity*>* (*)(ArenaClientWorld*, float, float, float))(Il2CppBase() + 0x1A1EBF8))(this, x, y, radius);
	}
	 EntitiesWithPositionNear1GameEntity*>* GetObstaclesWithPositionNear(float x, float y, float radius) {
		return ((EntitiesWithPositionNear1GameEntity*>* (*)(ArenaClientWorld*, float, float, float))(Il2CppBase() + 0x1A1EC44))(this, x, y, radius);
	}
	template <typename R = LocationEntity*> R get_WorldParams() {
		return ((R (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1EC90))(this);
	}
	template <typename R = PlaceManager*> R get_PlaceManager() {
		return ((R (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1ECAC))(this);
	}
	template <typename R = void> R set_PlaceManager(PlaceManager* value) {
		return ((R (*)(ArenaClientWorld*, PlaceManager*))(Il2CppBase() + 0x1A1ECB4))(this, value);
	}
	template <typename R = DoorsAndWalls*> R get_DoorsAndWalls() {
		return ((R (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1ECC4))(this);
	}
	template <typename R = void> R set_DoorsAndWalls(DoorsAndWalls* value) {
		return ((R (*)(ArenaClientWorld*, DoorsAndWalls*))(Il2CppBase() + 0x1A1ECCC))(this, value);
	}
	template <typename R = bool> R get_IsActiveShield() {
		return ((R (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1ECDC))(this);
	}
	template <typename R = void> R set_IsActiveShield(bool value) {
		return ((R (*)(ArenaClientWorld*, bool))(Il2CppBase() + 0x1A1ECE4))(this, value);
	}
	template <typename R = void> R CreateContexts() {
		return ((R (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1EE24))(this);
	}
	template <typename R = GameEntity*> R CreateEntity(Il2CppString* name, EntityBlueprint* blueprint) {
		return ((R (*)(ArenaClientWorld*, Il2CppString*, EntityBlueprint*))(Il2CppBase() + 0x1A1EF6C))(this, name, blueprint);
	}
	template <typename R = uintptr_t> R Create(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((R (*)(ArenaClientWorld*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0x1A1F004))(this, blueprints);
	}
	template <typename R = bool> R QuadIsEmpty(int32_t quadId) {
		return ((R (*)(ArenaClientWorld*, int32_t))(Il2CppBase() + 0x1A1F098))(this, quadId);
	}
	template <typename R = bool> R QuadIsEmpty_1(float x, float y) {
		return ((R (*)(ArenaClientWorld*, float, float))(Il2CppBase() + 0x1A1F108))(this, x, y);
	}
	template <typename R = int32_t> R QuadsIsEmptyCount() {
		return ((R (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1F1EC))(this);
	}
	template <typename R = PlayerEntity*> R GetQuadOwner(int32_t quadId) {
		return ((R (*)(ArenaClientWorld*, int32_t))(Il2CppBase() + 0x1A1F27C))(this, quadId);
	}
	template <typename R = Il2CppString*> R GetUserName(int32_t quadId) {
		return ((R (*)(ArenaClientWorld*, int32_t))(Il2CppBase() + 0x1A1F2F0))(this, quadId);
	}
	template <typename R = GameEntity*> R GetAvatarExperience() {
		return ((R (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1F31C))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1F338))(this);
	}
	template <typename R = void> R add_OnUpdateArming(Action1ArmingData*>* value) {
		return ((R (*)(ArenaClientWorld*, Action1ArmingData*>*))(Il2CppBase() + 0x1A1F4E4))(this, value);
	}
	template <typename R = void> R remove_OnUpdateArming(Action1ArmingData*>* value) {
		return ((R (*)(ArenaClientWorld*, Action1ArmingData*>*))(Il2CppBase() + 0x1A1F588))(this, value);
	}
	template <typename R = void> R add_TakeAllResultEvent(Action2int32_t, bool>* value) {
		return ((R (*)(ArenaClientWorld*, Action2int32_t, bool>*))(Il2CppBase() + 0x1A1F62C))(this, value);
	}
	template <typename R = void> R remove_TakeAllResultEvent(Action2int32_t, bool>* value) {
		return ((R (*)(ArenaClientWorld*, Action2int32_t, bool>*))(Il2CppBase() + 0x1A1F6D0))(this, value);
	}
	template <typename R = void> R OnMaxHealthAndDmgCoef(MaxHealthAndDmgCoefData* data) {
		return ((R (*)(ArenaClientWorld*, MaxHealthAndDmgCoefData*))(Il2CppBase() + 0x1A21C2C))(this, data);
	}
	template <typename R = GameEntity*> R OnFinalizeResult(FinalizeResultData* data) {
		return ((R (*)(ArenaClientWorld*, FinalizeResultData*))(Il2CppBase() + 0x1A21E4C))(this, data);
	}
	template <typename R = void> R OnInventoryUpdate(InventoryData* data, int64_t updateTime) {
		return ((R (*)(ArenaClientWorld*, InventoryData*, int64_t))(Il2CppBase() + 0x1A21E68))(this, data, updateTime);
	}
	template <typename R = bool> R OnCommand(Commands* commandId, uintptr_t reader, uintptr_t peer) {
		return ((R (*)(ArenaClientWorld*, Commands*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A21EB0))(this, commandId, reader, peer);
	}
	template <typename R = GameEntity*> R OnPlayerKillMode(PlayerKillData* data) {
		return ((R (*)(ArenaClientWorld*, PlayerKillData*))(Il2CppBase() + 0x1A21FBC))(this, data);
	}
	template <typename R = void> R OnMinimapPing(MinimapPingData* data) {
		return ((R (*)(ArenaClientWorld*, MinimapPingData*))(Il2CppBase() + 0x1A2200C))(this, data);
	}
	template <typename R = void> R OnDonationResult(DonationResult* data) {
		return ((R (*)(ArenaClientWorld*, DonationResult*))(Il2CppBase() + 0x1A22010))(this, data);
	}
	template <typename R = void> R OnExchangeResult(ExchangeResult* data) {
		return ((R (*)(ArenaClientWorld*, ExchangeResult*))(Il2CppBase() + 0x1A22104))(this, data);
	}
	template <typename R = void> R OnOpenBossResult(BossOperationResultData* data) {
		return ((R (*)(ArenaClientWorld*, BossOperationResultData*))(Il2CppBase() + 0x1A221D0))(this, data);
	}
	template <typename R = void> R OnBossOpenState(BossOpenStateData* data) {
		return ((R (*)(ArenaClientWorld*, BossOpenStateData*))(Il2CppBase() + 0x1A222AC))(this, data);
	}
	template <typename R = void> R OnSetCurrency(SetCurrencyData* data) {
		return ((R (*)(ArenaClientWorld*, SetCurrencyData*))(Il2CppBase() + 0x1A22580))(this, data);
	}
	template <typename R = void> R OnWavesEventStatus(WavesEventStatusData* data) {
		return ((R (*)(ArenaClientWorld*, WavesEventStatusData*))(Il2CppBase() + 0x1A22654))(this, data);
	}
	template <typename R = void> R OnSetActive(SetActiveData* data) {
		return ((R (*)(ArenaClientWorld*, SetActiveData*))(Il2CppBase() + 0x1A22658))(this, data);
	}
	template <typename R = void> R OnRavenNestStats(RavenNestStatsData* data) {
		return ((R (*)(ArenaClientWorld*, RavenNestStatsData*))(Il2CppBase() + 0x1A226D0))(this, data);
	}
	template <typename R = void> R OnSetEndTime(SetEndTimeData* data) {
		return ((R (*)(ArenaClientWorld*, SetEndTimeData*))(Il2CppBase() + 0x1A2293C))(this, data);
	}
	template <typename R = void> R OnSetResetTime(SetResetTimeData* data) {
		return ((R (*)(ArenaClientWorld*, SetResetTimeData*))(Il2CppBase() + 0x1A229B8))(this, data);
	}
	template <typename R = void> R OnSetBattleState(BattleStateData* data) {
		return ((R (*)(ArenaClientWorld*, BattleStateData*))(Il2CppBase() + 0x1A22A34))(this, data);
	}
	template <typename R = void> R OnTakeAllResult(TakeAllData* data) {
		return ((R (*)(ArenaClientWorld*, TakeAllData*))(Il2CppBase() + 0x1A22AB4))(this, data);
	}
	template <typename R = void> R OnBuyDailyItemResult(BuyDailyItemData* data) {
		return ((R (*)(ArenaClientWorld*, BuyDailyItemData*))(Il2CppBase() + 0x1A22B2C))(this, data);
	}
	template <typename R = void> R OnLevelUp(LevelUpData* data) {
		return ((R (*)(ArenaClientWorld*, LevelUpData*))(Il2CppBase() + 0x1A22B30))(this, data);
	}
	template <typename R = GameEntity*> R OnCreateAvatarCmd(CreateArenaAvatarEntityData* data, uintptr_t peer) {
		return ((R (*)(ArenaClientWorld*, CreateArenaAvatarEntityData*, uintptr_t))(Il2CppBase() + 0x1A22B34))(this, data, peer);
	}
	template <typename R = void> R ConnectToChat() {
		return ((R (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A22E64))(this);
	}
	template <typename R = void> R OnArming(ArmingData* data) {
		return ((R (*)(ArenaClientWorld*, ArmingData*))(Il2CppBase() + 0x1A22EEC))(this, data);
	}
	template <typename R = GameEntity*> R OnCreateEntityCmd(CreateEntityData* data, uintptr_t peer) {
		return ((R (*)(ArenaClientWorld*, CreateEntityData*, uintptr_t))(Il2CppBase() + 0x1A22FA0))(this, data, peer);
	}
	template <typename R = void> R OnDeathTimeOut(int64_t value) {
		return ((R (*)(ArenaClientWorld*, int64_t))(Il2CppBase() + 0x1A234E8))(this, value);
	}
	template <typename R = int64_t> R get_Ping() {
		return ((R (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A23648))(this);
	}
	template <typename R = void> R set_Ping(int64_t value) {
		return ((R (*)(ArenaClientWorld*, int64_t))(Il2CppBase() + 0x1A23650))(this, value);
	}
	template <typename R = GameEntity*> R OnMoveEntityCmd(PositionData* data, uintptr_t peer) {
		return ((R (*)(ArenaClientWorld*, PositionData*, uintptr_t))(Il2CppBase() + 0x1A23658))(this, data, peer);
	}
	template <typename R = void> R OnHideEntityCmd(int32_t id) {
		return ((R (*)(ArenaClientWorld*, int32_t))(Il2CppBase() + 0x1A2381C))(this, id);
	}
	template <typename R = GameEntity*> R OnMoveBuildEntityCmd(MoveBuildEntityData* data, uintptr_t peer) {
		return ((R (*)(ArenaClientWorld*, MoveBuildEntityData*, uintptr_t))(Il2CppBase() + 0x1A23820))(this, data, peer);
	}
	template <typename R = void> R OnAggroTargetCmd(AggroTargetData* data, uintptr_t peer) {
		return ((R (*)(ArenaClientWorld*, AggroTargetData*, uintptr_t))(Il2CppBase() + 0x1A23928))(this, data, peer);
	}
	template <typename R = void> R OnInteractTargetCmd(InteractTargetData* data, uintptr_t peer) {
		return ((R (*)(ArenaClientWorld*, InteractTargetData*, uintptr_t))(Il2CppBase() + 0x1A23A48))(this, data, peer);
	}
	template <typename R = GameEntity*> R OnSetHealthCommand(SetHealthData* data, uintptr_t peer) {
		return ((R (*)(ArenaClientWorld*, SetHealthData*, uintptr_t))(Il2CppBase() + 0x1A23B70))(this, data, peer);
	}
	template <typename R = GameEntity*> R OnSetTenacityCommand(SetTenacityData* data, uintptr_t peer) {
		return ((R (*)(ArenaClientWorld*, SetTenacityData*, uintptr_t))(Il2CppBase() + 0x1A23CE4))(this, data, peer);
	}
	template <typename R = void> R OnEffectCommand(EffectData* data, uintptr_t peer) {
		return ((R (*)(ArenaClientWorld*, EffectData*, uintptr_t))(Il2CppBase() + 0x1A23DF4))(this, data, peer);
	}
	template <typename R = void> R OnChangeHealthCommand(ChangeHealthData* data, uintptr_t peer) {
		return ((R (*)(ArenaClientWorld*, ChangeHealthData*, uintptr_t))(Il2CppBase() + 0x1A23DF8))(this, data, peer);
	}
	template <typename R = void> R OnChestRewardEffectDataCommand(ChestRewardEffectData* data, uintptr_t peer) {
		return ((R (*)(ArenaClientWorld*, ChestRewardEffectData*, uintptr_t))(Il2CppBase() + 0x1A23DFC))(this, data, peer);
	}
	template <typename R = void> R OnPickupCmd(PickupData* data) {
		return ((R (*)(ArenaClientWorld*, PickupData*))(Il2CppBase() + 0x1A23E84))(this, data);
	}
	template <typename R = void> R OnTournamentPointsNotificationCmd(TournamentPointsNotificationData* data) {
		return ((R (*)(ArenaClientWorld*, TournamentPointsNotificationData*))(Il2CppBase() + 0x1A23E88))(this, data);
	}
	template <typename R = void> R OnStoreExperienceNotificationCmd(StoreExperienceNotificationData* data) {
		return ((R (*)(ArenaClientWorld*, StoreExperienceNotificationData*))(Il2CppBase() + 0x1A23F54))(this, data);
	}
	template <typename R = void> R OnCraftWork(CraftWorkData* data) {
		return ((R (*)(ArenaClientWorld*, CraftWorkData*))(Il2CppBase() + 0x1A24058))(this, data);
	}
	template <typename R = bool> R OnQuadFill(QuadFillData* data) {
		return ((R (*)(ArenaClientWorld*, QuadFillData*))(Il2CppBase() + 0x1A24174))(this, data);
	}
	template <typename R = void> R OnExplode(ExplodeData* data) {
		return ((R (*)(ArenaClientWorld*, ExplodeData*))(Il2CppBase() + 0x1A241B8))(this, data);
	}
	template <typename R = void> R OnRemoveTool(RemoveToolData* data) {
		return ((R (*)(ArenaClientWorld*, RemoveToolData*))(Il2CppBase() + 0x1A241BC))(this, data);
	}
	template <typename R = GameEntity*> R OnUnlock(UnlockData* data) {
		return ((R (*)(ArenaClientWorld*, UnlockData*))(Il2CppBase() + 0x1A2426C))(this, data);
	}
	template <typename R = void> R OnShare(int32_t targetId, bool isShared, bool cantSwitch) {
		return ((R (*)(ArenaClientWorld*, int32_t, bool, bool))(Il2CppBase() + 0x1A243E8))(this, targetId, isShared, cantSwitch);
	}
	template <typename R = void> R OnActorDeath(ActorDeathData* data) {
		return ((R (*)(ArenaClientWorld*, ActorDeathData*))(Il2CppBase() + 0x1A24438))(this, data);
	}
	template <typename R = void> R OnChangeLeaveTime(int64_t tick) {
		return ((R (*)(ArenaClientWorld*, int64_t))(Il2CppBase() + 0x1A2443C))(this, tick);
	}
	template <typename R = GameEntity*> R OnTeleport(TeleportData* data) {
		return ((R (*)(ArenaClientWorld*, TeleportData*))(Il2CppBase() + 0x1A24470))(this, data);
	}
	template <typename R = void> R OnControlled(LostControlData* data) {
		return ((R (*)(ArenaClientWorld*, LostControlData*))(Il2CppBase() + 0x1A245E0))(this, data);
	}
	template <typename R = void> R OnMannequinSwapResult(MannequinSwapData* data) {
		return ((R (*)(ArenaClientWorld*, MannequinSwapData*))(Il2CppBase() + 0x1A2474C))(this, data);
	}
	template <typename R = void> R OnRollChestRewardResponse(RollChestRewardResponse* data) {
		return ((R (*)(ArenaClientWorld*, RollChestRewardResponse*))(Il2CppBase() + 0x1A24750))(this, data);
	}
	template <typename R = void> R OnProductionWorkUpdated(ProductionWorkData* data) {
		return ((R (*)(ArenaClientWorld*, ProductionWorkData*))(Il2CppBase() + 0x1A247D8))(this, data);
	}
	template <typename R = void> R OnWorkerUniqueLookupUpdated(WorkerUniqueLookupData* data) {
		return ((R (*)(ArenaClientWorld*, WorkerUniqueLookupData*))(Il2CppBase() + 0x1A24908))(this, data);
	}
	template <typename R = void> R OnCreateLobby(LobbyEntity* lobbyEntity) {
		return ((R (*)(ArenaClientWorld*, LobbyEntity*))(Il2CppBase() + 0x1A24A18))(this, lobbyEntity);
	}
	template <typename R = void> R OnAcceptLobbyReceive(AcceptLobbyData* data) {
		return ((R (*)(ArenaClientWorld*, AcceptLobbyData*))(Il2CppBase() + 0x1A24BC0))(this, data);
	}
	template <typename R = void> R OnFindPlayersLobby(FindPlayersLobbyData* data) {
		return ((R (*)(ArenaClientWorld*, FindPlayersLobbyData*))(Il2CppBase() + 0x1A24E44))(this, data);
	}
	template <typename R = void> R OnCycleResponse(CyclicResponseData* data) {
		return ((R (*)(ArenaClientWorld*, CyclicResponseData*))(Il2CppBase() + 0x1A24E48))(this, data);
	}
	template <typename R = void> R OnExtractWork(ExtractWorkData* data) {
		return ((R (*)(ArenaClientWorld*, ExtractWorkData*))(Il2CppBase() + 0x1A24E4C))(this, data);
	}

};

