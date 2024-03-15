#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatInputField
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatInputField"));
	}

	template <typename R = uintptr_t> R& _inputField() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& _characterLimit() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& _charsPerLine() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	 Action1Il2CppString*>*& Message() {
		return *(Action1Il2CppString*>**)((uintptr_t)this + 0x28);
	}
	 Action1bool>*& FocuseChanged() {
		return *(Action1bool>**)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _InitialInputFieldSize() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& _isFocused() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _keyboard() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = uintptr_t> R get_InputField() {
		return ((R (*)(ChatInputField*))(Il2CppBase() + 0x13F9388))(this);
	}
	template <typename R = void> R add_Message(Action1Il2CppString*>* value) {
		return ((R (*)(ChatInputField*, Action1Il2CppString*>*))(Il2CppBase() + 0x13F9390))(this, value);
	}
	template <typename R = void> R remove_Message(Action1Il2CppString*>* value) {
		return ((R (*)(ChatInputField*, Action1Il2CppString*>*))(Il2CppBase() + 0x13F9430))(this, value);
	}
	template <typename R = void> R add_FocuseChanged(Action1bool>* value) {
		return ((R (*)(ChatInputField*, Action1bool>*))(Il2CppBase() + 0x13F94D0))(this, value);
	}
	template <typename R = void> R remove_FocuseChanged(Action1bool>* value) {
		return ((R (*)(ChatInputField*, Action1bool>*))(Il2CppBase() + 0x13F9570))(this, value);
	}
	template <typename R = void> R Start() {
		return ((R (*)(ChatInputField*))(Il2CppBase() + 0x13F9610))(this);
	}
	template <typename R = char> R OnValidateInput(Il2CppString* text, int32_t charIndex, char addedChar) {
		return ((R (*)(ChatInputField*, Il2CppString*, int32_t, char))(Il2CppBase() + 0x13F97AC))(this, text, charIndex, addedChar);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ChatInputField*))(Il2CppBase() + 0x13F98D0))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(ChatInputField*))(Il2CppBase() + 0x13F99E8))(this);
	}
	template <typename R = void> R OnPointerClick(uintptr_t eventData) {
		return ((R (*)(ChatInputField*, uintptr_t))(Il2CppBase() + 0x13F9BC4))(this, eventData);
	}
	template <typename R = void> R ClearInputField() {
		return ((R (*)(ChatInputField*))(Il2CppBase() + 0x13F9974))(this);
	}
	template <typename R = void> R ProcessText(Il2CppString* input_) {
		return ((R (*)(ChatInputField*, Il2CppString*))(Il2CppBase() + 0x13F9CCC))(this, input_);
	}
	template <typename R = void> R OnRedraw() {
		return ((R (*)(ChatInputField*))(Il2CppBase() + 0x13F9CD8))(this);
	}
	template <typename R = void> R ResetView() {
		return ((R (*)(ChatInputField*))(Il2CppBase() + 0x13F9CC8))(this);
	}
	template <typename R = void> R Startb__13_0(Il2CppString* a) {
		return ((R (*)(ChatInputField*, Il2CppString*))(Il2CppBase() + 0x13F9CF0))(this, a);
	}

};

