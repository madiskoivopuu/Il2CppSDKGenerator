#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MapClientWorld" 

class MapUnityWorld: MapClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapUnityWorld"));
	}

	template <typename T = uintptr_t> T& ViewContainer() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = uintptr_t> T& WindowsManager() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}

	template <typename T = uintptr_t> T get_ViewContainer() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12C67FC))(this);
	}
	template <typename T = void> T set_ViewContainer(uintptr_t value) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C6804))(this, value);
	}
	template <typename T = uintptr_t> T get_WindowsManager() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12C6814))(this);
	}
	template <typename T = void> T set_WindowsManager(uintptr_t value) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C681C))(this, value);
	}
	template <typename T = void> T AddSystems() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12C698C))(this);
	}
	template <typename T = bool> T IsUnderFoW(uintptr_t point) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C7958))(this, point);
	}
	template <typename T = bool> T IsFogOfWarUnlocked(Il2CppString* fogName) {
		return ((T (*)(MapUnityWorld*, Il2CppString*))(Il2CppBase() + 0x12BD53C))(this, fogName);
	}
	template <typename T = void> T UnlockFogOfWar(uintptr_t end) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12BE5E0))(this, end);
	}
	template <typename T = uintptr_t> T Create(Il2CppList<void*>* blueprints) {
		return ((T (*)(MapUnityWorld*, Il2CppList<void*>*))(Il2CppBase() + 0x12C79BC))(this, blueprints);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12C7A50))(this);
	}
	template <typename T = void> T OnCompleteTransaction(uintptr_t transaction) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C7B4C))(this, transaction);
	}
	template <typename T = uintptr_t> T OnCreateAvatarCmd(uintptr_t data) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C7DF0))(this, data);
	}
	template <typename T = void> T ConnectToChat() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12C8650))(this);
	}
	template <typename T = void> T OnOpenWindow(uintptr_t data) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C8684))(this, data);
	}
	template <typename T = void> T OnClaimQuestResult(uintptr_t data) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C88BC))(this, data);
	}
	template <typename T = void> T OnStartGuildQuestResult(uintptr_t data) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C88D0))(this, data);
	}
	template <typename T = void> T OnStartGuildQuestResponse(uintptr_t errorCode, int64_t guildQuestId) {
		return ((T (*)(MapUnityWorld*, uintptr_t, int64_t))(Il2CppBase() + 0x12C8994))(this, errorCode, guildQuestId);
	}
	template <typename T = void> T OnResourceChanged(uintptr_t data) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C8A48))(this, data);
	}
	template <typename T = void> T OnNofityQuest(uintptr_t data) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C8B8C))(this, data);
	}
	template <typename T = void> T OnCreateClan(uintptr_t error) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C8C04))(this, error);
	}
	template <typename T = void> T OnClanJoinRequestCallbackReceived(uintptr_t error) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C8C48))(this, error);
	}
	template <typename T = void> T OnSendMoveToWorldCommand(uintptr_t data) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C8D90))(this, data);
	}
	template <typename T = uintptr_t> T OnCreatePoint(uintptr_t data) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C8D98))(this, data);
	}
	template <typename T = void> T OnFindUserForInviteCallback(uintptr_t code, int64_t playerId) {
		return ((T (*)(MapUnityWorld*, uintptr_t, int64_t))(Il2CppBase() + 0x12C9124))(this, code, playerId);
	}
	template <typename T = void> T OnLinkConflictCallback(int64_t playerId) {
		return ((T (*)(MapUnityWorld*, int64_t))(Il2CppBase() + 0x12C917C))(this, playerId);
	}
	template <typename T = void> T OnReceiveRandomInvitablePlayers(Il2CppArray<uintptr_t>* ids) {
		return ((T (*)(MapUnityWorld*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12C91B0))(this, ids);
	}
	template <typename T = void> T OnReceiveInviteToClanCallback(uintptr_t code, int64_t clanId) {
		return ((T (*)(MapUnityWorld*, uintptr_t, int64_t))(Il2CppBase() + 0x12C91E4))(this, code, clanId);
	}
	template <typename T = bool> T OnServerWarningMessage(uintptr_t data) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C97F0))(this, data);
	}
	template <typename T = void> T OnFindGuildForInviteResponse(uintptr_t errorCode, int64_t guildId) {
		return ((T (*)(MapUnityWorld*, uintptr_t, int64_t))(Il2CppBase() + 0x12C9A48))(this, errorCode, guildId);
	}
	template <typename T = void> T OnGuildKickUserResponse(uintptr_t code, int64_t guildId) {
		return ((T (*)(MapUnityWorld*, uintptr_t, int64_t))(Il2CppBase() + 0x12C9A8C))(this, code, guildId);
	}
	template <typename T = void> T OnGuildChangeUserRoleResponse(uintptr_t code) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C9AC0))(this, code);
	}
	template <typename T = void> T OnCreateGuildResponse(uintptr_t code) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C9AF4))(this, code);
	}
	template <typename T = void> T OnUpdateGuildResponse(uintptr_t code) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C9B28))(this, code);
	}
	template <typename T = void> T OnGuildAcceptInviteResponse(uintptr_t code) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C9B5C))(this, code);
	}
	template <typename T = void> T OnGuildDeleteInviteResponse(uintptr_t code) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C9B90))(this, code);
	}
	template <typename T = void> T OnGuildCreateInviteResponse(uintptr_t code) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C9BC4))(this, code);
	}
	template <typename T = void> T OnGuildJoinResponse(uintptr_t code) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12CA644))(this, code);
	}
	template <typename T = void> T OnRecommendedGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(MapUnityWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x12CAD74))(this, ids, code);
	}
	template <typename T = void> T OnMainTopGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(MapUnityWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x12CADB8))(this, ids, code);
	}
	template <typename T = void> T OnGlobalTopGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(MapUnityWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x12CADFC))(this, ids, code);
	}
	template <typename T = void> T OnMainPrevGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(MapUnityWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x12CAE40))(this, ids, code);
	}
	template <typename T = void> T OnGlobalPrevGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(MapUnityWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x12CAE84))(this, ids, code);
	}
	template <typename T = void> T OnAccountReceived(uintptr_t account) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12CAEC8))(this, account);
	}
	template <typename T = uintptr_t> T OnMailMessage(uintptr_t mailEntity) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12CB310))(this, mailEntity);
	}
	template <typename T = void> T OnMailMessageUpdated() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12CB364))(this);
	}
	template <typename T = void> T OnUpdateStoreReceived() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12CB3A8))(this);
	}
	template <typename T = void> T OnLocationResetResponse(uintptr_t data) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12CB3EC))(this, data);
	}
	template <typename T = void> T OnClanJoinRequestCallbackReceivedb__25_0(uintptr_t w) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12CB420))(this, w);
	}

};

}
