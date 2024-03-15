#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassWindowState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassWindowState"));
	}

	template <typename R = BattlePassEntity*> R& BattlePass() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = BattlePassViewComponent*> R& BattlePassView() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& SeasonActive() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& BattlePassActive() {
		return *(R*)((uintptr_t)this + 0x21);
	}
	template <typename R = bool> R& BattlePassActiveTime() {
		return *(R*)((uintptr_t)this + 0x22);
	}
	template <typename R = int32_t> R& RewardsCount() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = bool> R& HasCurrencyInReward() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& HasInboxInReward() {
		return *(R*)((uintptr_t)this + 0x29);
	}
	template <typename R = bool> R& IsItemsInited() {
		return *(R*)((uintptr_t)this + 0x2A);
	}
	template <typename R = float> R& CurrentItemPosition() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> R& LastPlayerLevel() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& IsRightAlignment() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = uintptr_t> R& MainColor() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& BottomColor() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& TextColor() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& LockedTextColor() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& ProgressColor() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> R& LastCurrencyCount() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = bool> R& HasPremium() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = bool> R& IsPremiumExist() {
		return *(R*)((uintptr_t)this + 0x8D);
	}
	template <typename R = bool> R& HasInfinity() {
		return *(R*)((uintptr_t)this + 0x8E);
	}
	template <typename R = bool> R& IsTimerActive() {
		return *(R*)((uintptr_t)this + 0x8F);
	}
	template <typename R = bool> R& IsSeasonDependent() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = bool> R& IsBpComplete() {
		return *(R*)((uintptr_t)this + 0x91);
	}
	template <typename R = bool> R& IsLevelsSale() {
		return *(R*)((uintptr_t)this + 0x92);
	}
	template <typename R = bool> R& HideNextBestReward() {
		return *(R*)((uintptr_t)this + 0x93);
	}
	template <typename R = StoreCategory*> R& StoreCategory() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	 Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>*& Prioritized() {
		return *(Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>**)((uintptr_t)this + 0x98);
	}
	 ValueTuple2int32_t, int32_t>*& CurrentClaimedSteps() {
		return *(ValueTuple2int32_t, int32_t>**)((uintptr_t)this + 0xA0);
	}
	 Il2CppDictionary<Il2CppString*, int32_t>*& ClaimedBestMainResources() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0xA8);
	}
	 Il2CppDictionary<Il2CppString*, int32_t>*& ClaimedBestPremiumResources() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0xB0);
	}
	 Il2CppDictionary<Il2CppString*, int32_t>*& BestMainResources() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0xB8);
	}
	 Il2CppDictionary<Il2CppString*, int32_t>*& BestPremiumResources() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0xC0);
	}
	template <typename R = Il2CppArray<ItemEntity*>*> R& Items() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = ItemEntity*> R& CurrencyItem() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = int32_t> R& BestRewardsWindowId() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	 Il2CppList<BattlePassNextPrizeItem*>*& BestBpItems() {
		return *(Il2CppList<BattlePassNextPrizeItem*>**)((uintptr_t)this + 0xE0);
	}

	template <typename R = bool> R UpdateActive(BattlePassWindow* window, AccountEntity* account) {
		return ((R (*)(BattlePassWindowState*, BattlePassWindow*, AccountEntity*))(Il2CppBase() + 0xEEACA0))(this, window, account);
	}

};

