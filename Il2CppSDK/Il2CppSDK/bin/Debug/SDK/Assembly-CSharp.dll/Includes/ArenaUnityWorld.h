#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ArenaClientWorld.h" 

class ArenaUnityWorld : public ArenaClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaUnityWorld"));
	}

	template <typename R = EffectContext*> R& effect() {
		return *(R*)((uintptr_t)this + 0x2E0);
	}
	template <typename R = uintptr_t> R& ViewContainer() {
		return *(R*)((uintptr_t)this + 0x2E8);
	}
	template <typename R = UIWindowsManager*> R& WindowsManager() {
		return *(R*)((uintptr_t)this + 0x2F0);
	}
	template <typename R = Il2CppArray<GameEntity*>*> R& _quadLeaveGrids() {
		return *(R*)((uintptr_t)this + 0x2F8);
	}
	template <typename R = RoofsAndWalls*> R& _roofsAndWalls() {
		return *(R*)((uintptr_t)this + 0x300);
	}
	template <typename R = AutoModeSystem*> R& AutoModeSystem() {
		return *(R*)((uintptr_t)this + 0x308);
	}
	template <typename R = FogOfWar*> R& FogOfWar() {
		return *(R*)((uintptr_t)this + 0x310);
	}
	 Queue1<Coord>*& _fowStartPoints() {
		return *(Queue1<Coord>**)((uintptr_t)this + 0x318);
	}
	template <typename R = int32_t> R& LastShowQuadId() {
		return *(R*)((uintptr_t)this + 0x320);
	}

	template <typename R = EffectContext*> R get_effect() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF48038))(this);
	}
	template <typename R = void> R set_effect(EffectContext* value) {
		return ((R (*)(ArenaUnityWorld*, EffectContext*))(Il2CppBase() + 0xF48040))(this, value);
	}
	template <typename R = void> R CreateContexts() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF48050))(this);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R get_allContexts() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF480E4))(this);
	}
	template <typename R = uintptr_t> R get_ViewContainer() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF481E4))(this);
	}
	template <typename R = void> R set_ViewContainer(uintptr_t value) {
		return ((R (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF481EC))(this, value);
	}
	template <typename R = UIWindowsManager*> R get_WindowsManager() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF481FC))(this);
	}
	template <typename R = void> R set_WindowsManager(UIWindowsManager* value) {
		return ((R (*)(ArenaUnityWorld*, UIWindowsManager*))(Il2CppBase() + 0xF48204))(this, value);
	}
	template <typename R = AutoModeSystem*> R get_AutoModeSystem() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF48214))(this);
	}
	template <typename R = void> R set_AutoModeSystem(AutoModeSystem* value) {
		return ((R (*)(ArenaUnityWorld*, AutoModeSystem*))(Il2CppBase() + 0xF4821C))(this, value);
	}
	template <typename R = FogOfWar*> R get_FogOfWar() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4822C))(this);
	}
	template <typename R = void> R set_FogOfWar(FogOfWar* value) {
		return ((R (*)(ArenaUnityWorld*, FogOfWar*))(Il2CppBase() + 0xF48234))(this, value);
	}
	template <typename R = void> R AddSystems() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4838C))(this);
	}
	template <typename R = GameEntity*> R CreateEntity(Il2CppString* name, EntityBlueprint* blueprint) {
		return ((R (*)(ArenaUnityWorld*, Il2CppString*, EntityBlueprint*))(Il2CppBase() + 0xF4957C))(this, name, blueprint);
	}
	template <typename R = void> R SetLeaveGridPosition(ClanEntity* clan) {
		return ((R (*)(ArenaUnityWorld*, ClanEntity*))(Il2CppBase() + 0xF495AC))(this, clan);
	}
	template <typename R = uintptr_t> R Create(Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((R (*)(ArenaUnityWorld*, Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0xF496D8))(this, blueprints);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4976C))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF49AFC))(this);
	}
	template <typename R = void> R OnCompleteTransaction(TransactionEntity* transaction) {
		return ((R (*)(ArenaUnityWorld*, TransactionEntity*))(Il2CppBase() + 0xF49C08))(this, transaction);
	}
	template <typename R = void> R OnActionCreated(ActionEntity* actionEntity) {
		return ((R (*)(ArenaUnityWorld*, ActionEntity*))(Il2CppBase() + 0xF49F1C))(this, actionEntity);
	}
	template <typename R = void> R OnGuildId(GuildIdData data) {
		return ((R (*)(ArenaUnityWorld*, GuildIdData))(Il2CppBase() + 0xF4A014))(this, data);
	}
	template <typename R = void> R OnBuildEntityResult(BuildEntityResultData data) {
		return ((R (*)(ArenaUnityWorld*, BuildEntityResultData))(Il2CppBase() + 0xF4A438))(this, data);
	}
	template <typename R = LocationEntity*> R OnLocation(LocationEntity* location) {
		return ((R (*)(ArenaUnityWorld*, LocationEntity*))(Il2CppBase() + 0xF4A458))(this, location);
	}
	template <typename R = GameEntity*> R OnFinalizeResult(FinalizeResultData data) {
		return ((R (*)(ArenaUnityWorld*, FinalizeResultData))(Il2CppBase() + 0xF4ABD8))(this, data);
	}
	template <typename R = MailEntity*> R OnMailMessage(MailEntity* mailEntity) {
		return ((R (*)(ArenaUnityWorld*, MailEntity*))(Il2CppBase() + 0xF4AD08))(this, mailEntity);
	}
	template <typename R = void> R OnMailMessageUpdated() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4AD5C))(this);
	}
	template <typename R = void> R OnClaimQuestResult(ClaimQuestData data) {
		return ((R (*)(ArenaUnityWorld*, ClaimQuestData))(Il2CppBase() + 0xF4ADA0))(this, data);
	}
	template <typename R = void> R OnNofityQuest(NotifyQuestData data) {
		return ((R (*)(ArenaUnityWorld*, NotifyQuestData))(Il2CppBase() + 0xF4ADB4))(this, data);
	}
	template <typename R = void> R OnCreateClan(ProtoTools::ErrorCodes error) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4AE68))(this, error);
	}
	template <typename R = void> R OnClanJoinRequestCallbackReceived(ProtoTools::ErrorCodes error) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4AEAC))(this, error);
	}
	template <typename R = void> R OnRemoveEntityCmd(RemoveEntityData data, uintptr_t peer) {
		return ((R (*)(ArenaUnityWorld*, RemoveEntityData, uintptr_t))(Il2CppBase() + 0xF4AFF4))(this, data, peer);
	}
	template <typename R = GameEntity*> R OnCreateAvatarCmd(CreateArenaAvatarEntityData data, uintptr_t peer) {
		return ((R (*)(ArenaUnityWorld*, CreateArenaAvatarEntityData, uintptr_t))(Il2CppBase() + 0xF4B3CC))(this, data, peer);
	}
	template <typename R = void> R ConnectToChat() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4B77C))(this);
	}
	template <typename R = GameEntity*> R OnSetHealthCommand(SetHealthData data, uintptr_t peer) {
		return ((R (*)(ArenaUnityWorld*, SetHealthData, uintptr_t))(Il2CppBase() + 0xF4B7B0))(this, data, peer);
	}
	template <typename R = void> R OnEffectCommand(EffectData data, uintptr_t peer) {
		return ((R (*)(ArenaUnityWorld*, EffectData, uintptr_t))(Il2CppBase() + 0xF4B7BC))(this, data, peer);
	}
	template <typename R = void> R OnChangeHealthCommand(ChangeHealthData data, uintptr_t peer) {
		return ((R (*)(ArenaUnityWorld*, ChangeHealthData, uintptr_t))(Il2CppBase() + 0xF4BB40))(this, data, peer);
	}
	template <typename R = void> R OnChestRewardEffectDataCommand(ChestRewardEffectData data, uintptr_t peer) {
		return ((R (*)(ArenaUnityWorld*, ChestRewardEffectData, uintptr_t))(Il2CppBase() + 0xF4BCC0))(this, data, peer);
	}
	template <typename R = void> R OnResourceChanged(ChangedResourceData data) {
		return ((R (*)(ArenaUnityWorld*, ChangedResourceData))(Il2CppBase() + 0xF4BE74))(this, data);
	}
	template <typename R = GameEntity*> R OnCreateEntityCmd(CreateEntityData data, uintptr_t peer) {
		return ((R (*)(ArenaUnityWorld*, CreateEntityData, uintptr_t))(Il2CppBase() + 0xF4C054))(this, data, peer);
	}
	template <typename R = void> R OnDeathTimeOut(int64_t value) {
		return ((R (*)(ArenaUnityWorld*, int64_t))(Il2CppBase() + 0xF4C708))(this, value);
	}
	template <typename R = GameEntity*> R OnMoveEntityCmd(PositionData data, uintptr_t peer) {
		return ((R (*)(ArenaUnityWorld*, PositionData, uintptr_t))(Il2CppBase() + 0xF4C784))(this, data, peer);
	}
	template <typename R = void> R OnHideEntityCmd(int32_t id) {
		return ((R (*)(ArenaUnityWorld*, int32_t))(Il2CppBase() + 0xF4C814))(this, id);
	}
	template <typename R = GameEntity*> R OnMoveBuildEntityCmd(MoveBuildEntityData data, uintptr_t peer) {
		return ((R (*)(ArenaUnityWorld*, MoveBuildEntityData, uintptr_t))(Il2CppBase() + 0xF4C888))(this, data, peer);
	}
	template <typename R = GameEntity*> R OnPlayerKillMode(PlayerKillData data) {
		return ((R (*)(ArenaUnityWorld*, PlayerKillData))(Il2CppBase() + 0xF4C9DC))(this, data);
	}
	template <typename R = void> R OnMinimapPing(MinimapPingData data) {
		return ((R (*)(ArenaUnityWorld*, MinimapPingData))(Il2CppBase() + 0xF4CC1C))(this, data);
	}
	template <typename R = void> R OnDonationResult(DonationResult data) {
		return ((R (*)(ArenaUnityWorld*, DonationResult))(Il2CppBase() + 0xF4CEB4))(this, data);
	}
	template <typename R = void> R OnExchangeResult(ExchangeResult data) {
		return ((R (*)(ArenaUnityWorld*, ExchangeResult))(Il2CppBase() + 0xF4CF2C))(this, data);
	}
	template <typename R = void> R OnOpenBossResult(BossOperationResultData data) {
		return ((R (*)(ArenaUnityWorld*, BossOperationResultData))(Il2CppBase() + 0xF4CFBC))(this, data);
	}
	template <typename R = void> R OnBossOpenState(BossOpenStateData data) {
		return ((R (*)(ArenaUnityWorld*, BossOpenStateData))(Il2CppBase() + 0xF4CFD0))(this, data);
	}
	template <typename R = void> R OnWavesEventStatus(WavesEventStatusData data) {
		return ((R (*)(ArenaUnityWorld*, WavesEventStatusData))(Il2CppBase() + 0xF4D08C))(this, data);
	}
	template <typename R = void> R ShowSound(ActionEntity* action) {
		return ((R (*)(ArenaUnityWorld*, ActionEntity*))(Il2CppBase() + 0xF4D18C))(this, action);
	}
	template <typename R = bool> R OnQuadFill(QuadFillData data) {
		return ((R (*)(ArenaUnityWorld*, QuadFillData))(Il2CppBase() + 0xF4D6B0))(this, data);
	}
	template <typename R = void> R OnExplode(ExplodeData data) {
		return ((R (*)(ArenaUnityWorld*, ExplodeData))(Il2CppBase() + 0xF4D6B8))(this, data);
	}
	template <typename R = bool> R OnServerWarningMessage(WarningDataForClient data) {
		return ((R (*)(ArenaUnityWorld*, WarningDataForClient))(Il2CppBase() + 0xF4D804))(this, data);
	}
	template <typename R = void> R OnRemoveTool(RemoveToolData data) {
		return ((R (*)(ArenaUnityWorld*, RemoveToolData))(Il2CppBase() + 0xF4DA5C))(this, data);
	}
	template <typename R = void> R OnAccountReceived(AccountEntity* account) {
		return ((R (*)(ArenaUnityWorld*, AccountEntity*))(Il2CppBase() + 0xF4DC14))(this, account);
	}
	template <typename R = void> R OnUpdateStoreReceived() {
		return ((R (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4E01C))(this);
	}
	template <typename R = void> R OnFindUserForInviteCallback(ProtoTools::ErrorCodes code, int64_t playerId) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes, int64_t))(Il2CppBase() + 0xF4E06C))(this, code, playerId);
	}
	template <typename R = void> R OnReceiveRandomInvitablePlayers(Il2CppArray<int64_t>* ids) {
		return ((R (*)(ArenaUnityWorld*, Il2CppArray<int64_t>*))(Il2CppBase() + 0xF4E0C4))(this, ids);
	}
	template <typename R = void> R OnFindGuildForInviteResponse(ProtoTools::ErrorCodes errorCode, int64_t guildId) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes, int64_t))(Il2CppBase() + 0xF4E0F8))(this, errorCode, guildId);
	}
	template <typename R = void> R OnGuildKickUserResponse(ProtoTools::ErrorCodes code, int64_t guildId) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes, int64_t))(Il2CppBase() + 0xF4E13C))(this, code, guildId);
	}
	template <typename R = void> R OnGuildChangeUserRoleResponse(ProtoTools::ErrorCodes code) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4E170))(this, code);
	}
	template <typename R = void> R OnCreateGuildResponse(ProtoTools::ErrorCodes code) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4E1A4))(this, code);
	}
	template <typename R = void> R OnUpdateGuildResponse(ProtoTools::ErrorCodes code) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4E1D8))(this, code);
	}
	template <typename R = void> R OnGuildAcceptInviteResponse(ProtoTools::ErrorCodes code) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4E20C))(this, code);
	}
	template <typename R = void> R OnGuildDeleteInviteResponse(ProtoTools::ErrorCodes code) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4E240))(this, code);
	}
	template <typename R = void> R OnGuildCreateInviteResponse(ProtoTools::ErrorCodes code) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4E274))(this, code);
	}
	template <typename R = void> R OnGuildJoinResponse(ProtoTools::ErrorCodes code) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4ECF4))(this, code);
	}
	template <typename R = void> R OnReceiveInviteToClanCallback(ProtoTools::ErrorCodes code, int64_t clanId) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes, int64_t))(Il2CppBase() + 0xF4F4C8))(this, code, clanId);
	}
	template <typename R = void> R OnRecommendedGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes code) {
		return ((R (*)(ArenaUnityWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4FCA4))(this, ids, code);
	}
	template <typename R = void> R OnMainTopGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes code) {
		return ((R (*)(ArenaUnityWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4FCE8))(this, ids, code);
	}
	template <typename R = void> R OnGlobalTopGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes code) {
		return ((R (*)(ArenaUnityWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4FD2C))(this, ids, code);
	}
	template <typename R = void> R OnMainPrevGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes code) {
		return ((R (*)(ArenaUnityWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4FD70))(this, ids, code);
	}
	template <typename R = void> R OnGlobalPrevGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes code) {
		return ((R (*)(ArenaUnityWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes))(Il2CppBase() + 0xF4FDB4))(this, ids, code);
	}
	template <typename R = GameEntity*> R OnUnlock(UnlockData data) {
		return ((R (*)(ArenaUnityWorld*, UnlockData))(Il2CppBase() + 0xF4FDF8))(this, data);
	}
	template <typename R = void> R OnOpenWindow(OpenWindowData data) {
		return ((R (*)(ArenaUnityWorld*, OpenWindowData))(Il2CppBase() + 0xF4FE4C))(this, data);
	}
	template <typename R = void> R OnFuseResult(FuseData data) {
		return ((R (*)(ArenaUnityWorld*, FuseData))(Il2CppBase() + 0xF50FD4))(this, data);
	}
	template <typename R = void> R OnStartGuildQuestResult(StartGuildQuestData* data) {
		return ((R (*)(ArenaUnityWorld*, StartGuildQuestData*))(Il2CppBase() + 0xF51050))(this, data);
	}
	template <typename R = void> R OnStartGuildQuestResponse(ProtoTools::ErrorCodes errorCode, int64_t guildQuestId) {
		return ((R (*)(ArenaUnityWorld*, ProtoTools::ErrorCodes, int64_t))(Il2CppBase() + 0xF51228))(this, errorCode, guildQuestId);
	}
	template <typename R = void> R OnBuyDailyItemResult(BuyDailyItemData data) {
		return ((R (*)(ArenaUnityWorld*, BuyDailyItemData))(Il2CppBase() + 0xF513F8))(this, data);
	}
	template <typename R = void> R OnScoutingResult(ScoutingData data) {
		return ((R (*)(ArenaUnityWorld*, ScoutingData))(Il2CppBase() + 0xF51438))(this, data);
	}
	template <typename R = GameEntity*> R OnPlayerName(PlayerNameData data) {
		return ((R (*)(ArenaUnityWorld*, PlayerNameData))(Il2CppBase() + 0xF51478))(this, data);
	}
	template <typename R = void> R OnLevelUp(LevelUpData data) {
		return ((R (*)(ArenaUnityWorld*, LevelUpData))(Il2CppBase() + 0xF515C4))(this, data);
	}
	template <typename R = void> R OnPetSlotChangedDurability(InventorySlotEntity* slot, float oldValue, float newValue) {
		return ((R (*)(ArenaUnityWorld*, InventorySlotEntity*, float, float))(Il2CppBase() + 0xF51B3C))(this, slot, oldValue, newValue);
	}
	template <typename R = void> R OnPickupCmd(PickupData data) {
		return ((R (*)(ArenaUnityWorld*, PickupData))(Il2CppBase() + 0xF51C90))(this, data);
	}
	template <typename R = void> R OnTournamentPointsNotificationCmd(TournamentPointsNotificationData data) {
		return ((R (*)(ArenaUnityWorld*, TournamentPointsNotificationData))(Il2CppBase() + 0xF51CE8))(this, data);
	}
	template <typename R = void> R OnStoreExperienceNotificationCmd(StoreExperienceNotificationData data) {
		return ((R (*)(ArenaUnityWorld*, StoreExperienceNotificationData))(Il2CppBase() + 0xF51D20))(this, data);
	}
	template <typename R = void> R OnActorDeath(ActorDeathData data) {
		return ((R (*)(ArenaUnityWorld*, ActorDeathData))(Il2CppBase() + 0xF51D64))(this, data);
	}
	template <typename R = void> R OnExperience(ExperienceData data) {
		return ((R (*)(ArenaUnityWorld*, ExperienceData))(Il2CppBase() + 0xF52038))(this, data);
	}
	template <typename R = GameEntity*> R OnTeleport(TeleportData data) {
		return ((R (*)(ArenaUnityWorld*, TeleportData))(Il2CppBase() + 0xF52160))(this, data);
	}
	template <typename R = void> R OnFuseMountResult(FuseMountResultData data) {
		return ((R (*)(ArenaUnityWorld*, FuseMountResultData))(Il2CppBase() + 0xF524A0))(this, data);
	}
	template <typename R = void> R OnRollChestRewardResponse(RollChestRewardResponse data) {
		return ((R (*)(ArenaUnityWorld*, RollChestRewardResponse))(Il2CppBase() + 0xF52554))(this, data);
	}
	template <typename R = void> R OnCreateLobby(LobbyEntity* lobbyEntity) {
		return ((R (*)(ArenaUnityWorld*, LobbyEntity*))(Il2CppBase() + 0xF52598))(this, lobbyEntity);
	}
	template <typename R = void> R OnFindPlayersLobby(FindPlayersLobbyData data) {
		return ((R (*)(ArenaUnityWorld*, FindPlayersLobbyData))(Il2CppBase() + 0xF52604))(this, data);
	}
	template <typename R = void> R OnGradeUpPetSkillResult(GradeUpPetSkillDataResult data) {
		return ((R (*)(ArenaUnityWorld*, GradeUpPetSkillDataResult))(Il2CppBase() + 0xF528DC))(this, data);
	}
	template <typename R = void> R OnCycleResponse(CyclicResponseData data) {
		return ((R (*)(ArenaUnityWorld*, CyclicResponseData))(Il2CppBase() + 0xF52A18))(this, data);
	}
	template <typename R = uintptr_t> R n__0(Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((R (*)(ArenaUnityWorld*, Il2CppList<KeyValuePair2<Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0xF52BD8))(this, blueprints);
	}
	template <typename R = void> R OnClanJoinRequestCallbackReceivedb__44_0(IUIWindow* w) {
		return ((R (*)(ArenaUnityWorld*, IUIWindow*))(Il2CppBase() + 0xF52BE0))(this, w);
	}

};

