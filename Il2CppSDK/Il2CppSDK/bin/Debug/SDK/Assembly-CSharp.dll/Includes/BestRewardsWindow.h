#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BestRewardsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BestRewardsWindow"));
	}

	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _windowTitleText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _premiumCaptionText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _normalCaptionText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = TextMonoBehaviour*> R& _hasPremiumInfo() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = TextMonoBehaviour*> R& _buyPremiumInfo() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	 Il2CppList<RewardResourceView*>*& _premiumRewardViews() {
		return *(Il2CppList<RewardResourceView*>**)((uintptr_t)this + 0xA8);
	}
	 Il2CppList<RewardResourceView*>*& _mainRewardViews() {
		return *(Il2CppList<RewardResourceView*>**)((uintptr_t)this + 0xB0);
	}
	template <typename R = bool> R& _hasPremium() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(BestRewardsWindow*))(Il2CppBase() + 0x16B9CC4))(this);
	}
	template <typename R = void> R ShowAdventRewards(Il2CppList<Resource*>* premiumRewards, Il2CppList<Resource*>* freeRewards) {
		return ((R (*)(BestRewardsWindow*, Il2CppList<Resource*>*, Il2CppList<Resource*>*))(Il2CppBase() + 0x16B9D80))(this, premiumRewards, freeRewards);
	}
	template <typename R = void> R InitItems(Il2CppDictionary<Il2CppString*, int32_t>* mainRewards, Il2CppDictionary<Il2CppString*, int32_t>* claimedMainRewards, Il2CppDictionary<Il2CppString*, int32_t>* premiumRewards, Il2CppDictionary<Il2CppString*, int32_t>* claimedPremiumRewards, bool hasPremium, bool isSeason) {
		return ((R (*)(BestRewardsWindow*, Il2CppDictionary<Il2CppString*, int32_t>*, Il2CppDictionary<Il2CppString*, int32_t>*, Il2CppDictionary<Il2CppString*, int32_t>*, Il2CppDictionary<Il2CppString*, int32_t>*, bool, bool))(Il2CppBase() + 0x16BAEA0))(this, mainRewards, claimedMainRewards, premiumRewards, claimedPremiumRewards, hasPremium, isSeason);
	}
	template <typename R = void> R FillItems(Il2CppList<RewardResourceView*>* _rewardViews, Il2CppDictionary<Il2CppString*, int32_t>* rewards, Il2CppDictionary<Il2CppString*, int32_t>* claimedRewards, bool isPremium) {
		return ((R (*)(BestRewardsWindow*, Il2CppList<RewardResourceView*>*, Il2CppDictionary<Il2CppString*, int32_t>*, Il2CppDictionary<Il2CppString*, int32_t>*, bool))(Il2CppBase() + 0x16BA458))(this, _rewardViews, rewards, claimedRewards, isPremium);
	}

};

