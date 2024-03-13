#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent.h" 

class ClassQuestTabContent : public QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassQuestTabContent"));
	}

	template <typename T = ClassTabController*> T& tabsController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& questsScroll() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& selectedClassIcon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& selectedClassRarity() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& selectedClassName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& lockedAnimator() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& grayScaleMaterial() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& simpleMaterial() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& questsCount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& ActiveTabIndex() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = Il2CppString*> T get_TabCaption() {
		return ((T (*)(ClassQuestTabContent*))(Il2CppBase() + 0x159AC3C))(this);
	}
	template <typename T = void> T Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((T (*)(ClassQuestTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x159AC80))(this, tabView, tooltipView, avatar, account);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((T (*)(ClassQuestTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x159AD60))(this, deltaTime, avatar, account);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> T GetNotifyCheckResult(AccountEntity* account, int64_t playerId) {
		return ((T (*)(ClassQuestTabContent*, AccountEntity*, int64_t))(Il2CppBase() + 0x159AEF0))(this, account, playerId);
	}
	template <typename T = void> T OnTabSelected() {
		return ((T (*)(ClassQuestTabContent*))(Il2CppBase() + 0x159AFC4))(this);
	}
	template <typename T = int32_t> T get_ActiveTabIndex() {
		return ((T (*)(ClassQuestTabContent*))(Il2CppBase() + 0x159B86C))(this);
	}
	template <typename T = void> T set_ActiveTabIndex(int32_t value) {
		return ((T (*)(ClassQuestTabContent*, int32_t))(Il2CppBase() + 0x159B874))(this, value);
	}
	template <typename T = void> T ShowClass(ItemEntity* classItem, bool isLocked) {
		return ((T (*)(ClassQuestTabContent*, ItemEntity*, bool))(Il2CppBase() + 0x159B010))(this, classItem, isLocked);
	}
	template <typename T = bool> T TryShowQuest(QuestDataEntity* questData) {
		return ((T (*)(ClassQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x159B87C))(this, questData);
	}

};

