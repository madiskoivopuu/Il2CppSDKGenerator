#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProgressionExchangeRewardView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProgressionExchangeRewardView"));
	}

	template <typename R = RewardResourceView*> R& _resourceView() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _countText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _receiveImage() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _rarityViews() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& grayscaleMaterial() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _grayscaleImage() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _rewardTakenColor() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _slotGlow() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& RewardItem() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& RewardCount() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& Price() {
		return *(R*)((uintptr_t)this + 0x6C);
	}
	template <typename R = uintptr_t> R& _progressImage() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> R& _previousValue() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> R& _nextValue() {
		return *(R*)((uintptr_t)this + 0x7C);
	}
	template <typename R = int32_t> R& _rewardValue() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _rarityColor() {
		return *(R*)((uintptr_t)this + 0x84);
	}
	template <typename R = bool> R& _progressInRarityColor() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = bool> R& _lastAccessible() {
		return *(R*)((uintptr_t)this + 0x95);
	}

	template <typename R = Il2CppString*> R get_RewardItem() {
		return ((R (*)(ProgressionExchangeRewardView*))(Il2CppBase() + 0x16E5710))(this);
	}
	template <typename R = void> R set_RewardItem(Il2CppString* value) {
		return ((R (*)(ProgressionExchangeRewardView*, Il2CppString*))(Il2CppBase() + 0x16E5718))(this, value);
	}
	template <typename R = int32_t> R get_RewardCount() {
		return ((R (*)(ProgressionExchangeRewardView*))(Il2CppBase() + 0x16E5720))(this);
	}
	template <typename R = void> R set_RewardCount(int32_t value) {
		return ((R (*)(ProgressionExchangeRewardView*, int32_t))(Il2CppBase() + 0x16E5728))(this, value);
	}
	template <typename R = int32_t> R get_Price() {
		return ((R (*)(ProgressionExchangeRewardView*))(Il2CppBase() + 0x16E5730))(this);
	}
	template <typename R = void> R set_Price(int32_t value) {
		return ((R (*)(ProgressionExchangeRewardView*, int32_t))(Il2CppBase() + 0x16E5738))(this, value);
	}
	template <typename R = void> R Bind(RewardResource* reward, uintptr_t progressImage, TooltipView* tooltipView, int32_t previousValue, int32_t nextValue) {
		return ((R (*)(ProgressionExchangeRewardView*, RewardResource*, uintptr_t, TooltipView*, int32_t, int32_t))(Il2CppBase() + 0x16E5740))(this, reward, progressImage, tooltipView, previousValue, nextValue);
	}
	template <typename R = void> R UpdateProgress(int32_t currentProgress, Il2CppString* claimedReward, int32_t claimedCount, bool dontShowAsAbleToClaim) {
		return ((R (*)(ProgressionExchangeRewardView*, int32_t, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x16E5A78))(this, currentProgress, claimedReward, claimedCount, dontShowAsAbleToClaim);
	}
	template <typename R = void> R UpdateProgressb__28_0() {
		return ((R (*)(ProgressionExchangeRewardView*))(Il2CppBase() + 0x16E5EEC))(this);
	}

};

