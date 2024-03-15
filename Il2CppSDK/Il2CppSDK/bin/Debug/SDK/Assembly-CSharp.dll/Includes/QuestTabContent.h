#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestTabContent"));
	}

	template <typename R = uintptr_t> R& scrollRoot() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& emptyPlaceHolder() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppList<ActQuestViewNew*>*& questViews() {
		return *(Il2CppList<ActQuestViewNew*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = QuestCategoryView*> R& TabView() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(QuestTabContent*))(Il2CppBase() + 0x1C3A830))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(QuestTabContent*, TooltipView*))(Il2CppBase() + 0x1C3A838))(this, value);
	}
	template <typename R = Il2CppString*> R get_TabCaption() {
		return ((R (*)(QuestTabContent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = QuestCategoryView*> R get_TabView() {
		return ((R (*)(QuestTabContent*))(Il2CppBase() + 0x1C3A840))(this);
	}
	template <typename R = void> R set_TabView(QuestCategoryView* value) {
		return ((R (*)(QuestTabContent*, QuestCategoryView*))(Il2CppBase() + 0x1C3A848))(this, value);
	}
	template <typename R = void> R Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(QuestTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x1C3A850))(this, tabView, tooltipView, avatar, account);
	}
	template <typename R = void> R Unbind() {
		return ((R (*)(QuestTabContent*))(Il2CppBase() + 0x1C3A888))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(QuestTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x1C3A88C))(this, deltaTime, avatar, account);
	}
	template <typename R = void> R OnTabSelected() {
		return ((R (*)(QuestTabContent*))(Il2CppBase() + 0x1C3AA98))(this);
	}
	template <typename R = void> R SelectTab() {
		return ((R (*)(QuestTabContent*))(Il2CppBase() + 0x1C3AA9C))(this);
	}
	 ValueTuple2bool, Il2CppString*>* GetNotifyCheckResult(AccountEntity* account, int64_t playerId) {
		return ((ValueTuple2bool, Il2CppString*>* (*)(QuestTabContent*, AccountEntity*, int64_t))(Il2CppBase() + 0x1C3AB5C))(this, account, playerId);
	}
	template <typename R = void> R OnTrackingClick(ActQuestViewNew* questView) {
		return ((R (*)(QuestTabContent*, ActQuestViewNew*))(Il2CppBase() + 0x1C3ABC0))(this, questView);
	}

};

