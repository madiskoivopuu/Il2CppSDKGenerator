#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DataContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataContexts"));
	}

	template <typename R = int64_t> R& Version() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = BlueprintDataContext*> R& blueprint() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = RecipeDataContext*> R& recipe() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TrophyRoadDataContext*> R& trophyRoad() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = ConditionContext*> R& conditions() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ConfigsContext*> R& configs() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = ItemDataContext*> R& item() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = RandomGroupDataContext*> R& randomGroup() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = ActionDataContext*> R& action() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = MagicDataContext*> R& magic() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = MagicTriggerDataContext*> R& magicTrigger() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = TournamentDataContext*> R& tournaments() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = QuestDataContext*> R& quests() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = SeasonDataContext*> R& season() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = BattlePassDataContext*> R& battlePass() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = LobbyDataContext*> R& lobby() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = InventorySlotDataContext*> R& inventorySlots() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = GameDataContext*> R& game() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = CurrencyDataContext*> R& currency() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = DialogueDataContext*> R& dialogues() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = GameDataContext*> R& map() {
		return *(R*)((uintptr_t)this + 0xB0);
	}

	template <typename R = int64_t> R get_Version() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADBE4))(this);
	}
	template <typename R = void> R set_Version(int64_t value) {
		return ((R (*)(DataContexts*, int64_t))(Il2CppBase() + 0xEADBEC))(this, value);
	}
	template <typename R = BlueprintDataContext*> R get_blueprint() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADBF4))(this);
	}
	template <typename R = void> R set_blueprint(BlueprintDataContext* value) {
		return ((R (*)(DataContexts*, BlueprintDataContext*))(Il2CppBase() + 0xEADBFC))(this, value);
	}
	template <typename R = RecipeDataContext*> R get_recipe() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADC04))(this);
	}
	template <typename R = void> R set_recipe(RecipeDataContext* value) {
		return ((R (*)(DataContexts*, RecipeDataContext*))(Il2CppBase() + 0xEADC0C))(this, value);
	}
	template <typename R = TrophyRoadDataContext*> R get_trophyRoad() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADC14))(this);
	}
	template <typename R = void> R set_trophyRoad(TrophyRoadDataContext* value) {
		return ((R (*)(DataContexts*, TrophyRoadDataContext*))(Il2CppBase() + 0xEADC1C))(this, value);
	}
	template <typename R = ConditionContext*> R get_conditions() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADC24))(this);
	}
	template <typename R = void> R set_conditions(ConditionContext* value) {
		return ((R (*)(DataContexts*, ConditionContext*))(Il2CppBase() + 0xEADC2C))(this, value);
	}
	template <typename R = ConfigsContext*> R get_configs() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADC34))(this);
	}
	template <typename R = void> R set_configs(ConfigsContext* value) {
		return ((R (*)(DataContexts*, ConfigsContext*))(Il2CppBase() + 0xEADC3C))(this, value);
	}
	template <typename R = ItemDataContext*> R get_item() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADC44))(this);
	}
	template <typename R = void> R set_item(ItemDataContext* value) {
		return ((R (*)(DataContexts*, ItemDataContext*))(Il2CppBase() + 0xEADC4C))(this, value);
	}
	template <typename R = RandomGroupDataContext*> R get_randomGroup() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADC54))(this);
	}
	template <typename R = void> R set_randomGroup(RandomGroupDataContext* value) {
		return ((R (*)(DataContexts*, RandomGroupDataContext*))(Il2CppBase() + 0xEADC5C))(this, value);
	}
	template <typename R = ActionDataContext*> R get_action() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADC64))(this);
	}
	template <typename R = void> R set_action(ActionDataContext* value) {
		return ((R (*)(DataContexts*, ActionDataContext*))(Il2CppBase() + 0xEADC6C))(this, value);
	}
	template <typename R = MagicDataContext*> R get_magic() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADC74))(this);
	}
	template <typename R = void> R set_magic(MagicDataContext* value) {
		return ((R (*)(DataContexts*, MagicDataContext*))(Il2CppBase() + 0xEADC7C))(this, value);
	}
	template <typename R = MagicTriggerDataContext*> R get_magicTrigger() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADC84))(this);
	}
	template <typename R = void> R set_magicTrigger(MagicTriggerDataContext* value) {
		return ((R (*)(DataContexts*, MagicTriggerDataContext*))(Il2CppBase() + 0xEADC8C))(this, value);
	}
	template <typename R = TournamentDataContext*> R get_tournaments() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADC94))(this);
	}
	template <typename R = void> R set_tournaments(TournamentDataContext* value) {
		return ((R (*)(DataContexts*, TournamentDataContext*))(Il2CppBase() + 0xEADC9C))(this, value);
	}
	template <typename R = QuestDataContext*> R get_quests() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADCA4))(this);
	}
	template <typename R = void> R set_quests(QuestDataContext* value) {
		return ((R (*)(DataContexts*, QuestDataContext*))(Il2CppBase() + 0xEADCAC))(this, value);
	}
	template <typename R = SeasonDataContext*> R get_season() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADCB4))(this);
	}
	template <typename R = void> R set_season(SeasonDataContext* value) {
		return ((R (*)(DataContexts*, SeasonDataContext*))(Il2CppBase() + 0xEADCBC))(this, value);
	}
	template <typename R = BattlePassDataContext*> R get_battlePass() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADCC4))(this);
	}
	template <typename R = void> R set_battlePass(BattlePassDataContext* value) {
		return ((R (*)(DataContexts*, BattlePassDataContext*))(Il2CppBase() + 0xEADCCC))(this, value);
	}
	template <typename R = LobbyDataContext*> R get_lobby() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADCD4))(this);
	}
	template <typename R = void> R set_lobby(LobbyDataContext* value) {
		return ((R (*)(DataContexts*, LobbyDataContext*))(Il2CppBase() + 0xEADCDC))(this, value);
	}
	template <typename R = InventorySlotDataContext*> R get_inventorySlots() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADCE4))(this);
	}
	template <typename R = void> R set_inventorySlots(InventorySlotDataContext* value) {
		return ((R (*)(DataContexts*, InventorySlotDataContext*))(Il2CppBase() + 0xEADCEC))(this, value);
	}
	template <typename R = GameDataContext*> R get_game() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADCF4))(this);
	}
	template <typename R = void> R set_game(GameDataContext* value) {
		return ((R (*)(DataContexts*, GameDataContext*))(Il2CppBase() + 0xEADCFC))(this, value);
	}
	template <typename R = CurrencyDataContext*> R get_currency() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADD04))(this);
	}
	template <typename R = void> R set_currency(CurrencyDataContext* value) {
		return ((R (*)(DataContexts*, CurrencyDataContext*))(Il2CppBase() + 0xEADD0C))(this, value);
	}
	template <typename R = DialogueDataContext*> R get_dialogues() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADD14))(this);
	}
	template <typename R = void> R set_dialogues(DialogueDataContext* value) {
		return ((R (*)(DataContexts*, DialogueDataContext*))(Il2CppBase() + 0xEADD1C))(this, value);
	}
	template <typename R = GameDataContext*> R get_map() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADD24))(this);
	}
	template <typename R = void> R set_map(GameDataContext* value) {
		return ((R (*)(DataContexts*, GameDataContext*))(Il2CppBase() + 0xEADD2C))(this, value);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R get_allContexts() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEADD34))(this);
	}
	template <typename R = void> R Create(ICommonLogger* logger) {
		return ((R (*)(DataContexts*, ICommonLogger*))(Il2CppBase() + 0xEAE248))(this, logger);
	}
	template <typename R = void> R Init(DataBlueprints datablueprints) {
		return ((R (*)(DataContexts*, DataBlueprints))(Il2CppBase() + 0xEAE95C))(this, datablueprints);
	}
	template <typename R = uintptr_t> R InitAsync(DataBlueprints datablueprints) {
		return ((R (*)(DataContexts*, DataBlueprints))(Il2CppBase() + 0xEAED7C))(this, datablueprints);
	}
	template <typename R = void> R ClearContexts() {
		return ((R (*)(DataContexts*))(Il2CppBase() + 0xEAEE18))(this);
	}
	template <typename R = Il2CppArray<ValueTuple2<Action1<Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*, Func1<Il2CppDictionary<Il2CppString*, EntityBlueprint*>*>*>*>*> R GetContextToBlueprintConfig(DataBlueprints datablueprints) {
		return ((R (*)(DataContexts*, DataBlueprints))(Il2CppBase() + 0xEAEF24))(this, datablueprints);
	}

};

