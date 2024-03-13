#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BestRewardsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BestRewardsWindow"));
	}

	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _windowTitleText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _premiumCaptionText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _normalCaptionText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = TextMonoBehaviour*> T& _hasPremiumInfo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = TextMonoBehaviour*> T& _buyPremiumInfo() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<RewardResourceView*>*> T& _premiumRewardViews() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<RewardResourceView*>*> T& _mainRewardViews() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& _hasPremium() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(BestRewardsWindow*))(Il2CppBase() + 0x16B9CC4))(this);
	}
	template <typename T = void> T ShowAdventRewards(Il2CppList<Resource*>* premiumRewards, Il2CppList<Resource*>* freeRewards) {
		return ((T (*)(BestRewardsWindow*, Il2CppList<Resource*>*, Il2CppList<Resource*>*))(Il2CppBase() + 0x16B9D80))(this, premiumRewards, freeRewards);
	}
	template <typename T = void> T InitItems(Il2CppDictionary<Il2CppString*, int32_t>* mainRewards, Il2CppDictionary<Il2CppString*, int32_t>* claimedMainRewards, Il2CppDictionary<Il2CppString*, int32_t>* premiumRewards, Il2CppDictionary<Il2CppString*, int32_t>* claimedPremiumRewards, bool hasPremium, bool isSeason) {
		return ((T (*)(BestRewardsWindow*, Il2CppDictionary<Il2CppString*, int32_t>*, Il2CppDictionary<Il2CppString*, int32_t>*, Il2CppDictionary<Il2CppString*, int32_t>*, Il2CppDictionary<Il2CppString*, int32_t>*, bool, bool))(Il2CppBase() + 0x16BAEA0))(this, mainRewards, claimedMainRewards, premiumRewards, claimedPremiumRewards, hasPremium, isSeason);
	}
	template <typename T = void> T FillItems(Il2CppList<RewardResourceView*>* _rewardViews, Il2CppDictionary<Il2CppString*, int32_t>* rewards, Il2CppDictionary<Il2CppString*, int32_t>* claimedRewards, bool isPremium) {
		return ((T (*)(BestRewardsWindow*, Il2CppList<RewardResourceView*>*, Il2CppDictionary<Il2CppString*, int32_t>*, Il2CppDictionary<Il2CppString*, int32_t>*, bool))(Il2CppBase() + 0x16BA458))(this, _rewardViews, rewards, claimedRewards, isPremium);
	}

};

