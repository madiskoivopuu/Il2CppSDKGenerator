#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BattlePassItem.h" 

class BattlePassInfinityItem : public BattlePassItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassInfinityItem"));
	}

	template <typename R = uintptr_t> R& _infinityCurrencyImage() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _infinityProgressPointsText() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _mainRewardCountText() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _premiumRewardCountText() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _infinityDescriptionText() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = int32_t> R& _pointsOnStep() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = int32_t> R& _currentStartPoints() {
		return *(R*)((uintptr_t)this + 0xD4);
	}
	template <typename R = int32_t> R& _infinityStepPassedCount() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = Il2CppString*> static R& _descrKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& _seasonDescrKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = bool> R& IsMainRewardClaimed() {
		return *(R*)((uintptr_t)this + 0xDC);
	}
	template <typename R = bool> R& IsPremiumRewardClaimed() {
		return *(R*)((uintptr_t)this + 0xDD);
	}

	template <typename R = bool> R get_IsMainRewardClaimed() {
		return ((R (*)(BattlePassInfinityItem*))(Il2CppBase() + 0x16790B0))(this);
	}
	template <typename R = void> R set_IsMainRewardClaimed(bool value) {
		return ((R (*)(BattlePassInfinityItem*, bool))(Il2CppBase() + 0x16790B8))(this, value);
	}
	template <typename R = bool> R get_IsPremiumRewardClaimed() {
		return ((R (*)(BattlePassInfinityItem*))(Il2CppBase() + 0x16790C4))(this);
	}
	template <typename R = void> R set_IsPremiumRewardClaimed(bool value) {
		return ((R (*)(BattlePassInfinityItem*, bool))(Il2CppBase() + 0x16790CC))(this, value);
	}
	template <typename R = bool> R get_IsActive() {
		return ((R (*)(BattlePassInfinityItem*))(Il2CppBase() + 0x16790D8))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(BattlePassInfinityItem*))(Il2CppBase() + 0x16790FC))(this);
	}
	template <typename R = void> R Bind(BattlePassWindow* window, ItemEntity* item) {
		return ((R (*)(BattlePassInfinityItem*, BattlePassWindow*, ItemEntity*))(Il2CppBase() + 0x1679248))(this, window, item);
	}
	template <typename R = void> R UpdatePoints(int32_t currentCurrencyValue) {
		return ((R (*)(BattlePassInfinityItem*, int32_t))(Il2CppBase() + 0x16796A8))(this, currentCurrencyValue);
	}
	 ValueTuple3int32_t, bool, bool>* GetRewardsCount() {
		return ((ValueTuple3int32_t, bool, bool>* (*)(BattlePassInfinityItem*))(Il2CppBase() + 0x16797D8))(this);
	}

};

