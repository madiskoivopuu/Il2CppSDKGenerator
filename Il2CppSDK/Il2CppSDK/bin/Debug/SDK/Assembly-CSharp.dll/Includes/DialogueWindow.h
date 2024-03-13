#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class DialogueWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueWindow"));
	}

	template <typename T = Il2CppString*> static T& UNIVERSAL_DAILY_QUEST_TEXT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UNIVERSAL_DAILY_QUEST_TAKE_REWARD_TEXT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _grade() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _message() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _messagePanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _buttonPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = StandartButton*> T& _buttonPrefab() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = StandartButton*> T& _warningButtonPrefab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _dialogueIconPanel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _dialogueArrow() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _dialogueIcon() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = ActQuestView*> T& _questView() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = CartProgressView*> T& _cartView() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<ValueTuple2StandartButton*, Il2CppString*>*>*> T& _buttons() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& args() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DialogueWindow*))(Il2CppBase() + 0x12F7C88))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(DialogueWindow*))(Il2CppBase() + 0x12F7D64))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(DialogueWindow*))(Il2CppBase() + 0x12F7E4C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(DialogueWindow*, float))(Il2CppBase() + 0x12F93C8))(this, deltaTime);
	}
	template <typename T = void> T UpdateWindowData(int32_t dialogueId) {
		return ((T (*)(DialogueWindow*, int32_t))(Il2CppBase() + 0x12F7FE4))(this, dialogueId);
	}
	template <typename T = void> T SetDialogueIcon(DialogueEntity* dialogue) {
		return ((T (*)(DialogueWindow*, DialogueEntity*))(Il2CppBase() + 0x12F96E4))(this, dialogue);
	}
	template <typename T = bool> T IsThisQuestDialogue() {
		return ((T (*)(DialogueWindow*))(Il2CppBase() + 0x12F99F8))(this);
	}
	template <typename T = void> T OnCickButton(StandartButton* btn, int32_t index) {
		return ((T (*)(DialogueWindow*, StandartButton*, int32_t))(Il2CppBase() + 0x12F9B2C))(this, btn, index);
	}
	template <typename T = void> T InitQuest(DialogueEntity* dialogue) {
		return ((T (*)(DialogueWindow*, DialogueEntity*))(Il2CppBase() + 0x12F9784))(this, dialogue);
	}
	template <typename T = void> T Awakeb__19_0() {
		return ((T (*)(DialogueWindow*))(Il2CppBase() + 0x12FA0AC))(this);
	}

};

