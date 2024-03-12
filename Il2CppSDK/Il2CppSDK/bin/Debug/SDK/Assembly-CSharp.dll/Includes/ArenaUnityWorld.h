#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ArenaClientWorld" 

class ArenaUnityWorld: ArenaClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaUnityWorld"));
	}

	template <typename T = uintptr_t> T& effect() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& ViewContainer() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& WindowsManager() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _quadLeaveGrids() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& _roofsAndWalls() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& AutoModeSystem() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& FogOfWar() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = void*> T& _fowStartPoints() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = int32_t> T& LastShowQuadId() {
		return *(T*)((uintptr_t)this + 0x320);
	}

	template <typename T = uintptr_t> T get_effect() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF48038))(this);
	}
	template <typename T = void> T set_effect(uintptr_t value) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF48040))(this, value);
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
	template <typename T = uintptr_t> T get_WindowsManager() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF481FC))(this);
	}
	template <typename T = void> T set_WindowsManager(uintptr_t value) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF48204))(this, value);
	}
	template <typename T = uintptr_t> T get_AutoModeSystem() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF48214))(this);
	}
	template <typename T = void> T set_AutoModeSystem(uintptr_t value) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4821C))(this, value);
	}
	template <typename T = uintptr_t> T get_FogOfWar() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4822C))(this);
	}
	template <typename T = void> T set_FogOfWar(uintptr_t value) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF48234))(this, value);
	}
	template <typename T = void> T AddSystems() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4838C))(this);
	}
	template <typename T = uintptr_t> T CreateEntity(Il2CppString* name, uintptr_t blueprint) {
		return ((T (*)(ArenaUnityWorld*, Il2CppString*, uintptr_t))(Il2CppBase() + 0xF4957C))(this, name, blueprint);
	}
	template <typename T = void> T SetLeaveGridPosition(uintptr_t clan) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF495AC))(this, clan);
	}
	template <typename T = uintptr_t> T Create(Il2CppList<void*>* blueprints) {
		return ((T (*)(ArenaUnityWorld*, Il2CppList<void*>*))(Il2CppBase() + 0xF496D8))(this, blueprints);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4976C))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF49AFC))(this);
	}
	template <typename T = void> T OnCompleteTransaction(uintptr_t transaction) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF49C08))(this, transaction);
	}
	template <typename T = void> T OnActionCreated(uintptr_t actionEntity) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF49F1C))(this, actionEntity);
	}
	template <typename T = void> T OnGuildId(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4A014))(this, data);
	}
	template <typename T = void> T OnBuildEntityResult(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4A438))(this, data);
	}
	template <typename T = uintptr_t> T OnLocation(uintptr_t location) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4A458))(this, location);
	}
	template <typename T = uintptr_t> T OnFinalizeResult(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4ABD8))(this, data);
	}
	template <typename T = uintptr_t> T OnMailMessage(uintptr_t mailEntity) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4AD08))(this, mailEntity);
	}
	template <typename T = void> T OnMailMessageUpdated() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4AD5C))(this);
	}
	template <typename T = void> T OnClaimQuestResult(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4ADA0))(this, data);
	}
	template <typename T = void> T OnNofityQuest(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4ADB4))(this, data);
	}
	template <typename T = void> T OnCreateClan(uintptr_t error) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4AE68))(this, error);
	}
	template <typename T = void> T OnClanJoinRequestCallbackReceived(uintptr_t error) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4AEAC))(this, error);
	}
	template <typename T = void> T OnRemoveEntityCmd(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF4AFF4))(this, data, peer);
	}
	template <typename T = uintptr_t> T OnCreateAvatarCmd(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF4B3CC))(this, data, peer);
	}
	template <typename T = void> T ConnectToChat() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4B77C))(this);
	}
	template <typename T = uintptr_t> T OnSetHealthCommand(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF4B7B0))(this, data, peer);
	}
	template <typename T = void> T OnEffectCommand(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF4B7BC))(this, data, peer);
	}
	template <typename T = void> T OnChangeHealthCommand(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF4BB40))(this, data, peer);
	}
	template <typename T = void> T OnChestRewardEffectDataCommand(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF4BCC0))(this, data, peer);
	}
	template <typename T = void> T OnResourceChanged(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4BE74))(this, data);
	}
	template <typename T = uintptr_t> T OnCreateEntityCmd(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF4C054))(this, data, peer);
	}
	template <typename T = void> T OnDeathTimeOut(int64_t value) {
		return ((T (*)(ArenaUnityWorld*, int64_t))(Il2CppBase() + 0xF4C708))(this, value);
	}
	template <typename T = uintptr_t> T OnMoveEntityCmd(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF4C784))(this, data, peer);
	}
	template <typename T = void> T OnHideEntityCmd(int32_t id) {
		return ((T (*)(ArenaUnityWorld*, int32_t))(Il2CppBase() + 0xF4C814))(this, id);
	}
	template <typename T = uintptr_t> T OnMoveBuildEntityCmd(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF4C888))(this, data, peer);
	}
	template <typename T = uintptr_t> T OnPlayerKillMode(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4C9DC))(this, data);
	}
	template <typename T = void> T OnMinimapPing(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4CC1C))(this, data);
	}
	template <typename T = void> T OnDonationResult(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4CEB4))(this, data);
	}
	template <typename T = void> T OnExchangeResult(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4CF2C))(this, data);
	}
	template <typename T = void> T OnOpenBossResult(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4CFBC))(this, data);
	}
	template <typename T = void> T OnBossOpenState(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4CFD0))(this, data);
	}
	template <typename T = void> T OnWavesEventStatus(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4D08C))(this, data);
	}
	template <typename T = void> T ShowSound(uintptr_t action) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4D18C))(this, action);
	}
	template <typename T = bool> T OnQuadFill(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4D6B0))(this, data);
	}
	template <typename T = void> T OnExplode(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4D6B8))(this, data);
	}
	template <typename T = bool> T OnServerWarningMessage(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4D804))(this, data);
	}
	template <typename T = void> T OnRemoveTool(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4DA5C))(this, data);
	}
	template <typename T = void> T OnAccountReceived(uintptr_t account) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4DC14))(this, account);
	}
	template <typename T = void> T OnUpdateStoreReceived() {
		return ((T (*)(ArenaUnityWorld*))(Il2CppBase() + 0xF4E01C))(this);
	}
	template <typename T = void> T OnFindUserForInviteCallback(uintptr_t code, int64_t playerId) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, int64_t))(Il2CppBase() + 0xF4E06C))(this, code, playerId);
	}
	template <typename T = void> T OnReceiveRandomInvitablePlayers(Il2CppArray<uintptr_t>* ids) {
		return ((T (*)(ArenaUnityWorld*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF4E0C4))(this, ids);
	}
	template <typename T = void> T OnFindGuildForInviteResponse(uintptr_t errorCode, int64_t guildId) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, int64_t))(Il2CppBase() + 0xF4E0F8))(this, errorCode, guildId);
	}
	template <typename T = void> T OnGuildKickUserResponse(uintptr_t code, int64_t guildId) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, int64_t))(Il2CppBase() + 0xF4E13C))(this, code, guildId);
	}
	template <typename T = void> T OnGuildChangeUserRoleResponse(uintptr_t code) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4E170))(this, code);
	}
	template <typename T = void> T OnCreateGuildResponse(uintptr_t code) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4E1A4))(this, code);
	}
	template <typename T = void> T OnUpdateGuildResponse(uintptr_t code) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4E1D8))(this, code);
	}
	template <typename T = void> T OnGuildAcceptInviteResponse(uintptr_t code) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4E20C))(this, code);
	}
	template <typename T = void> T OnGuildDeleteInviteResponse(uintptr_t code) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4E240))(this, code);
	}
	template <typename T = void> T OnGuildCreateInviteResponse(uintptr_t code) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4E274))(this, code);
	}
	template <typename T = void> T OnGuildJoinResponse(uintptr_t code) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4ECF4))(this, code);
	}
	template <typename T = void> T OnReceiveInviteToClanCallback(uintptr_t code, int64_t clanId) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, int64_t))(Il2CppBase() + 0xF4F4C8))(this, code, clanId);
	}
	template <typename T = void> T OnRecommendedGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(ArenaUnityWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0xF4FCA4))(this, ids, code);
	}
	template <typename T = void> T OnMainTopGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(ArenaUnityWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0xF4FCE8))(this, ids, code);
	}
	template <typename T = void> T OnGlobalTopGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(ArenaUnityWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0xF4FD2C))(this, ids, code);
	}
	template <typename T = void> T OnMainPrevGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(ArenaUnityWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0xF4FD70))(this, ids, code);
	}
	template <typename T = void> T OnGlobalPrevGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(ArenaUnityWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0xF4FDB4))(this, ids, code);
	}
	template <typename T = uintptr_t> T OnUnlock(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4FDF8))(this, data);
	}
	template <typename T = void> T OnOpenWindow(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF4FE4C))(this, data);
	}
	template <typename T = void> T OnFuseResult(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF50FD4))(this, data);
	}
	template <typename T = void> T OnStartGuildQuestResult(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF51050))(this, data);
	}
	template <typename T = void> T OnStartGuildQuestResponse(uintptr_t errorCode, int64_t guildQuestId) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, int64_t))(Il2CppBase() + 0xF51228))(this, errorCode, guildQuestId);
	}
	template <typename T = void> T OnBuyDailyItemResult(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF513F8))(this, data);
	}
	template <typename T = void> T OnScoutingResult(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF51438))(this, data);
	}
	template <typename T = uintptr_t> T OnPlayerName(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF51478))(this, data);
	}
	template <typename T = void> T OnLevelUp(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF515C4))(this, data);
	}
	template <typename T = void> T OnPetSlotChangedDurability(uintptr_t slot, float oldValue, float newValue) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t, float, float))(Il2CppBase() + 0xF51B3C))(this, slot, oldValue, newValue);
	}
	template <typename T = void> T OnPickupCmd(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF51C90))(this, data);
	}
	template <typename T = void> T OnTournamentPointsNotificationCmd(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF51CE8))(this, data);
	}
	template <typename T = void> T OnStoreExperienceNotificationCmd(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF51D20))(this, data);
	}
	template <typename T = void> T OnActorDeath(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF51D64))(this, data);
	}
	template <typename T = void> T OnExperience(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF52038))(this, data);
	}
	template <typename T = uintptr_t> T OnTeleport(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF52160))(this, data);
	}
	template <typename T = void> T OnFuseMountResult(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF524A0))(this, data);
	}
	template <typename T = void> T OnRollChestRewardResponse(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF52554))(this, data);
	}
	template <typename T = void> T OnCreateLobby(uintptr_t lobbyEntity) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF52598))(this, lobbyEntity);
	}
	template <typename T = void> T OnFindPlayersLobby(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF52604))(this, data);
	}
	template <typename T = void> T OnGradeUpPetSkillResult(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF528DC))(this, data);
	}
	template <typename T = void> T OnCycleResponse(uintptr_t data) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF52A18))(this, data);
	}
	template <typename T = uintptr_t> T n__0(Il2CppList<void*>* blueprints) {
		return ((T (*)(ArenaUnityWorld*, Il2CppList<void*>*))(Il2CppBase() + 0xF52BD8))(this, blueprints);
	}
	template <typename T = void> T OnClanJoinRequestCallbackReceivedb__44_0(uintptr_t w) {
		return ((T (*)(ArenaUnityWorld*, uintptr_t))(Il2CppBase() + 0xF52BE0))(this, w);
	}

};

}
