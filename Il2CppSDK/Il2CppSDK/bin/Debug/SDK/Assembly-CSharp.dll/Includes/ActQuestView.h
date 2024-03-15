#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActQuestView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestView"));
	}

	template <typename R = uintptr_t> R& _titleText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _descriptionText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _progressText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _claimButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _trackingButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _completedPanel() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _completedMark() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _trackingMark() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _timerPanel() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _rewardPanel() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _topRewardRow() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _bottomRewardRow() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _npcIcon() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _requestResourceViews() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _rewardResourcePanel() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _rewardResourceViews() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _skipButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _skipPriceText() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = bool> R& _isClassDatail() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = QuestDataEntity*> R& QuestData() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = int32_t> R& QuestId() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = Il2CppString*> R& QuestName() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	 Action1<ActQuestView*>*& EventTrackingClick() {
		return *(Action1<ActQuestView*>**)((uintptr_t)this + 0xE0);
	}
	 Action1<ActQuestView*>*& EventClaimClick() {
		return *(Action1<ActQuestView*>**)((uintptr_t)this + 0xE8);
	}
	 Action1<ActQuestView*>*& EventSkipClick() {
		return *(Action1<ActQuestView*>**)((uintptr_t)this + 0xF0);
	}
	template <typename R = int32_t> R& _rewardsCount() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = int32_t> R& _questProgress() {
		return *(R*)((uintptr_t)this + 0xFC);
	}
	template <typename R = bool> R& _canClaim() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = bool> R& _completed() {
		return *(R*)((uintptr_t)this + 0x101);
	}
	template <typename R = bool> R& _canSkip() {
		return *(R*)((uintptr_t)this + 0x102);
	}
	template <typename R = bool> R& _checkGeneratedReward() {
		return *(R*)((uintptr_t)this + 0x103);
	}

	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(ActQuestView*))(Il2CppBase() + 0x18EAB00))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(ActQuestView*, TooltipView*))(Il2CppBase() + 0x18EAB08))(this, value);
	}
	template <typename R = QuestDataEntity*> R get_QuestData() {
		return ((R (*)(ActQuestView*))(Il2CppBase() + 0x18EAB10))(this);
	}
	template <typename R = void> R set_QuestData(QuestDataEntity* value) {
		return ((R (*)(ActQuestView*, QuestDataEntity*))(Il2CppBase() + 0x18EAB18))(this, value);
	}
	template <typename R = int32_t> R get_QuestId() {
		return ((R (*)(ActQuestView*))(Il2CppBase() + 0x18EAB20))(this);
	}
	template <typename R = void> R set_QuestId(int32_t value) {
		return ((R (*)(ActQuestView*, int32_t))(Il2CppBase() + 0x18EAB28))(this, value);
	}
	template <typename R = Il2CppString*> R get_QuestName() {
		return ((R (*)(ActQuestView*))(Il2CppBase() + 0x18EAB30))(this);
	}
	template <typename R = void> R set_QuestName(Il2CppString* value) {
		return ((R (*)(ActQuestView*, Il2CppString*))(Il2CppBase() + 0x18EAB38))(this, value);
	}
	template <typename R = uintptr_t> R get_ClaimButton() {
		return ((R (*)(ActQuestView*))(Il2CppBase() + 0x18EAB40))(this);
	}
	template <typename R = uintptr_t> R get_SkipButton() {
		return ((R (*)(ActQuestView*))(Il2CppBase() + 0x18EAB48))(this);
	}
	template <typename R = void> R add_EventTrackingClick(Action1<ActQuestView*>* value) {
		return ((R (*)(ActQuestView*, Action1<ActQuestView*>*))(Il2CppBase() + 0x18EAB50))(this, value);
	}
	template <typename R = void> R remove_EventTrackingClick(Action1<ActQuestView*>* value) {
		return ((R (*)(ActQuestView*, Action1<ActQuestView*>*))(Il2CppBase() + 0x18EABF0))(this, value);
	}
	template <typename R = void> R add_EventClaimClick(Action1<ActQuestView*>* value) {
		return ((R (*)(ActQuestView*, Action1<ActQuestView*>*))(Il2CppBase() + 0x18EAC90))(this, value);
	}
	template <typename R = void> R remove_EventClaimClick(Action1<ActQuestView*>* value) {
		return ((R (*)(ActQuestView*, Action1<ActQuestView*>*))(Il2CppBase() + 0x18EAD30))(this, value);
	}
	template <typename R = void> R add_EventSkipClick(Action1<ActQuestView*>* value) {
		return ((R (*)(ActQuestView*, Action1<ActQuestView*>*))(Il2CppBase() + 0x18EADD0))(this, value);
	}
	template <typename R = void> R remove_EventSkipClick(Action1<ActQuestView*>* value) {
		return ((R (*)(ActQuestView*, Action1<ActQuestView*>*))(Il2CppBase() + 0x18EAE70))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ActQuestView*))(Il2CppBase() + 0x18EAF10))(this);
	}
	template <typename R = void> R OnTrackingButtonClick() {
		return ((R (*)(ActQuestView*))(Il2CppBase() + 0x18EB098))(this);
	}
	template <typename R = void> R OnClaimButtonClick() {
		return ((R (*)(ActQuestView*))(Il2CppBase() + 0x18EB12C))(this);
	}
	template <typename R = void> R OnSkipButtonClick() {
		return ((R (*)(ActQuestView*))(Il2CppBase() + 0x18EB1C0))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(ActQuestView*))(Il2CppBase() + 0x18EB220))(this);
	}
	template <typename R = void> R Init(QuestDataEntity* questData) {
		return ((R (*)(ActQuestView*, QuestDataEntity*))(Il2CppBase() + 0x18EB268))(this, questData);
	}
	template <typename R = void> R ShowRequirements(GameEntity* avatar, QuestDataEntity* questData) {
		return ((R (*)(ActQuestView*, GameEntity*, QuestDataEntity*))(Il2CppBase() + 0x18EB894))(this, avatar, questData);
	}
	template <typename R = void> R ShowReward(QuestEntity* quest, QuestDataEntity* questData) {
		return ((R (*)(ActQuestView*, QuestEntity*, QuestDataEntity*))(Il2CppBase() + 0x18EC894))(this, quest, questData);
	}
	template <typename R = void> R UpdateView(int64_t playerId, Il2CppString* premiunPass) {
		return ((R (*)(ActQuestView*, int64_t, Il2CppString*))(Il2CppBase() + 0x18ED65C))(this, playerId, premiunPass);
	}
	template <typename R = void> R UpdateView_1(int64_t playerId, bool hasPremium, bool disableOnNull, bool showProgress) {
		return ((R (*)(ActQuestView*, int64_t, bool, bool, bool))(Il2CppBase() + 0x18ED790))(this, playerId, hasPremium, disableOnNull, showProgress);
	}

};

