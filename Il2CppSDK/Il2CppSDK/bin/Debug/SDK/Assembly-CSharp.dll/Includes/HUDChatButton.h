#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDChatButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDChatButton"));
	}

	template <typename T = ChatWindow*> T& _chatWindow() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = uintptr_t> T get_Button() {
		return ((T (*)(HUDChatButton*))(Il2CppBase() + 0x144ED5C))(this);
	}
	template <typename T = void> T Bind(ChatWindow* chatWindow) {
		return ((T (*)(HUDChatButton*, ChatWindow*))(Il2CppBase() + 0x144ED64))(this, chatWindow);
	}
	template <typename T = void> T SwitchShortMode(bool isShortModeOn) {
		return ((T (*)(HUDChatButton*, bool))(Il2CppBase() + 0x144EDB0))(this, isShortModeOn);
	}
	template <typename T = void> T SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((T (*)(HUDChatButton*, bool))(Il2CppBase() + 0x144EEA8))(this, isCustomizationModeOn);
	}

};

