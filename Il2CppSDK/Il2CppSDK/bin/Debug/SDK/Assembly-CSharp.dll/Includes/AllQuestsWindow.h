#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class AllQuestsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AllQuestsWindow"));
	}

	template <typename R = uintptr_t> R& tabsRoot() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = QuestCategoryView*> R& categoryTabPrefab() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& toggleGroup() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	 Il2CppList<QuestTabContent*>*& tabContents() {
		return *(Il2CppList<QuestTabContent*>**)((uintptr_t)this + 0x90);
	}
	template <typename R = ManagementCategoryView*> R& managementCategoryTab() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = QuestTrackingTabContent*> R& trackingContent() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = QuestTabContent*> R& selectedTab() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = bool> R& isExternalTabShowingTryWasSuccessfull() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = bool> R& needToShowNewTab() {
		return *(R*)((uintptr_t)this + 0xB1);
	}
	template <typename R = QuestTabContent*> R& tabNeedToShowExternally() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(AllQuestsWindow*))(Il2CppBase() + 0x129C318))(this);
	}
	template <typename R = void> R InitializeTab(GameEntity* avatar, AccountEntity* account, QuestTabContent* content, QuestCategoryView* prefab, uintptr_t root, uintptr_t group) {
		return ((R (*)(AllQuestsWindow*, GameEntity*, AccountEntity*, QuestTabContent*, QuestCategoryView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x129C7DC))(this, avatar, account, content, prefab, root, group);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(AllQuestsWindow*))(Il2CppBase() + 0x129CB4C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(AllQuestsWindow*, float))(Il2CppBase() + 0x129CCD0))(this, deltaTime);
	}
	template <typename R = void> R SelectTabExternally(QuestTabContent* newSelection) {
		return ((R (*)(AllQuestsWindow*, QuestTabContent*))(Il2CppBase() + 0x129D130))(this, newSelection);
	}
	template <typename R = void> R OnTabSelected(QuestTabContent* newSelection) {
		return ((R (*)(AllQuestsWindow*, QuestTabContent*))(Il2CppBase() + 0x129D1FC))(this, newSelection);
	}
	template <typename R = bool> R ShowClaimActQuestResult(Il2CppString* questName, GiveRewardResult result) {
		return ((R (*)(AllQuestsWindow*, Il2CppString*, GiveRewardResult))(Il2CppBase() + 0x129D2F0))(this, questName, result);
	}
	template <typename R = bool> R TryShowQuest(QuestDataEntity* questData) {
		return ((R (*)(AllQuestsWindow*, QuestDataEntity*))(Il2CppBase() + 0x129D67C))(this, questData);
	}
	template <typename R = void> R OnShowb__11_0() {
		return ((R (*)(AllQuestsWindow*))(Il2CppBase() + 0x129DC8C))(this);
	}

};

