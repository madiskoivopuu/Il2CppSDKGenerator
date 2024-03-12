#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class NotificationsWindow: UIWindow1
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
	template <typename T = uintptr_t> T& WarningPrefab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ErrorPrefab() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& NotificationPrefab() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& QuestPrefab() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& DailyQuestPrefab() {
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
	template <typename T = uintptr_t> T& QuestNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& PortalQuestStartNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& PortalQuestWinNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& PortalQuestLoseNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& GuildQuestStartNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& GuildQuestWinNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& GuildQuestLoseNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ItemNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& ItemExtNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& CustomNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& EventNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& LevelCapNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& InWindowPrefab() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& LocationNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& RuneNotifyPrefab() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& BossFatalityNotify() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& AbilityNotify() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& SpectatorNotify() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& ToMasterNotify() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppString*> T& _bluprintLearnedKey() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppString*> T& _recipesKey() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _currentNotifications() {
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
	template <typename T = void*> T& newMapNotifications() {
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
	template <typename T = uintptr_t> T InstantiateHUDNotifyView(uintptr_t prefab) {
		return ((T (*)(NotificationsWindow*, uintptr_t))(Il2CppBase() + 0x13BBD34))(this, prefab);
	}
	template <typename T = void> T ShowQuestCompleted(uintptr_t questDataEntity) {
		return ((T (*)(NotificationsWindow*, uintptr_t))(Il2CppBase() + 0x13BC0CC))(this, questDataEntity);
	}
	template <typename T = uintptr_t> T ShowQuestNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BC1D0))(this, caption, text, sound);
	}
	template <typename T = uintptr_t> T ShowGuildQuestStartNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, uintptr_t icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x13BC254))(this, caption, text, sound, icon);
	}
	template <typename T = uintptr_t> T ShowPortalQuestStartNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, uintptr_t icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x13BC2E4))(this, caption, text, sound, icon);
	}
	template <typename T = uintptr_t> T ShowPortalQuestWinNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, uintptr_t icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x13BC374))(this, caption, text, sound, icon);
	}
	template <typename T = uintptr_t> T ShowPortalQuestLoseNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, uintptr_t icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x13BC404))(this, caption, text, sound, icon);
	}
	template <typename T = uintptr_t> T ShowGuildQuestWinNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, uintptr_t icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x13BC494))(this, caption, text, sound, icon);
	}
	template <typename T = uintptr_t> T ShowGuildQuestLoseNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, uintptr_t icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x13BC524))(this, caption, text, sound, icon);
	}
	template <typename T = uintptr_t> T ShowLevelCapNotify() {
		return ((T (*)(NotificationsWindow*))(Il2CppBase() + 0x13BC5B4))(this);
	}
	template <typename T = uintptr_t> T ShowExtraLevelCapNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BC5F0))(this, caption, text, sound);
	}
	template <typename T = uintptr_t> T ShowItemNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, uintptr_t icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x13BC674))(this, caption, text, sound, icon);
	}
	template <typename T = uintptr_t> T ShowItemNotify_1(uintptr_t item, int32_t count, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x13BC704))(this, item, count, sound);
	}
	template <typename T = uintptr_t> T ShowItemGotNotify(uintptr_t item, int32_t count, bool reward, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, uintptr_t, int32_t, bool, Il2CppString*))(Il2CppBase() + 0x13BC764))(this, item, count, reward, sound);
	}
	template <typename T = uintptr_t> T ShowClassNotify(uintptr_t item, uintptr_t notifyComponent) {
		return ((T (*)(NotificationsWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x13BC818))(this, item, notifyComponent);
	}
	template <typename T = uintptr_t> T ShowRuneNotify(uintptr_t runeItem, int32_t runesCount, uintptr_t classItem, Il2CppString* text, Il2CppString* sound, bool ghosty) {
		return ((T (*)(NotificationsWindow*, uintptr_t, int32_t, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x13BC870))(this, runeItem, runesCount, classItem, text, sound, ghosty);
	}
	template <typename T = uintptr_t> T ShowBossFatalityNotify(Il2CppString* caption, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BC8F4))(this, caption, sound);
	}
	template <typename T = uintptr_t> T ShowCustomNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, uintptr_t icon, float height) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, float))(Il2CppBase() + 0x13BC974))(this, caption, text, sound, icon, height);
	}
	template <typename T = uintptr_t> T ShowAbilityNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound, uintptr_t icon) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x13BCA10))(this, caption, text, sound, icon);
	}
	template <typename T = uintptr_t> T ShowSpectatorNotify() {
		return ((T (*)(NotificationsWindow*))(Il2CppBase() + 0x13BCAA0))(this);
	}
	template <typename T = uintptr_t> T ShowLocationNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BCADC))(this, caption, text, sound);
	}
	template <typename T = uintptr_t> T ShowEventNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BCB60))(this, caption, text, sound);
	}
	template <typename T = uintptr_t> T ShowRaidStartNotify(Il2CppString* caption, Il2CppString* text, Il2CppString* sound) {
		return ((T (*)(NotificationsWindow*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13BCBE4))(this, caption, text, sound);
	}
	template <typename T = uintptr_t> T GetNotify(Il2CppString* caption) {
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
	template <typename T = void> T ShowNewRecipes(uintptr_t recipes, float delay) {
		return ((T (*)(NotificationsWindow*, uintptr_t, float))(Il2CppBase() + 0x13BD374))(this, recipes, delay);
	}
	template <typename T = uintptr_t> T ShowItemsToMasterServerNotify(Il2CppString* description) {
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

}
