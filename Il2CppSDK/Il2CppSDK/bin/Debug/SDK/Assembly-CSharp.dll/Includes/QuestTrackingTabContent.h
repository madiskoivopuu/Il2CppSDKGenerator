#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent.h" 

class QuestTrackingTabContent : public QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestTrackingTabContent"));
	}

	template <typename R = uintptr_t> R& questsContainer() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ActQuestViewNew*> R& questViewPrefab() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Il2CppList<QuestEntity*>*& trackedQuests() {
		return *(Il2CppList<QuestEntity*>**)((uintptr_t)this + 0x50);
	}

	template <typename R = Il2CppString*> R get_TabCaption() {
		return ((R (*)(QuestTrackingTabContent*))(Il2CppBase() + 0x1706510))(this);
	}
	template <typename R = void> R Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(QuestTrackingTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x1706554))(this, tabView, tooltipView, avatar, account);
	}
	template <typename R = void> R UpdateView(GameEntity* avatar) {
		return ((R (*)(QuestTrackingTabContent*, GameEntity*))(Il2CppBase() + 0x170683C))(this, avatar);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(QuestTrackingTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x17071C8))(this, deltaTime, avatar, account);
	}

};

