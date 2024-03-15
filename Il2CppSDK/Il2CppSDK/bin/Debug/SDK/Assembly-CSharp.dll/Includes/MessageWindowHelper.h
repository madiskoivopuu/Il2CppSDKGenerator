#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageWindowHelper"));
	}

	template <typename R = int32_t> static R& _lastSingleMessageId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = MessageWindow*> static R ShowMessage(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Action1int32_t>* onClose) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Action1int32_t>*))(Il2CppBase() + 0x12C08E4))(0, manager, caption, message, button0, onClose);
	}
	template <typename R = MessageWindow*> static R ShowMessage_1(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Il2CppString* button1, Action1int32_t>* onClose, Icon* icon, CurrencyType* currency, int32_t price, float activateButtonDelay) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Action1int32_t>*, Icon*, CurrencyType*, int32_t, float))(Il2CppBase() + 0x12CF3D4))(0, manager, caption, message, button0, button1, onClose, icon, currency, price, activateButtonDelay);
	}
	template <typename R = MessageWindow*> static R ShowSingleMessage(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Action1int32_t>* onClose) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Action1int32_t>*))(Il2CppBase() + 0x12CF510))(0, manager, caption, message, button0, onClose);
	}

};

