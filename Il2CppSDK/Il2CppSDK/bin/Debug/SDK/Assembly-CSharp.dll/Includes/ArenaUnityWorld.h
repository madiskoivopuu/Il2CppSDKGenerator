#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ArenaClientWorld.h" 

class ArenaUnityWorld : public ArenaClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaUnityWorld"));
	}

	template <typename T = EffectContext*> T& effect() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& ViewContainer() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = UIWindowsManager*> T& WindowsManager() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _quadLeaveGrids() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = RoofsAndWalls*> T& _roofsAndWalls() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = AutoModeSystem*> T& AutoModeSystem() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = FogOfWar*> T& FogOfWar() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = Queue1Coord*>*> T& _fowStartPoints() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = int32_t> T& LastShowQuadId() {
		return *(T*)((uintptr_t)this + 0x320);
	}

	template <typename T = EffectContext*> T get_effect() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF48038))(this);
	}
	template <typename T = void> T set_effect(EffectContext* value) {
		return ((T (*)(ArenaUnityWorld*, EffectContext*))(Il2CppBase() + 0xF48040))(this, value);
	}
	template <typename T = void> T CreateContexts() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF48050))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_allContexts() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF480E4))(this);
	}
	template <typename T = uintptr_t> T get_ViewContainer() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF481E4))(this);
	}
	template <typename T = void> T set_ViewContainer(uintptr_t value) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF481EC))(this, value);
	}
	template <typename T = UIWindowsManager*> T get_WindowsManager() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF481FC))(this);
	}
	template <typename T = void> T set_WindowsManager(UIWindowsManager* value) {
		return ((T (*)(ArenaUnityWorld*, UIWindowsManager*))(Il2CppBase() + 0xF48204))(this, value);
	}
	template <typename T = AutoModeSystem*> T get_AutoModeSystem() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF48214))(this);
	}
	template <typename T = void> T set_AutoModeSystem(AutoModeSystem* value) {
		return ((T (*)(ArenaUnityWorld*, AutoModeSystem*))(Il2CppBase() + 0xF4821C))(this, value);
	}
	template <typename T = FogOfWar*> T get_FogOfWar() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4822C))(this);
	}
	template <typename T = void> T set_FogOfWar(FogOfWar* value) {
		return ((T (*)(ArenaUnityWorld*, FogOfWar*))(Il2CppBase() + 0xF48234))(this, value);
	}
	template <typename T = void> T AddSystems() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4838C))(this);
	}
	template <typename T = GameEntity*> T CreateEntity(Il2CppString* name, EntityBlueprint* blueprint) {
		return ((T (*)(ArenaUnityWorld*, Il2CppString*, EntityBlueprint*))(Il2CppBase() + 0xF4957C))(this, name, blueprint);
	}
	template <typename T = void> T SetLeaveGridPosition(ClanEntity* clan) {
		return ((T (*)(ArenaUnityWorld*, ClanEntity*))(Il2CppBase() + 0xF495AC))(this, clan);
	}
	template <typename T = uintptr_t> T Create(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((T (*)(ArenaUnityWorld*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0xF496D8))(this, blueprints);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4976C))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF49AFC))(this);
	}
	template <typename T = void> T OnCompleteTransaction(TransactionEntity* transaction) {
		return ((T (*)(ArenaUnityWorld*, TransactionEntity*))(Il2CppBase() + 0xF49C08))(this, transaction);
	}
	template <typename T = void> T OnActionCreated(ActionEntity* actionEntity) {
		return ((T (*)(ArenaUnityWorld*, ActionEntity*))(Il2CppBase() + 0xF49F1C))(this, actionEntity);
	}
	template <typename T = void> T OnGuildId(GuildIdData* data) {
		return ((T (*)(ArenaUnityWorld*, GuildIdData*))(Il2CppBase() + 0xF4A014))(this, data);
	}
	template <typename T = void> T OnBuildEntityResult(BuildEntityResultData* data) {
		return ((T (*)(ArenaUnityWorld*, BuildEntityResultData*))(Il2CppBase() + 0xF4A438))(this, data);
	}
	template <typename T = LocationEntity*> T OnLocation(LocationEntity* location) {
		return ((T (*)(ArenaUnityWorld*, LocationEntity*))(Il2CppBase() + 0xF4A458))(this, location);
	}
	template <typename T = GameEntity*> T OnFinalizeResult(FinalizeResultData* data) {
		return ((T (*)(ArenaUnityWorld*, FinalizeResultData*))(Il2CppBase() + 0xF4ABD8))(this, data);
	}
	template <typename T = MailEntity*> T OnMailMessage(MailEntity* mailEntity) {
		return ((T (*)(ArenaUnityWorld*, MailEntity*))(Il2CppBase() + 0xF4AD08))(this, mailEntity);
	}
	template <typename T = void> T OnMailMessageUpdated() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4AD5C))(this);
	}
	template <typename T = void> T OnClaimQuestResult(ClaimQuestData* data) {
		return ((T (*)(ArenaUnityWorld*, ClaimQuestData*))(Il2CppBase() + 0xF4ADA0))(this, data);
	}
	template <typename T = void> T OnNofityQuest(NotifyQuestData* data) {
		return ((T (*)(ArenaUnityWorld*, NotifyQuestData*))(Il2CppBase() + 0xF4ADB4))(this, data);
	}
	template <typename T = void> T OnCreateClan(ErrorCodes* error) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*))(Il2CppBase() + 0xF4AE68))(this, error);
	}
	template <typename T = void> T OnClanJoinRequestCallbackReceived(ErrorCodes* error) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*))(Il2CppBase() + 0xF4AEAC))(this, error);
	}
	template <typename T = void> T OnRemoveEntityCmd(RemoveEntityData* data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, RemoveEntityData*, uintptr_t))(Il2CppBase() + 0xF4AFF4))(this, data, peer);
	}
	template <typename T = GameEntity*> T OnCreateAvatarCmd(CreateArenaAvatarEntityData* data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, CreateArenaAvatarEntityData*, uintptr_t))(Il2CppBase() + 0xF4B3CC))(this, data, peer);
	}
	template <typename T = void> T ConnectToChat() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4B77C))(this);
	}
	template <typename T = GameEntity*> T OnSetHealthCommand(SetHealthData* data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, SetHealthData*, uintptr_t))(Il2CppBase() + 0xF4B7B0))(this, data, peer);
	}
	template <typename T = void> T OnEffectCommand(EffectData* data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, EffectData*, uintptr_t))(Il2CppBase() + 0xF4B7BC))(this, data, peer);
	}
	template <typename T = void> T OnChangeHealthCommand(ChangeHealthData* data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, ChangeHealthData*, uintptr_t))(Il2CppBase() + 0xF4BB40))(this, data, peer);
	}
	template <typename T = void> T OnChestRewardEffectDataCommand(ChestRewardEffectData* data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, ChestRewardEffectData*, uintptr_t))(Il2CppBase() + 0xF4BCC0))(this, data, peer);
	}
	template <typename T = void> T OnResourceChanged(ChangedResourceData* data) {
		return ((T (*)(ArenaUnityWorld*, ChangedResourceData*))(Il2CppBase() + 0xF4BE74))(this, data);
	}
	template <typename T = GameEntity*> T OnCreateEntityCmd(CreateEntityData* data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, CreateEntityData*, uintptr_t))(Il2CppBase() + 0xF4C054))(this, data, peer);
	}
	template <typename T = void> T OnDeathTimeOut(int64_t value) {
		return ((T (*)(ArenaUnityWorld*, int64_t))(Il2CppBase() + 0xF4C708))(this, value);
	}
	template <typename T = GameEntity*> T OnMoveEntityCmd(PositionData* data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, PositionData*, uintptr_t))(Il2CppBase() + 0xF4C784))(this, data, peer);
	}
	template <typename T = void> T OnHideEntityCmd(int32_t id) {
		return ((T (*)(ArenaUnityWorld*, int32_t))(Il2CppBase() + 0xF4C814))(this, id);
	}
	template <typename T = GameEntity*> T OnMoveBuildEntityCmd(MoveBuildEntityData* data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, MoveBuildEntityData*, uintptr_t))(Il2CppBase() + 0xF4C888))(this, data, peer);
	}
	template <typename T = GameEntity*> T OnPlayerKillMode(PlayerKillData* data) {
		return ((T (*)(ArenaUnityWorld*, PlayerKillData*))(Il2CppBase() + 0xF4C9DC))(this, data);
	}
	template <typename T = void> T OnMinimapPing(MinimapPingData* data) {
		return ((T (*)(ArenaUnityWorld*, MinimapPingData*))(Il2CppBase() + 0xF4CC1C))(this, data);
	}
	template <typename T = void> T OnDonationResult(DonationResult* data) {
		return ((T (*)(ArenaUnityWorld*, DonationResult*))(Il2CppBase() + 0xF4CEB4))(this, data);
	}
	template <typename T = void> T OnExchangeResult(ExchangeResult* data) {
		return ((T (*)(ArenaUnityWorld*, ExchangeResult*))(Il2CppBase() + 0xF4CF2C))(this, data);
	}
	template <typename T = void> T OnOpenBossResult(BossOperationResultData* data) {
		return ((T (*)(ArenaUnityWorld*, BossOperationResultData*))(Il2CppBase() + 0xF4CFBC))(this, data);
	}
	template <typename T = void> T OnBossOpenState(BossOpenStateData* data) {
		return ((T (*)(ArenaUnityWorld*, BossOpenStateData*))(Il2CppBase() + 0xF4CFD0))(this, data);
	}
	template <typename T = void> T OnWavesEventStatus(WavesEventStatusData* data) {
		return ((T (*)(ArenaUnityWorld*, WavesEventStatusData*))(Il2CppBase() + 0xF4D08C))(this, data);
	}
	template <typename T = void> T ShowSound(ActionEntity* action) {
		return ((T (*)(ArenaUnityWorld*, ActionEntity*))(Il2CppBase() + 0xF4D18C))(this, action);
	}
	template <typename T = bool> T OnQuadFill(QuadFillData* data) {
		return ((T (*)(ArenaUnityWorld*, QuadFillData*))(Il2CppBase() + 0xF4D6B0))(this, data);
	}
	template <typename T = void> T OnExplode(ExplodeData* data) {
		return ((T (*)(ArenaUnityWorld*, ExplodeData*))(Il2CppBase() + 0xF4D6B8))(this, data);
	}
	template <typename T = bool> T OnServerWarningMessage(WarningDataForClient* data) {
		return ((T (*)(ArenaUnityWorld*, WarningDataForClient*))(Il2CppBase() + 0xF4D804))(this, data);
	}
	template <typename T = void> T OnRemoveTool(RemoveToolData* data) {
		return ((T (*)(ArenaUnityWorld*, RemoveToolData*))(Il2CppBase() + 0xF4DA5C))(this, data);
	}
	template <typename T = void> T OnAccountReceived(AccountEntity* account) {
		return ((T (*)(ArenaUnityWorld*, AccountEntity*))(Il2CppBase() + 0xF4DC14))(this, account);
	}
	template <typename T = void> T OnUpdateStoreReceived() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4E01C))(this);
	}
	template <typename T = void> T OnFindUserForInviteCallback(ErrorCodes* code, int64_t playerId) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0xF4E06C))(this, code, playerId);
	}
	template <typename T = void> T OnReceiveRandomInvitablePlayers(Il2CppArray<uintptr_t>* ids) {
		return ((T (*)(ArenaUnityWorld*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF4E0C4))(this, ids);
	}
	template <typename T = void> T OnFindGuildForInviteResponse(ErrorCodes* errorCode, int64_t guildId) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0xF4E0F8))(this, errorCode, guildId);
	}
	template <typename T = void> T OnGuildKickUserResponse(ErrorCodes* code, int64_t guildId) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0xF4E13C))(this, code, guildId);
	}
	template <typename T = void> T OnGuildChangeUserRoleResponse(ErrorCodes* code) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*))(Il2CppBase() + 0xF4E170))(this, code);
	}
	template <typename T = void> T OnCreateGuildResponse(ErrorCodes* code) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*))(Il2CppBase() + 0xF4E1A4))(this, code);
	}
	template <typename T = void> T OnUpdateGuildResponse(ErrorCodes* code) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*))(Il2CppBase() + 0xF4E1D8))(this, code);
	}
	template <typename T = void> T OnGuildAcceptInviteResponse(ErrorCodes* code) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*))(Il2CppBase() + 0xF4E20C))(this, code);
	}
	template <typename T = void> T OnGuildDeleteInviteResponse(ErrorCodes* code) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*))(Il2CppBase() + 0xF4E240))(this, code);
	}
	template <typename T = void> T OnGuildCreateInviteResponse(ErrorCodes* code) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*))(Il2CppBase() + 0xF4E274))(this, code);
	}
	template <typename T = void> T OnGuildJoinResponse(ErrorCodes* code) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*))(Il2CppBase() + 0xF4ECF4))(this, code);
	}
	template <typename T = void> T OnReceiveInviteToClanCallback(ErrorCodes* code, int64_t clanId) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0xF4F4C8))(this, code, clanId);
	}
	template <typename T = void> T OnRecommendedGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(ArenaUnityWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0xF4FCA4))(this, ids, code);
	}
	template <typename T = void> T OnMainTopGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(ArenaUnityWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0xF4FCE8))(this, ids, code);
	}
	template <typename T = void> T OnGlobalTopGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(ArenaUnityWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0xF4FD2C))(this, ids, code);
	}
	template <typename T = void> T OnMainPrevGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(ArenaUnityWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0xF4FD70))(this, ids, code);
	}
	template <typename T = void> T OnGlobalPrevGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(ArenaUnityWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0xF4FDB4))(this, ids, code);
	}
	template <typename T = GameEntity*> T OnUnlock(UnlockData* data) {
		return ((T (*)(ArenaUnityWorld*, UnlockData*))(Il2CppBase() + 0xF4FDF8))(this, data);
	}
	template <typename T = void> T OnOpenWindow(OpenWindowData* data) {
		return ((T (*)(ArenaUnityWorld*, OpenWindowData*))(Il2CppBase() + 0xF4FE4C))(this, data);
	}
	template <typename T = void> T OnFuseResult(FuseData* data) {
		return ((T (*)(ArenaUnityWorld*, FuseData*))(Il2CppBase() + 0xF50FD4))(this, data);
	}
	template <typename T = void> T OnStartGuildQuestResult(StartGuildQuestData* data) {
		return ((T (*)(ArenaUnityWorld*, StartGuildQuestData*))(Il2CppBase() + 0xF51050))(this, data);
	}
	template <typename T = void> T OnStartGuildQuestResponse(ErrorCodes* errorCode, int64_t guildQuestId) {
		return ((T (*)(ArenaUnityWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0xF51228))(this, errorCode, guildQuestId);
	}
	template <typename T = void> T OnBuyDailyItemResult(BuyDailyItemData* data) {
		return ((T (*)(ArenaUnityWorld*, BuyDailyItemData*))(Il2CppBase() + 0xF513F8))(this, data);
	}
	template <typename T = void> T OnScoutingResult(ScoutingData* data) {
		return ((T (*)(ArenaUnityWorld*, ScoutingData*))(Il2CppBase() + 0xF51438))(this, data);
	}
	template <typename T = GameEntity*> T OnPlayerName(PlayerNameData* data) {
		return ((T (*)(ArenaUnityWorld*, PlayerNameData*))(Il2CppBase() + 0xF51478))(this, data);
	}
	template <typename T = void> T OnLevelUp(LevelUpData* data) {
		return ((T (*)(ArenaUnityWorld*, LevelUpData*))(Il2CppBase() + 0xF515C4))(this, data);
	}
	template <typename T = void> T OnPetSlotChangedDurability(InventorySlotEntity* slot, float oldValue, float newValue) {
		return ((T (*)(ArenaUnityWorld*, InventorySlotEntity*, float, float))(Il2CppBase() + 0xF51B3C))(this, slot, oldValue, newValue);
	}
	template <typename T = void> T OnPickupCmd(PickupData* data) {
		return ((T (*)(ArenaUnityWorld*, PickupData*))(Il2CppBase() + 0xF51C90))(this, data);
	}
	template <typename T = void> T OnTournamentPointsNotificationCmd(TournamentPointsNotificationData* data) {
		return ((T (*)(ArenaUnityWorld*, TournamentPointsNotificationData*))(Il2CppBase() + 0xF51CE8))(this, data);
	}
	template <typename T = void> T OnStoreExperienceNotificationCmd(StoreExperienceNotificationData* data) {
		return ((T (*)(ArenaUnityWorld*, StoreExperienceNotificationData*))(Il2CppBase() + 0xF51D20))(this, data);
	}
	template <typename T = void> T OnActorDeath(ActorDeathData* data) {
		return ((T (*)(ArenaUnityWorld*, ActorDeathData*))(Il2CppBase() + 0xF51D64))(this, data);
	}
	template <typename T = void> T OnExperience(ExperienceData* data) {
		return ((T (*)(ArenaUnityWorld*, ExperienceData*))(Il2CppBase() + 0xF52038))(this, data);
	}
	template <typename T = GameEntity*> T OnTeleport(TeleportData* data) {
		return ((T (*)(ArenaUnityWorld*, TeleportData*))(Il2CppBase() + 0xF52160))(this, data);
	}
	template <typename T = void> T OnFuseMountResult(FuseMountResultData* data) {
		return ((T (*)(ArenaUnityWorld*, FuseMountResultData*))(Il2CppBase() + 0xF524A0))(this, data);
	}
	template <typename T = void> T OnRollChestRewardResponse(RollChestRewardResponse* data) {
		return ((T (*)(ArenaUnityWorld*, RollChestRewardResponse*))(Il2CppBase() + 0xF52554))(this, data);
	}
	template <typename T = void> T OnCreateLobby(LobbyEntity* lobbyEntity) {
		return ((T (*)(ArenaUnityWorld*, LobbyEntity*))(Il2CppBase() + 0xF52598))(this, lobbyEntity);
	}
	template <typename T = void> T OnFindPlayersLobby(FindPlayersLobbyData* data) {
		return ((T (*)(ArenaUnityWorld*, FindPlayersLobbyData*))(Il2CppBase() + 0xF52604))(this, data);
	}
	template <typename T = void> T OnGradeUpPetSkillResult(GradeUpPetSkillDataResult* data) {
		return ((T (*)(ArenaUnityWorld*, GradeUpPetSkillDataResult*))(Il2CppBase() + 0xF528DC))(this, data);
	}
	template <typename T = void> T OnCycleResponse(CyclicResponseData* data) {
		return ((T (*)(ArenaUnityWorld*, CyclicResponseData*))(Il2CppBase() + 0xF52A18))(this, data);
	}
	template <typename T = uintptr_t> T n__0(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((T (*)(ArenaUnityWorld*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0xF52BD8))(this, blueprints);
	}
	template <typename T = void> T OnClanJoinRequestCallbackReceivedb__44_0(IUIWindow* w) {
		return ((T (*)(ArenaUnityWorld*, IUIWindow*))(Il2CppBase() + 0xF52BE0))(this, w);
	}

};

