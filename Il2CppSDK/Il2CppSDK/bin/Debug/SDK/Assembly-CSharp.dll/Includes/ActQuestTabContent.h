#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent.h" 

class ActQuestTabContent : public QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestTabContent"));
	}

	template <typename R = ActTabsController*> R& tabsController() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& buyPremiumPanel() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& boughtPremiumPanel() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& buyPremiumBtn() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& rewardsBtn() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = ActQuestViewNew*> R& mainQuestView() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& questsScroll() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& questsContainer() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = ActQuestViewNew*> R& questViewPrefab() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> R& questsCount() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = Il2CppString*> R get_TabCaption() {
		return ((R (*)(ActQuestTabContent*))(Il2CppBase() + 0x18E76D4))(this);
	}
	template <typename R = void> R Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(ActQuestTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x18E7718))(this, tabView, tooltipView, avatar, account);
	}
	template <typename R = void> R Unbind() {
		return ((R (*)(ActQuestTabContent*))(Il2CppBase() + 0x18E7B48))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((R (*)(ActQuestTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x18E7DBC))(this, deltaTime, avatar, account);
	}
	 ValueTuple2<bool, Il2CppString*>* GetNotifyCheckResult(AccountEntity* account, int64_t playerId) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(ActQuestTabContent*, AccountEntity*, int64_t))(Il2CppBase() + 0x18E8A1C))(this, account, playerId);
	}
	template <typename R = void> R ShowAct(QuestDataEntity* actData) {
		return ((R (*)(ActQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x18E8F30))(this, actData);
	}
	template <typename R = bool> R TryShowQuest(QuestDataEntity* questData) {
		return ((R (*)(ActQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x18E9C60))(this, questData);
	}
	template <typename R = bool> R ShowClaimActQuestResult(Il2CppString* questName, GiveRewardResult result) {
		return ((R (*)(ActQuestTabContent*, Il2CppString*, GiveRewardResult))(Il2CppBase() + 0x18E9DB0))(this, questName, result);
	}
	template <typename R = void> R OnClaimClick(ActQuestViewNew* questView) {
		return ((R (*)(ActQuestTabContent*, ActQuestViewNew*))(Il2CppBase() + 0x18EA0C0))(this, questView);
	}
	template <typename R = void> R OnBuyPremium() {
		return ((R (*)(ActQuestTabContent*))(Il2CppBase() + 0x18EA204))(this);
	}
	template <typename R = void> R InitQuestsInAct(QuestDataEntity* actData) {
		return ((R (*)(ActQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x18E98F8))(this, actData);
	}
	 Il2CppList<QuestDataEntity*>* GetActQuests(Il2CppString* actName) {
		return ((Il2CppList<QuestDataEntity*>* (*)(ActQuestTabContent*, Il2CppString*))(Il2CppBase() + 0x18EA318))(this, actName);
	}
	template <typename R = void> R OnActTrackingClick(ActQuestViewNew* questView) {
		return ((R (*)(ActQuestTabContent*, ActQuestViewNew*))(Il2CppBase() + 0x18EA6D8))(this, questView);
	}

};

