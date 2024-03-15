#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassComponent"));
	}

	template <typename R = int32_t> R& Step() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& StepName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& Points() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& InfinityPoints() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = CurrencyType*> R& CurrencyType() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& NextBestReward() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& BestMainRewards() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& BestPremiumRewards() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<MainServerRewardType*>*> R& MasterServerMainRewards() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<MainServerRewardType*>*> R& MasterServerPremiumRewards() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppArray<Resource*>*> R& MainReward() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppArray<Resource*>*> R& PremiumReward() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = bool> R get_IsInfinity() {
		return ((R (*)(BattlePassComponent*))(Il2CppBase() + 0x1674244))(this);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BattlePassComponent*, Il2CppObject*))(Il2CppBase() + 0x1674254))(this, target);
	}

};

