#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class ActQuestsWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestsWindow"));
	}

	template <typename T = int32_t> static T& ActiveTabIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _tabsController() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _buyPremiumPanel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _boughtPremiumPanel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _buyPremiumBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _rewardsBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _mainQuestView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _questsScroll() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _questsContainer() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _questViewPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _questViews() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& _questsCount() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = int32_t> static T get_ActiveTabIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x18F32E0))(0);
	}
	template <typename T = void> static T set_ActiveTabIndex(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x18F3344))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ActQuestsWindow*))(Il2CppBase() + 0x18F33AC))(this);
	}
	template <typename T = void> T OnBuyPremium() {
		return ((T (*)(ActQuestsWindow*))(Il2CppBase() + 0x18F354C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(ActQuestsWindow*))(Il2CppBase() + 0x18F35C0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ActQuestsWindow*))(Il2CppBase() + 0x18F37B8))(this);
	}
	template <typename T = void> T ShowAct(uintptr_t actData) {
		return ((T (*)(ActQuestsWindow*, uintptr_t))(Il2CppBase() + 0x18F3814))(this, actData);
	}
	template <typename T = bool> T TryShowQuest(uintptr_t questData) {
		return ((T (*)(ActQuestsWindow*, uintptr_t))(Il2CppBase() + 0x18F3EAC))(this, questData);
	}
	template <typename T = void> T InitQuestsInAct(uintptr_t actData) {
		return ((T (*)(ActQuestsWindow*, uintptr_t))(Il2CppBase() + 0x18F384C))(this, actData);
	}
	template <typename T = void> T OnTrackingClick(uintptr_t questView) {
		return ((T (*)(ActQuestsWindow*, uintptr_t))(Il2CppBase() + 0x18F3FFC))(this, questView);
	}
	template <typename T = void> T OnClaimClick(uintptr_t questView) {
		return ((T (*)(ActQuestsWindow*, uintptr_t))(Il2CppBase() + 0x18F4160))(this, questView);
	}
	template <typename T = bool> T ShowClaimQuestResult(Il2CppString* questName, uintptr_t result) {
		return ((T (*)(ActQuestsWindow*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x18F42A4))(this, questName, result);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ActQuestsWindow*, float))(Il2CppBase() + 0x18F45B4))(this, deltaTime);
	}
	template <typename T = void> T Awakeb__17_0() {
		return ((T (*)(ActQuestsWindow*))(Il2CppBase() + 0x18F4974))(this);
	}

};

}
