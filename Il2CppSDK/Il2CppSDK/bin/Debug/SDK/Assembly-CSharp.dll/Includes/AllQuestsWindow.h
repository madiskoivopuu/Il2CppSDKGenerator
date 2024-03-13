#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class AllQuestsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AllQuestsWindow"));
	}

	template <typename T = uintptr_t> T& tabsRoot() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = QuestCategoryView*> T& categoryTabPrefab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& toggleGroup() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<QuestTabContent*>*> T& tabContents() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = ManagementCategoryView*> T& managementCategoryTab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = QuestTrackingTabContent*> T& trackingContent() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = QuestTabContent*> T& selectedTab() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& isExternalTabShowingTryWasSuccessfull() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& needToShowNewTab() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = QuestTabContent*> T& tabNeedToShowExternally() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(AllQuestsWindow*))(Il2CppBase() + 0x129C318))(this);
	}
	template <typename T = void> T InitializeTab(GameEntity* avatar, AccountEntity* account, QuestTabContent* content, QuestCategoryView* prefab, uintptr_t root, uintptr_t group) {
		return ((T (*)(AllQuestsWindow*, GameEntity*, AccountEntity*, QuestTabContent*, QuestCategoryView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x129C7DC))(this, avatar, account, content, prefab, root, group);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(AllQuestsWindow*))(Il2CppBase() + 0x129CB4C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(AllQuestsWindow*, float))(Il2CppBase() + 0x129CCD0))(this, deltaTime);
	}
	template <typename T = void> T SelectTabExternally(QuestTabContent* newSelection) {
		return ((T (*)(AllQuestsWindow*, QuestTabContent*))(Il2CppBase() + 0x129D130))(this, newSelection);
	}
	template <typename T = void> T OnTabSelected(QuestTabContent* newSelection) {
		return ((T (*)(AllQuestsWindow*, QuestTabContent*))(Il2CppBase() + 0x129D1FC))(this, newSelection);
	}
	template <typename T = bool> T ShowClaimActQuestResult(Il2CppString* questName, GiveRewardResult* result) {
		return ((T (*)(AllQuestsWindow*, Il2CppString*, GiveRewardResult*))(Il2CppBase() + 0x129D2F0))(this, questName, result);
	}
	template <typename T = bool> T TryShowQuest(QuestDataEntity* questData) {
		return ((T (*)(AllQuestsWindow*, QuestDataEntity*))(Il2CppBase() + 0x129D67C))(this, questData);
	}
	template <typename T = void> T OnShowb__11_0() {
		return ((T (*)(AllQuestsWindow*))(Il2CppBase() + 0x129DC8C))(this);
	}

};

