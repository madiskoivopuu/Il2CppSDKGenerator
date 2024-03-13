#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageWindowHelper"));
	}

	template <typename T = int32_t> static T& _lastSingleMessageId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = MessageWindow*> static T ShowMessage(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Action1int32_t>* onClose) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Action1int32_t>*))(Il2CppBase() + 0x12C08E4))(0, manager, caption, message, button0, onClose);
	}
	template <typename T = MessageWindow*> static T ShowMessage_1(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Il2CppString* button1, Action1int32_t>* onClose, Icon* icon, CurrencyType* currency, int32_t price, float activateButtonDelay) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Action1int32_t>*, Icon*, CurrencyType*, int32_t, float))(Il2CppBase() + 0x12CF3D4))(0, manager, caption, message, button0, button1, onClose, icon, currency, price, activateButtonDelay);
	}
	template <typename T = MessageWindow*> static T ShowSingleMessage(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Action1int32_t>* onClose) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Action1int32_t>*))(Il2CppBase() + 0x12CF510))(0, manager, caption, message, button0, onClose);
	}

};

