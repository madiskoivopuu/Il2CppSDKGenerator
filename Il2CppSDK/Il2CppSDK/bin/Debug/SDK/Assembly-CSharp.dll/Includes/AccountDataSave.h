#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "AccountDataCommon.h" 

class AccountDataSave : public AccountDataCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountDataSave"));
	}

	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& DistrictLevel() {
		return *(R*)((uintptr_t)this + 0x6C);
	}
	template <typename R = int64_t> R& FullEnergyTime() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& BlockedPushes() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	 Il2CppDictionary<int64_t, uint32_t>*& SavingsPacks() {
		return *(Il2CppDictionary<int64_t, uint32_t>**)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> R& SeasonPoints() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& EventBPPointsA() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = int32_t> R& EventBPPointsB() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& EventBPPointsC() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = int32_t> R& GuildBossCoins() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = InventoryPower> R& InventoryPower() {
		return *(R*)((uintptr_t)this + 0x9C);
	}
	 Il2CppList<PurchaseEntry*>*& PurchaseHistory() {
		return *(Il2CppList<PurchaseEntry*>**)((uintptr_t)this + 0xC0);
	}


};

