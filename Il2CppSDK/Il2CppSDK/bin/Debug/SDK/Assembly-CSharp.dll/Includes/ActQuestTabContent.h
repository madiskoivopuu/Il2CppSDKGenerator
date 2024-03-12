#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestTabContent" 

class ActQuestTabContent: QuestTabContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestTabContent"));
	}

	template <typename T = uintptr_t> T& tabsController() {
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
	template <typename T = uintptr_t> T& mainQuestView() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& questsScroll() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& questsContainer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& questViewPrefab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& questsCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = Il2CppString*> T get_TabCaption() {
		return ((T (*)(ActQuestTabContent*))(Il2CppBase() + 0x18E76D4))(this);
	}
	template <typename T = void> T Bind(uintptr_t tabView, uintptr_t tooltipView, uintptr_t avatar, uintptr_t account) {
		return ((T (*)(ActQuestTabContent*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x18E7718))(this, tabView, tooltipView, avatar, account);
	}
	template <typename T = void> T Unbind() {
		return ((T (*)(ActQuestTabContent*))(Il2CppBase() + 0x18E7B48))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime, uintptr_t avatar, uintptr_t account) {
		return ((T (*)(ActQuestTabContent*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x18E7DBC))(this, deltaTime, avatar, account);
	}
	template <typename T = void*> T GetNotifyCheckResult(uintptr_t account, int64_t playerId) {
		return ((T (*)(ActQuestTabContent*, uintptr_t, int64_t))(Il2CppBase() + 0x18E8A1C))(this, account, playerId);
	}
	template <typename T = void> T ShowAct(uintptr_t actData) {
		return ((T (*)(ActQuestTabContent*, uintptr_t))(Il2CppBase() + 0x18E8F30))(this, actData);
	}
	template <typename T = bool> T TryShowQuest(uintptr_t questData) {
		return ((T (*)(ActQuestTabContent*, uintptr_t))(Il2CppBase() + 0x18E9C60))(this, questData);
	}
	template <typename T = bool> T ShowClaimActQuestResult(Il2CppString* questName, uintptr_t result) {
		return ((T (*)(ActQuestTabContent*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x18E9DB0))(this, questName, result);
	}
	template <typename T = void> T OnClaimClick(uintptr_t questView) {
		return ((T (*)(ActQuestTabContent*, uintptr_t))(Il2CppBase() + 0x18EA0C0))(this, questView);
	}
	template <typename T = void> T OnBuyPremium() {
		return ((T (*)(ActQuestTabContent*))(Il2CppBase() + 0x18EA204))(this);
	}
	template <typename T = void> T InitQuestsInAct(uintptr_t actData) {
		return ((T (*)(ActQuestTabContent*, uintptr_t))(Il2CppBase() + 0x18E98F8))(this, actData);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetActQuests(Il2CppString* actName) {
		return ((T (*)(ActQuestTabContent*, Il2CppString*))(Il2CppBase() + 0x18EA318))(this, actName);
	}
	template <typename T = void> T OnActTrackingClick(uintptr_t questView) {
		return ((T (*)(ActQuestTabContent*, uintptr_t))(Il2CppBase() + 0x18EA6D8))(this, questView);
	}

};

}
