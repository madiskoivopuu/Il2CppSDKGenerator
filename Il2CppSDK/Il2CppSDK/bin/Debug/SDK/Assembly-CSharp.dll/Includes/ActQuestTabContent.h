#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent.h" 

class ActQuestTabContent : public QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestTabContent"));
	}

	template <typename T = ActTabsController*> T& tabsController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& buyPremiumPanel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& boughtPremiumPanel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& buyPremiumBtn() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& rewardsBtn() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = ActQuestViewNew*> T& mainQuestView() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& questsScroll() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& questsContainer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = ActQuestViewNew*> T& questViewPrefab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& questsCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = Il2CppString*> T get_TabCaption() {
		return ((T (*)(ActQuestTabContent*))(Il2CppBase() + 0x18E76D4))(this);
	}
	template <typename T = void> T Bind(QuestCategoryView* tabView, TooltipView* tooltipView, GameEntity* avatar, AccountEntity* account) {
		return ((T (*)(ActQuestTabContent*, QuestCategoryView*, TooltipView*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x18E7718))(this, tabView, tooltipView, avatar, account);
	}
	template <typename T = void> T Unbind() {
		return ((T (*)(ActQuestTabContent*))(Il2CppBase() + 0x18E7B48))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime, GameEntity* avatar, AccountEntity* account) {
		return ((T (*)(ActQuestTabContent*, float, GameEntity*, AccountEntity*))(Il2CppBase() + 0x18E7DBC))(this, deltaTime, avatar, account);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> T GetNotifyCheckResult(AccountEntity* account, int64_t playerId) {
		return ((T (*)(ActQuestTabContent*, AccountEntity*, int64_t))(Il2CppBase() + 0x18E8A1C))(this, account, playerId);
	}
	template <typename T = void> T ShowAct(QuestDataEntity* actData) {
		return ((T (*)(ActQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x18E8F30))(this, actData);
	}
	template <typename T = bool> T TryShowQuest(QuestDataEntity* questData) {
		return ((T (*)(ActQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x18E9C60))(this, questData);
	}
	template <typename T = bool> T ShowClaimActQuestResult(Il2CppString* questName, GiveRewardResult* result) {
		return ((T (*)(ActQuestTabContent*, Il2CppString*, GiveRewardResult*))(Il2CppBase() + 0x18E9DB0))(this, questName, result);
	}
	template <typename T = void> T OnClaimClick(ActQuestViewNew* questView) {
		return ((T (*)(ActQuestTabContent*, ActQuestViewNew*))(Il2CppBase() + 0x18EA0C0))(this, questView);
	}
	template <typename T = void> T OnBuyPremium() {
		return ((T (*)(ActQuestTabContent*))(Il2CppBase() + 0x18EA204))(this);
	}
	template <typename T = void> T InitQuestsInAct(QuestDataEntity* actData) {
		return ((T (*)(ActQuestTabContent*, QuestDataEntity*))(Il2CppBase() + 0x18E98F8))(this, actData);
	}
	template <typename T = Il2CppList<QuestDataEntity*>*> T GetActQuests(Il2CppString* actName) {
		return ((T (*)(ActQuestTabContent*, Il2CppString*))(Il2CppBase() + 0x18EA318))(this, actName);
	}
	template <typename T = void> T OnActTrackingClick(ActQuestViewNew* questView) {
		return ((T (*)(ActQuestTabContent*, ActQuestViewNew*))(Il2CppBase() + 0x18EA6D8))(this, questView);
	}

};

