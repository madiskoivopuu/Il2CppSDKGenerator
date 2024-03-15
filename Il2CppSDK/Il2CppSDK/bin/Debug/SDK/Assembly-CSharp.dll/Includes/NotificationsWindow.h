#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class NotificationsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationsWindow"));
	}

	template <typename R = uintptr_t> R& WarningsContainer() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& ErrorsContainer() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& NotificationsContainer() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& QuestsContainer() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = NotificationView*> R& WarningPrefab() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = NotificationView*> R& ErrorPrefab() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = TopNotificationView*> R& NotificationPrefab() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = QuestTrackerView*> R& QuestPrefab() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = QuestTrackerView*> R& DailyQuestPrefab() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = float> R& NotificationDelay() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = float> R& NextMapEventNotifyDelay() {
		return *(R*)((uintptr_t)this + 0xC4);
	}
	template <typename R = uintptr_t> R& TopContainer() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = HUDNotifyView*> R& QuestNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = HUDNotifyView*> R& PortalQuestStartNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = HUDNotifyView*> R& PortalQuestWinNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = HUDNotifyView*> R& PortalQuestLoseNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = HUDNotifyView*> R& GuildQuestStartNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = HUDNotifyView*> R& GuildQuestWinNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = HUDNotifyView*> R& GuildQuestLoseNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = HUDNotifyView*> R& ItemNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = HUDNotifyView*> R& ItemExtNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = HUDNotifyView*> R& CustomNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = HUDNotifyView*> R& EventNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = HUDNotifyView*> R& LevelCapNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = HUDNotifyView*> R& InWindowPrefab() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = HUDNotifyView*> R& LocationNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = HUDNotifyView*> R& RuneNotifyPrefab() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = HUDNotifyView*> R& BossFatalityNotify() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = HUDNotifyView*> R& AbilityNotify() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = HUDNotifyView*> R& SpectatorNotify() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = HUDNotifyView*> R& ToMasterNotify() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = Il2CppString*> R& _bluprintLearnedKey() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = Il2CppString*> R& _recipesKey() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	 Il2CppDictionary<Il2CppString*, NotificationView*>*& _currentNotifications() {
		return *(Il2CppDictionary<Il2CppString*, NotificationView*>**)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& showNewRecipesCoroutine() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	 Il2CppList<Il2CppString*>*& newRecipes() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0x188);
	}
	template <typename R = int32_t> R& currentRecipeIndex() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = float> R& leftDelayTime() {
		return *(R*)((uintptr_t)this + 0x194);
	}
	 Queue1<uintptr_t>*& newMapNotifications() {
		return *(Queue1<uintptr_t>**)((uintptr_t)this + 0x198);
	}
	template <typename R = bool> R& isMapNotificationOpen() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(NotificationsWindow*))(Il2CppBase() + 0x13BB3EC))(this);
	}
	template <typename R = void> R ShowWarning(Il2CppString* text, bool redText) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, bool))(Il2CppBase() + 0x13BB3F4))(this, text, redText);
	}
	template <typename R = void> R ShowWarningIfNeed(Il2CppString* text) {
		return ((R (*)(NotificationsWindow*, Il2CppString*))(Il2CppBase() + 0x13BB64C))(this, text);
	}
	template <typename R = void> R ShowError(Il2CppString* text) {
		return ((R (*)(NotificationsWindow*, Il2CppString*))(Il2CppBase() + 0x13BB85C))(this, text);
	}
	template <typename R = void> R ShowNotification(Il2CppString* key, Il2CppString* text, bool check) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x13BBAA8))(this, key, text, check);
	}
	template <typename R = HUDNotifyView*> R InstantiateHUDNotifyView(HUDNotifyView* prefab) {
		return ((R (*)(NotificationsWindow*, HUDNotifyView*))(Il2CppBase() + 0x13BBD34))(this, prefab);
	}
	template <typename R = void> R ShowQuestCompleted(QuestDataEntity* questDataEntity) {
		return ((R (*)(NotificationsWindow*, QuestDataEntity*))(Il2CppBase() + 0x13BC0CC))(this, questDataEntity);
	}
	template <typename R = HUDNotifyView*> R ShowQuestNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BC1D0))(this, caption, text, sound);
	}
	template <typename R = HUDNotifyView*> R ShowGuildQuestStartNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon icon) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon))(Il2CppBase() + 0x13BC254))(this, caption, text, sound, icon);
	}
	template <typename R = HUDNotifyView*> R ShowPortalQuestStartNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon icon) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon))(Il2CppBase() + 0x13BC2E4))(this, caption, text, sound, icon);
	}
	template <typename R = HUDNotifyView*> R ShowPortalQuestWinNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon icon) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon))(Il2CppBase() + 0x13BC374))(this, caption, text, sound, icon);
	}
	template <typename R = HUDNotifyView*> R ShowPortalQuestLoseNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon icon) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon))(Il2CppBase() + 0x13BC404))(this, caption, text, sound, icon);
	}
	template <typename R = HUDNotifyView*> R ShowGuildQuestWinNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon icon) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon))(Il2CppBase() + 0x13BC494))(this, caption, text, sound, icon);
	}
	template <typename R = HUDNotifyView*> R ShowGuildQuestLoseNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon icon) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon))(Il2CppBase() + 0x13BC524))(this, caption, text, sound, icon);
	}
	template <typename R = HUDNotifyView*> R ShowLevelCapNotify() {
		return ((R (*)(NotificationsWindow*))(Il2CppBase() + 0x13BC5B4))(this);
	}
	template <typename R = HUDNotifyView*> R ShowExtraLevelCapNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BC5F0))(this, caption, text, sound);
	}
	template <typename R = HUDNotifyView*> R ShowItemNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon icon) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon))(Il2CppBase() + 0x13BC674))(this, caption, text, sound, icon);
	}
	template <typename R = HUDNotifyView*> R ShowItemNotify_1(ItemEntity* item, int32_t count, Il2CppString* sound) {
		return ((R (*)(NotificationsWindow*, ItemEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x13BC704))(this, item, count, sound);
	}
	template <typename R = HUDNotifyView*> R ShowItemGotNotify(ItemEntity* item, int32_t count, bool reward, Il2CppString* sound) {
		return ((R (*)(NotificationsWindow*, ItemEntity*, int32_t, bool, Il2CppString*))(Il2CppBase() + 0x13BC764))(this, item, count, reward, sound);
	}
	template <typename R = HUDNotifyView*> R ShowClassNotify(ItemEntity* item, BaseNotifyComponent* notifyComponent) {
		return ((R (*)(NotificationsWindow*, ItemEntity*, BaseNotifyComponent*))(Il2CppBase() + 0x13BC818))(this, item, notifyComponent);
	}
	template <typename R = HUDNotifyView*> R ShowRuneNotify(ItemEntity* runeItem, int32_t runesCount, ItemEntity* classItem, Il2CppString* text, Il2CppString* sound, bool ghosty) {
		return ((R (*)(NotificationsWindow*, ItemEntity*, int32_t, ItemEntity*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x13BC870))(this, runeItem, runesCount, classItem, text, sound, ghosty);
	}
	template <typename R = HUDNotifyView*> R ShowBossFatalityNotify(Il2CppString* caption, Il2CppString* sound) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BC8F4))(this, caption, sound);
	}
	template <typename R = HUDNotifyView*> R ShowCustomNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon icon, float height) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon, float))(Il2CppBase() + 0x13BC974))(this, caption, text, sound, icon, height);
	}
	template <typename R = HUDNotifyView*> R ShowAbilityNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, Icon icon) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, Icon))(Il2CppBase() + 0x13BCA10))(this, caption, text, sound, icon);
	}
	template <typename R = HUDNotifyView*> R ShowSpectatorNotify() {
		return ((R (*)(NotificationsWindow*))(Il2CppBase() + 0x13BCAA0))(this);
	}
	template <typename R = HUDNotifyView*> R ShowLocationNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BCADC))(this, caption, text, sound);
	}
	template <typename R = HUDNotifyView*> R ShowEventNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BCB60))(this, caption, text, sound);
	}
	template <typename R = HUDNotifyView*> R ShowRaidStartNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((R (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BCBE4))(this, caption, text, sound);
	}
	template <typename R = HUDNotifyView*> R GetNotify(Il2CppString* caption) {
		return ((R (*)(NotificationsWindow*, Il2CppString*))(Il2CppBase() + 0x13BCC68))(this, caption);
	}
	template <typename R = void> R ShowMapEventNotification(int32_t pointId) {
		return ((R (*)(NotificationsWindow*, int32_t))(Il2CppBase() + 0x13BCFB8))(this, pointId);
	}
	template <typename R = void> R ShowMapQuestNotification(Il2CppString* questName) {
		return ((R (*)(NotificationsWindow*, Il2CppString*))(Il2CppBase() + 0x13BD204))(this, questName);
	}
	template <typename R = void> R ShowNextMapNotification() {
		return ((R (*)(NotificationsWindow*))(Il2CppBase() + 0x13BD120))(this);
	}
	template <typename R = void> R ShowNewRecipes(RecipesComponent* recipes, float delay) {
		return ((R (*)(NotificationsWindow*, RecipesComponent*, float))(Il2CppBase() + 0x13BD374))(this, recipes, delay);
	}
	template <typename R = HUDNotifyView*> R ShowItemsToMasterServerNotify(Il2CppString* description) {
		return ((R (*)(NotificationsWindow*, Il2CppString*))(Il2CppBase() + 0x13BD574))(this, description);
	}
	template <typename R = uintptr_t> R ShowNewRecipesCoroutine(Il2CppList<Il2CppString*>* recipes, float delay, bool showAll) {
		return ((R (*)(NotificationsWindow*, Il2CppList<Il2CppString*>*, float, bool))(Il2CppBase() + 0x13BD4C4))(this, recipes, delay, showAll);
	}
	template <typename R = void> R ShowTestWarning() {
		return ((R (*)(NotificationsWindow*))(Il2CppBase() + 0x13BDBA8))(this);
	}
	template <typename R = void> R ShowRndTestWarning() {
		return ((R (*)(NotificationsWindow*))(Il2CppBase() + 0x13BDBF8))(this);
	}
	template <typename R = void> R ShowTestError() {
		return ((R (*)(NotificationsWindow*))(Il2CppBase() + 0x13BDC94))(this);
	}
	template <typename R = void> R ShowTestNotification() {
		return ((R (*)(NotificationsWindow*))(Il2CppBase() + 0x13BDCE0))(this);
	}
	template <typename R = void> R ShowTestRandNotification() {
		return ((R (*)(NotificationsWindow*))(Il2CppBase() + 0x13BDD94))(this);
	}

};

