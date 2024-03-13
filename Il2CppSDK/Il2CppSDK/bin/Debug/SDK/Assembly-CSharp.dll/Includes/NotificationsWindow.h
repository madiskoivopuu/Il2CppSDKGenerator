#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class NotificationsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationsWindow"));
	}

	template <typename T = uintptr_t> T& WarningsContainer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ErrorsContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NotificationsContainer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& QuestsContainer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = NotificationView*> T& WarningPrefab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = NotificationView*> T& ErrorPrefab() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = TopNotificationView*> T& NotificationPrefab() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = QuestTrackerView*> T& QuestPrefab() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = QuestTrackerView*> T& DailyQuestPrefab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& NotificationDelay() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& NextMapEventNotifyDelay() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& TopContainer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = HUDNotifyView*> T& QuestNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = HUDNotifyView*> T& PortalQuestStartNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = HUDNotifyView*> T& PortalQuestWinNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = HUDNotifyView*> T& PortalQuestLoseNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = HUDNotifyView*> T& GuildQuestStartNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = HUDNotifyView*> T& GuildQuestWinNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = HUDNotifyView*> T& GuildQuestLoseNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = HUDNotifyView*> T& ItemNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = HUDNotifyView*> T& ItemExtNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = HUDNotifyView*> T& CustomNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = HUDNotifyView*> T& EventNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = HUDNotifyView*> T& LevelCapNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = HUDNotifyView*> T& InWindowPrefab() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = HUDNotifyView*> T& LocationNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = HUDNotifyView*> T& RuneNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = HUDNotifyView*> T& BossFatalityNotify() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = HUDNotifyView*> T& AbilityNotify() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = HUDNotifyView*> T& SpectatorNotify() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = HUDNotifyView*> T& ToMasterNotify() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppString*> T& _bluprintLearnedKey() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppString*> T& _recipesKey() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, NotificationView*>*> T& _currentNotifications() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& showNewRecipesCoroutine() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& newRecipes() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& currentRecipeIndex() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& leftDelayTime() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = Queue1uintptr_t>*> T& newMapNotifications() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = bool> T& isMapNotificationOpen() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(NotificationsWindow*))(Il2CppBase() + 0x13BB3EC))(this);
	}
	template <typename T = void> T ShowWarning(Il2CppString* text, bool redText) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, bool))(Il2CppBase() + 0x13BB3F4))(this, text, redText);
	}
	template <typename T = void> T ShowWarningIfNeed(Il2CppString* text) {
		return ((T (*)(NotificationsWindow*, Il2CppString*))(Il2CppBase() + 0x13BB64C))(this, text);
	}
	template <typename T = void> T ShowError(Il2CppString* text) {
		return ((T (*)(NotificationsWindow*, Il2CppString*))(Il2CppBase() + 0x13BB85C))(this, text);
	}
	template <typename T = void> T ShowNotification(Il2CppString* key, Il2CppString* text, bool check) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x13BBAA8))(this, key, text, check);
	}
	template <typename T = HUDNotifyView*> T InstantiateHUDNotifyView(HUDNotifyView* prefab) {
		return ((T (*)(NotificationsWindow*, HUDNotifyView*))(Il2CppBase() + 0x13BBD34))(this, prefab);
	}
	template <typename T = void> T ShowQuestCompleted(QuestDataEntity* questDataEntity) {
		return ((T (*)(NotificationsWindow*, QuestDataEntity*))(Il2CppBase() + 0x13BC0CC))(this, questDataEntity);
	}
	template <typename T = HUDNotifyView*> T ShowQuestNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BC1D0))(this, caption, text, sound);
	}
	template <typename T = HUDNotifyView*> T ShowGuildQuestStartNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon* icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon*))(Il2CppBase() + 0x13BC254))(this, caption, text, sound, icon);
	}
	template <typename T = HUDNotifyView*> T ShowPortalQuestStartNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon* icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon*))(Il2CppBase() + 0x13BC2E4))(this, caption, text, sound, icon);
	}
	template <typename T = HUDNotifyView*> T ShowPortalQuestWinNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon* icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon*))(Il2CppBase() + 0x13BC374))(this, caption, text, sound, icon);
	}
	template <typename T = HUDNotifyView*> T ShowPortalQuestLoseNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon* icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon*))(Il2CppBase() + 0x13BC404))(this, caption, text, sound, icon);
	}
	template <typename T = HUDNotifyView*> T ShowGuildQuestWinNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon* icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon*))(Il2CppBase() + 0x13BC494))(this, caption, text, sound, icon);
	}
	template <typename T = HUDNotifyView*> T ShowGuildQuestLoseNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon* icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon*))(Il2CppBase() + 0x13BC524))(this, caption, text, sound, icon);
	}
	template <typename T = HUDNotifyView*> T ShowLevelCapNotify() {
		return ((T (*)(NotificationsWindow*))(Il2CppBase() + 0x13BC5B4))(this);
	}
	template <typename T = HUDNotifyView*> T ShowExtraLevelCapNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BC5F0))(this, caption, text, sound);
	}
	template <typename T = HUDNotifyView*> T ShowItemNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon* icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon*))(Il2CppBase() + 0x13BC674))(this, caption, text, sound, icon);
	}
	template <typename T = HUDNotifyView*> T ShowItemNotify_1(ItemEntity* item, int32_t count, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, ItemEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x13BC704))(this, item, count, sound);
	}
	template <typename T = HUDNotifyView*> T ShowItemGotNotify(ItemEntity* item, int32_t count, bool reward, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, ItemEntity*, int32_t, bool, Il2CppString*))(Il2CppBase() + 0x13BC764))(this, item, count, reward, sound);
	}
	template <typename T = HUDNotifyView*> T ShowClassNotify(ItemEntity* item, BaseNotifyComponent* notifyComponent) {
		return ((T (*)(NotificationsWindow*, ItemEntity*, BaseNotifyComponent*))(Il2CppBase() + 0x13BC818))(this, item, notifyComponent);
	}
	template <typename T = HUDNotifyView*> T ShowRuneNotify(ItemEntity* runeItem, int32_t runesCount, ItemEntity* classItem, Il2CppString* text, Il2CppString* sound, bool ghosty) {
		return ((T (*)(NotificationsWindow*, ItemEntity*, int32_t, ItemEntity*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x13BC870))(this, runeItem, runesCount, classItem, text, sound, ghosty);
	}
	template <typename T = HUDNotifyView*> T ShowBossFatalityNotify(Il2CppString* caption, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BC8F4))(this, caption, sound);
	}
	template <typename T = HUDNotifyView*> T ShowCustomNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon* icon, float height) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon*, float))(Il2CppBase() + 0x13BC974))(this, caption, text, sound, icon, height);
	}
	template <typename T = HUDNotifyView*> T ShowAbilityNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon* icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon*))(Il2CppBase() + 0x13BCA10))(this, caption, text, sound, icon);
	}
	template <typename T = HUDNotifyView*> T ShowSpectatorNotify() {
		return ((T (*)(NotificationsWindow*))(Il2CppBase() + 0x13BCAA0))(this);
	}
	template <typename T = HUDNotifyView*> T ShowLocationNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BCADC))(this, caption, text, sound);
	}
	template <typename T = HUDNotifyView*> T ShowEventNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BCB60))(this, caption, text, sound);
	}
	template <typename T = HUDNotifyView*> T ShowRaidStartNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BCBE4))(this, caption, text, sound);
	}
	template <typename T = HUDNotifyView*> T GetNotify(Il2CppString* caption) {
		return ((T (*)(NotificationsWindow*, Il2CppString*))(Il2CppBase() + 0x13BCC68))(this, caption);
	}
	template <typename T = void> T ShowMapEventNotification(int32_t pointId) {
		return ((T (*)(NotificationsWindow*, int32_t))(Il2CppBase() + 0x13BCFB8))(this, pointId);
	}
	template <typename T = void> T ShowMapQuestNotification(Il2CppString* questName) {
		return ((T (*)(NotificationsWindow*, Il2CppString*))(Il2CppBase() + 0x13BD204))(this, questName);
	}
	template <typename T = void> T ShowNextMapNotification() {
		return ((T (*)(NotificationsWindow*))(Il2CppBase() + 0x13BD120))(this);
	}
	template <typename T = void> T ShowNewRecipes(RecipesComponent* recipes, float delay) {
		return ((T (*)(NotificationsWindow*, RecipesComponent*, float))(Il2CppBase() + 0x13BD374))(this, recipes, delay);
	}
	template <typename T = HUDNotifyView*> T ShowItemsToMasterServerNotify(Il2CppString* description) {
		return ((T (*)(NotificationsWindow*, Il2CppString*))(Il2CppBase() + 0x13BD574))(this, description);
	}
	template <typename T = uintptr_t> T ShowNewRecipesCoroutine(Il2CppList<Il2CppString*>* recipes, float delay, bool showAll) {
		return ((T (*)(NotificationsWindow*, Il2CppList<Il2CppString*>*, float, bool))(Il2CppBase() + 0x13BD4C4))(this, recipes, delay, showAll);
	}
	template <typename T = void> T ShowTestWarning() {
		return ((T (*)(NotificationsWindow*))(Il2CppBase() + 0x13BDBA8))(this);
	}
	template <typename T = void> T ShowRndTestWarning() {
		return ((T (*)(NotificationsWindow*))(Il2CppBase() + 0x13BDBF8))(this);
	}
	template <typename T = void> T ShowTestError() {
		return ((T (*)(NotificationsWindow*))(Il2CppBase() + 0x13BDC94))(this);
	}
	template <typename T = void> T ShowTestNotification() {
		return ((T (*)(NotificationsWindow*))(Il2CppBase() + 0x13BDCE0))(this);
	}
	template <typename T = void> T ShowTestRandNotification() {
		return ((T (*)(NotificationsWindow*))(Il2CppBase() + 0x13BDD94))(this);
	}

};

