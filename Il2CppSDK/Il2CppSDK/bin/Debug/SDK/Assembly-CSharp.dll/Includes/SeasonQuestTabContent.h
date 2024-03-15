#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent.h" 

class SeasonQuestTabContent : public QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonQuestTabContent"));
	}

	template <typename R = uintptr_t> R& questsContainer() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ActQuestViewNew*> R& questViewPrefab() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& questsScroll() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& questsCount() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = Il2CppString*> R get_TabCaption() {
		return ((R (*)(SeasonQuestTabContent*))(Il2CppBase() + 0x1361418))(this);
	}
	template <typename R = void> R Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(SeasonQuestTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x136145C))(this, tabView, tooltipView, avatar, account);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(SeasonQuestTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x136193C))(this, deltaTime, avatar, account);
	}
	template <typename R = bool> R TryShowQuest(QuestDataEntity* questData) {
		return ((R (*)(SeasonQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x1361A5C))(this, questData);
	}

};

