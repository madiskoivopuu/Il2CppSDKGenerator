#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ActQuestsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestsWindow"));
	}

	template <typename R = int32_t> static R& ActiveTabIndex() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = ActTabsController*> R& _tabsController() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _buyPremiumPanel() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _boughtPremiumPanel() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _buyPremiumBtn() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _rewardsBtn() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = ActQuestView*> R& _mainQuestView() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _questsScroll() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _questsContainer() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = ActQuestView*> R& _questViewPrefab() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	 Il2CppList<ActQuestView*>*& _questViews() {
		return *(Il2CppList<ActQuestView*>**)((uintptr_t)this + 0xC8);
	}
	template <typename R = int32_t> R& _questsCount() {
		return *(R*)((uintptr_t)this + 0xD0);
	}

	template <typename R = int32_t> static R get_ActiveTabIndex() {
		return ((R (*)(void *))(Il2CppBase() + 0x18F32E0))(0);
	}
	template <typename R = void> static R set_ActiveTabIndex(int32_t value) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x18F3344))(0, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ActQuestsWindow*))(Il2CppBase() + 0x18F33AC))(this);
	}
	template <typename R = void> R OnBuyPremium() {
		return ((R (*)(ActQuestsWindow*))(Il2CppBase() + 0x18F354C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(ActQuestsWindow*))(Il2CppBase() + 0x18F35C0))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ActQuestsWindow*))(Il2CppBase() + 0x18F37B8))(this);
	}
	template <typename R = void> R ShowAct(QuestDataEntity* actData) {
		return ((R (*)(ActQuestsWindow*, QuestDataEntity*))(Il2CppBase() + 0x18F3814))(this, actData);
	}
	template <typename R = bool> R TryShowQuest(QuestDataEntity* questData) {
		return ((R (*)(ActQuestsWindow*, QuestDataEntity*))(Il2CppBase() + 0x18F3EAC))(this, questData);
	}
	template <typename R = void> R InitQuestsInAct(QuestDataEntity* actData) {
		return ((R (*)(ActQuestsWindow*, QuestDataEntity*))(Il2CppBase() + 0x18F384C))(this, actData);
	}
	template <typename R = void> R OnTrackingClick(ActQuestView* questView) {
		return ((R (*)(ActQuestsWindow*, ActQuestView*))(Il2CppBase() + 0x18F3FFC))(this, questView);
	}
	template <typename R = void> R OnClaimClick(ActQuestView* questView) {
		return ((R (*)(ActQuestsWindow*, ActQuestView*))(Il2CppBase() + 0x18F4160))(this, questView);
	}
	template <typename R = bool> R ShowClaimQuestResult(Il2CppString* questName, GiveRewardResult result) {
		return ((R (*)(ActQuestsWindow*, Il2CppString*, GiveRewardResult))(Il2CppBase() + 0x18F42A4))(this, questName, result);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ActQuestsWindow*, float))(Il2CppBase() + 0x18F45B4))(this, deltaTime);
	}
	template <typename R = void> R Awakeb__17_0() {
		return ((R (*)(ActQuestsWindow*))(Il2CppBase() + 0x18F4974))(this);
	}

};

