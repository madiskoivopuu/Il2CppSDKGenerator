#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MapClientWorld.h" 

class MapUnityWorld : public MapClientWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapUnityWorld"));
	}

	template <typename R = uintptr_t> R& ViewContainer() {
		return *(R*)((uintptr_t)this + 0x2A8);
	}
	template <typename R = UIWindowsManager*> R& WindowsManager() {
		return *(R*)((uintptr_t)this + 0x2B0);
	}

	template <typename R = uintptr_t> R get_ViewContainer() {
		return ((R (*)(MapUnityWorld*))(Il2CppBase() + 0x12C67FC))(this);
	}
	template <typename R = void> R set_ViewContainer(uintptr_t value) {
		return ((R (*)(MapUnityWorld*, uintptr_t))(Il2CppBase() + 0x12C6804))(this, value);
	}
	template <typename R = UIWindowsManager*> R get_WindowsManager() {
		return ((R (*)(MapUnityWorld*))(Il2CppBase() + 0x12C6814))(this);
	}
	template <typename R = void> R set_WindowsManager(UIWindowsManager* value) {
		return ((R (*)(MapUnityWorld*, UIWindowsManager*))(Il2CppBase() + 0x12C681C))(this, value);
	}
	template <typename R = void> R AddSystems() {
		return ((R (*)(MapUnityWorld*))(Il2CppBase() + 0x12C698C))(this);
	}
	template <typename R = bool> R IsUnderFoW(GameEntity* point) {
		return ((R (*)(MapUnityWorld*, GameEntity*))(Il2CppBase() + 0x12C7958))(this, point);
	}
	template <typename R = bool> R IsFogOfWarUnlocked(Il2CppString* fogName) {
		return ((R (*)(MapUnityWorld*, Il2CppString*))(Il2CppBase() + 0x12BD53C))(this, fogName);
	}
	template <typename R = void> R UnlockFogOfWar(GameEntity* end) {
		return ((R (*)(MapUnityWorld*, GameEntity*))(Il2CppBase() + 0x12BE5E0))(this, end);
	}
	template <typename R = uintptr_t> R Create(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((R (*)(MapUnityWorld*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0x12C79BC))(this, blueprints);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(MapUnityWorld*))(Il2CppBase() + 0x12C7A50))(this);
	}
	template <typename R = void> R OnCompleteTransaction(TransactionEntity* transaction) {
		return ((R (*)(MapUnityWorld*, TransactionEntity*))(Il2CppBase() + 0x12C7B4C))(this, transaction);
	}
	template <typename R = GameEntity*> R OnCreateAvatarCmd(CreateMapAvatarEntityData* data) {
		return ((R (*)(MapUnityWorld*, CreateMapAvatarEntityData*))(Il2CppBase() + 0x12C7DF0))(this, data);
	}
	template <typename R = void> R ConnectToChat() {
		return ((R (*)(MapUnityWorld*))(Il2CppBase() + 0x12C8650))(this);
	}
	template <typename R = void> R OnOpenWindow(OpenWindowData* data) {
		return ((R (*)(MapUnityWorld*, OpenWindowData*))(Il2CppBase() + 0x12C8684))(this, data);
	}
	template <typename R = void> R OnClaimQuestResult(ClaimQuestData* data) {
		return ((R (*)(MapUnityWorld*, ClaimQuestData*))(Il2CppBase() + 0x12C88BC))(this, data);
	}
	template <typename R = void> R OnStartGuildQuestResult(StartGuildQuestData* data) {
		return ((R (*)(MapUnityWorld*, StartGuildQuestData*))(Il2CppBase() + 0x12C88D0))(this, data);
	}
	template <typename R = void> R OnStartGuildQuestResponse(ProtoTools::ErrorCodes* errorCode, int64_t guildQuestId) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*, int64_t))(Il2CppBase() + 0x12C8994))(this, errorCode, guildQuestId);
	}
	template <typename R = void> R OnResourceChanged(ChangedResourceData* data) {
		return ((R (*)(MapUnityWorld*, ChangedResourceData*))(Il2CppBase() + 0x12C8A48))(this, data);
	}
	template <typename R = void> R OnNofityQuest(NotifyQuestData* data) {
		return ((R (*)(MapUnityWorld*, NotifyQuestData*))(Il2CppBase() + 0x12C8B8C))(this, data);
	}
	template <typename R = void> R OnCreateClan(ProtoTools::ErrorCodes* error) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12C8C04))(this, error);
	}
	template <typename R = void> R OnClanJoinRequestCallbackReceived(ProtoTools::ErrorCodes* error) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12C8C48))(this, error);
	}
	template <typename R = void> R OnSendMoveToWorldCommand(SendMoveToWorldData* data) {
		return ((R (*)(MapUnityWorld*, SendMoveToWorldData*))(Il2CppBase() + 0x12C8D90))(this, data);
	}
	template <typename R = GameEntity*> R OnCreatePoint(CreatePointData* data) {
		return ((R (*)(MapUnityWorld*, CreatePointData*))(Il2CppBase() + 0x12C8D98))(this, data);
	}
	template <typename R = void> R OnFindUserForInviteCallback(ProtoTools::ErrorCodes* code, int64_t playerId) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*, int64_t))(Il2CppBase() + 0x12C9124))(this, code, playerId);
	}
	template <typename R = void> R OnLinkConflictCallback(int64_t playerId) {
		return ((R (*)(MapUnityWorld*, int64_t))(Il2CppBase() + 0x12C917C))(this, playerId);
	}
	template <typename R = void> R OnReceiveRandomInvitablePlayers(Il2CppArray<int64_t>* ids) {
		return ((R (*)(MapUnityWorld*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x12C91B0))(this, ids);
	}
	template <typename R = void> R OnReceiveInviteToClanCallback(ProtoTools::ErrorCodes* code, int64_t clanId) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*, int64_t))(Il2CppBase() + 0x12C91E4))(this, code, clanId);
	}
	template <typename R = bool> R OnServerWarningMessage(WarningDataForClient* data) {
		return ((R (*)(MapUnityWorld*, WarningDataForClient*))(Il2CppBase() + 0x12C97F0))(this, data);
	}
	template <typename R = void> R OnFindGuildForInviteResponse(ProtoTools::ErrorCodes* errorCode, int64_t guildId) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*, int64_t))(Il2CppBase() + 0x12C9A48))(this, errorCode, guildId);
	}
	template <typename R = void> R OnGuildKickUserResponse(ProtoTools::ErrorCodes* code, int64_t guildId) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*, int64_t))(Il2CppBase() + 0x12C9A8C))(this, code, guildId);
	}
	template <typename R = void> R OnGuildChangeUserRoleResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12C9AC0))(this, code);
	}
	template <typename R = void> R OnCreateGuildResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12C9AF4))(this, code);
	}
	template <typename R = void> R OnUpdateGuildResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12C9B28))(this, code);
	}
	template <typename R = void> R OnGuildAcceptInviteResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12C9B5C))(this, code);
	}
	template <typename R = void> R OnGuildDeleteInviteResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12C9B90))(this, code);
	}
	template <typename R = void> R OnGuildCreateInviteResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12C9BC4))(this, code);
	}
	template <typename R = void> R OnGuildJoinResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(MapUnityWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12CA644))(this, code);
	}
	template <typename R = void> R OnRecommendedGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* code) {
		return ((R (*)(MapUnityWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12CAD74))(this, ids, code);
	}
	template <typename R = void> R OnMainTopGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* code) {
		return ((R (*)(MapUnityWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12CADB8))(this, ids, code);
	}
	template <typename R = void> R OnGlobalTopGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* code) {
		return ((R (*)(MapUnityWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12CADFC))(this, ids, code);
	}
	template <typename R = void> R OnMainPrevGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* code) {
		return ((R (*)(MapUnityWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12CAE40))(this, ids, code);
	}
	template <typename R = void> R OnGlobalPrevGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* code) {
		return ((R (*)(MapUnityWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x12CAE84))(this, ids, code);
	}
	template <typename R = void> R OnAccountReceived(AccountEntity* account) {
		return ((R (*)(MapUnityWorld*, AccountEntity*))(Il2CppBase() + 0x12CAEC8))(this, account);
	}
	template <typename R = MailEntity*> R OnMailMessage(MailEntity* mailEntity) {
		return ((R (*)(MapUnityWorld*, MailEntity*))(Il2CppBase() + 0x12CB310))(this, mailEntity);
	}
	template <typename R = void> R OnMailMessageUpdated() {
		return ((R (*)(MapUnityWorld*))(Il2CppBase() + 0x12CB364))(this);
	}
	template <typename R = void> R OnUpdateStoreReceived() {
		return ((R (*)(MapUnityWorld*))(Il2CppBase() + 0x12CB3A8))(this);
	}
	template <typename R = void> R OnLocationResetResponse(LocationResetResponseData* data) {
		return ((R (*)(MapUnityWorld*, LocationResetResponseData*))(Il2CppBase() + 0x12CB3EC))(this, data);
	}
	template <typename R = void> R OnClanJoinRequestCallbackReceivedb__25_0(IUIWindow* w) {
		return ((R (*)(MapUnityWorld*, IUIWindow*))(Il2CppBase() + 0x12CB420))(this, w);
	}

};

