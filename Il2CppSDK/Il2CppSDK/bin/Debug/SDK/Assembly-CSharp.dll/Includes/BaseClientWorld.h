#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseWorld.h" 

class BaseClientWorld : public BaseWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseClientWorld"));
	}

	template <typename R = ClientDataContexts*> R& DataContexts() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = InputContext*> R& input() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = GameContext*> R& game() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = ActionContext*> R& action() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = InventorySlotContext*> R& inventorySlots() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = MagicContext*> R& magic() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = MagicTriggerContext*> R& magicTrigger() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = QuestContext*> R& quests() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = DialogueContext*> R& dialogues() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = EventContext*> R& events() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = CooldownContext*> R& cooldowns() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = ModifierContext*> R& modifiers() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = HistoryContext*> R& history() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = PlayerContext*> R& _players() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = ClanContext*> R& _clans() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = GuildContext*> R& _guilds() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = GuildQuestContext*> R& _guildQuests() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = PvPContext*> R& _pvps() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = InviteContext*> R& _invites() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = GuildInviteContext*> R& _guildInvites() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = DiplomacyContext*> R& _diplomacies() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = TournamentContext*> R& _tournaments() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = Store2DataContext*> R& _store2Data() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = ClientSharedContexts*> R& SharedContexts() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = WarningHookDelegate*> R& ShowWarningHook() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = int64_t> R& AccountId() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = int64_t> R& SessionId() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = ConfigFromServer*> R& ConfigFromServer() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = ClientAnalyticsManager*> R& Analytics() {
		return *(R*)((uintptr_t)this + 0x240);
	}
	template <typename R = UdpClientListener*> R& Listener() {
		return *(R*)((uintptr_t)this + 0x248);
	}
	template <typename R = ClientTimeManager*> R& ClientTimeManager() {
		return *(R*)((uintptr_t)this + 0x250);
	}
	template <typename R = ChatManager*> R& ChatManager() {
		return *(R*)((uintptr_t)this + 0x258);
	}
	template <typename R = RelationshipManager*> R& Relationship() {
		return *(R*)((uintptr_t)this + 0x260);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& _names() {
		return *(R*)((uintptr_t)this + 0x268);
	}
	template <typename R = uintptr_t> R& _clientWrapper() {
		return *(R*)((uintptr_t)this + 0x270);
	}
	template <typename R = int64_t> R& BestLag() {
		return *(R*)((uintptr_t)this + 0x278);
	}
	template <typename R = int64_t> R& _lag() {
		return *(R*)((uintptr_t)this + 0x280);
	}
	template <typename R = bool> R& WasReceivedWorld() {
		return *(R*)((uintptr_t)this + 0x288);
	}
	template <typename R = bool> R& WasSendReady() {
		return *(R*)((uintptr_t)this + 0x289);
	}
	template <typename R = bool> R& WasStoreUpdated() {
		return *(R*)((uintptr_t)this + 0x28A);
	}
	 Nullable1bool>*& WasSendWorld() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x28B);
	}
	template <typename R = bool> R& WasConnected() {
		return *(R*)((uintptr_t)this + 0x28D);
	}
	template <typename R = bool> R& WasDeadWhenLoad() {
		return *(R*)((uintptr_t)this + 0x28E);
	}
	 Action1Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*>*& OnWorldCreate() {
		return *(Action1Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*>**)((uintptr_t)this + 0x290);
	}
	 static Nullable1int64_t>*& ServerClientTimeDelta() {
		return *(Nullable1int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& BugreportUrl() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = Il2CppArray<Action4BaseClientWorld*, Commands*, uintptr_t, uintptr_t>*>*> static R& _baseCommandsActions() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename R = ClientDataContexts*> R get_DataContexts() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCEA0))(this);
	}
	template <typename R = void> R set_DataContexts(ClientDataContexts* value) {
		return ((R (*)(BaseClientWorld*, ClientDataContexts*))(Il2CppBase() + 0xFBCEA8))(this, value);
	}
	template <typename R = BlueprintDataContext*> R get_blueprint() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCEB0))(this);
	}
	template <typename R = RecipeDataContext*> R get_recipe() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCECC))(this);
	}
	template <typename R = ItemDataContext*> R get_item() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCEE8))(this);
	}
	template <typename R = GameDataContext*> R get_gameData() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF04))(this);
	}
	template <typename R = RandomGroupDataContext*> R get_randomGroup() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF20))(this);
	}
	template <typename R = ActionDataContext*> R get_actionData() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF3C))(this);
	}
	template <typename R = MagicDataContext*> R get_magicData() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF58))(this);
	}
	template <typename R = MagicTriggerDataContext*> R get_magicTriggerData() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF74))(this);
	}
	template <typename R = QuestDataContext*> R get_questsData() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCF90))(this);
	}
	template <typename R = TournamentDataContext*> R get_tournamentsData() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCFAC))(this);
	}
	template <typename R = DialogueDataContext*> R get_dialoguesData() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCFC8))(this);
	}
	template <typename R = ConditionContext*> R get_conditions() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBCFE4))(this);
	}
	template <typename R = ConfigsContext*> R get_configs() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD000))(this);
	}
	template <typename R = SeasonDataContext*> R get_season() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD01C))(this);
	}
	template <typename R = BattlePassDataContext*> R get_battlePass() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD038))(this);
	}
	template <typename R = LobbyDataContext*> R get_lobbyData() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD054))(this);
	}
	template <typename R = InventorySlotDataContext*> R get_inventorySlotsData() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD070))(this);
	}
	template <typename R = CurrencyDataContext*> R get_currency() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD08C))(this);
	}
	template <typename R = TrophyRoadDataContext*> R get_trophyRoad() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD0A8))(this);
	}
	template <typename R = GameDataContext*> R get_mapData() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD0C4))(this);
	}
	template <typename R = EffectDataContext*> R get_effectData() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD0E0))(this);
	}
	template <typename R = InputContext*> R get_input() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD0FC))(this);
	}
	template <typename R = void> R set_input(InputContext* value) {
		return ((R (*)(BaseClientWorld*, InputContext*))(Il2CppBase() + 0xFBD104))(this, value);
	}
	template <typename R = GameContext*> R get_game() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD10C))(this);
	}
	template <typename R = void> R set_game(GameContext* value) {
		return ((R (*)(BaseClientWorld*, GameContext*))(Il2CppBase() + 0xFBD114))(this, value);
	}
	template <typename R = ActionContext*> R get_action() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD11C))(this);
	}
	template <typename R = void> R set_action(ActionContext* value) {
		return ((R (*)(BaseClientWorld*, ActionContext*))(Il2CppBase() + 0xFBD124))(this, value);
	}
	template <typename R = InventorySlotContext*> R get_inventorySlots() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD12C))(this);
	}
	template <typename R = void> R set_inventorySlots(InventorySlotContext* value) {
		return ((R (*)(BaseClientWorld*, InventorySlotContext*))(Il2CppBase() + 0xFBD134))(this, value);
	}
	template <typename R = MagicContext*> R get_magic() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD13C))(this);
	}
	template <typename R = void> R set_magic(MagicContext* value) {
		return ((R (*)(BaseClientWorld*, MagicContext*))(Il2CppBase() + 0xFBD144))(this, value);
	}
	template <typename R = MagicTriggerContext*> R get_magicTrigger() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD14C))(this);
	}
	template <typename R = void> R set_magicTrigger(MagicTriggerContext* value) {
		return ((R (*)(BaseClientWorld*, MagicTriggerContext*))(Il2CppBase() + 0xFBD154))(this, value);
	}
	template <typename R = QuestContext*> R get_quests() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD15C))(this);
	}
	template <typename R = void> R set_quests(QuestContext* value) {
		return ((R (*)(BaseClientWorld*, QuestContext*))(Il2CppBase() + 0xFBD164))(this, value);
	}
	template <typename R = DialogueContext*> R get_dialogues() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD16C))(this);
	}
	template <typename R = void> R set_dialogues(DialogueContext* value) {
		return ((R (*)(BaseClientWorld*, DialogueContext*))(Il2CppBase() + 0xFBD174))(this, value);
	}
	template <typename R = EventContext*> R get_events() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD17C))(this);
	}
	template <typename R = void> R set_events(EventContext* value) {
		return ((R (*)(BaseClientWorld*, EventContext*))(Il2CppBase() + 0xFBD184))(this, value);
	}
	template <typename R = CooldownContext*> R get_cooldowns() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD18C))(this);
	}
	template <typename R = void> R set_cooldowns(CooldownContext* value) {
		return ((R (*)(BaseClientWorld*, CooldownContext*))(Il2CppBase() + 0xFBD194))(this, value);
	}
	template <typename R = ModifierContext*> R get_modifiers() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD19C))(this);
	}
	template <typename R = void> R set_modifiers(ModifierContext* value) {
		return ((R (*)(BaseClientWorld*, ModifierContext*))(Il2CppBase() + 0xFBD1A4))(this, value);
	}
	template <typename R = HistoryContext*> R get_history() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1AC))(this);
	}
	template <typename R = void> R set_history(HistoryContext* value) {
		return ((R (*)(BaseClientWorld*, HistoryContext*))(Il2CppBase() + 0xFBD1B4))(this, value);
	}
	template <typename R = PlayerContext*> R get_players() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1C4))(this);
	}
	template <typename R = ClanContext*> R get_clans() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1CC))(this);
	}
	template <typename R = GuildContext*> R get_guilds() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1D4))(this);
	}
	template <typename R = GuildQuestContext*> R get_guildQuests() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1DC))(this);
	}
	template <typename R = PvPContext*> R get_pvps() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1E4))(this);
	}
	template <typename R = InviteContext*> R get_invites() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1EC))(this);
	}
	template <typename R = GuildInviteContext*> R get_guildInvites() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1F4))(this);
	}
	template <typename R = DiplomacyContext*> R get_diplomacies() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD1FC))(this);
	}
	template <typename R = TournamentContext*> R get_tournaments() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD204))(this);
	}
	template <typename R = Store2DataContext*> R get_store2Data() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD20C))(this);
	}
	template <typename R = ClientSharedContexts*> R get_SharedContexts() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD214))(this);
	}
	template <typename R = void> R set_SharedContexts(ClientSharedContexts* value) {
		return ((R (*)(BaseClientWorld*, ClientSharedContexts*))(Il2CppBase() + 0xFBD21C))(this, value);
	}
	template <typename R = TempBuffDataContext*> R get_tempBuff() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD22C))(this);
	}
	template <typename R = ServerInfoContext*> R get_serverInfo() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD248))(this);
	}
	template <typename R = ChatContext*> R get_chat() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD264))(this);
	}
	template <typename R = ContactsContext*> R get_contacts() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD280))(this);
	}
	template <typename R = AnalyticsContext*> R get_analytics() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD29C))(this);
	}
	template <typename R = NotificationContext*> R get_notifications() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD2B8))(this);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R get_allContexts() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD2D4))(this);
	}
	template <typename R = void> R CreateContexts() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBD940))(this);
	}
	template <typename R = void> R OnActionCreated(ActionEntity* actionEntity) {
		return ((R (*)(BaseClientWorld*, ActionEntity*))(Il2CppBase() + 0xFBDF80))(this, actionEntity);
	}
	template <typename R = void> R add_ShowWarningHook(WarningHookDelegate* value) {
		return ((R (*)(BaseClientWorld*, WarningHookDelegate*))(Il2CppBase() + 0xFBDF84))(this, value);
	}
	template <typename R = void> R remove_ShowWarningHook(WarningHookDelegate* value) {
		return ((R (*)(BaseClientWorld*, WarningHookDelegate*))(Il2CppBase() + 0xFBE028))(this, value);
	}
	template <typename R = int64_t> R get_AccountId() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE0CC))(this);
	}
	template <typename R = void> R set_AccountId(int64_t value) {
		return ((R (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFBE0D4))(this, value);
	}
	template <typename R = int64_t> R get_SessionId() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE0DC))(this);
	}
	template <typename R = void> R set_SessionId(int64_t value) {
		return ((R (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFBE0E4))(this, value);
	}
	template <typename R = AccountEntity*> R get_OwnAccount() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE0EC))(this);
	}
	template <typename R = PlayerEntity*> R get_OwnPlayer() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE108))(this);
	}
	template <typename R = ClanEntity*> R get_OwnClan() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE134))(this);
	}
	template <typename R = GuildEntity*> R get_OwnGuild() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE160))(this);
	}
	template <typename R = PvPEntity*> R get_OwnPvP() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE18C))(this);
	}
	template <typename R = TournamentEntity*> R get_OwnTournament() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE1B8))(this);
	}
	template <typename R = bool> R IsLeader() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE1E4))(this);
	}
	template <typename R = ConfigFromServer*> R get_ConfigFromServer() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE210))(this);
	}
	template <typename R = void> R set_ConfigFromServer(ConfigFromServer* value) {
		return ((R (*)(BaseClientWorld*, ConfigFromServer*))(Il2CppBase() + 0xFBE220))(this, value);
	}
	template <typename R = ClientAnalyticsManager*> R get_Analytics() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE250))(this);
	}
	template <typename R = UdpClientListener*> R get_Listener() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE258))(this);
	}
	template <typename R = void> R set_Listener(UdpClientListener* value) {
		return ((R (*)(BaseClientWorld*, UdpClientListener*))(Il2CppBase() + 0xFBE260))(this, value);
	}
	template <typename R = ClientTimeManager*> R get_ClientTimeManager() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE270))(this);
	}
	template <typename R = void> R set_ClientTimeManager(ClientTimeManager* value) {
		return ((R (*)(BaseClientWorld*, ClientTimeManager*))(Il2CppBase() + 0xFBE278))(this, value);
	}
	template <typename R = ChatManager*> R get_ChatManager() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE288))(this);
	}
	template <typename R = void> R set_ChatManager(ChatManager* value) {
		return ((R (*)(BaseClientWorld*, ChatManager*))(Il2CppBase() + 0xFBE290))(this, value);
	}
	template <typename R = RelationshipManager*> R get_Relationship() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE2A0))(this);
	}
	template <typename R = void> R set_Relationship(RelationshipManager* value) {
		return ((R (*)(BaseClientWorld*, RelationshipManager*))(Il2CppBase() + 0xFBE2A8))(this, value);
	}
	template <typename R = GameContext*> R get_MainContext() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int64_t> R get_BestLag() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE8C0))(this);
	}
	template <typename R = void> R set_BestLag(int64_t value) {
		return ((R (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFBE8C8))(this, value);
	}
	template <typename R = void> R SetLag(int64_t lag) {
		return ((R (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFBE8D0))(this, lag);
	}
	template <typename R = void> R CalculateLag() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE95C))(this);
	}
	template <typename R = void> R AddSystems() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBE9A0))(this);
	}
	template <typename R = void> R Destroy() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBEC0C))(this);
	}
	template <typename R = uintptr_t> R get_peer() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBEC84))(this);
	}
	template <typename R = bool> R Send(uintptr_t writer, uintptr_t deliveryMethod) {
		return ((R (*)(BaseClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xFBECC0))(this, writer, deliveryMethod);
	}
	template <typename R = uintptr_t> R Create(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((R (*)(BaseClientWorld*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0x0))(this, blueprints);
	}
	template <typename R = GameEntity*> R GetAvatarExperience() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsClanOperationsLocked() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBECFC))(this);
	}
	template <typename R = bool> R get_IsBuilderLocked() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBED98))(this);
	}
	template <typename R = bool> R get_IsDiplomacyLocked() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBEDD4))(this);
	}
	template <typename R = bool> R get_IsGuildOperationsLocked() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBEE10))(this);
	}
	template <typename R = void> R OnCreateTransaction(TransactionEntity* transaction) {
		return ((R (*)(BaseClientWorld*, TransactionEntity*))(Il2CppBase() + 0xFBEE88))(this, transaction);
	}
	template <typename R = void> R OnCompleteTransaction(TransactionEntity* transaction) {
		return ((R (*)(BaseClientWorld*, TransactionEntity*))(Il2CppBase() + 0xFBEFD8))(this, transaction);
	}
	template <typename R = void> R SetOwnEntities() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF190))(this);
	}
	template <typename R = bool> R get_WasReceivedWorld() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF850))(this);
	}
	template <typename R = void> R set_WasReceivedWorld(bool value) {
		return ((R (*)(BaseClientWorld*, bool))(Il2CppBase() + 0xFBF858))(this, value);
	}
	template <typename R = bool> R get_WasSendReady() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF864))(this);
	}
	template <typename R = void> R set_WasSendReady(bool value) {
		return ((R (*)(BaseClientWorld*, bool))(Il2CppBase() + 0xFBF86C))(this, value);
	}
	template <typename R = bool> R get_WasStoreUpdated() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF878))(this);
	}
	template <typename R = void> R set_WasStoreUpdated(bool value) {
		return ((R (*)(BaseClientWorld*, bool))(Il2CppBase() + 0xFBF880))(this, value);
	}
	 Nullable1bool>* get_WasSendWorld() {
		return ((Nullable1bool>* (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF88C))(this);
	}
	template <typename R = void> R set_WasSendWorld(Nullable1bool>* value) {
		return ((R (*)(BaseClientWorld*, Nullable1bool>*))(Il2CppBase() + 0xFBF898))(this, value);
	}
	template <typename R = bool> R get_WasConnected() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF8A4))(this);
	}
	template <typename R = void> R set_WasConnected(bool value) {
		return ((R (*)(BaseClientWorld*, bool))(Il2CppBase() + 0xFBF8AC))(this, value);
	}
	template <typename R = bool> R get_WasDeadWhenLoad() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFBF8B8))(this);
	}
	template <typename R = void> R set_WasDeadWhenLoad(bool value) {
		return ((R (*)(BaseClientWorld*, bool))(Il2CppBase() + 0xFBF8C0))(this, value);
	}
	template <typename R = void> R add_OnWorldCreate(Action1Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*>* value) {
		return ((R (*)(BaseClientWorld*, Action1Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*>*))(Il2CppBase() + 0xFBF8CC))(this, value);
	}
	template <typename R = void> R remove_OnWorldCreate(Action1Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*>* value) {
		return ((R (*)(BaseClientWorld*, Action1Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*>*))(Il2CppBase() + 0xFBF970))(this, value);
	}
	template <typename R = void> R OnConnected(uintptr_t peer) {
		return ((R (*)(BaseClientWorld*, uintptr_t))(Il2CppBase() + 0xFBFA14))(this, peer);
	}
	template <typename R = void> R OnGradeUpPetSkillResult(GradeUpPetSkillDataResult* data) {
		return ((R (*)(BaseClientWorld*, GradeUpPetSkillDataResult*))(Il2CppBase() + 0xFC346C))(this, data);
	}
	template <typename R = void> R OnLinkToKefirIdResponseResult(LinkToKefirIdResponseData* data) {
		return ((R (*)(BaseClientWorld*, LinkToKefirIdResponseData*))(Il2CppBase() + 0xFC3470))(this, data);
	}
	template <typename R = void> R OnSetDamageShield(DamageShieldData* data) {
		return ((R (*)(BaseClientWorld*, DamageShieldData*))(Il2CppBase() + 0xFC360C))(this, data);
	}
	template <typename R = void> R OnWorkerRename() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFC376C))(this);
	}
	template <typename R = void> R OnPlayerRename(ProtoTools::ErrorCodes* errorCode) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC3894))(this, errorCode);
	}
	template <typename R = void> R OnClanRename(ProtoTools::ErrorCodes* errorCode) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC39D4))(this, errorCode);
	}
	template <typename R = void> R OnExperience(ExperienceData* data) {
		return ((R (*)(BaseClientWorld*, ExperienceData*))(Il2CppBase() + 0xFC3B14))(this, data);
	}
	template <typename R = void> R OnInventoryUpdate(InventoryData* data, int64_t updateTime) {
		return ((R (*)(BaseClientWorld*, InventoryData*, int64_t))(Il2CppBase() + 0xFC3B74))(this, data, updateTime);
	}
	template <typename R = void> R OnPetSlotChangedDurability(InventorySlotEntity* slot, float oldValue, float newValue) {
		return ((R (*)(BaseClientWorld*, InventorySlotEntity*, float, float))(Il2CppBase() + 0xFC3F0C))(this, slot, oldValue, newValue);
	}
	template <typename R = void> R OnArmingRunes(ArmingRunesData* data) {
		return ((R (*)(BaseClientWorld*, ArmingRunesData*))(Il2CppBase() + 0xFC3F10))(this, data);
	}
	template <typename R = void> R OnChestMarker(ChestMarkerData* data) {
		return ((R (*)(BaseClientWorld*, ChestMarkerData*))(Il2CppBase() + 0xFC3FA8))(this, data);
	}
	template <typename R = void> R OnClassRuneChanged(ClassRuneChangedData* data) {
		return ((R (*)(BaseClientWorld*, ClassRuneChangedData*))(Il2CppBase() + 0xFC400C))(this, data);
	}
	template <typename R = void> R OnClassRuneDeactivated(ClassRuneDeactivatedData* data) {
		return ((R (*)(BaseClientWorld*, ClassRuneDeactivatedData*))(Il2CppBase() + 0xFC435C))(this, data);
	}
	template <typename R = void> R OnFuseResult(FuseData* data) {
		return ((R (*)(BaseClientWorld*, FuseData*))(Il2CppBase() + 0xFC4744))(this, data);
	}
	template <typename R = void> R OnRemoveEntityCmd(RemoveEntityData* data, uintptr_t peer) {
		return ((R (*)(BaseClientWorld*, RemoveEntityData*, uintptr_t))(Il2CppBase() + 0xFC4748))(this, data, peer);
	}
	template <typename R = void> R OnLocalActionStart(LocalActionStartData* data) {
		return ((R (*)(BaseClientWorld*, LocalActionStartData*))(Il2CppBase() + 0xFC4A34))(this, data);
	}
	template <typename R = void> R OnInterruptAction(InterruptActionData* data) {
		return ((R (*)(BaseClientWorld*, InterruptActionData*))(Il2CppBase() + 0xFC4E1C))(this, data);
	}
	template <typename R = void> R OnActionCmd(ActionData* data) {
		return ((R (*)(BaseClientWorld*, ActionData*))(Il2CppBase() + 0xFC4E84))(this, data);
	}
	template <typename R = void> R OnCooldownCmd(CooldownData* data) {
		return ((R (*)(BaseClientWorld*, CooldownData*))(Il2CppBase() + 0xFC50B8))(this, data);
	}
	template <typename R = void> R OnReleaseActorCmd(int64_t serverId) {
		return ((R (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFC5148))(this, serverId);
	}
	template <typename R = void> R OnGuildId(GuildIdData* data) {
		return ((R (*)(BaseClientWorld*, GuildIdData*))(Il2CppBase() + 0xFC51D0))(this, data);
	}
	template <typename R = void> R OnStartGuildQuestResult(StartGuildQuestData* data) {
		return ((R (*)(BaseClientWorld*, StartGuildQuestData*))(Il2CppBase() + 0xFC5234))(this, data);
	}
	template <typename R = void> R OnStartGuildQuestResponse(ProtoTools::ErrorCodes* errorCode, int64_t guildQuestId) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*, int64_t))(Il2CppBase() + 0xFC5238))(this, errorCode, guildQuestId);
	}
	template <typename R = void> R OnFuseMountResult(FuseMountResultData* data) {
		return ((R (*)(BaseClientWorld*, FuseMountResultData*))(Il2CppBase() + 0xFC523C))(this, data);
	}
	template <typename R = void> R OnScoutingResult(ScoutingData* data) {
		return ((R (*)(BaseClientWorld*, ScoutingData*))(Il2CppBase() + 0xFC5240))(this, data);
	}
	template <typename R = void> R OnResourceChanged(ChangedResourceData* data) {
		return ((R (*)(BaseClientWorld*, ChangedResourceData*))(Il2CppBase() + 0xFC5244))(this, data);
	}
	template <typename R = void> R OnNetworkReceive(uintptr_t peer, uintptr_t reader) {
		return ((R (*)(BaseClientWorld*, uintptr_t, uintptr_t))(Il2CppBase() + 0xFC53E4))(this, peer, reader);
	}
	template <typename R = void> R OnOpenWindow(OpenWindowData* data) {
		return ((R (*)(BaseClientWorld*, OpenWindowData*))(Il2CppBase() + 0xFC5604))(this, data);
	}
	template <typename R = bool> R OnCommand(Commands* commandId, uintptr_t reader, uintptr_t peer) {
		return ((R (*)(BaseClientWorld*, Commands*, uintptr_t, uintptr_t))(Il2CppBase() + 0xFC56CC))(this, commandId, reader, peer);
	}
	template <typename R = void> R OnSkipQuestResult(SkipQuestData* data) {
		return ((R (*)(BaseClientWorld*, SkipQuestData*))(Il2CppBase() + 0xFC57B0))(this, data);
	}
	template <typename R = void> R OnHideHead(HideHeadData* data) {
		return ((R (*)(BaseClientWorld*, HideHeadData*))(Il2CppBase() + 0xFC57B4))(this, data);
	}
	template <typename R = void> R OnHidePet(HidePetData* data) {
		return ((R (*)(BaseClientWorld*, HidePetData*))(Il2CppBase() + 0xFC5864))(this, data);
	}
	template <typename R = void> R OnHideBag(HideBagData* data) {
		return ((R (*)(BaseClientWorld*, HideBagData*))(Il2CppBase() + 0xFC5914))(this, data);
	}
	template <typename R = GameEntity*> R OnTeleport(TeleportData* data) {
		return ((R (*)(BaseClientWorld*, TeleportData*))(Il2CppBase() + 0xFC59C4))(this, data);
	}
	template <typename R = void> R OnControlled(LostControlData* data) {
		return ((R (*)(BaseClientWorld*, LostControlData*))(Il2CppBase() + 0xFC5A04))(this, data);
	}
	template <typename R = void> R OnClaimQuestResult(ClaimQuestData* data) {
		return ((R (*)(BaseClientWorld*, ClaimQuestData*))(Il2CppBase() + 0xFC5A08))(this, data);
	}
	template <typename R = void> R OnBuildEntityResult(BuildEntityResultData* data) {
		return ((R (*)(BaseClientWorld*, BuildEntityResultData*))(Il2CppBase() + 0xFC5A0C))(this, data);
	}
	template <typename R = void> R OnAutoDestruction(AutoDestructionData* data) {
		return ((R (*)(BaseClientWorld*, AutoDestructionData*))(Il2CppBase() + 0xFC5A10))(this, data);
	}
	template <typename R = void> R OnDialogueClose(DialogueCloseData* data) {
		return ((R (*)(BaseClientWorld*, DialogueCloseData*))(Il2CppBase() + 0xFC5AA8))(this, data);
	}
	template <typename R = void> R OnDialogueShow(DialogueShowData* data) {
		return ((R (*)(BaseClientWorld*, DialogueShowData*))(Il2CppBase() + 0xFC5AE0))(this, data);
	}
	template <typename R = GameEntity*> R OnPlayerName(PlayerNameData* data) {
		return ((R (*)(BaseClientWorld*, PlayerNameData*))(Il2CppBase() + 0xFC5C20))(this, data);
	}
	template <typename R = GameEntity*> R OnGender(GenderData* data) {
		return ((R (*)(BaseClientWorld*, GenderData*))(Il2CppBase() + 0xFC5D64))(this, data);
	}
	template <typename R = void> R OnCreateMagic(int64_t updateTime, CreateMagicData* data) {
		return ((R (*)(BaseClientWorld*, int64_t, CreateMagicData*))(Il2CppBase() + 0xFC5DC4))(this, updateTime, data);
	}
	template <typename R = void> R OnUpdateMagic(int64_t updateTime, UpdateMagicData* data) {
		return ((R (*)(BaseClientWorld*, int64_t, UpdateMagicData*))(Il2CppBase() + 0xFC5EE4))(this, updateTime, data);
	}
	template <typename R = void> R OnUpdateTrigger(UpdateMagicTriggerData* data) {
		return ((R (*)(BaseClientWorld*, UpdateMagicTriggerData*))(Il2CppBase() + 0xFC5F34))(this, data);
	}
	template <typename R = void> R OnSetHotPredition(HotPredictionData* data) {
		return ((R (*)(BaseClientWorld*, HotPredictionData*))(Il2CppBase() + 0xFC5FA4))(this, data);
	}
	template <typename R = void> R OnDestoryMagic(int64_t updateTime, DestroyMagicData* data) {
		return ((R (*)(BaseClientWorld*, int64_t, DestroyMagicData*))(Il2CppBase() + 0xFC60D0))(this, updateTime, data);
	}
	template <typename R = void> R OnCreateQuest(CreateQuestData* data) {
		return ((R (*)(BaseClientWorld*, CreateQuestData*))(Il2CppBase() + 0xFC616C))(this, data);
	}
	template <typename R = void> R OnUpdateQuest(UpdateQuestData* data) {
		return ((R (*)(BaseClientWorld*, UpdateQuestData*))(Il2CppBase() + 0xFC6254))(this, data);
	}
	template <typename R = void> R OnDestoryQuest(DestroyQuestData* data) {
		return ((R (*)(BaseClientWorld*, DestroyQuestData*))(Il2CppBase() + 0xFC639C))(this, data);
	}
	template <typename R = bool> R OnServerWarningMessage(WarningDataForClient* data) {
		return ((R (*)(BaseClientWorld*, WarningDataForClient*))(Il2CppBase() + 0xFC63F4))(this, data);
	}
	template <typename R = void> R OnNofityQuest(NotifyQuestData* data) {
		return ((R (*)(BaseClientWorld*, NotifyQuestData*))(Il2CppBase() + 0xFC65A8))(this, data);
	}
	template <typename R = void> R OnCreateClan(ProtoTools::ErrorCodes* error) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC65AC))(this, error);
	}
	template <typename R = void> R OnDisbandClan(ProtoTools::ErrorCodes* error) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC6844))(this, error);
	}
	template <typename R = void> R OnReceiveInviteToClanCallback(ProtoTools::ErrorCodes* code, int64_t clanId) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*, int64_t))(Il2CppBase() + 0xFC696C))(this, code, clanId);
	}
	template <typename R = void> R OnClanJoinRequestCallbackReceived(ProtoTools::ErrorCodes* error) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC6A6C))(this, error);
	}
	template <typename R = void> R OnAcceptInvite(ProtoTools::ErrorCodes* error) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC6D68))(this, error);
	}
	template <typename R = void> R OnNewsEntityReceived(NewsEntity* newsEntity) {
		return ((R (*)(BaseClientWorld*, NewsEntity*))(Il2CppBase() + 0xFC6FE0))(this, newsEntity);
	}
	template <typename R = void> R OnAccountReceived(AccountEntity* account) {
		return ((R (*)(BaseClientWorld*, AccountEntity*))(Il2CppBase() + 0xFC70D4))(this, account);
	}
	template <typename R = void> R OnUpdateStoreReceived() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFC726C))(this);
	}
	template <typename R = void> R OnFindUserForInviteCallback(ProtoTools::ErrorCodes* code, int64_t playerId) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*, int64_t))(Il2CppBase() + 0xFC7304))(this, code, playerId);
	}
	template <typename R = void> R OnLinkConflictCallback(int64_t playerId) {
		return ((R (*)(BaseClientWorld*, int64_t))(Il2CppBase() + 0xFC738C))(this, playerId);
	}
	template <typename R = void> R OnReceiveRandomInvitablePlayers(Il2CppArray<int64_t>* ids) {
		return ((R (*)(BaseClientWorld*, Il2CppArray<int64_t>*))(Il2CppBase() + 0xFC7390))(this, ids);
	}
	template <typename R = void> R OnFindGuildForInviteResponse(ProtoTools::ErrorCodes* errorCode, int64_t guildId) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*, int64_t))(Il2CppBase() + 0xFC7418))(this, errorCode, guildId);
	}
	template <typename R = void> R OnGuildChangeUserRoleResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC74A0))(this, code);
	}
	template <typename R = void> R OnGuildKickUserResponse(ProtoTools::ErrorCodes* code, int64_t guildId) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*, int64_t))(Il2CppBase() + 0xFC7528))(this, code, guildId);
	}
	template <typename R = void> R OnCreateGuildResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC75E4))(this, code);
	}
	template <typename R = void> R OnUpdateGuildResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC7700))(this, code);
	}
	template <typename R = void> R OnGuildAcceptInviteResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC77F8))(this, code);
	}
	template <typename R = void> R OnGuildDeleteInviteResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC7914))(this, code);
	}
	template <typename R = void> R OnGuildCreateInviteResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC7A0C))(this, code);
	}
	template <typename R = void> R OnGuildJoinResponse(ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC7B04))(this, code);
	}
	template <typename R = void> R OnRecommendedGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC7C20))(this, ids, code);
	}
	template <typename R = void> R OnMainTopGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC7D6C))(this, ids, code);
	}
	template <typename R = void> R OnGlobalTopGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC7EB8))(this, ids, code);
	}
	template <typename R = void> R OnMainPrevGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC8004))(this, ids, code);
	}
	template <typename R = void> R OnGlobalPrevGuildsResponse(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC8150))(this, ids, code);
	}
	template <typename R = void> R OnGuildResetBossLocation(ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC829C))(this, code);
	}
	template <typename R = void> R OnGlobalTournamentsPlayersFound(Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* code) {
		return ((R (*)(BaseClientWorld*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0xFC8394))(this, ids, code);
	}
	template <typename R = void> R OnDisbandGuildResponse(ProtoTools::ErrorCodes* code, int64_t guildId) {
		return ((R (*)(BaseClientWorld*, ProtoTools::ErrorCodes*, int64_t))(Il2CppBase() + 0xFC8534))(this, code, guildId);
	}
	template <typename R = void> R SyncTimeAndGetWorld() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFC71E8))(this);
	}
	template <typename R = void> R OnServerErrorCmd(ErrorData* data) {
		return ((R (*)(BaseClientWorld*, ErrorData*))(Il2CppBase() + 0xFC8738))(this, data);
	}
	template <typename R = void> R OnUpdateWorldCmd(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>* blueprints) {
		return ((R (*)(BaseClientWorld*, Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*))(Il2CppBase() + 0xFC8844))(this, blueprints);
	}
	template <typename R = void> R SendPlayerReady() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFC8CF0))(this);
	}
	template <typename R = LocationEntity*> R OnLocation(LocationEntity* location) {
		return ((R (*)(BaseClientWorld*, LocationEntity*))(Il2CppBase() + 0xFC8F68))(this, location);
	}
	template <typename R = MailEntity*> R OnMailMessage(MailEntity* mailEntity) {
		return ((R (*)(BaseClientWorld*, MailEntity*))(Il2CppBase() + 0xFC8F70))(this, mailEntity);
	}
	template <typename R = void> R OnMailMessageUpdated() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFC9008))(this);
	}
	template <typename R = void> R OnSeasonEventUpdated() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFC900C))(this);
	}
	template <typename R = void> R OnHistoryEntity(HistoryEntity* historyEntity) {
		return ((R (*)(BaseClientWorld*, HistoryEntity*))(Il2CppBase() + 0xFC9010))(this, historyEntity);
	}
	template <typename R = void> R OnStoreSalesEntityReceived(ICommonClientWorld* world, StoreSalesEntity* storeSalesEntity) {
		return ((R (*)(BaseClientWorld*, ICommonClientWorld*, StoreSalesEntity*))(Il2CppBase() + 0xFC9014))(this, world, storeSalesEntity);
	}
	template <typename R = void> R OnServerChatMessage(ServerChatMessageData* data) {
		return ((R (*)(BaseClientWorld*, ServerChatMessageData*))(Il2CppBase() + 0xFC9108))(this, data);
	}
	template <typename R = void> R OnServerNotification(ServerNotificationData* data) {
		return ((R (*)(BaseClientWorld*, ServerNotificationData*))(Il2CppBase() + 0xFC91C8))(this, data);
	}
	template <typename R = void> R ResetWasDeadWhenLoad() {
		return ((R (*)(BaseClientWorld*))(Il2CppBase() + 0xFC9280))(this);
	}
	template <typename R = void> R OnOpenInventoryContainer(OpenInventoryContainerResult* data) {
		return ((R (*)(BaseClientWorld*, OpenInventoryContainerResult*))(Il2CppBase() + 0xFC9314))(this, data);
	}

};

