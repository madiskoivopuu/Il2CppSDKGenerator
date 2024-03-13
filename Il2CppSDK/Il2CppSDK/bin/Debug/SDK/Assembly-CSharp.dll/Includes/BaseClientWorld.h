#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWorld.h" 

class BaseClientWorld : public BaseWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseClientWorld"));
	}

	template <typename T = ClientDataContexts*> T& DataContexts() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = InputContext*> T& input() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = GameContext*> T& game() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = ActionContext*> T& action() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = InventorySlotContext*> T& inventorySlots() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = MagicContext*> T& magic() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = MagicTriggerContext*> T& magicTrigger() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = QuestContext*> T& quests() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = DialogueContext*> T& dialogues() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = EventContext*> T& events() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = CooldownContext*> T& cooldowns() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = ModifierContext*> T& modifiers() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = HistoryContext*> T& history() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = PlayerContext*> T& _players() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = ClanContext*> T& _clans() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = GuildContext*> T& _guilds() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = GuildQuestContext*> T& _guildQuests() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = PvPContext*> T& _pvps() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = InviteContext*> T& _invites() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = GuildInviteContext*> T& _guildInvites() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = DiplomacyContext*> T& _diplomacies() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = TournamentContext*> T& _tournaments() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Store2DataContext*> T& _store2Data() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = ClientSharedContexts*> T& SharedContexts() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = WarningHookDelegate*> T& ShowWarningHook() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int64_t> T& AccountId() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int64_t> T& SessionId() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = ConfigFromServer*> T& ConfigFromServer() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = ClientAnalyticsManager*> T& Analytics() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = UdpClientListener*> T& Listener() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = ClientTimeManager*> T& ClientTimeManager() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = ChatManager*> T& ChatManager() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = RelationshipManager*> T& Relationship() {
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
	template <typename T = Nullable1bool>*> T& WasSendWorld() {
		return *(T*)((uintptr_t)this + 0x28B);
	}
	template <typename T = bool> T& WasConnected() {
		return *(T*)((uintptr_t)this + 0x28D);
	}
	template <typename T = bool> T& WasDeadWhenLoad() {
		return *(T*)((uintptr_t)this + 0x28E);
	}
	template <typename T = Action1Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*>*> T& OnWorldCreate() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = Nullable1int64_t>*> static T& ServerClientTimeDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BugreportUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _baseCommandsActions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = ClientDataContexts*> T get_DataContexts() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCEA0))(this);
	}
	template <typename T = void> T set_DataContexts(ClientDataContexts* value) {
		return ((T (*)(BaseClientWorld*, ClientDataContexts*))(Il2CppBase() + 0xFBCEA8))(this, value);
	}
	template <typename T = BlueprintDataContext*> T get_blueprint() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCEB0))(this);
	}
	template <typename T = RecipeDataContext*> T get_recipe() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCECC))(this);
	}
	template <typename T = ItemDataContext*> T get_item() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCEE8))(this);
	}
	template <typename T = GameDataContext*> T get_gameData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF04))(this);
	}
	template <typename T = RandomGroupDataContext*> T get_randomGroup() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF20))(this);
	}
	template <typename T = ActionDataContext*> T get_actionData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF3C))(this);
	}
	template <typename T = MagicDataContext*> T get_magicData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF58))(this);
	}
	template <typename T = MagicTriggerDataContext*> T get_magicTriggerData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF74))(this);
	}
	template <typename T = QuestDataContext*> T get_questsData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF90))(this);
	}
	template <typename T = TournamentDataContext*> T get_tournamentsData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCFAC))(this);
	}
	template <typename T = DialogueDataContext*> T get_dialoguesData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCFC8))(this);
	}
	template <typename T = ConditionContext*> T get_conditions() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCFE4))(this);
	}
	template <typename T = ConfigsContext*> T get_configs() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD000))(this);
	}
	template <typename T = SeasonDataContext*> T get_season() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD01C))(this);
	}
	template <typename T = BattlePassDataContext*> T get_battlePass() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD038))(this);
	}
	template <typename T = LobbyDataContext*> T get_lobbyData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD054))(this);
	}
	template <typename T = InventorySlotDataContext*> T get_inventorySlotsData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD070))(this);
	}
	template <typename T = CurrencyDataContext*> T get_currency() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD08C))(this);
	}
	template <typename T = TrophyRoadDataContext*> T get_trophyRoad() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD0A8))(this);
	}
	template <typename T = GameDataContext*> T get_mapData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD0C4))(this);
	}
	template <typename T = EffectDataContext*> T get_effectData() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD0E0))(this);
	}
	template <typename T = InputContext*> T get_input() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD0FC))(this);
	}
	template <typename T = void> T set_input(InputContext* value) {
		return ((T (*)(BaseClientWorld*, InputContext*))(Il2CppBase() + 0xFBD104))(this, value);
	}
	template <typename T = GameContext*> T get_game() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD10C))(this);
	}
	template <typename T = void> T set_game(GameContext* value) {
		return ((T (*)(BaseClientWorld*, GameContext*))(Il2CppBase() + 0xFBD114))(this, value);
	}
	template <typename T = ActionContext*> T get_action() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD11C))(this);
	}
	template <typename T = void> T set_action(ActionContext* value) {
		return ((T (*)(BaseClientWorld*, ActionContext*))(Il2CppBase() + 0xFBD124))(this, value);
	}
	template <typename T = InventorySlotContext*> T get_inventorySlots() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD12C))(this);
	}
	template <typename T = void> T set_inventorySlots(InventorySlotContext* value) {
		return ((T (*)(BaseClientWorld*, InventorySlotContext*))(Il2CppBase() + 0xFBD134))(this, value);
	}
	template <typename T = MagicContext*> T get_magic() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD13C))(this);
	}
	template <typename T = void> T set_magic(MagicContext* value) {
		return ((T (*)(BaseClientWorld*, MagicContext*))(Il2CppBase() + 0xFBD144))(this, value);
	}
	template <typename T = MagicTriggerContext*> T get_magicTrigger() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD14C))(this);
	}
	template <typename T = void> T set_magicTrigger(MagicTriggerContext* value) {
		return ((T (*)(BaseClientWorld*, MagicTriggerContext*))(Il2CppBase() + 0xFBD154))(this, value);
	}
	template <typename T = QuestContext*> T get_quests() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD15C))(this);
	}
	template <typename T = void> T set_quests(QuestContext* value) {
		return ((T (*)(BaseClientWorld*, QuestContext*))(Il2CppBase() + 0xFBD164))(this, value);
	}
	template <typename T = DialogueContext*> T get_dialogues() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD16C))(this);
	}
	template <typename T = void> T set_dialogues(DialogueContext* value) {
		return ((T (*)(BaseClientWorld*, DialogueContext*))(Il2CppBase() + 0xFBD174))(this, value);
	}
	template <typename T = EventContext*> T get_events() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD17C))(this);
	}
	template <typename T = void> T set_events(EventContext* value) {
		return ((T (*)(BaseClientWorld*, EventContext*))(Il2CppBase() + 0xFBD184))(this, value);
	}
	template <typename T = CooldownContext*> T get_cooldowns() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD18C))(this);
	}
	template <typename T = void> T set_cooldowns(CooldownContext* value) {
		return ((T (*)(BaseClientWorld*, CooldownContext*))(Il2CppBase() + 0xFBD194))(this, value);
	}
	template <typename T = ModifierContext*> T get_modifiers() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD19C))(this);
	}
	template <typename T = void> T set_modifiers(ModifierContext* value) {
		return ((T (*)(BaseClientWorld*, ModifierContext*))(Il2CppBase() + 0xFBD1A4))(this, value);
	}
	template <typename T = HistoryContext*> T get_history() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1AC))(this);
	}
	template <typename T = void> T set_history(HistoryContext* value) {
		return ((T (*)(BaseClientWorld*, HistoryContext*))(Il2CppBase() + 0xFBD1B4))(this, value);
	}
	template <typename T = PlayerContext*> T get_players() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1C4))(this);
	}
	template <typename T = ClanContext*> T get_clans() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1CC))(this);
	}
	template <typename T = GuildContext*> T get_guilds() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1D4))(this);
	}
	template <typename T = GuildQuestContext*> T get_guildQuests() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1DC))(this);
	}
	template <typename T = PvPContext*> T get_pvps() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1E4))(this);
	}
	template <typename T = InviteContext*> T get_invites() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1EC))(this);
	}
	template <typename T = GuildInviteContext*> T get_guildInvites() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1F4))(this);
	}
	template <typename T = DiplomacyContext*> T get_diplomacies() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1FC))(this);
	}
	template <typename T = TournamentContext*> T get_tournaments() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD204))(this);
	}
	template <typename T = Store2DataContext*> T get_store2Data() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD20C))(this);
	}
	template <typename T = ClientSharedContexts*> T get_SharedContexts() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD214))(this);
	}
	template <typename T = void> T set_SharedContexts(ClientSharedContexts* value) {
		return ((T (*)(BaseClientWorld*, ClientSharedContexts*))(Il2CppBase() + 0xFBD21C))(this, value);
	}
	template <typename T = TempBuffDataContext*> T get_tempBuff() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD22C))(this);
	}
	template <typename T = ServerInfoContext*> T get_serverInfo() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD248))(this);
	}
	template <typename T = ChatContext*> T get_chat() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD264))(this);
	}
	template <typename T = ContactsContext*> T get_contacts() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD280))(this);
	}
	template <typename T = AnalyticsContext*> T get_analytics() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD29C))(this);
	}
	template <typename T = NotificationContext*> T get_notifications() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD2B8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_allContexts() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD2D4))(this);
	}
	template <typename T = void> T CreateContexts() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD940))(this);
	}
	template <typename T = void> T OnActionCreated(ActionEntity* actionEntity) {
		return ((T (*)(BaseClientWorld*, ActionEntity*))(Il2CppBase() + 0xFBDF80))(this, actionEntity);
	}
	template <typename T = void> T add_ShowWarningHook(WarningHookDelegate* value) {
		return ((T (*)(BaseClientWorld*, WarningHookDelegate*))(Il2CppBase() + 0xFBDF84))(this, value);
	}
	template <typename T = void> T remove_ShowWarningHook(WarningHookDelegate* value) {
		return ((T (*)(BaseClientWorld*, WarningHookDelegate*))(Il2CppBase() + 0xFBE028))(this, value);
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
	template <typename T = AccountEntity*> T get_OwnAccount() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE0EC))(this);
	}
	template <typename T = PlayerEntity*> T get_OwnPlayer() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE108))(this);
	}
	template <typename T = ClanEntity*> T get_OwnClan() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE134))(this);
	}
	template <typename T = GuildEntity*> T get_OwnGuild() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE160))(this);
	}
	template <typename T = PvPEntity*> T get_OwnPvP() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE18C))(this);
	}
	template <typename T = TournamentEntity*> T get_OwnTournament() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE1B8))(this);
	}
	template <typename T = bool> T IsLeader() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE1E4))(this);
	}
	template <typename T = ConfigFromServer*> T get_ConfigFromServer() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE210))(this);
	}
	template <typename T = void> T set_ConfigFromServer(ConfigFromServer* value) {
		return ((T (*)(BaseClientWorld*, ConfigFromServer*))(Il2CppBase() + 0xFBE220))(this, value);
	}
	template <typename T = ClientAnalyticsManager*> T get_Analytics() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE250))(this);
	}
	template <typename T = UdpClientListener*> T get_Listener() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE258))(this);
	}
	template <typename T = void> T set_Listener(UdpClientListener* value) {
		return ((T (*)(BaseClientWorld*, UdpClientListener*))(Il2CppBase() + 0xFBE260))(this, value);
	}
	template <typename T = ClientTimeManager*> T get_ClientTimeManager() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE270))(this);
	}
	template <typename T = void> T set_ClientTimeManager(ClientTimeManager* value) {
		return ((T (*)(BaseClientWorld*, ClientTimeManager*))(Il2CppBase() + 0xFBE278))(this, value);
	}
	template <typename T = ChatManager*> T get_ChatManager() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE288))(this);
	}
	template <typename T = void> T set_ChatManager(ChatManager* value) {
		return ((T (*)(BaseClientWorld*, ChatManager*))(Il2CppBase() + 0xFBE290))(this, value);
	}
	template <typename T = RelationshipManager*> T get_Relationship() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE2A0))(this);
	}
	template <typename T = void> T set_Relationship(RelationshipManager* value) {
		return ((T (*)(BaseClientWorld*, RelationshipManager*))(Il2CppBase() + 0xFBE2A8))(this, value);
	}
	template <typename T = GameContext*> T get_MainContext() {
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
	template <typename T = uintptr_t> T Create(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((T (*)(BaseClientWorld*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0x0))(this, blueprints);
	}
	template <typename T = GameEntity*> T GetAvatarExperience() {
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
	template <typename T = void> T OnCreateTransaction(TransactionEntity* transaction) {
		return ((T (*)(BaseClientWorld*, TransactionEntity*))(Il2CppBase() + 0xFBEE88))(this, transaction);
	}
	template <typename T = void> T OnCompleteTransaction(TransactionEntity* transaction) {
		return ((T (*)(BaseClientWorld*, TransactionEntity*))(Il2CppBase() + 0xFBEFD8))(this, transaction);
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
	template <typename T = Nullable1bool>*> T get_WasSendWorld() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF88C))(this);
	}
	template <typename T = void> T set_WasSendWorld(Nullable1bool>* value) {
		return ((T (*)(BaseClientWorld*, Nullable1bool>*))(Il2CppBase() + 0xFBF898))(this, value);
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
	template <typename T = void> T add_OnWorldCreate(Action1Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*>* value) {
		return ((T (*)(BaseClientWorld*, Action1Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*>*))(Il2CppBase() + 0xFBF8CC))(this, value);
	}
	template <typename T = void> T remove_OnWorldCreate(Action1Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*>* value) {
		return ((T (*)(BaseClientWorld*, Action1Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*>*))(Il2CppBase() + 0xFBF970))(this, value);
	}
	template <typename T = void> T OnConnected(uintptr_t peer) {
		return ((T (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBFA14))(this, peer);
	}
	template <typename T = void> T OnGradeUpPetSkillResult(GradeUpPetSkillDataResult* data) {
		return ((T (*)(BaseClientWorld*, GradeUpPetSkillDataResult*))(Il2CppBase() + 0xFC346C))(this, data);
	}
	template <typename T = void> T OnLinkToKefirIdResponseResult(LinkToKefirIdResponseData* data) {
		return ((T (*)(BaseClientWorld*, LinkToKefirIdResponseData*))(Il2CppBase() + 0xFC3470))(this, data);
	}
	template <typename T = void> T OnSetDamageShield(DamageShieldData* data) {
		return ((T (*)(BaseClientWorld*, DamageShieldData*))(Il2CppBase() + 0xFC360C))(this, data);
	}
	template <typename T = void> T OnWorkerRename() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC376C))(this);
	}
	template <typename T = void> T OnPlayerRename(ErrorCodes* errorCode) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC3894))(this, errorCode);
	}
	template <typename T = void> T OnClanRename(ErrorCodes* errorCode) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC39D4))(this, errorCode);
	}
	template <typename T = void> T OnExperience(ExperienceData* data) {
		return ((T (*)(BaseClientWorld*, ExperienceData*))(Il2CppBase() + 0xFC3B14))(this, data);
	}
	template <typename T = void> T OnInventoryUpdate(InventoryData* data, int64_t updateTime) {
		return ((T (*)(BaseClientWorld*, InventoryData*, int64_t))(Il2CppBase() + 0xFC3B74))(this, data, updateTime);
	}
	template <typename T = void> T OnPetSlotChangedDurability(InventorySlotEntity* slot, float oldValue, float newValue) {
		return ((T (*)(BaseClientWorld*, InventorySlotEntity*, float, float))(Il2CppBase() + 0xFC3F0C))(this, slot, oldValue, newValue);
	}
	template <typename T = void> T OnArmingRunes(ArmingRunesData* data) {
		return ((T (*)(BaseClientWorld*, ArmingRunesData*))(Il2CppBase() + 0xFC3F10))(this, data);
	}
	template <typename T = void> T OnChestMarker(ChestMarkerData* data) {
		return ((T (*)(BaseClientWorld*, ChestMarkerData*))(Il2CppBase() + 0xFC3FA8))(this, data);
	}
	template <typename T = void> T OnClassRuneChanged(ClassRuneChangedData* data) {
		return ((T (*)(BaseClientWorld*, ClassRuneChangedData*))(Il2CppBase() + 0xFC400C))(this, data);
	}
	template <typename T = void> T OnClassRuneDeactivated(ClassRuneDeactivatedData* data) {
		return ((T (*)(BaseClientWorld*, ClassRuneDeactivatedData*))(Il2CppBase() + 0xFC435C))(this, data);
	}
	template <typename T = void> T OnFuseResult(FuseData* data) {
		return ((T (*)(BaseClientWorld*, FuseData*))(Il2CppBase() + 0xFC4744))(this, data);
	}
	template <typename T = void> T OnRemoveEntityCmd(RemoveEntityData* data, uintptr_t peer) {
		return ((T (*)(BaseClientWorld*, RemoveEntityData*, uintptr_t))(Il2CppBase() + 0xFC4748))(this, data, peer);
	}
	template <typename T = void> T OnLocalActionStart(LocalActionStartData* data) {
		return ((T (*)(BaseClientWorld*, LocalActionStartData*))(Il2CppBase() + 0xFC4A34))(this, data);
	}
	template <typename T = void> T OnInterruptAction(InterruptActionData* data) {
		return ((T (*)(BaseClientWorld*, InterruptActionData*))(Il2CppBase() + 0xFC4E1C))(this, data);
	}
	template <typename T = void> T OnActionCmd(ActionData* data) {
		return ((T (*)(BaseClientWorld*, ActionData*))(Il2CppBase() + 0xFC4E84))(this, data);
	}
	template <typename T = void> T OnCooldownCmd(CooldownData* data) {
		return ((T (*)(BaseClientWorld*, CooldownData*))(Il2CppBase() + 0xFC50B8))(this, data);
	}
	template <typename T = void> T OnReleaseActorCmd(int64_t serverId) {
		return ((T (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFC5148))(this, serverId);
	}
	template <typename T = void> T OnGuildId(GuildIdData* data) {
		return ((T (*)(BaseClientWorld*, GuildIdData*))(Il2CppBase() + 0xFC51D0))(this, data);
	}
	template <typename T = void> T OnStartGuildQuestResult(StartGuildQuestData* data) {
		return ((T (*)(BaseClientWorld*, StartGuildQuestData*))(Il2CppBase() + 0xFC5234))(this, data);
	}
	template <typename T = void> T OnStartGuildQuestResponse(ErrorCodes* errorCode, int64_t guildQuestId) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0xFC5238))(this, errorCode, guildQuestId);
	}
	template <typename T = void> T OnFuseMountResult(FuseMountResultData* data) {
		return ((T (*)(BaseClientWorld*, FuseMountResultData*))(Il2CppBase() + 0xFC523C))(this, data);
	}
	template <typename T = void> T OnScoutingResult(ScoutingData* data) {
		return ((T (*)(BaseClientWorld*, ScoutingData*))(Il2CppBase() + 0xFC5240))(this, data);
	}
	template <typename T = void> T OnResourceChanged(ChangedResourceData* data) {
		return ((T (*)(BaseClientWorld*, ChangedResourceData*))(Il2CppBase() + 0xFC5244))(this, data);
	}
	template <typename T = void> T OnNetworkReceive(uintptr_t peer, uintptr_t reader) {
		return ((T (*)(BaseClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xFC53E4))(this, peer, reader);
	}
	template <typename T = void> T OnOpenWindow(OpenWindowData* data) {
		return ((T (*)(BaseClientWorld*, OpenWindowData*))(Il2CppBase() + 0xFC5604))(this, data);
	}
	template <typename T = bool> T OnCommand(Commands* commandId, uintptr_t reader, uintptr_t peer) {
		return ((T (*)(BaseClientWorld*, Commands*, uintptr_t, uintptr_t))(Il2CppBase() + 0xFC56CC))(this, commandId, reader, peer);
	}
	template <typename T = void> T OnSkipQuestResult(SkipQuestData* data) {
		return ((T (*)(BaseClientWorld*, SkipQuestData*))(Il2CppBase() + 0xFC57B0))(this, data);
	}
	template <typename T = void> T OnHideHead(HideHeadData* data) {
		return ((T (*)(BaseClientWorld*, HideHeadData*))(Il2CppBase() + 0xFC57B4))(this, data);
	}
	template <typename T = void> T OnHidePet(HidePetData* data) {
		return ((T (*)(BaseClientWorld*, HidePetData*))(Il2CppBase() + 0xFC5864))(this, data);
	}
	template <typename T = void> T OnHideBag(HideBagData* data) {
		return ((T (*)(BaseClientWorld*, HideBagData*))(Il2CppBase() + 0xFC5914))(this, data);
	}
	template <typename T = GameEntity*> T OnTeleport(TeleportData* data) {
		return ((T (*)(BaseClientWorld*, TeleportData*))(Il2CppBase() + 0xFC59C4))(this, data);
	}
	template <typename T = void> T OnControlled(LostControlData* data) {
		return ((T (*)(BaseClientWorld*, LostControlData*))(Il2CppBase() + 0xFC5A04))(this, data);
	}
	template <typename T = void> T OnClaimQuestResult(ClaimQuestData* data) {
		return ((T (*)(BaseClientWorld*, ClaimQuestData*))(Il2CppBase() + 0xFC5A08))(this, data);
	}
	template <typename T = void> T OnBuildEntityResult(BuildEntityResultData* data) {
		return ((T (*)(BaseClientWorld*, BuildEntityResultData*))(Il2CppBase() + 0xFC5A0C))(this, data);
	}
	template <typename T = void> T OnAutoDestruction(AutoDestructionData* data) {
		return ((T (*)(BaseClientWorld*, AutoDestructionData*))(Il2CppBase() + 0xFC5A10))(this, data);
	}
	template <typename T = void> T OnDialogueClose(DialogueCloseData* data) {
		return ((T (*)(BaseClientWorld*, DialogueCloseData*))(Il2CppBase() + 0xFC5AA8))(this, data);
	}
	template <typename T = void> T OnDialogueShow(DialogueShowData* data) {
		return ((T (*)(BaseClientWorld*, DialogueShowData*))(Il2CppBase() + 0xFC5AE0))(this, data);
	}
	template <typename T = GameEntity*> T OnPlayerName(PlayerNameData* data) {
		return ((T (*)(BaseClientWorld*, PlayerNameData*))(Il2CppBase() + 0xFC5C20))(this, data);
	}
	template <typename T = GameEntity*> T OnGender(GenderData* data) {
		return ((T (*)(BaseClientWorld*, GenderData*))(Il2CppBase() + 0xFC5D64))(this, data);
	}
	template <typename T = void> T OnCreateMagic(int64_t updateTime, CreateMagicData* data) {
		return ((T (*)(BaseClientWorld*, int64_t, CreateMagicData*))(Il2CppBase() + 0xFC5DC4))(this, updateTime, data);
	}
	template <typename T = void> T OnUpdateMagic(int64_t updateTime, UpdateMagicData* data) {
		return ((T (*)(BaseClientWorld*, int64_t, UpdateMagicData*))(Il2CppBase() + 0xFC5EE4))(this, updateTime, data);
	}
	template <typename T = void> T OnUpdateTrigger(UpdateMagicTriggerData* data) {
		return ((T (*)(BaseClientWorld*, UpdateMagicTriggerData*))(Il2CppBase() + 0xFC5F34))(this, data);
	}
	template <typename T = void> T OnSetHotPredition(HotPredictionData* data) {
		return ((T (*)(BaseClientWorld*, HotPredictionData*))(Il2CppBase() + 0xFC5FA4))(this, data);
	}
	template <typename T = void> T OnDestoryMagic(int64_t updateTime, DestroyMagicData* data) {
		return ((T (*)(BaseClientWorld*, int64_t, DestroyMagicData*))(Il2CppBase() + 0xFC60D0))(this, updateTime, data);
	}
	template <typename T = void> T OnCreateQuest(CreateQuestData* data) {
		return ((T (*)(BaseClientWorld*, CreateQuestData*))(Il2CppBase() + 0xFC616C))(this, data);
	}
	template <typename T = void> T OnUpdateQuest(UpdateQuestData* data) {
		return ((T (*)(BaseClientWorld*, UpdateQuestData*))(Il2CppBase() + 0xFC6254))(this, data);
	}
	template <typename T = void> T OnDestoryQuest(DestroyQuestData* data) {
		return ((T (*)(BaseClientWorld*, DestroyQuestData*))(Il2CppBase() + 0xFC639C))(this, data);
	}
	template <typename T = bool> T OnServerWarningMessage(WarningDataForClient* data) {
		return ((T (*)(BaseClientWorld*, WarningDataForClient*))(Il2CppBase() + 0xFC63F4))(this, data);
	}
	template <typename T = void> T OnNofityQuest(NotifyQuestData* data) {
		return ((T (*)(BaseClientWorld*, NotifyQuestData*))(Il2CppBase() + 0xFC65A8))(this, data);
	}
	template <typename T = void> T OnCreateClan(ErrorCodes* error) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC65AC))(this, error);
	}
	template <typename T = void> T OnDisbandClan(ErrorCodes* error) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC6844))(this, error);
	}
	template <typename T = void> T OnReceiveInviteToClanCallback(ErrorCodes* code, int64_t clanId) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0xFC696C))(this, code, clanId);
	}
	template <typename T = void> T OnClanJoinRequestCallbackReceived(ErrorCodes* error) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC6A6C))(this, error);
	}
	template <typename T = void> T OnAcceptInvite(ErrorCodes* error) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC6D68))(this, error);
	}
	template <typename T = void> T OnNewsEntityReceived(NewsEntity* newsEntity) {
		return ((T (*)(BaseClientWorld*, NewsEntity*))(Il2CppBase() + 0xFC6FE0))(this, newsEntity);
	}
	template <typename T = void> T OnAccountReceived(AccountEntity* account) {
		return ((T (*)(BaseClientWorld*, AccountEntity*))(Il2CppBase() + 0xFC70D4))(this, account);
	}
	template <typename T = void> T OnUpdateStoreReceived() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC726C))(this);
	}
	template <typename T = void> T OnFindUserForInviteCallback(ErrorCodes* code, int64_t playerId) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0xFC7304))(this, code, playerId);
	}
	template <typename T = void> T OnLinkConflictCallback(int64_t playerId) {
		return ((T (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFC738C))(this, playerId);
	}
	template <typename T = void> T OnReceiveRandomInvitablePlayers(Il2CppArray<uintptr_t>* ids) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFC7390))(this, ids);
	}
	template <typename T = void> T OnFindGuildForInviteResponse(ErrorCodes* errorCode, int64_t guildId) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0xFC7418))(this, errorCode, guildId);
	}
	template <typename T = void> T OnGuildChangeUserRoleResponse(ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC74A0))(this, code);
	}
	template <typename T = void> T OnGuildKickUserResponse(ErrorCodes* code, int64_t guildId) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0xFC7528))(this, code, guildId);
	}
	template <typename T = void> T OnCreateGuildResponse(ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC75E4))(this, code);
	}
	template <typename T = void> T OnUpdateGuildResponse(ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC7700))(this, code);
	}
	template <typename T = void> T OnGuildAcceptInviteResponse(ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC77F8))(this, code);
	}
	template <typename T = void> T OnGuildDeleteInviteResponse(ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC7914))(this, code);
	}
	template <typename T = void> T OnGuildCreateInviteResponse(ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC7A0C))(this, code);
	}
	template <typename T = void> T OnGuildJoinResponse(ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC7B04))(this, code);
	}
	template <typename T = void> T OnRecommendedGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0xFC7C20))(this, ids, code);
	}
	template <typename T = void> T OnMainTopGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0xFC7D6C))(this, ids, code);
	}
	template <typename T = void> T OnGlobalTopGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0xFC7EB8))(this, ids, code);
	}
	template <typename T = void> T OnMainPrevGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0xFC8004))(this, ids, code);
	}
	template <typename T = void> T OnGlobalPrevGuildsResponse(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0xFC8150))(this, ids, code);
	}
	template <typename T = void> T OnGuildResetBossLocation(ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*))(Il2CppBase() + 0xFC829C))(this, code);
	}
	template <typename T = void> T OnGlobalTournamentsPlayersFound(Il2CppArray<uintptr_t>* ids, ErrorCodes* code) {
		return ((T (*)(BaseClientWorld*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0xFC8394))(this, ids, code);
	}
	template <typename T = void> T OnDisbandGuildResponse(ErrorCodes* code, int64_t guildId) {
		return ((T (*)(BaseClientWorld*, ErrorCodes*, int64_t))(Il2CppBase() + 0xFC8534))(this, code, guildId);
	}
	template <typename T = void> T SyncTimeAndGetWorld() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC71E8))(this);
	}
	template <typename T = void> T OnServerErrorCmd(ErrorData* data) {
		return ((T (*)(BaseClientWorld*, ErrorData*))(Il2CppBase() + 0xFC8738))(this, data);
	}
	template <typename T = void> T OnUpdateWorldCmd(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((T (*)(BaseClientWorld*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0xFC8844))(this, blueprints);
	}
	template <typename T = void> T SendPlayerReady() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC8CF0))(this);
	}
	template <typename T = LocationEntity*> T OnLocation(LocationEntity* location) {
		return ((T (*)(BaseClientWorld*, LocationEntity*))(Il2CppBase() + 0xFC8F68))(this, location);
	}
	template <typename T = MailEntity*> T OnMailMessage(MailEntity* mailEntity) {
		return ((T (*)(BaseClientWorld*, MailEntity*))(Il2CppBase() + 0xFC8F70))(this, mailEntity);
	}
	template <typename T = void> T OnMailMessageUpdated() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC9008))(this);
	}
	template <typename T = void> T OnSeasonEventUpdated() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC900C))(this);
	}
	template <typename T = void> T OnHistoryEntity(HistoryEntity* historyEntity) {
		return ((T (*)(BaseClientWorld*, HistoryEntity*))(Il2CppBase() + 0xFC9010))(this, historyEntity);
	}
	template <typename T = void> T OnStoreSalesEntityReceived(ICommonClientWorld* world, StoreSalesEntity* storeSalesEntity) {
		return ((T (*)(BaseClientWorld*, ICommonClientWorld*, StoreSalesEntity*))(Il2CppBase() + 0xFC9014))(this, world, storeSalesEntity);
	}
	template <typename T = void> T OnServerChatMessage(ServerChatMessageData* data) {
		return ((T (*)(BaseClientWorld*, ServerChatMessageData*))(Il2CppBase() + 0xFC9108))(this, data);
	}
	template <typename T = void> T OnServerNotification(ServerNotificationData* data) {
		return ((T (*)(BaseClientWorld*, ServerNotificationData*))(Il2CppBase() + 0xFC91C8))(this, data);
	}
	template <typename T = void> T ResetWasDeadWhenLoad() {
		return ((T (*)(BaseClientWorld*))(Il2CppBase() + 0xFC9280))(this);
	}
	template <typename T = void> T OnOpenInventoryContainer(OpenInventoryContainerResult* data) {
		return ((T (*)(BaseClientWorld*, OpenInventoryContainerResult*))(Il2CppBase() + 0xFC9314))(this, data);
	}

};

