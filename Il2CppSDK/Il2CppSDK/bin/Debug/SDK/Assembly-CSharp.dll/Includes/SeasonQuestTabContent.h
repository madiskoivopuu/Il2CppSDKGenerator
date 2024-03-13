#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent.h" 

class SeasonQuestTabContent : public QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonQuestTabContent"));
	}

	template <typename T = uintptr_t> T& questsContainer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = ActQuestViewNew*> T& questViewPrefab() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& questsScroll() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& questsCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppString*> T get_TabCaption() {
		return ((T (*)(SeasonQuestTabContent*))(Il2CppBase() + 0x1361418))(this);
	}
	template <typename T = void> T Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((T (*)(SeasonQuestTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x136145C))(this, tabView, tooltipView, avatar, account);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((T (*)(SeasonQuestTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x136193C))(this, deltaTime, avatar, account);
	}
	template <typename T = bool> T TryShowQuest(QuestDataEntity* questData) {
		return ((T (*)(SeasonQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x1361A5C))(this, questData);
	}

};

