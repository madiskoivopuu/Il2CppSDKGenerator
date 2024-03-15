#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent.h" 

class ClassQuestTabContent : public QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassQuestTabContent"));
	}

	template <typename R = ClassTabController*> R& tabsController() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& questsScroll() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& selectedClassIcon() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& selectedClassRarity() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& selectedClassName() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& lockedAnimator() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& grayScaleMaterial() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& simpleMaterial() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> R& questsCount() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> R& ActiveTabIndex() {
		return *(R*)((uintptr_t)this + 0x84);
	}

	template <typename R = Il2CppString*> R get_TabCaption() {
		return ((R (*)(ClassQuestTabContent*))(Il2CppBase() + 0x159AC3C))(this);
	}
	template <typename R = void> R Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(ClassQuestTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x159AC80))(this, tabView, tooltipView, avatar, account);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(ClassQuestTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x159AD60))(this, deltaTime, avatar, account);
	}
	 ValueTuple2bool, Il2CppString*>* GetNotifyCheckResult(AccountEntity* account, int64_t playerId) {
		return ((ValueTuple2bool, Il2CppString*>* (*)(ClassQuestTabContent*, AccountEntity*, int64_t))(Il2CppBase() + 0x159AEF0))(this, account, playerId);
	}
	template <typename R = void> R OnTabSelected() {
		return ((R (*)(ClassQuestTabContent*))(Il2CppBase() + 0x159AFC4))(this);
	}
	template <typename R = int32_t> R get_ActiveTabIndex() {
		return ((R (*)(ClassQuestTabContent*))(Il2CppBase() + 0x159B86C))(this);
	}
	template <typename R = void> R set_ActiveTabIndex(int32_t value) {
		return ((R (*)(ClassQuestTabContent*, int32_t))(Il2CppBase() + 0x159B874))(this, value);
	}
	template <typename R = void> R ShowClass(ItemEntity* classItem, bool isLocked) {
		return ((R (*)(ClassQuestTabContent*, ItemEntity*, bool))(Il2CppBase() + 0x159B010))(this, classItem, isLocked);
	}
	template <typename R = bool> R TryShowQuest(QuestDataEntity* questData) {
		return ((R (*)(ClassQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x159B87C))(this, questData);
	}

};

