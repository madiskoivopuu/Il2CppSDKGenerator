#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestTabContent"));
	}

	template <typename T = uintptr_t> T& scrollRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& emptyPlaceHolder() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<ActQuestViewNew*>*> T& questViews() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = TooltipView*> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = QuestCategoryView*> T& TabView() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = TooltipView*> T get_TooltipView() {
		return ((T (*)(QuestTabContent*))(Il2CppBase() + 0x1C3A830))(this);
	}
	template <typename T = void> T set_TooltipView(TooltipView* value) {
		return ((T (*)(QuestTabContent*, TooltipView*))(Il2CppBase() + 0x1C3A838))(this, value);
	}
	template <typename T = Il2CppString*> T get_TabCaption() {
		return ((T (*)(QuestTabContent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = QuestCategoryView*> T get_TabView() {
		return ((T (*)(QuestTabContent*))(Il2CppBase() + 0x1C3A840))(this);
	}
	template <typename T = void> T set_TabView(QuestCategoryView* value) {
		return ((T (*)(QuestTabContent*, QuestCategoryView*))(Il2CppBase() + 0x1C3A848))(this, value);
	}
	template <typename T = void> T Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((T (*)(QuestTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x1C3A850))(this, tabView, tooltipView, avatar, account);
	}
	template <typename T = void> T Unbind() {
		return ((T (*)(QuestTabContent*))(Il2CppBase() + 0x1C3A888))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((T (*)(QuestTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x1C3A88C))(this, deltaTime, avatar, account);
	}
	template <typename T = void> T OnTabSelected() {
		return ((T (*)(QuestTabContent*))(Il2CppBase() + 0x1C3AA98))(this);
	}
	template <typename T = void> T SelectTab() {
		return ((T (*)(QuestTabContent*))(Il2CppBase() + 0x1C3AA9C))(this);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> T GetNotifyCheckResult(AccountEntity* account, int64_t playerId) {
		return ((T (*)(QuestTabContent*, AccountEntity*, int64_t))(Il2CppBase() + 0x1C3AB5C))(this, account, playerId);
	}
	template <typename T = void> T OnTrackingClick(ActQuestViewNew* questView) {
		return ((T (*)(QuestTabContent*, ActQuestViewNew*))(Il2CppBase() + 0x1C3ABC0))(this, questView);
	}

};

