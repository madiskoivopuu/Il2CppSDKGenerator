#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TavernBoardQuestView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TavernBoardQuestView"));
	}

	template <typename R = uintptr_t> R& _claimButton() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TextMonoBehaviour*> R& _cooldownPanel() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = TextMonoBehaviour*> R& _lockedPanel() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _resourceViews() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _rewardViews() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Action1TavernBoardQuestView*>*& OnClaimClickEvent() {
		return *(Action1TavernBoardQuestView*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& QuestName() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = QuestDataEntity*> R& QuestData() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& _failMsg() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = uintptr_t> R get_ClaimButton() {
		return ((R (*)(TavernBoardQuestView*))(Il2CppBase() + 0x16AA154))(this);
	}
	template <typename R = void> R add_OnClaimClickEvent(Action1TavernBoardQuestView*>* value) {
		return ((R (*)(TavernBoardQuestView*, Action1TavernBoardQuestView*>*))(Il2CppBase() + 0x16AA15C))(this, value);
	}
	template <typename R = void> R remove_OnClaimClickEvent(Action1TavernBoardQuestView*>* value) {
		return ((R (*)(TavernBoardQuestView*, Action1TavernBoardQuestView*>*))(Il2CppBase() + 0x16AA1FC))(this, value);
	}
	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(TavernBoardQuestView*))(Il2CppBase() + 0x16AA29C))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(TavernBoardQuestView*, TooltipView*))(Il2CppBase() + 0x16AA2A4))(this, value);
	}
	template <typename R = Il2CppString*> R get_QuestName() {
		return ((R (*)(TavernBoardQuestView*))(Il2CppBase() + 0x16AA2AC))(this);
	}
	template <typename R = void> R set_QuestName(Il2CppString* value) {
		return ((R (*)(TavernBoardQuestView*, Il2CppString*))(Il2CppBase() + 0x16AA2B4))(this, value);
	}
	template <typename R = QuestDataEntity*> R get_QuestData() {
		return ((R (*)(TavernBoardQuestView*))(Il2CppBase() + 0x16AA2BC))(this);
	}
	template <typename R = void> R set_QuestData(QuestDataEntity* value) {
		return ((R (*)(TavernBoardQuestView*, QuestDataEntity*))(Il2CppBase() + 0x16AA2C4))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(TavernBoardQuestView*))(Il2CppBase() + 0x16AA2CC))(this);
	}
	template <typename R = void> R Init(QuestDataEntity* questData) {
		return ((R (*)(TavernBoardQuestView*, QuestDataEntity*))(Il2CppBase() + 0x16AA368))(this, questData);
	}
	template <typename R = void> R UpdateView(GameEntity* avatar, GameEntity* target) {
		return ((R (*)(TavernBoardQuestView*, GameEntity*, GameEntity*))(Il2CppBase() + 0x16AA8F8))(this, avatar, target);
	}
	 ValueTuple2Il2CppString*, int64_t>* UpdateStatus(GameEntity* avatar, GameEntity* target) {
		return ((ValueTuple2Il2CppString*, int64_t>* (*)(TavernBoardQuestView*, GameEntity*, GameEntity*))(Il2CppBase() + 0x16AAD88))(this, avatar, target);
	}
	template <typename R = void> R Awakeb__24_0() {
		return ((R (*)(TavernBoardQuestView*))(Il2CppBase() + 0x16AB004))(this);
	}

};

