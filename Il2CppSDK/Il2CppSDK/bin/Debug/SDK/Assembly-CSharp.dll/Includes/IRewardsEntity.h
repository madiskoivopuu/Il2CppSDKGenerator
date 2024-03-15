#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRewardsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRewardsEntity"));
	}


	template <typename R = RewardsComponent*> R get_rewards() {
		return ((R (*)(IRewardsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRewards() {
		return ((R (*)(IRewardsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRewards(Il2CppArray<Resource>* newList, int32_t newProgressionLevel) {
		return ((R (*)(IRewardsEntity*, Il2CppArray<Resource>*, int32_t))(Il2CppBase() + 0x0))(this, newList, newProgressionLevel);
	}
	template <typename R = void> R ReplaceRewards(Il2CppArray<Resource>* newList, int32_t newProgressionLevel) {
		return ((R (*)(IRewardsEntity*, Il2CppArray<Resource>*, int32_t))(Il2CppBase() + 0x0))(this, newList, newProgressionLevel);
	}
	template <typename R = void> R RemoveRewards() {
		return ((R (*)(IRewardsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

