#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassComponent"));
	}

	template <typename T = int32_t> T& Step() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& StepName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Points() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& InfinityPoints() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& CurrencyType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& NextBestReward() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BestMainRewards() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BestPremiumRewards() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MasterServerMainRewards() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MasterServerPremiumRewards() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MainReward() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PremiumReward() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = bool> T get_IsInfinity() {
		return ((T (*)(BattlePassComponent*))(Il2CppBase() + 0x1674244))(this);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BattlePassComponent*, uintptr_t))(Il2CppBase() + 0x1674254))(this, target);
	}

};

}
