#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "AccountDataCommon.h" 

class AccountDataSave : public AccountDataCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountDataSave"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& DistrictLevel() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int64_t> T& FullEnergyTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BlockedPushes() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<int64_t, uint32_t>*> T& SavingsPacks() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& SeasonPoints() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& EventBPPointsA() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& EventBPPointsB() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& EventBPPointsC() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& GuildBossCoins() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = InventoryPower*> T& InventoryPower() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<PurchaseEntry*>*> T& PurchaseHistory() {
		return *(T*)((uintptr_t)this + 0xC0);
	}


};

