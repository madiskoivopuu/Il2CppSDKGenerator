#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassItem"));
	}

	template <typename R = uintptr_t> R& _rectTransform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _mainRewards() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _premiumRewards() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _currencyCG() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _currencyImage() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _progressPointsText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _stepOnMark() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _stepOffMark() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _stepText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _specialStepImage() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = BattlePassWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& _blueprint() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = ItemEntity*> R& _item() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = bool> R& _hasPremium() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> R& _mainRewardCount() {
		return *(R*)((uintptr_t)this + 0x84);
	}
	template <typename R = int32_t> R& _premiumRewardCount() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& Points() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = int32_t> R& Step() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = bool> R& _hasCurrencyInMainReward() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = bool> R& _hasCurrencyInPremiumReward() {
		return *(R*)((uintptr_t)this + 0x95);
	}
	template <typename R = bool> R& _hasInboxInMainReward() {
		return *(R*)((uintptr_t)this + 0x96);
	}
	template <typename R = bool> R& _hasInboxInPremiumReward() {
		return *(R*)((uintptr_t)this + 0x97);
	}
	template <typename R = bool> R& _isSpecialStep() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	 Action4<Il2CppString*, Il2CppString*, int32_t, bool>*& OnClaimed() {
		return *(Action4<Il2CppString*, Il2CppString*, int32_t, bool>**)((uintptr_t)this + 0xA0);
	}

	template <typename R = uintptr_t> R get_RectTransform() {
		return ((R (*)(BattlePassItem*))(Il2CppBase() + 0x1679BF0))(this);
	}
	template <typename R = int32_t> R get_Points() {
		return ((R (*)(BattlePassItem*))(Il2CppBase() + 0x1679BF8))(this);
	}
	template <typename R = void> R set_Points(int32_t value) {
		return ((R (*)(BattlePassItem*, int32_t))(Il2CppBase() + 0x1679C00))(this, value);
	}
	template <typename R = int32_t> R get_Step() {
		return ((R (*)(BattlePassItem*))(Il2CppBase() + 0x1679C08))(this);
	}
	template <typename R = void> R set_Step(int32_t value) {
		return ((R (*)(BattlePassItem*, int32_t))(Il2CppBase() + 0x1679C10))(this, value);
	}
	template <typename R = bool> R get_IsMainRewardClaimed() {
		return ((R (*)(BattlePassItem*))(Il2CppBase() + 0x1679C18))(this);
	}
	template <typename R = void> R set_IsMainRewardClaimed(bool value) {
		return ((R (*)(BattlePassItem*, bool))(Il2CppBase() + 0x1679C4C))(this, value);
	}
	template <typename R = bool> R get_IsPremiumRewardClaimed() {
		return ((R (*)(BattlePassItem*))(Il2CppBase() + 0x1679C50))(this);
	}
	template <typename R = void> R set_IsPremiumRewardClaimed(bool value) {
		return ((R (*)(BattlePassItem*, bool))(Il2CppBase() + 0x1679C84))(this, value);
	}
	template <typename R = bool> R get_IsUnlocked() {
		return ((R (*)(BattlePassItem*))(Il2CppBase() + 0x1679C88))(this);
	}
	template <typename R = void> R add_OnClaimed(Action4<Il2CppString*, Il2CppString*, int32_t, bool>* value) {
		return ((R (*)(BattlePassItem*, Action4<Il2CppString*, Il2CppString*, int32_t, bool>*))(Il2CppBase() + 0x1679D38))(this, value);
	}
	template <typename R = void> R remove_OnClaimed(Action4<Il2CppString*, Il2CppString*, int32_t, bool>* value) {
		return ((R (*)(BattlePassItem*, Action4<Il2CppString*, Il2CppString*, int32_t, bool>*))(Il2CppBase() + 0x1679DD8))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(BattlePassItem*))(Il2CppBase() + 0x1679E78))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(BattlePassItem*))(Il2CppBase() + 0x1679148))(this);
	}
	template <typename R = void> R Bind(BattlePassWindow* window, ItemEntity* item) {
		return ((R (*)(BattlePassItem*, BattlePassWindow*, ItemEntity*))(Il2CppBase() + 0x1679534))(this, window, item);
	}
	template <typename R = void> R UpdateStepView(ItemEntity* item) {
		return ((R (*)(BattlePassItem*, ItemEntity*))(Il2CppBase() + 0x167A778))(this, item);
	}
	template <typename R = void> R UpdateUnlocked() {
		return ((R (*)(BattlePassItem*))(Il2CppBase() + 0x167A0B4))(this);
	}
	template <typename R = void> R UpdateReward(Il2CppArray<RewardResourceView*>* itemView, Il2CppArray<Resource>* rewards, bool isPremium, bool isInit, Il2CppArray<MainServerRewardType>* legendaryRewards) {
		return ((R (*)(BattlePassItem*, Il2CppArray<RewardResourceView*>*, Il2CppArray<Resource>*, bool, bool, Il2CppArray<MainServerRewardType>*))(Il2CppBase() + 0x167A334))(this, itemView, rewards, isPremium, isInit, legendaryRewards);
	}
	 ValueTuple3<int32_t, bool, bool>* GetRewardsCount() {
		return ((ValueTuple3<int32_t, bool, bool>* (*)(BattlePassItem*))(Il2CppBase() + 0x167AA08))(this);
	}
	template <typename R = void> R OnBPStateChanged() {
		return ((R (*)(BattlePassItem*))(Il2CppBase() + 0x167AB5C))(this);
	}
	template <typename R = void> R ShowItemInfoWindow(Il2CppString* blueprint) {
		return ((R (*)(BattlePassItem*, Il2CppString*))(Il2CppBase() + 0x167ACB0))(this, blueprint);
	}
	template <typename R = void> R Awakeb__42_0(Il2CppString* resource, int32_t count, bool premium) {
		return ((R (*)(BattlePassItem*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x167AEDC))(this, resource, count, premium);
	}
	template <typename R = void> R Awakeb__42_1(Il2CppString* resource, int32_t count, bool premium) {
		return ((R (*)(BattlePassItem*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x167AF6C))(this, resource, count, premium);
	}

};

