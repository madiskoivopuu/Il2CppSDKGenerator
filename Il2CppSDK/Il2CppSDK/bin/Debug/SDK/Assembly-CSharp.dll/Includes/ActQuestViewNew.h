#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActQuestViewNew
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestViewNew"));
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
	template <typename T = TrackBoxView*> T& _trackBox() {
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
	template <typename T = uintptr_t> T& _actRoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _npcRoot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _npcIcon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _seasonRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _seasonIcon() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _otherRoot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _otherIcon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _classRoot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _classIcon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _classRarity() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _requestResourcesRoot() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _requestResourceViews() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _rewardResourcePanel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rewardResourceViews() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _emptyReward() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _skipButton() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _skipPriceText() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _sortUpButton() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _sortDownButton() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& _changeableIcon() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = TooltipView*> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = QuestDataEntity*> T& QuestData() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& QuestId() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppString*> T& QuestName() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Action1ActQuestViewNew*>*> T& EventTrackingClick() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Action1ActQuestViewNew*>*> T& EventClaimClick() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Action1ActQuestViewNew*>*> T& EventSkipClick() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Func2QuestEntity*, ValueTuple2bool, bool>*>*> T& trackStatusGetter() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& _rewardsCount() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& _questProgress() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = bool> T& _canClaim() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = bool> T& _completed() {
		return *(T*)((uintptr_t)this + 0x171);
	}
	template <typename T = bool> T& _canSkip() {
		return *(T*)((uintptr_t)this + 0x172);
	}
	template <typename T = bool> T& _checkGeneratedReward() {
		return *(T*)((uintptr_t)this + 0x173);
	}
	template <typename T = bool> T& _manualTrackingEnabled() {
		return *(T*)((uintptr_t)this + 0x174);
	}

	template <typename T = bool> T get_IsTracked() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EAADC))(this);
	}
	template <typename T = uintptr_t> T get_SortUpButton() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE314))(this);
	}
	template <typename T = uintptr_t> T get_SortDownButton() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE31C))(this);
	}
	template <typename T = TooltipView*> T get_TooltipView() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE324))(this);
	}
	template <typename T = void> T set_TooltipView(TooltipView* value) {
		return ((T (*)(ActQuestViewNew*, TooltipView*))(Il2CppBase() + 0x18EE32C))(this, value);
	}
	template <typename T = QuestDataEntity*> T get_QuestData() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE33C))(this);
	}
	template <typename T = void> T set_QuestData(QuestDataEntity* value) {
		return ((T (*)(ActQuestViewNew*, QuestDataEntity*))(Il2CppBase() + 0x18EE344))(this, value);
	}
	template <typename T = int32_t> T get_QuestId() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE354))(this);
	}
	template <typename T = void> T set_QuestId(int32_t value) {
		return ((T (*)(ActQuestViewNew*, int32_t))(Il2CppBase() + 0x18EE35C))(this, value);
	}
	template <typename T = Il2CppString*> T get_QuestName() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE364))(this);
	}
	template <typename T = void> T set_QuestName(Il2CppString* value) {
		return ((T (*)(ActQuestViewNew*, Il2CppString*))(Il2CppBase() + 0x18EE36C))(this, value);
	}
	template <typename T = uintptr_t> T get_ClaimButton() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE37C))(this);
	}
	template <typename T = uintptr_t> T get_SkipButton() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE384))(this);
	}
	template <typename T = int32_t> T get_RewardCount() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE38C))(this);
	}
	template <typename T = void> T add_EventTrackingClick(Action1ActQuestViewNew*>* value) {
		return ((T (*)(ActQuestViewNew*, Action1ActQuestViewNew*>*))(Il2CppBase() + 0x18E7AA4))(this, value);
	}
	template <typename T = void> T remove_EventTrackingClick(Action1ActQuestViewNew*>* value) {
		return ((T (*)(ActQuestViewNew*, Action1ActQuestViewNew*>*))(Il2CppBase() + 0x18E7D18))(this, value);
	}
	template <typename T = void> T add_EventClaimClick(Action1ActQuestViewNew*>* value) {
		return ((T (*)(ActQuestViewNew*, Action1ActQuestViewNew*>*))(Il2CppBase() + 0x18E7A00))(this, value);
	}
	template <typename T = void> T remove_EventClaimClick(Action1ActQuestViewNew*>* value) {
		return ((T (*)(ActQuestViewNew*, Action1ActQuestViewNew*>*))(Il2CppBase() + 0x18E7C74))(this, value);
	}
	template <typename T = void> T add_EventSkipClick(Action1ActQuestViewNew*>* value) {
		return ((T (*)(ActQuestViewNew*, Action1ActQuestViewNew*>*))(Il2CppBase() + 0x18EE394))(this, value);
	}
	template <typename T = void> T remove_EventSkipClick(Action1ActQuestViewNew*>* value) {
		return ((T (*)(ActQuestViewNew*, Action1ActQuestViewNew*>*))(Il2CppBase() + 0x18EE438))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE4DC))(this);
	}
	template <typename T = void> T OnTrackingButtonClick() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE654))(this);
	}
	template <typename T = void> T OnClaimButtonClick() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE6E8))(this);
	}
	template <typename T = void> T OnSkipButtonClick() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE77C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18EE7DC))(this);
	}
	template <typename T = void> T Init(QuestDataEntity* questData, Func2QuestEntity*, ValueTuple2bool, bool>*>* trackStatusGetter) {
		return ((T (*)(ActQuestViewNew*, QuestDataEntity*, Func2QuestEntity*, ValueTuple2bool, bool>*>*))(Il2CppBase() + 0x18E9114))(this, questData, trackStatusGetter);
	}
	template <typename T = void> T UpdateTrackBox(bool canBeChanged, bool manualTrackingEnabled, ValueTuple2bool, bool>* tuple) {
		return ((T (*)(ActQuestViewNew*, bool, bool, ValueTuple2bool, bool>*))(Il2CppBase() + 0x18F1490))(this, canBeChanged, manualTrackingEnabled, tuple);
	}
	template <typename T = void> T ShowRequirements(GameEntity* avatar, QuestDataEntity* questData) {
		return ((T (*)(ActQuestViewNew*, GameEntity*, QuestDataEntity*))(Il2CppBase() + 0x18EFD90))(this, avatar, questData);
	}
	template <typename T = void> T ShowReward(QuestEntity* quest, QuestDataEntity* questData) {
		return ((T (*)(ActQuestViewNew*, QuestEntity*, QuestDataEntity*))(Il2CppBase() + 0x18EEFBC))(this, quest, questData);
	}
	template <typename T = void> T UpdateIcon(QuestDataEntity* questData) {
		return ((T (*)(ActQuestViewNew*, QuestDataEntity*))(Il2CppBase() + 0x18EE8F8))(this, questData);
	}
	template <typename T = void> T UpdateView(int64_t playerId, Il2CppString* premiunPass) {
		return ((T (*)(ActQuestViewNew*, int64_t, Il2CppString*))(Il2CppBase() + 0x18F15A8))(this, playerId, premiunPass);
	}
	template <typename T = void> T UpdateView_1(int64_t playerId, bool hasPremium, bool disableOnNull) {
		return ((T (*)(ActQuestViewNew*, int64_t, bool, bool))(Il2CppBase() + 0x18E7F14))(this, playerId, hasPremium, disableOnNull);
	}
	template <typename T = void> T ClearTrackingListeners() {
		return ((T (*)(ActQuestViewNew*))(Il2CppBase() + 0x18F16D8))(this);
	}
	template <typename T = void> T SetEmptyRewards(int32_t count) {
		return ((T (*)(ActQuestViewNew*, int32_t))(Il2CppBase() + 0x18F16EC))(this, count);
	}

};

