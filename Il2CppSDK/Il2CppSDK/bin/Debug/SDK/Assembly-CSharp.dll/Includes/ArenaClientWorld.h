#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseClientWorld" 

class ArenaClientWorld: BaseClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaClientWorld"));
	}

	template <typename T = uintptr_t> T& PlaceManager() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = uintptr_t> T& DoorsAndWalls() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = bool> T& IsActiveShield() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = void*> T& _vectorFieldEntities() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = bool> T& IsBot() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = void*> T& OnLeaveArene() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = void*> T& OnUpdateArming() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = void*> T& TakeAllResultEvent() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _arenaCommandsActions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& Ping() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}

	template <typename T = uintptr_t> T get_MainContext() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1EBA4))(this);
	}
	template <typename T = void*> T GetEntitiesWithPositionNear(float x, float y, float radius) {
		return ((T (*)(ArenaClientWorld*, float, float, float))(Il2CppBase() + 0x1A1EBAC))(this, x, y, radius);
	}
	template <typename T = void*> T GetTargetsWithPositionNear(float x, float y, float radius) {
		return ((T (*)(ArenaClientWorld*, float, float, float))(Il2CppBase() + 0x1A1EBF8))(this, x, y, radius);
	}
	template <typename T = void*> T GetObstaclesWithPositionNear(float x, float y, float radius) {
		return ((T (*)(ArenaClientWorld*, float, float, float))(Il2CppBase() + 0x1A1EC44))(this, x, y, radius);
	}
	template <typename T = uintptr_t> T get_WorldParams() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1EC90))(this);
	}
	template <typename T = uintptr_t> T get_PlaceManager() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1ECAC))(this);
	}
	template <typename T = void> T set_PlaceManager(uintptr_t value) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A1ECB4))(this, value);
	}
	template <typename T = uintptr_t> T get_DoorsAndWalls() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1ECC4))(this);
	}
	template <typename T = void> T set_DoorsAndWalls(uintptr_t value) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A1ECCC))(this, value);
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
	template <typename T = uintptr_t> T CreateEntity(Il2CppString* name, uintptr_t blueprint) {
		return ((T (*)(ArenaClientWorld*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1A1EF6C))(this, name, blueprint);
	}
	template <typename T = uintptr_t> T Create(Il2CppList<void*>* blueprints) {
		return ((T (*)(ArenaClientWorld*, Il2CppList<void*>*))(Il2CppBase() + 0x1A1F004))(this, blueprints);
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
	template <typename T = uintptr_t> T GetQuadOwner(int32_t quadId) {
		return ((T (*)(ArenaClientWorld*, int32_t))(Il2CppBase() + 0x1A1F27C))(this, quadId);
	}
	template <typename T = Il2CppString*> T GetUserName(int32_t quadId) {
		return ((T (*)(ArenaClientWorld*, int32_t))(Il2CppBase() + 0x1A1F2F0))(this, quadId);
	}
	template <typename T = uintptr_t> T GetAvatarExperience() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1F31C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A1F338))(this);
	}
	template <typename T = void> T add_OnUpdateArming(void* value) {
		return ((T (*)(ArenaClientWorld*, void*))(Il2CppBase() + 0x1A1F4E4))(this, value);
	}
	template <typename T = void> T remove_OnUpdateArming(void* value) {
		return ((T (*)(ArenaClientWorld*, void*))(Il2CppBase() + 0x1A1F588))(this, value);
	}
	template <typename T = void> T add_TakeAllResultEvent(void* value) {
		return ((T (*)(ArenaClientWorld*, void*))(Il2CppBase() + 0x1A1F62C))(this, value);
	}
	template <typename T = void> T remove_TakeAllResultEvent(void* value) {
		return ((T (*)(ArenaClientWorld*, void*))(Il2CppBase() + 0x1A1F6D0))(this, value);
	}
	template <typename T = void> T OnMaxHealthAndDmgCoef(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A21C2C))(this, data);
	}
	template <typename T = uintptr_t> T OnFinalizeResult(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A21E4C))(this, data);
	}
	template <typename T = void> T OnInventoryUpdate(uintptr_t data, int64_t updateTime) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, int64_t))(Il2CppBase() + 0x1A21E68))(this, data, updateTime);
	}
	template <typename T = bool> T OnCommand(uintptr_t commandId, uintptr_t reader, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A21EB0))(this, commandId, reader, peer);
	}
	template <typename T = uintptr_t> T OnPlayerKillMode(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A21FBC))(this, data);
	}
	template <typename T = void> T OnMinimapPing(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A2200C))(this, data);
	}
	template <typename T = void> T OnDonationResult(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A22010))(this, data);
	}
	template <typename T = void> T OnExchangeResult(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A22104))(this, data);
	}
	template <typename T = void> T OnOpenBossResult(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A221D0))(this, data);
	}
	template <typename T = void> T OnBossOpenState(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A222AC))(this, data);
	}
	template <typename T = void> T OnSetCurrency(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A22580))(this, data);
	}
	template <typename T = void> T OnWavesEventStatus(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A22654))(this, data);
	}
	template <typename T = void> T OnSetActive(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A22658))(this, data);
	}
	template <typename T = void> T OnRavenNestStats(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A226D0))(this, data);
	}
	template <typename T = void> T OnSetEndTime(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A2293C))(this, data);
	}
	template <typename T = void> T OnSetResetTime(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A229B8))(this, data);
	}
	template <typename T = void> T OnSetBattleState(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A22A34))(this, data);
	}
	template <typename T = void> T OnTakeAllResult(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A22AB4))(this, data);
	}
	template <typename T = void> T OnBuyDailyItemResult(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A22B2C))(this, data);
	}
	template <typename T = void> T OnLevelUp(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A22B30))(this, data);
	}
	template <typename T = uintptr_t> T OnCreateAvatarCmd(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A22B34))(this, data, peer);
	}
	template <typename T = void> T ConnectToChat() {
		return ((T (*)(ArenaClientWorld*))(Il2CppBase() + 0x1A22E64))(this);
	}
	template <typename T = void> T OnArming(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A22EEC))(this, data);
	}
	template <typename T = uintptr_t> T OnCreateEntityCmd(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A22FA0))(this, data, peer);
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
	template <typename T = uintptr_t> T OnMoveEntityCmd(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A23658))(this, data, peer);
	}
	template <typename T = void> T OnHideEntityCmd(int32_t id) {
		return ((T (*)(ArenaClientWorld*, int32_t))(Il2CppBase() + 0x1A2381C))(this, id);
	}
	template <typename T = uintptr_t> T OnMoveBuildEntityCmd(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A23820))(this, data, peer);
	}
	template <typename T = void> T OnAggroTargetCmd(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A23928))(this, data, peer);
	}
	template <typename T = void> T OnInteractTargetCmd(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A23A48))(this, data, peer);
	}
	template <typename T = uintptr_t> T OnSetHealthCommand(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A23B70))(this, data, peer);
	}
	template <typename T = uintptr_t> T OnSetTenacityCommand(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A23CE4))(this, data, peer);
	}
	template <typename T = void> T OnEffectCommand(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A23DF4))(this, data, peer);
	}
	template <typename T = void> T OnChangeHealthCommand(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A23DF8))(this, data, peer);
	}
	template <typename T = void> T OnChestRewardEffectDataCommand(uintptr_t data, uintptr_t peer) {
		return ((T (*)(ArenaClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A23DFC))(this, data, peer);
	}
	template <typename T = void> T OnPickupCmd(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A23E84))(this, data);
	}
	template <typename T = void> T OnTournamentPointsNotificationCmd(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A23E88))(this, data);
	}
	template <typename T = void> T OnStoreExperienceNotificationCmd(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A23F54))(this, data);
	}
	template <typename T = void> T OnCraftWork(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A24058))(this, data);
	}
	template <typename T = bool> T OnQuadFill(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A24174))(this, data);
	}
	template <typename T = void> T OnExplode(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A241B8))(this, data);
	}
	template <typename T = void> T OnRemoveTool(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A241BC))(this, data);
	}
	template <typename T = uintptr_t> T OnUnlock(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A2426C))(this, data);
	}
	template <typename T = void> T OnShare(int32_t targetId, bool isShared, bool cantSwitch) {
		return ((T (*)(ArenaClientWorld*, int32_t, bool, bool))(Il2CppBase() + 0x1A243E8))(this, targetId, isShared, cantSwitch);
	}
	template <typename T = void> T OnActorDeath(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A24438))(this, data);
	}
	template <typename T = void> T OnChangeLeaveTime(int64_t tick) {
		return ((T (*)(ArenaClientWorld*, int64_t))(Il2CppBase() + 0x1A2443C))(this, tick);
	}
	template <typename T = uintptr_t> T OnTeleport(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A24470))(this, data);
	}
	template <typename T = void> T OnControlled(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A245E0))(this, data);
	}
	template <typename T = void> T OnMannequinSwapResult(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A2474C))(this, data);
	}
	template <typename T = void> T OnRollChestRewardResponse(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A24750))(this, data);
	}
	template <typename T = void> T OnProductionWorkUpdated(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A247D8))(this, data);
	}
	template <typename T = void> T OnWorkerUniqueLookupUpdated(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A24908))(this, data);
	}
	template <typename T = void> T OnCreateLobby(uintptr_t lobbyEntity) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A24A18))(this, lobbyEntity);
	}
	template <typename T = void> T OnAcceptLobbyReceive(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A24BC0))(this, data);
	}
	template <typename T = void> T OnFindPlayersLobby(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A24E44))(this, data);
	}
	template <typename T = void> T OnCycleResponse(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A24E48))(this, data);
	}
	template <typename T = void> T OnExtractWork(uintptr_t data) {
		return ((T (*)(ArenaClientWorld*, uintptr_t))(Il2CppBase() + 0x1A24E4C))(this, data);
	}

};

}
