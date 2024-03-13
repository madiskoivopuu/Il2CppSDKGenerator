#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MapClientWorld.h" 

class MapUnityWorld : public MapClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapUnityWorld"));
	}

	template <typename T = uintptr_t> T& ViewContainer() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = UIWindowsManager*> T& WindowsManager() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}

	template <typename T = uintptr_t> T get_ViewContainer() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12C67FC))(this);
	}
	template <typename T = void> T set_ViewContainer(uintptr_t value) {
		return ((T (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C6804))(this, value);
	}
	template <typename T = UIWindowsManager*> T get_WindowsManager() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12C6814))(this);
	}
	template <typename T = void> T set_WindowsManager(UIWindowsManager* value) {
		return ((T (*)(MapUnityWorld*, UIWindowsManager*))(Il2CppBase() + 0x12C681C))(this, value);
	}
	template <typename T = void> T AddSystems() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12C698C))(this);
	}
	template <typename T = bool> T IsUnderFoW(GameEntity* point) {
		return ((T (*)(MapUnityWorld*, GameEntity*))(Il2CppBase() + 0x12C7958))(this, point);
	}
	template <typename T = bool> T IsFogOfWarUnlocked(Il2CppString* fogName) {
		return ((T (*)(MapUnityWorld*, Il2CppString*))(Il2CppBase() + 0x12BD53C))(this, fogName);
	}
	template <typename T = void> T UnlockFogOfWar(GameEntity* end) {
		return ((T (*)(MapUnityWorld*, GameEntity*))(Il2CppBase() + 0x12BE5E0))(this, end);
	}
	template <typename T = uintptr_t> T Create(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((T (*)(MapUnityWorld*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0x12C79BC))(this, blueprints);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12C7A50))(this);
	}
	template <typename T = void> T OnCompleteTransaction(TransactionEntity* transaction) {
		return ((T (*)(MapUnityWorld*, TransactionEntity*))(Il2CppBase() + 0x12C7B4C))(this, transaction);
	}
	template <typename T = GameEntity*> T OnCreateAvatarCmd(CreateMapAvatarEntityData* data) {
		return ((T (*)(MapUnityWorld*, CreateMapAvatarEntityData*))(Il2CppBase() + 0x12C7DF0))(this, data);
	}
	template <typename T = void> T ConnectToChat() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12C8650))(this);
	}
	template <typename T = void> T OnOpenWindow(OpenWindowData* data) {
		return ((T (*)(MapUnityWorld*, OpenWindowData*))(Il2CppBase() + 0x12C8684))(this, data);
	}
	template <typename T = void> T OnClaimQuestResult(ClaimQuestData* data) {
		return ((T (*)(MapUnityWorld*, ClaimQuestData*))(Il2CppBase() + 0x12C88BC))(this, data);
	}
	template <typename T = void> T OnStartGuildQuestResult(StartGuildQuestData* data) {
		return ((T (*)(MapUnityWorld*, StartGuildQuestData*))(Il2CppBase() + 0x12C88D0))(this, data);
	}
	template <typename T = void> T OnStartGuildQuestResponse(ErrorCodes* errorCode, int64_t guildQuestId) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0x12C8994))(this, errorCode, guildQuestId);
	}
	template <typename T = void> T OnResourceChanged(ChangedResourceData* data) {
		return ((T (*)(MapUnityWorld*, ChangedResourceData*))(Il2CppBase() + 0x12C8A48))(this, data);
	}
	template <typename T = void> T OnNofityQuest(NotifyQuestData* data) {
		return ((T (*)(MapUnityWorld*, NotifyQuestData*))(Il2CppBase() + 0x12C8B8C))(this, data);
	}
	template <typename T = void> T OnCreateClan(ErrorCodes* error) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*))(Il2CppBase() + 0x12C8C04))(this, error);
	}
	template <typename T = void> T OnClanJoinRequestCallbackReceived(ErrorCodes* error) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*))(Il2CppBase() + 0x12C8C48))(this, error);
	}
	template <typename T = void> T OnSendMoveToWorldCommand(SendMoveToWorldData* data) {
		return ((T (*)(MapUnityWorld*, SendMoveToWorldData*))(Il2CppBase() + 0x12C8D90))(this, data);
	}
	template <typename T = GameEntity*> T OnCreatePoint(CreatePointData* data) {
		return ((T (*)(MapUnityWorld*, CreatePointData*))(Il2CppBase() + 0x12C8D98))(this, data);
	}
	template <typename T = void> T OnFindUserForInviteCallback(ErrorCodes* code, int64_t playerId) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0x12C9124))(this, code, playerId);
	}
	template <typename T = void> T OnLinkConflictCallback(int64_t playerId) {
		return ((T (*)(MapUnityWorld*, int64_t))(Il2CppBase() + 0x12C917C))(this, playerId);
	}
	template <typename T = void> T OnReceiveRandomInvitablePlayers(Il2CppArray<uintptr_t>* ids) {
		return ((T (*)(MapUnityWorld*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12C91B0))(this, ids);
	}
	template <typename T = void> T OnReceiveInviteToClanCallback(ErrorCodes* code, int64_t clanId) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0x12C91E4))(this, code, clanId);
	}
	template <typename T = bool> T OnServerWarningMessage(WarningDataForClient* data) {
		return ((T (*)(MapUnityWorld*, WarningDataForClient*))(Il2CppBase() + 0x12C97F0))(this, data);
	}
	template <typename T = void> T OnFindGuildForInviteResponse(ErrorCodes* errorCode, int64_t guildId) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0x12C9A48))(this, errorCode, guildId);
	}
	template <typename T = void> T OnGuildKickUserResponse(ErrorCodes* code, int64_t guildId) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0x12C9A8C))(this, code, guildId);
	}
	template <typename T = void> T OnGuildChangeUserRoleResponse(ErrorCodes* code) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*))(Il2CppBase() + 0x12C9AC0))(this, code);
	}
	template <typename T = void> T OnCreateGuildResponse(ErrorCodes* code) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*))(Il2CppBase() + 0x12C9AF4))(this, code);
	}
	template <typename T = void> T OnUpdateGuildResponse(ErrorCodes* code) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*))(Il2CppBase() + 0x12C9B28))(this, code);
	}
	template <typename T = void> T OnGuildAcceptInviteResponse(ErrorCodes* code) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*))(Il2CppBase() + 0x12C9B5C))(this, code);
	}
	template <typename T = void> T OnGuildDeleteInviteResponse(ErrorCodes* code) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*))(Il2CppBase() + 0x12C9B90))(this, code);
	}
	template <typename T = void> T OnGuildCreateInviteResponse(ErrorCodes* code) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*))(Il2CppBase() + 0x12C9BC4))(this, code);
	}
	template <typename T = void> T OnGuildJoinResponse(ErrorCodes* code) {
		return ((T (*)(MapUnityWorld*, ErrorCodes*))(Il2CppBase() + 0x12CA644))(this, code);
	}
	template <typename T = void> T OnRecommendedGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(MapUnityWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x12CAD74))(this, ids, code);
	}
	template <typename T = void> T OnMainTopGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(MapUnityWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x12CADB8))(this, ids, code);
	}
	template <typename T = void> T OnGlobalTopGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(MapUnityWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x12CADFC))(this, ids, code);
	}
	template <typename T = void> T OnMainPrevGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(MapUnityWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x12CAE40))(this, ids, code);
	}
	template <typename T = void> T OnGlobalPrevGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(MapUnityWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x12CAE84))(this, ids, code);
	}
	template <typename T = void> T OnAccountReceived(AccountEntity* account) {
		return ((T (*)(MapUnityWorld*, AccountEntity*))(Il2CppBase() + 0x12CAEC8))(this, account);
	}
	template <typename T = MailEntity*> T OnMailMessage(MailEntity* mailEntity) {
		return ((T (*)(MapUnityWorld*, MailEntity*))(Il2CppBase() + 0x12CB310))(this, mailEntity);
	}
	template <typename T = void> T OnMailMessageUpdated() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12CB364))(this);
	}
	template <typename T = void> T OnUpdateStoreReceived() {
		return ((T (*)(MapUnityWorld*))(Il2CppBase() + 0x12CB3A8))(this);
	}
	template <typename T = void> T OnLocationResetResponse(LocationResetResponseData* data) {
		return ((T (*)(MapUnityWorld*, LocationResetResponseData*))(Il2CppBase() + 0x12CB3EC))(this, data);
	}
	template <typename T = void> T OnClanJoinRequestCallbackReceivedb__25_0(IUIWindow* w) {
		return ((T (*)(MapUnityWorld*, IUIWindow*))(Il2CppBase() + 0x12CB420))(this, w);
	}

};

