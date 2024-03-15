#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDChatButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDChatButton"));
	}

	template <typename R = ChatWindow*> R& _chatWindow() {
		return *(R*)((uintptr_t)this + 0xC8);
	}

	template <typename R = uintptr_t> R get_Button() {
		return ((R (*)(HUDChatButton*))(Il2CppBase() + 0x144ED5C))(this);
	}
	template <typename R = void> R Bind(ChatWindow* chatWindow) {
		return ((R (*)(HUDChatButton*, ChatWindow*))(Il2CppBase() + 0x144ED64))(this, chatWindow);
	}
	template <typename R = void> R SwitchShortMode(bool isShortModeOn) {
		return ((R (*)(HUDChatButton*, bool))(Il2CppBase() + 0x144EDB0))(this, isShortModeOn);
	}
	template <typename R = void> R SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((R (*)(HUDChatButton*, bool))(Il2CppBase() + 0x144EEA8))(this, isCustomizationModeOn);
	}

};

