#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassWindowState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassWindowState"));
	}

	template <typename T = BattlePassEntity*> T& BattlePass() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = BattlePassViewComponent*> T& BattlePassView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& SeasonActive() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& BattlePassActive() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& BattlePassActiveTime() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = int32_t> T& RewardsCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& HasCurrencyInReward() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& HasInboxInReward() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& IsItemsInited() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = float> T& CurrentItemPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& LastPlayerLevel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& IsRightAlignment() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& MainColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& BottomColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& TextColor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& LockedTextColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ProgressColor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& LastCurrencyCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& HasPremium() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& IsPremiumExist() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = bool> T& HasInfinity() {
		return *(T*)((uintptr_t)this + 0x8E);
	}
	template <typename T = bool> T& IsTimerActive() {
		return *(T*)((uintptr_t)this + 0x8F);
	}
	template <typename T = bool> T& IsSeasonDependent() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& IsBpComplete() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = bool> T& IsLevelsSale() {
		return *(T*)((uintptr_t)this + 0x92);
	}
	template <typename T = bool> T& HideNextBestReward() {
		return *(T*)((uintptr_t)this + 0x93);
	}
	template <typename T = StoreCategory*> T& StoreCategory() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>*> T& Prioritized() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = ValueTuple2int32_t, int32_t>*> T& CurrentClaimedSteps() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& ClaimedBestMainResources() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& ClaimedBestPremiumResources() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& BestMainResources() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& BestPremiumResources() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = ItemEntity*> T& CurrencyItem() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& BestRewardsWindowId() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<BattlePassNextPrizeItem*>*> T& BestBpItems() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = bool> T UpdateActive(BattlePassWindow* window, AccountEntity* account) {
		return ((T (*)(BattlePassWindowState*, BattlePassWindow*, AccountEntity*))(Il2CppBase() + 0xEEACA0))(this, window, account);
	}

};

