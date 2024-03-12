#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRewardsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRewardsEntity"));
	}


	template <typename T = uintptr_t> T get_rewards() {
		return ((T (*)(IRewardsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRewards() {
		return ((T (*)(IRewardsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRewards(Il2CppArray<uintptr_t>* newList, int32_t newProgressionLevel) {
		return ((T (*)(IRewardsEntity*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, newList, newProgressionLevel);
	}
	template <typename T = void> T ReplaceRewards(Il2CppArray<uintptr_t>* newList, int32_t newProgressionLevel) {
		return ((T (*)(IRewardsEntity*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, newList, newProgressionLevel);
	}
	template <typename T = void> T RemoveRewards() {
		return ((T (*)(IRewardsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
