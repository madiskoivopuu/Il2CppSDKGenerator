#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class DialogueWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueWindow"));
	}

	template <typename R = Il2CppString*> static R& UNIVERSAL_DAILY_QUEST_TEXT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& UNIVERSAL_DAILY_QUEST_TAKE_REWARD_TEXT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _grade() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _message() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _messagePanel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _buttonPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = StandartButton*> R& _buttonPrefab() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = StandartButton*> R& _warningButtonPrefab() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _dialogueIconPanel() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _dialogueArrow() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _dialogueIcon() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = ActQuestView*> R& _questView() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = CartProgressView*> R& _cartView() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	 Il2CppList<ValueTuple2StandartButton*, Il2CppString*>*>*& _buttons() {
		return *(Il2CppList<ValueTuple2StandartButton*, Il2CppString*>*>**)((uintptr_t)this + 0xE8);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& args() {
		return *(R*)((uintptr_t)this + 0xF0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(DialogueWindow*))(Il2CppBase() + 0x12F7C88))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(DialogueWindow*))(Il2CppBase() + 0x12F7D64))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(DialogueWindow*))(Il2CppBase() + 0x12F7E4C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(DialogueWindow*, float))(Il2CppBase() + 0x12F93C8))(this, deltaTime);
	}
	template <typename R = void> R UpdateWindowData(int32_t dialogueId) {
		return ((R (*)(DialogueWindow*, int32_t))(Il2CppBase() + 0x12F7FE4))(this, dialogueId);
	}
	template <typename R = void> R SetDialogueIcon(DialogueEntity* dialogue) {
		return ((R (*)(DialogueWindow*, DialogueEntity*))(Il2CppBase() + 0x12F96E4))(this, dialogue);
	}
	template <typename R = bool> R IsThisQuestDialogue() {
		return ((R (*)(DialogueWindow*))(Il2CppBase() + 0x12F99F8))(this);
	}
	template <typename R = void> R OnCickButton(StandartButton* btn, int32_t index) {
		return ((R (*)(DialogueWindow*, StandartButton*, int32_t))(Il2CppBase() + 0x12F9B2C))(this, btn, index);
	}
	template <typename R = void> R InitQuest(DialogueEntity* dialogue) {
		return ((R (*)(DialogueWindow*, DialogueEntity*))(Il2CppBase() + 0x12F9784))(this, dialogue);
	}
	template <typename R = void> R Awakeb__19_0() {
		return ((R (*)(DialogueWindow*))(Il2CppBase() + 0x12FA0AC))(this);
	}

};

