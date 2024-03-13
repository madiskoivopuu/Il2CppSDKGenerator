#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassItem"));
	}

	template <typename T = uintptr_t> T& _rectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _mainRewards() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _premiumRewards() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _currencyCG() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _currencyImage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _progressPointsText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _stepOnMark() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _stepOffMark() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _stepText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _specialStepImage() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = BattlePassWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& _blueprint() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = ItemEntity*> T& _item() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _hasPremium() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _mainRewardCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& _premiumRewardCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& Points() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& Step() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& _hasCurrencyInMainReward() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& _hasCurrencyInPremiumReward() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = bool> T& _hasInboxInMainReward() {
		return *(T*)((uintptr_t)this + 0x96);
	}
	template <typename T = bool> T& _hasInboxInPremiumReward() {
		return *(T*)((uintptr_t)this + 0x97);
	}
	template <typename T = bool> T& _isSpecialStep() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Action4Il2CppString*, Il2CppString*, int32_t, bool>*> T& OnClaimed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = uintptr_t> T get_RectTransform() {
		return ((T (*)(BattlePassItem*))(Il2CppBase() + 0x1679BF0))(this);
	}
	template <typename T = int32_t> T get_Points() {
		return ((T (*)(BattlePassItem*))(Il2CppBase() + 0x1679BF8))(this);
	}
	template <typename T = void> T set_Points(int32_t value) {
		return ((T (*)(BattlePassItem*, int32_t))(Il2CppBase() + 0x1679C00))(this, value);
	}
	template <typename T = int32_t> T get_Step() {
		return ((T (*)(BattlePassItem*))(Il2CppBase() + 0x1679C08))(this);
	}
	template <typename T = void> T set_Step(int32_t value) {
		return ((T (*)(BattlePassItem*, int32_t))(Il2CppBase() + 0x1679C10))(this, value);
	}
	template <typename T = bool> T get_IsMainRewardClaimed() {
		return ((T (*)(BattlePassItem*))(Il2CppBase() + 0x1679C18))(this);
	}
	template <typename T = void> T set_IsMainRewardClaimed(bool value) {
		return ((T (*)(BattlePassItem*, bool))(Il2CppBase() + 0x1679C4C))(this, value);
	}
	template <typename T = bool> T get_IsPremiumRewardClaimed() {
		return ((T (*)(BattlePassItem*))(Il2CppBase() + 0x1679C50))(this);
	}
	template <typename T = void> T set_IsPremiumRewardClaimed(bool value) {
		return ((T (*)(BattlePassItem*, bool))(Il2CppBase() + 0x1679C84))(this, value);
	}
	template <typename T = bool> T get_IsUnlocked() {
		return ((T (*)(BattlePassItem*))(Il2CppBase() + 0x1679C88))(this);
	}
	template <typename T = void> T add_OnClaimed(Action4Il2CppString*, Il2CppString*, int32_t, bool>* value) {
		return ((T (*)(BattlePassItem*, Action4Il2CppString*, Il2CppString*, int32_t, bool>*))(Il2CppBase() + 0x1679D38))(this, value);
	}
	template <typename T = void> T remove_OnClaimed(Action4Il2CppString*, Il2CppString*, int32_t, bool>* value) {
		return ((T (*)(BattlePassItem*, Action4Il2CppString*, Il2CppString*, int32_t, bool>*))(Il2CppBase() + 0x1679DD8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BattlePassItem*))(Il2CppBase() + 0x1679E78))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(BattlePassItem*))(Il2CppBase() + 0x1679148))(this);
	}
	template <typename T = void> T Bind(BattlePassWindow* window, ItemEntity* item) {
		return ((T (*)(BattlePassItem*, BattlePassWindow*, ItemEntity*))(Il2CppBase() + 0x1679534))(this, window, item);
	}
	template <typename T = void> T UpdateStepView(ItemEntity* item) {
		return ((T (*)(BattlePassItem*, ItemEntity*))(Il2CppBase() + 0x167A778))(this, item);
	}
	template <typename T = void> T UpdateUnlocked() {
		return ((T (*)(BattlePassItem*))(Il2CppBase() + 0x167A0B4))(this);
	}
	template <typename T = void> T UpdateReward(Il2CppArray<uintptr_t>* itemView, Il2CppArray<uintptr_t>* rewards, bool isPremium, bool isInit, Il2CppArray<uintptr_t>* legendaryRewards) {
		return ((T (*)(BattlePassItem*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x167A334))(this, itemView, rewards, isPremium, isInit, legendaryRewards);
	}
	template <typename T = ValueTuple3int32_t, bool, bool>*> T GetRewardsCount() {
		return ((T (*)(BattlePassItem*))(Il2CppBase() + 0x167AA08))(this);
	}
	template <typename T = void> T OnBPStateChanged() {
		return ((T (*)(BattlePassItem*))(Il2CppBase() + 0x167AB5C))(this);
	}
	template <typename T = void> T ShowItemInfoWindow(Il2CppString* blueprint) {
		return ((T (*)(BattlePassItem*, Il2CppString*))(Il2CppBase() + 0x167ACB0))(this, blueprint);
	}
	template <typename T = void> T Awakeb__42_0(Il2CppString* resource, int32_t count, bool premium) {
		return ((T (*)(BattlePassItem*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x167AEDC))(this, resource, count, premium);
	}
	template <typename T = void> T Awakeb__42_1(Il2CppString* resource, int32_t count, bool premium) {
		return ((T (*)(BattlePassItem*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x167AF6C))(this, resource, count, premium);
	}

};

