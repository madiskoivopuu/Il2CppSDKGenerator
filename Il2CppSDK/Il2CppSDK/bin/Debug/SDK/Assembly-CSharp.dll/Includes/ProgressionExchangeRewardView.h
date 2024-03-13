#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProgressionExchangeRewardView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProgressionExchangeRewardView"));
	}

	template <typename T = RewardResourceView*> T& _resourceView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _countText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _receiveImage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rarityViews() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& grayscaleMaterial() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _grayscaleImage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _rewardTakenColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _slotGlow() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& RewardItem() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& RewardCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& _progressImage() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _previousValue() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _nextValue() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& _rewardValue() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _rarityColor() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& _progressInRarityColor() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& _lastAccessible() {
		return *(T*)((uintptr_t)this + 0x95);
	}

	template <typename T = Il2CppString*> T get_RewardItem() {
		return ((T (*)(ProgressionExchangeRewardView*))(Il2CppBase() + 0x16E5710))(this);
	}
	template <typename T = void> T set_RewardItem(Il2CppString* value) {
		return ((T (*)(ProgressionExchangeRewardView*, Il2CppString*))(Il2CppBase() + 0x16E5718))(this, value);
	}
	template <typename T = int32_t> T get_RewardCount() {
		return ((T (*)(ProgressionExchangeRewardView*))(Il2CppBase() + 0x16E5720))(this);
	}
	template <typename T = void> T set_RewardCount(int32_t value) {
		return ((T (*)(ProgressionExchangeRewardView*, int32_t))(Il2CppBase() + 0x16E5728))(this, value);
	}
	template <typename T = int32_t> T get_Price() {
		return ((T (*)(ProgressionExchangeRewardView*))(Il2CppBase() + 0x16E5730))(this);
	}
	template <typename T = void> T set_Price(int32_t value) {
		return ((T (*)(ProgressionExchangeRewardView*, int32_t))(Il2CppBase() + 0x16E5738))(this, value);
	}
	template <typename T = void> T Bind(RewardResource* reward, uintptr_t progressImage, TooltipView* tooltipView, int32_t previousValue, int32_t nextValue) {
		return ((T (*)(ProgressionExchangeRewardView*, RewardResource*, uintptr_t, TooltipView*, int32_t, int32_t))(Il2CppBase() + 0x16E5740))(this, reward, progressImage, tooltipView, previousValue, nextValue);
	}
	template <typename T = void> T UpdateProgress(int32_t currentProgress, Il2CppString* claimedReward, int32_t claimedCount, bool dontShowAsAbleToClaim) {
		return ((T (*)(ProgressionExchangeRewardView*, int32_t, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x16E5A78))(this, currentProgress, claimedReward, claimedCount, dontShowAsAbleToClaim);
	}
	template <typename T = void> T UpdateProgressb__28_0() {
		return ((T (*)(ProgressionExchangeRewardView*))(Il2CppBase() + 0x16E5EEC))(this);
	}

};

