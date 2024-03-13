#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BattlePassItem.h" 

class BattlePassInfinityItem : public BattlePassItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassInfinityItem"));
	}

	template <typename T = uintptr_t> T& _infinityCurrencyImage() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _infinityProgressPointsText() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _mainRewardCountText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _premiumRewardCountText() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _infinityDescriptionText() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& _pointsOnStep() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& _currentStartPoints() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& _infinityStepPassedCount() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> static T& _descrKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _seasonDescrKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& IsMainRewardClaimed() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& IsPremiumRewardClaimed() {
		return *(T*)((uintptr_t)this + 0xDD);
	}

	template <typename T = bool> T get_IsMainRewardClaimed() {
		return ((T (*)(BattlePassInfinityItem*))(Il2CppBase() + 0x16790B0))(this);
	}
	template <typename T = void> T set_IsMainRewardClaimed(bool value) {
		return ((T (*)(BattlePassInfinityItem*, bool))(Il2CppBase() + 0x16790B8))(this, value);
	}
	template <typename T = bool> T get_IsPremiumRewardClaimed() {
		return ((T (*)(BattlePassInfinityItem*))(Il2CppBase() + 0x16790C4))(this);
	}
	template <typename T = void> T set_IsPremiumRewardClaimed(bool value) {
		return ((T (*)(BattlePassInfinityItem*, bool))(Il2CppBase() + 0x16790CC))(this, value);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(BattlePassInfinityItem*))(Il2CppBase() + 0x16790D8))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(BattlePassInfinityItem*))(Il2CppBase() + 0x16790FC))(this);
	}
	template <typename T = void> T Bind(BattlePassWindow* window, ItemEntity* item) {
		return ((T (*)(BattlePassInfinityItem*, BattlePassWindow*, ItemEntity*))(Il2CppBase() + 0x1679248))(this, window, item);
	}
	template <typename T = void> T UpdatePoints(int32_t currentCurrencyValue) {
		return ((T (*)(BattlePassInfinityItem*, int32_t))(Il2CppBase() + 0x16796A8))(this, currentCurrencyValue);
	}
	template <typename T = ValueTuple3int32_t, bool, bool>*> T GetRewardsCount() {
		return ((T (*)(BattlePassInfinityItem*))(Il2CppBase() + 0x16797D8))(this);
	}

};

