#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActQuestView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestView"));
	}

	template <typename T = uintptr_t> T& _titleText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _descriptionText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _progressText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _claimButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _trackingButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _completedPanel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _completedMark() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _trackingMark() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _timerPanel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _rewardPanel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _topRewardRow() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _bottomRewardRow() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _npcIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _requestResourceViews() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _rewardResourcePanel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rewardResourceViews() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _skipButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _skipPriceText() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& _isClassDatail() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& QuestData() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& QuestId() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& QuestName() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = void*> T& EventTrackingClick() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = void*> T& EventClaimClick() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = void*> T& EventSkipClick() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& _rewardsCount() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& _questProgress() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = bool> T& _canClaim() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& _completed() {
		return *(T*)((uintptr_t)this + 0x101);
	}
	template <typename T = bool> T& _canSkip() {
		return *(T*)((uintptr_t)this + 0x102);
	}
	template <typename T = bool> T& _checkGeneratedReward() {
		return *(T*)((uintptr_t)this + 0x103);
	}

	template <typename T = uintptr_t> T get_TooltipView() {
		return ((T (*)(ActQuestView*))(Il2CppBase() + 0x18EAB00))(this);
	}
	template <typename T = void> T set_TooltipView(uintptr_t value) {
		return ((T (*)(ActQuestView*, uintptr_t))(Il2CppBase() + 0x18EAB08))(this, value);
	}
	template <typename T = uintptr_t> T get_QuestData() {
		return ((T (*)(ActQuestView*))(Il2CppBase() + 0x18EAB10))(this);
	}
	template <typename T = void> T set_QuestData(uintptr_t value) {
		return ((T (*)(ActQuestView*, uintptr_t))(Il2CppBase() + 0x18EAB18))(this, value);
	}
	template <typename T = int32_t> T get_QuestId() {
		return ((T (*)(ActQuestView*))(Il2CppBase() + 0x18EAB20))(this);
	}
	template <typename T = void> T set_QuestId(int32_t value) {
		return ((T (*)(ActQuestView*, int32_t))(Il2CppBase() + 0x18EAB28))(this, value);
	}
	template <typename T = Il2CppString*> T get_QuestName() {
		return ((T (*)(ActQuestView*))(Il2CppBase() + 0x18EAB30))(this);
	}
	template <typename T = void> T set_QuestName(Il2CppString* value) {
		return ((T (*)(ActQuestView*, Il2CppString*))(Il2CppBase() + 0x18EAB38))(this, value);
	}
	template <typename T = uintptr_t> T get_ClaimButton() {
		return ((T (*)(ActQuestView*))(Il2CppBase() + 0x18EAB40))(this);
	}
	template <typename T = uintptr_t> T get_SkipButton() {
		return ((T (*)(ActQuestView*))(Il2CppBase() + 0x18EAB48))(this);
	}
	template <typename T = void> T add_EventTrackingClick(void* value) {
		return ((T (*)(ActQuestView*, void*))(Il2CppBase() + 0x18EAB50))(this, value);
	}
	template <typename T = void> T remove_EventTrackingClick(void* value) {
		return ((T (*)(ActQuestView*, void*))(Il2CppBase() + 0x18EABF0))(this, value);
	}
	template <typename T = void> T add_EventClaimClick(void* value) {
		return ((T (*)(ActQuestView*, void*))(Il2CppBase() + 0x18EAC90))(this, value);
	}
	template <typename T = void> T remove_EventClaimClick(void* value) {
		return ((T (*)(ActQuestView*, void*))(Il2CppBase() + 0x18EAD30))(this, value);
	}
	template <typename T = void> T add_EventSkipClick(void* value) {
		return ((T (*)(ActQuestView*, void*))(Il2CppBase() + 0x18EADD0))(this, value);
	}
	template <typename T = void> T remove_EventSkipClick(void* value) {
		return ((T (*)(ActQuestView*, void*))(Il2CppBase() + 0x18EAE70))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ActQuestView*))(Il2CppBase() + 0x18EAF10))(this);
	}
	template <typename T = void> T OnTrackingButtonClick() {
		return ((T (*)(ActQuestView*))(Il2CppBase() + 0x18EB098))(this);
	}
	template <typename T = void> T OnClaimButtonClick() {
		return ((T (*)(ActQuestView*))(Il2CppBase() + 0x18EB12C))(this);
	}
	template <typename T = void> T OnSkipButtonClick() {
		return ((T (*)(ActQuestView*))(Il2CppBase() + 0x18EB1C0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ActQuestView*))(Il2CppBase() + 0x18EB220))(this);
	}
	template <typename T = void> T Init(uintptr_t questData) {
		return ((T (*)(ActQuestView*, uintptr_t))(Il2CppBase() + 0x18EB268))(this, questData);
	}
	template <typename T = void> T ShowRequirements(uintptr_t avatar, uintptr_t questData) {
		return ((T (*)(ActQuestView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18EB894))(this, avatar, questData);
	}
	template <typename T = void> T ShowReward(uintptr_t quest, uintptr_t questData) {
		return ((T (*)(ActQuestView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18EC894))(this, quest, questData);
	}
	template <typename T = void> T UpdateView(int64_t playerId, Il2CppString* premiunPass) {
		return ((T (*)(ActQuestView*, int64_t, Il2CppString*))(Il2CppBase() + 0x18ED65C))(this, playerId, premiunPass);
	}
	template <typename T = void> T UpdateView_1(int64_t playerId, bool hasPremium, bool disableOnNull, bool showProgress) {
		return ((T (*)(ActQuestView*, int64_t, bool, bool, bool))(Il2CppBase() + 0x18ED790))(this, playerId, hasPremium, disableOnNull, showProgress);
	}

};

}
