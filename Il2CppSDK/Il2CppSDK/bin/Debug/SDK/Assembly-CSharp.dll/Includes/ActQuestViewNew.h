#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActQuestViewNew
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestViewNew"));
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
	template <typename R = TrackBoxView*> R& _trackBox() {
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
	template <typename R = uintptr_t> R& _actRoot() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _npcRoot() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _npcIcon() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _seasonRoot() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _seasonIcon() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _otherRoot() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _otherIcon() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _classRoot() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _classIcon() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _classRarity() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _requestResourcesRoot() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _requestResourceViews() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& _rewardResourcePanel() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _rewardResourceViews() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& _emptyReward() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& _skipButton() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& _skipPriceText() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& _sortUpButton() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& _sortDownButton() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = bool> R& _changeableIcon() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = QuestDataEntity*> R& QuestData() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = int32_t> R& QuestId() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = Il2CppString*> R& QuestName() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	 Action1<ActQuestViewNew*>*& EventTrackingClick() {
		return *(Action1<ActQuestViewNew*>**)((uintptr_t)this + 0x148);
	}
	 Action1<ActQuestViewNew*>*& EventClaimClick() {
		return *(Action1<ActQuestViewNew*>**)((uintptr_t)this + 0x150);
	}
	 Action1<ActQuestViewNew*>*& EventSkipClick() {
		return *(Action1<ActQuestViewNew*>**)((uintptr_t)this + 0x158);
	}
	 Func2<QuestEntity*, ValueTuple2<bool, bool>*>*& trackStatusGetter() {
		return *(Func2<QuestEntity*, ValueTuple2<bool, bool>*>**)((uintptr_t)this + 0x160);
	}
	template <typename R = int32_t> R& _rewardsCount() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = int32_t> R& _questProgress() {
		return *(R*)((uintptr_t)this + 0x16C);
	}
	template <typename R = bool> R& _canClaim() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = bool> R& _completed() {
		return *(R*)((uintptr_t)this + 0x171);
	}
	template <typename R = bool> R& _canSkip() {
		return *(R*)((uintptr_t)this + 0x172);
	}
	template <typename R = bool> R& _checkGeneratedReward() {
		return *(R*)((uintptr_t)this + 0x173);
	}
	template <typename R = bool> R& _manualTrackingEnabled() {
		return *(R*)((uintptr_t)this + 0x174);
	}

	template <typename R = bool> R get_IsTracked() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EAADC))(this);
	}
	template <typename R = uintptr_t> R get_SortUpButton() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE314))(this);
	}
	template <typename R = uintptr_t> R get_SortDownButton() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE31C))(this);
	}
	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE324))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(ActQuestViewNew*, TooltipView*))(Il2CppBase() + 0x18EE32C))(this, value);
	}
	template <typename R = QuestDataEntity*> R get_QuestData() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE33C))(this);
	}
	template <typename R = void> R set_QuestData(QuestDataEntity* value) {
		return ((R (*)(ActQuestViewNew*, QuestDataEntity*))(Il2CppBase() + 0x18EE344))(this, value);
	}
	template <typename R = int32_t> R get_QuestId() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE354))(this);
	}
	template <typename R = void> R set_QuestId(int32_t value) {
		return ((R (*)(ActQuestViewNew*, int32_t))(Il2CppBase() + 0x18EE35C))(this, value);
	}
	template <typename R = Il2CppString*> R get_QuestName() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE364))(this);
	}
	template <typename R = void> R set_QuestName(Il2CppString* value) {
		return ((R (*)(ActQuestViewNew*, Il2CppString*))(Il2CppBase() + 0x18EE36C))(this, value);
	}
	template <typename R = uintptr_t> R get_ClaimButton() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE37C))(this);
	}
	template <typename R = uintptr_t> R get_SkipButton() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE384))(this);
	}
	template <typename R = int32_t> R get_RewardCount() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE38C))(this);
	}
	template <typename R = void> R add_EventTrackingClick(Action1<ActQuestViewNew*>* value) {
		return ((R (*)(ActQuestViewNew*, Action1<ActQuestViewNew*>*))(Il2CppBase() + 0x18E7AA4))(this, value);
	}
	template <typename R = void> R remove_EventTrackingClick(Action1<ActQuestViewNew*>* value) {
		return ((R (*)(ActQuestViewNew*, Action1<ActQuestViewNew*>*))(Il2CppBase() + 0x18E7D18))(this, value);
	}
	template <typename R = void> R add_EventClaimClick(Action1<ActQuestViewNew*>* value) {
		return ((R (*)(ActQuestViewNew*, Action1<ActQuestViewNew*>*))(Il2CppBase() + 0x18E7A00))(this, value);
	}
	template <typename R = void> R remove_EventClaimClick(Action1<ActQuestViewNew*>* value) {
		return ((R (*)(ActQuestViewNew*, Action1<ActQuestViewNew*>*))(Il2CppBase() + 0x18E7C74))(this, value);
	}
	template <typename R = void> R add_EventSkipClick(Action1<ActQuestViewNew*>* value) {
		return ((R (*)(ActQuestViewNew*, Action1<ActQuestViewNew*>*))(Il2CppBase() + 0x18EE394))(this, value);
	}
	template <typename R = void> R remove_EventSkipClick(Action1<ActQuestViewNew*>* value) {
		return ((R (*)(ActQuestViewNew*, Action1<ActQuestViewNew*>*))(Il2CppBase() + 0x18EE438))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE4DC))(this);
	}
	template <typename R = void> R OnTrackingButtonClick() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE654))(this);
	}
	template <typename R = void> R OnClaimButtonClick() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE6E8))(this);
	}
	template <typename R = void> R OnSkipButtonClick() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE77C))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE7DC))(this);
	}
	template <typename R = void> R Init(QuestDataEntity* questData, Func2<QuestEntity*, ValueTuple2<bool, bool>*>* trackStatusGetter) {
		return ((R (*)(ActQuestViewNew*, QuestDataEntity*, Func2<QuestEntity*, ValueTuple2<bool, bool>*>*))(Il2CppBase() + 0x18E9114))(this, questData, trackStatusGetter);
	}
	template <typename R = void> R UpdateTrackBox(bool canBeChanged, bool manualTrackingEnabled, ValueTuple2<bool, bool>* tuple) {
		return ((R (*)(ActQuestViewNew*, bool, bool, ValueTuple2<bool, bool>*))(Il2CppBase() + 0x18F1490))(this, canBeChanged, manualTrackingEnabled, tuple);
	}
	template <typename R = void> R ShowRequirements(GameEntity* avatar, QuestDataEntity* questData) {
		return ((R (*)(ActQuestViewNew*, GameEntity*, QuestDataEntity*))(Il2CppBase() + 0x18EFD90))(this, avatar, questData);
	}
	template <typename R = void> R ShowReward(QuestEntity* quest, QuestDataEntity* questData) {
		return ((R (*)(ActQuestViewNew*, QuestEntity*, QuestDataEntity*))(Il2CppBase() + 0x18EEFBC))(this, quest, questData);
	}
	template <typename R = void> R UpdateIcon(QuestDataEntity* questData) {
		return ((R (*)(ActQuestViewNew*, QuestDataEntity*))(Il2CppBase() + 0x18EE8F8))(this, questData);
	}
	template <typename R = void> R UpdateView(int64_t playerId, Il2CppString* premiunPass) {
		return ((R (*)(ActQuestViewNew*, int64_t, Il2CppString*))(Il2CppBase() + 0x18F15A8))(this, playerId, premiunPass);
	}
	template <typename R = void> R UpdateView_1(int64_t playerId, bool hasPremium, bool disableOnNull) {
		return ((R (*)(ActQuestViewNew*, int64_t, bool, bool))(Il2CppBase() + 0x18E7F14))(this, playerId, hasPremium, disableOnNull);
	}
	template <typename R = void> R ClearTrackingListeners() {
		return ((R (*)(ActQuestViewNew*))(Il2CppBase() + 0x18F16D8))(this);
	}
	template <typename R = void> R SetEmptyRewards(int32_t count) {
		return ((R (*)(ActQuestViewNew*, int32_t))(Il2CppBase() + 0x18F16EC))(this, count);
	}

};

