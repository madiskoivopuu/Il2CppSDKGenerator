#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatInputField
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatInputField"));
	}

	template <typename T = uintptr_t> T& _inputField() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _characterLimit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _charsPerLine() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Action1Il2CppString*>*> T& Message() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Action1bool>*> T& FocuseChanged() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _InitialInputFieldSize() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _isFocused() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _keyboard() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_InputField() {
		return ((T (*)(ChatInputField*))(Il2CppBase() + 0x13F9388))(this);
	}
	template <typename T = void> T add_Message(Action1Il2CppString*>* value) {
		return ((T (*)(ChatInputField*, Action1Il2CppString*>*))(Il2CppBase() + 0x13F9390))(this, value);
	}
	template <typename T = void> T remove_Message(Action1Il2CppString*>* value) {
		return ((T (*)(ChatInputField*, Action1Il2CppString*>*))(Il2CppBase() + 0x13F9430))(this, value);
	}
	template <typename T = void> T add_FocuseChanged(Action1bool>* value) {
		return ((T (*)(ChatInputField*, Action1bool>*))(Il2CppBase() + 0x13F94D0))(this, value);
	}
	template <typename T = void> T remove_FocuseChanged(Action1bool>* value) {
		return ((T (*)(ChatInputField*, Action1bool>*))(Il2CppBase() + 0x13F9570))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ChatInputField*))(Il2CppBase() + 0x13F9610))(this);
	}
	template <typename T = char> T OnValidateInput(Il2CppString* text, int32_t charIndex, char addedChar) {
		return ((T (*)(ChatInputField*, Il2CppString*, int32_t, char))(Il2CppBase() + 0x13F97AC))(this, text, charIndex, addedChar);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ChatInputField*))(Il2CppBase() + 0x13F98D0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ChatInputField*))(Il2CppBase() + 0x13F99E8))(this);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(ChatInputField*, uintptr_t))(Il2CppBase() + 0x13F9BC4))(this, eventData);
	}
	template <typename T = void> T ClearInputField() {
		return ((T (*)(ChatInputField*))(Il2CppBase() + 0x13F9974))(this);
	}
	template <typename T = void> T ProcessText(Il2CppString* input_) {
		return ((T (*)(ChatInputField*, Il2CppString*))(Il2CppBase() + 0x13F9CCC))(this, input_);
	}
	template <typename T = void> T OnRedraw() {
		return ((T (*)(ChatInputField*))(Il2CppBase() + 0x13F9CD8))(this);
	}
	template <typename T = void> T ResetView() {
		return ((T (*)(ChatInputField*))(Il2CppBase() + 0x13F9CC8))(this);
	}
	template <typename T = void> T Startb__13_0(Il2CppString* a) {
		return ((T (*)(ChatInputField*, Il2CppString*))(Il2CppBase() + 0x13F9CF0))(this, a);
	}

};

