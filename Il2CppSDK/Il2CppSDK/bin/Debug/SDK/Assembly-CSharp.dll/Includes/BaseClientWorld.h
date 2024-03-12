#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWorld" 

class BaseClientWorld: BaseWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseClientWorld"));
	}

	template <typename T = uintptr_t> T& DataContexts() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& input() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& game() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& inventorySlots() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& magic() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& magicTrigger() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& quests() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& dialogues() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& events() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& cooldowns() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& modifiers() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& history() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _players() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _clans() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _guilds() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _guildQuests() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _pvps() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _invites() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _guildInvites() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _diplomacies() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _tournaments() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _store2Data() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& SharedContexts() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& ShowWarningHook() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int64_t> T& AccountId() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int64_t> T& SessionId() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& ConfigFromServer() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& Analytics() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& Listener() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& ClientTimeManager() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& ChatManager() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& Relationship() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _names() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = uintptr_t> T& _clientWrapper() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = int64_t> T& BestLag() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = int64_t> T& _lag() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = bool> T& WasReceivedWorld() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = bool> T& WasSendReady() {
		return *(T*)((uintptr_t)this + 0x289);
	}
	template <typename T = bool> T& WasStoreUpdated() {
		return *(T*)((uintptr_t)this + 0x28A);
	}
	template <typename T = void*> T& WasSendWorld() {
		return *(T*)((uintptr_t)this + 0x28B);
	}
	template <typename T = bool> T& WasConnected() {
		return *(T*)((uintptr_t)this + 0x28D);
	}
	template <typename T = bool> T& WasDeadWhenLoad() {
		return *(T*)((uintptr_t)this + 0x28E);
	}
	template <typename T = void*> T& OnWorldCreate() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = void*> static T& ServerClientTimeDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BugreportUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _baseCommandsActions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_DataContexts() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCEA0))(this);
	}
	template <typename T = void> T set_DataContexts(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBCEA8))(this, value);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCEB0))(this);
	}
	template <typename T = uintptr_t> T get_recipe() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCECC))(this);
	}
	template <typename T = uintptr_t> T get_item() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCEE8))(this);
	}
	template <typename T = uintptr_t> T get_gameData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF04))(this);
	}
	template <typename T = uintptr_t> T get_randomGroup() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF20))(this);
	}
	template <typename T = uintptr_t> T get_actionData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF3C))(this);
	}
	template <typename T = uintptr_t> T get_magicData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF58))(this);
	}
	template <typename T = uintptr_t> T get_magicTriggerData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF74))(this);
	}
	template <typename T = uintptr_t> T get_questsData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF90))(this);
	}
	template <typename T = uintptr_t> T get_tournamentsData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCFAC))(this);
	}
	template <typename T = uintptr_t> T get_dialoguesData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCFC8))(this);
	}
	template <typename T = uintptr_t> T get_conditions() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCFE4))(this);
	}
	template <typename T = uintptr_t> T get_configs() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD000))(this);
	}
	template <typename T = uintptr_t> T get_season() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD01C))(this);
	}
	template <typename T = uintptr_t> T get_battlePass() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD038))(this);
	}
	template <typename T = uintptr_t> T get_lobbyData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD054))(this);
	}
	template <typename T = uintptr_t> T get_inventorySlotsData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD070))(this);
	}
	template <typename T = uintptr_t> T get_currency() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD08C))(this);
	}
	template <typename T = uintptr_t> T get_trophyRoad() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD0A8))(this);
	}
	template <typename T = uintptr_t> T get_mapData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD0C4))(this);
	}
	template <typename T = uintptr_t> T get_effectData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD0E0))(this);
	}
	template <typename T = uintptr_t> T get_input() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD0FC))(this);
	}
	template <typename T = void> T set_input(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD104))(this, value);
	}
	template <typename T = uintptr_t> T get_game() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD10C))(this);
	}
	template <typename T = void> T set_game(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD114))(this, value);
	}
	template <typename T = uintptr_t> T get_action() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD11C))(this);
	}
	template <typename T = void> T set_action(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD124))(this, value);
	}
	template <typename T = uintptr_t> T get_inventorySlots() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD12C))(this);
	}
	template <typename T = void> T set_inventorySlots(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD134))(this, value);
	}
	template <typename T = uintptr_t> T get_magic() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD13C))(this);
	}
	template <typename T = void> T set_magic(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD144))(this, value);
	}
	template <typename T = uintptr_t> T get_magicTrigger() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD14C))(this);
	}
	template <typename T = void> T set_magicTrigger(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD154))(this, value);
	}
	template <typename T = uintptr_t> T get_quests() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD15C))(this);
	}
	template <typename T = void> T set_quests(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD164))(this, value);
	}
	template <typename T = uintptr_t> T get_dialogues() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD16C))(this);
	}
	template <typename T = void> T set_dialogues(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD174))(this, value);
	}
	template <typename T = uintptr_t> T get_events() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD17C))(this);
	}
	template <typename T = void> T set_events(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD184))(this, value);
	}
	template <typename T = uintptr_t> T get_cooldowns() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD18C))(this);
	}
	template <typename T = void> T set_cooldowns(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD194))(this, value);
	}
	template <typename T = uintptr_t> T get_modifiers() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD19C))(this);
	}
	template <typename T = void> T set_modifiers(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD1A4))(this, value);
	}
	template <typename T = uintptr_t> T get_history() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1AC))(this);
	}
	template <typename T = void> T set_history(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD1B4))(this, value);
	}
	template <typename T = uintptr_t> T get_players() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1C4))(this);
	}
	template <typename T = uintptr_t> T get_clans() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1CC))(this);
	}
	template <typename T = uintptr_t> T get_guilds() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1D4))(this);
	}
	template <typename T = uintptr_t> T get_guildQuests() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1DC))(this);
	}
	template <typename T = uintptr_t> T get_pvps() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1E4))(this);
	}
	template <typename T = uintptr_t> T get_invites() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1EC))(this);
	}
	template <typename T = uintptr_t> T get_guildInvites() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1F4))(this);
	}
	template <typename T = uintptr_t> T get_diplomacies() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1FC))(this);
	}
	template <typename T = uintptr_t> T get_tournaments() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD204))(this);
	}
	template <typename T = uintptr_t> T get_store2Data() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD20C))(this);
	}
	template <typename T = uintptr_t> T get_SharedContexts() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD214))(this);
	}
	template <typename T = void> T set_SharedContexts(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBD21C))(this, value);
	}
	template <typename T = uintptr_t> T get_tempBuff() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD22C))(this);
	}
	template <typename T = uintptr_t> T get_serverInfo() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD248))(this);
	}
	template <typename T = uintptr_t> T get_chat() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD264))(this);
	}
	template <typename T = uintptr_t> T get_contacts() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD280))(this);
	}
	template <typename T = uintptr_t> T get_analytics() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD29C))(this);
	}
	template <typename T = uintptr_t> T get_notifications() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD2B8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_allContexts() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD2D4))(this);
	}
	template <typename T = void> T CreateContexts() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD940))(this);
	}
	template <typename T = void> T OnActionCreated(uintptr_t actionEntity) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBDF80))(this, actionEntity);
	}
	template <typename T = void> T add_ShowWarningHook(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBDF84))(this, value);
	}
	template <typename T = void> T remove_ShowWarningHook(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBE028))(this, value);
	}
	template <typename T = int64_t> T get_AccountId() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE0CC))(this);
	}
	template <typename T = void> T set_AccountId(int64_t value) {
		return ((T (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFBE0D4))(this, value);
	}
	template <typename T = int64_t> T get_SessionId() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE0DC))(this);
	}
	template <typename T = void> T set_SessionId(int64_t value) {
		return ((T (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFBE0E4))(this, value);
	}
	template <typename T = uintptr_t> T get_OwnAccount() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE0EC))(this);
	}
	template <typename T = uintptr_t> T get_OwnPlayer() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE108))(this);
	}
	template <typename T = uintptr_t> T get_OwnClan() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE134))(this);
	}
	template <typename T = uintptr_t> T get_OwnGuild() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE160))(this);
	}
	template <typename T = uintptr_t> T get_OwnPvP() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE18C))(this);
	}
	template <typename T = uintptr_t> T get_OwnTournament() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE1B8))(this);
	}
	template <typename T = bool> T IsLeader() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE1E4))(this);
	}
	template <typename T = uintptr_t> T get_ConfigFromServer() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE210))(this);
	}
	template <typename T = void> T set_ConfigFromServer(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBE220))(this, value);
	}
	template <typename T = uintptr_t> T get_Analytics() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE250))(this);
	}
	template <typename T = uintptr_t> T get_Listener() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE258))(this);
	}
	template <typename T = void> T set_Listener(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBE260))(this, value);
	}
	template <typename T = uintptr_t> T get_ClientTimeManager() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE270))(this);
	}
	template <typename T = void> T set_ClientTimeManager(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBE278))(this, value);
	}
	template <typename T = uintptr_t> T get_ChatManager() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE288))(this);
	}
	template <typename T = void> T set_ChatManager(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBE290))(this, value);
	}
	template <typename T = uintptr_t> T get_Relationship() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE2A0))(this);
	}
	template <typename T = void> T set_Relationship(uintptr_t value) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBE2A8))(this, value);
	}
	template <typename T = uintptr_t> T get_MainContext() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int64_t> T get_BestLag() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE8C0))(this);
	}
	template <typename T = void> T set_BestLag(int64_t value) {
		return ((T (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFBE8C8))(this, value);
	}
	template <typename T = void> T SetLag(int64_t lag) {
		return ((T (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFBE8D0))(this, lag);
	}
	template <typename T = void> T CalculateLag() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE95C))(this);
	}
	template <typename T = void> T AddSystems() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE9A0))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBEC0C))(this);
	}
	template <typename T = uintptr_t> T get_peer() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBEC84))(this);
	}
	template <typename T = bool> T Send(uintptr_t writer, uintptr_t deliveryMethod) {
		return ((T (*)(BaseClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xFBECC0))(this, writer, deliveryMethod);
	}
	template <typename T = uintptr_t> T Create(Il2CppList<void*>* blueprints) {
		return ((T (*)(BaseClientWorld*, Il2CppList<void*>*))(Il2CppBase() + 0x0))(this, blueprints);
	}
	template <typename T = uintptr_t> T GetAvatarExperience() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsClanOperationsLocked() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBECFC))(this);
	}
	template <typename T = bool> T get_IsBuilderLocked() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBED98))(this);
	}
	template <typename T = bool> T get_IsDiplomacyLocked() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBEDD4))(this);
	}
	template <typename T = bool> T get_IsGuildOperationsLocked() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBEE10))(this);
	}
	template <typename T = void> T OnCreateTransaction(uintptr_t transaction) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBEE88))(this, transaction);
	}
	template <typename T = void> T OnCompleteTransaction(uintptr_t transaction) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBEFD8))(this, transaction);
	}
	template <typename T = void> T SetOwnEntities() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF190))(this);
	}
	template <typename T = bool> T get_WasReceivedWorld() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF850))(this);
	}
	template <typename T = void> T set_WasReceivedWorld(bool value) {
		return ((T (*)(BaseClientWorld*, bool))(Il2CppBase() + 0xFBF858))(this, value);
	}
	template <typename T = bool> T get_WasSendReady() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF864))(this);
	}
	template <typename T = void> T set_WasSendReady(bool value) {
		return ((T (*)(BaseClientWorld*, bool))(Il2CppBase() + 0xFBF86C))(this, value);
	}
	template <typename T = bool> T get_WasStoreUpdated() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF878))(this);
	}
	template <typename T = void> T set_WasStoreUpdated(bool value) {
		return ((T (*)(BaseClientWorld*, bool))(Il2CppBase() + 0xFBF880))(this, value);
	}
	template <typename T = void*> T get_WasSendWorld() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF88C))(this);
	}
	template <typename T = void> T set_WasSendWorld(void* value) {
		return ((T (*)(BaseClientWorld*, void*))(Il2CppBase() + 0xFBF898))(this, value);
	}
	template <typename T = bool> T get_WasConnected() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF8A4))(this);
	}
	template <typename T = void> T set_WasConnected(bool value) {
		return ((T (*)(BaseClientWorld*, bool))(Il2CppBase() + 0xFBF8AC))(this, value);
	}
	template <typename T = bool> T get_WasDeadWhenLoad() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF8B8))(this);
	}
	template <typename T = void> T set_WasDeadWhenLoad(bool value) {
		return ((T (*)(BaseClientWorld*, bool))(Il2CppBase() + 0xFBF8C0))(this, value);
	}
	template <typename T = void> T add_OnWorldCreate(void* value) {
		return ((T (*)(BaseClientWorld*, void*))(Il2CppBase() + 0xFBF8CC))(this, value);
	}
	template <typename T = void> T remove_OnWorldCreate(void* value) {
		return ((T (*)(BaseClientWorld*, void*))(Il2CppBase() + 0xFBF970))(this, value);
	}
	template <typename T = void> T OnConnected(uintptr_t peer) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBFA14))(this, peer);
	}
	template <typename T = void> T OnGradeUpPetSkillResult(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC346C))(this, data);
	}
	template <typename T = void> T OnLinkToKefirIdResponseResult(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC3470))(this, data);
	}
	template <typename T = void> T OnSetDamageShield(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC360C))(this, data);
	}
	template <typename T = void> T OnWorkerRename() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC376C))(this);
	}
	template <typename T = void> T OnPlayerRename(uintptr_t errorCode) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC3894))(this, errorCode);
	}
	template <typename T = void> T OnClanRename(uintptr_t errorCode) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC39D4))(this, errorCode);
	}
	template <typename T = void> T OnExperience(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC3B14))(this, data);
	}
	template <typename T = void> T OnInventoryUpdate(uintptr_t data, int64_t updateTime) {
		return ((T (*)(BaseClientWorld*, uintptr_t, int64_t))(Il2CppBase() + 0xFC3B74))(this, data, updateTime);
	}
	template <typename T = void> T OnPetSlotChangedDurability(uintptr_t slot, float oldValue, float newValue) {
		return ((T (*)(BaseClientWorld*, uintptr_t, float, float))(Il2CppBase() + 0xFC3F0C))(this, slot, oldValue, newValue);
	}
	template <typename T = void> T OnArmingRunes(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC3F10))(this, data);
	}
	template <typename T = void> T OnChestMarker(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC3FA8))(this, data);
	}
	template <typename T = void> T OnClassRuneChanged(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC400C))(this, data);
	}
	template <typename T = void> T OnClassRuneDeactivated(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC435C))(this, data);
	}
	template <typename T = void> T OnFuseResult(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC4744))(this, data);
	}
	template <typename T = void> T OnRemoveEntityCmd(uintptr_t data, uintptr_t peer) {
		return ((T (*)(BaseClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xFC4748))(this, data, peer);
	}
	template <typename T = void> T OnLocalActionStart(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC4A34))(this, data);
	}
	template <typename T = void> T OnInterruptAction(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC4E1C))(this, data);
	}
	template <typename T = void> T OnActionCmd(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC4E84))(this, data);
	}
	template <typename T = void> T OnCooldownCmd(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC50B8))(this, data);
	}
	template <typename T = void> T OnReleaseActorCmd(int64_t serverId) {
		return ((T (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFC5148))(this, serverId);
	}
	template <typename T = void> T OnGuildId(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC51D0))(this, data);
	}
	template <typename T = void> T OnStartGuildQuestResult(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5234))(this, data);
	}
	template <typename T = void> T OnStartGuildQuestResponse(uintptr_t errorCode, int64_t guildQuestId) {
		return ((T (*)(BaseClientWorld*, uintptr_t, int64_t))(Il2CppBase() + 0xFC5238))(this, errorCode, guildQuestId);
	}
	template <typename T = void> T OnFuseMountResult(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC523C))(this, data);
	}
	template <typename T = void> T OnScoutingResult(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5240))(this, data);
	}
	template <typename T = void> T OnResourceChanged(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5244))(this, data);
	}
	template <typename T = void> T OnNetworkReceive(uintptr_t peer, uintptr_t reader) {
		return ((T (*)(BaseClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xFC53E4))(this, peer, reader);
	}
	template <typename T = void> T OnOpenWindow(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5604))(this, data);
	}
	template <typename T = bool> T OnCommand(uintptr_t commandId, uintptr_t reader, uintptr_t peer) {
		return ((T (*)(BaseClientWorld*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xFC56CC))(this, commandId, reader, peer);
	}
	template <typename T = void> T OnSkipQuestResult(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC57B0))(this, data);
	}
	template <typename T = void> T OnHideHead(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC57B4))(this, data);
	}
	template <typename T = void> T OnHidePet(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5864))(this, data);
	}
	template <typename T = void> T OnHideBag(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5914))(this, data);
	}
	template <typename T = uintptr_t> T OnTeleport(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC59C4))(this, data);
	}
	template <typename T = void> T OnControlled(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5A04))(this, data);
	}
	template <typename T = void> T OnClaimQuestResult(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5A08))(this, data);
	}
	template <typename T = void> T OnBuildEntityResult(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5A0C))(this, data);
	}
	template <typename T = void> T OnAutoDestruction(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5A10))(this, data);
	}
	template <typename T = void> T OnDialogueClose(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5AA8))(this, data);
	}
	template <typename T = void> T OnDialogueShow(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5AE0))(this, data);
	}
	template <typename T = uintptr_t> T OnPlayerName(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5C20))(this, data);
	}
	template <typename T = uintptr_t> T OnGender(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5D64))(this, data);
	}
	template <typename T = void> T OnCreateMagic(int64_t updateTime, uintptr_t data) {
		return ((T (*)(BaseClientWorld*, int64_t, uintptr_t))(Il2CppBase() + 0xFC5DC4))(this, updateTime, data);
	}
	template <typename T = void> T OnUpdateMagic(int64_t updateTime, uintptr_t data) {
		return ((T (*)(BaseClientWorld*, int64_t, uintptr_t))(Il2CppBase() + 0xFC5EE4))(this, updateTime, data);
	}
	template <typename T = void> T OnUpdateTrigger(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5F34))(this, data);
	}
	template <typename T = void> T OnSetHotPredition(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC5FA4))(this, data);
	}
	template <typename T = void> T OnDestoryMagic(int64_t updateTime, uintptr_t data) {
		return ((T (*)(BaseClientWorld*, int64_t, uintptr_t))(Il2CppBase() + 0xFC60D0))(this, updateTime, data);
	}
	template <typename T = void> T OnCreateQuest(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC616C))(this, data);
	}
	template <typename T = void> T OnUpdateQuest(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC6254))(this, data);
	}
	template <typename T = void> T OnDestoryQuest(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC639C))(this, data);
	}
	template <typename T = bool> T OnServerWarningMessage(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC63F4))(this, data);
	}
	template <typename T = void> T OnNofityQuest(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC65A8))(this, data);
	}
	template <typename T = void> T OnCreateClan(uintptr_t error) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC65AC))(this, error);
	}
	template <typename T = void> T OnDisbandClan(uintptr_t error) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC6844))(this, error);
	}
	template <typename T = void> T OnReceiveInviteToClanCallback(uintptr_t code, int64_t clanId) {
		return ((T (*)(BaseClientWorld*, uintptr_t, int64_t))(Il2CppBase() + 0xFC696C))(this, code, clanId);
	}
	template <typename T = void> T OnClanJoinRequestCallbackReceived(uintptr_t error) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC6A6C))(this, error);
	}
	template <typename T = void> T OnAcceptInvite(uintptr_t error) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC6D68))(this, error);
	}
	template <typename T = void> T OnNewsEntityReceived(uintptr_t newsEntity) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC6FE0))(this, newsEntity);
	}
	template <typename T = void> T OnAccountReceived(uintptr_t account) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC70D4))(this, account);
	}
	template <typename T = void> T OnUpdateStoreReceived() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC726C))(this);
	}
	template <typename T = void> T OnFindUserForInviteCallback(uintptr_t code, int64_t playerId) {
		return ((T (*)(BaseClientWorld*, uintptr_t, int64_t))(Il2CppBase() + 0xFC7304))(this, code, playerId);
	}
	template <typename T = void> T OnLinkConflictCallback(int64_t playerId) {
		return ((T (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFC738C))(this, playerId);
	}
	template <typename T = void> T OnReceiveRandomInvitablePlayers(Il2CppArray<uintptr_t>* ids) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFC7390))(this, ids);
	}
	template <typename T = void> T OnFindGuildForInviteResponse(uintptr_t errorCode, int64_t guildId) {
		return ((T (*)(BaseClientWorld*, uintptr_t, int64_t))(Il2CppBase() + 0xFC7418))(this, errorCode, guildId);
	}
	template <typename T = void> T OnGuildChangeUserRoleResponse(uintptr_t code) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC74A0))(this, code);
	}
	template <typename T = void> T OnGuildKickUserResponse(uintptr_t code, int64_t guildId) {
		return ((T (*)(BaseClientWorld*, uintptr_t, int64_t))(Il2CppBase() + 0xFC7528))(this, code, guildId);
	}
	template <typename T = void> T OnCreateGuildResponse(uintptr_t code) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC75E4))(this, code);
	}
	template <typename T = void> T OnUpdateGuildResponse(uintptr_t code) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC7700))(this, code);
	}
	template <typename T = void> T OnGuildAcceptInviteResponse(uintptr_t code) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC77F8))(this, code);
	}
	template <typename T = void> T OnGuildDeleteInviteResponse(uintptr_t code) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC7914))(this, code);
	}
	template <typename T = void> T OnGuildCreateInviteResponse(uintptr_t code) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC7A0C))(this, code);
	}
	template <typename T = void> T OnGuildJoinResponse(uintptr_t code) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC7B04))(this, code);
	}
	template <typename T = void> T OnRecommendedGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0xFC7C20))(this, ids, code);
	}
	template <typename T = void> T OnMainTopGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0xFC7D6C))(this, ids, code);
	}
	template <typename T = void> T OnGlobalTopGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0xFC7EB8))(this, ids, code);
	}
	template <typename T = void> T OnMainPrevGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0xFC8004))(this, ids, code);
	}
	template <typename T = void> T OnGlobalPrevGuildsResponse(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0xFC8150))(this, ids, code);
	}
	template <typename T = void> T OnGuildResetBossLocation(uintptr_t code) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC829C))(this, code);
	}
	template <typename T = void> T OnGlobalTournamentsPlayersFound(Il2CppArray<uintptr_t>* ids, uintptr_t code) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0xFC8394))(this, ids, code);
	}
	template <typename T = void> T OnDisbandGuildResponse(uintptr_t code, int64_t guildId) {
		return ((T (*)(BaseClientWorld*, uintptr_t, int64_t))(Il2CppBase() + 0xFC8534))(this, code, guildId);
	}
	template <typename T = void> T SyncTimeAndGetWorld() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC71E8))(this);
	}
	template <typename T = void> T OnServerErrorCmd(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC8738))(this, data);
	}
	template <typename T = void> T OnUpdateWorldCmd(Il2CppList<void*>* blueprints) {
		return ((T (*)(BaseClientWorld*, Il2CppList<void*>*))(Il2CppBase() + 0xFC8844))(this, blueprints);
	}
	template <typename T = void> T SendPlayerReady() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC8CF0))(this);
	}
	template <typename T = uintptr_t> T OnLocation(uintptr_t location) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC8F68))(this, location);
	}
	template <typename T = uintptr_t> T OnMailMessage(uintptr_t mailEntity) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC8F70))(this, mailEntity);
	}
	template <typename T = void> T OnMailMessageUpdated() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC9008))(this);
	}
	template <typename T = void> T OnSeasonEventUpdated() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC900C))(this);
	}
	template <typename T = void> T OnHistoryEntity(uintptr_t historyEntity) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC9010))(this, historyEntity);
	}
	template <typename T = void> T OnStoreSalesEntityReceived(uintptr_t world, uintptr_t storeSalesEntity) {
		return ((T (*)(BaseClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xFC9014))(this, world, storeSalesEntity);
	}
	template <typename T = void> T OnServerChatMessage(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC9108))(this, data);
	}
	template <typename T = void> T OnServerNotification(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC91C8))(this, data);
	}
	template <typename T = void> T ResetWasDeadWhenLoad() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC9280))(this);
	}
	template <typename T = void> T OnOpenInventoryContainer(uintptr_t data) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFC9314))(this, data);
	}

};

}
