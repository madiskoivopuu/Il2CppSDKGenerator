#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TavernBoardQuestView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TavernBoardQuestView"));
	}

	template <typename T = uintptr_t> T& _claimButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = TextMonoBehaviour*> T& _cooldownPanel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = TextMonoBehaviour*> T& _lockedPanel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _resourceViews() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rewardViews() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Action1TavernBoardQuestView*>*> T& OnClaimClickEvent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = TooltipView*> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& QuestName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = QuestDataEntity*> T& QuestData() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _failMsg() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_ClaimButton() {
		return ((T (*)(TavernBoardQuestView*))(Il2CppBase() + 0x16AA154))(this);
	}
	template <typename T = void> T add_OnClaimClickEvent(Action1TavernBoardQuestView*>* value) {
		return ((T (*)(TavernBoardQuestView*, Action1TavernBoardQuestView*>*))(Il2CppBase() + 0x16AA15C))(this, value);
	}
	template <typename T = void> T remove_OnClaimClickEvent(Action1TavernBoardQuestView*>* value) {
		return ((T (*)(TavernBoardQuestView*, Action1TavernBoardQuestView*>*))(Il2CppBase() + 0x16AA1FC))(this, value);
	}
	template <typename T = TooltipView*> T get_TooltipView() {
		return ((T (*)(TavernBoardQuestView*))(Il2CppBase() + 0x16AA29C))(this);
	}
	template <typename T = void> T set_TooltipView(TooltipView* value) {
		return ((T (*)(TavernBoardQuestView*, TooltipView*))(Il2CppBase() + 0x16AA2A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_QuestName() {
		return ((T (*)(TavernBoardQuestView*))(Il2CppBase() + 0x16AA2AC))(this);
	}
	template <typename T = void> T set_QuestName(Il2CppString* value) {
		return ((T (*)(TavernBoardQuestView*, Il2CppString*))(Il2CppBase() + 0x16AA2B4))(this, value);
	}
	template <typename T = QuestDataEntity*> T get_QuestData() {
		return ((T (*)(TavernBoardQuestView*))(Il2CppBase() + 0x16AA2BC))(this);
	}
	template <typename T = void> T set_QuestData(QuestDataEntity* value) {
		return ((T (*)(TavernBoardQuestView*, QuestDataEntity*))(Il2CppBase() + 0x16AA2C4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TavernBoardQuestView*))(Il2CppBase() + 0x16AA2CC))(this);
	}
	template <typename T = void> T Init(QuestDataEntity* questData) {
		return ((T (*)(TavernBoardQuestView*, QuestDataEntity*))(Il2CppBase() + 0x16AA368))(this, questData);
	}
	template <typename T = void> T UpdateView(GameEntity* avatar, GameEntity* target) {
		return ((T (*)(TavernBoardQuestView*, GameEntity*, GameEntity*))(Il2CppBase() + 0x16AA8F8))(this, avatar, target);
	}
	template <typename T = ValueTuple2Il2CppString*, int64_t>*> T UpdateStatus(GameEntity* avatar, GameEntity* target) {
		return ((T (*)(TavernBoardQuestView*, GameEntity*, GameEntity*))(Il2CppBase() + 0x16AAD88))(this, avatar, target);
	}
	template <typename T = void> T Awakeb__24_0() {
		return ((T (*)(TavernBoardQuestView*))(Il2CppBase() + 0x16AB004))(this);
	}

};

