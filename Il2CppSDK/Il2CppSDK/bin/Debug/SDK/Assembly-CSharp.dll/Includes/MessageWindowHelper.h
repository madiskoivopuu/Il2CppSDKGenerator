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

	template <typename T = uintptr_t> static T ShowMessage(uintptr_t manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, void* onClose) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x12C08E4))(0, manager, caption, message, button0, onClose);
	}
	template <typename T = uintptr_t> static T ShowMessage_1(uintptr_t manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Il2CppString* button1, void* onClose, uintptr_t icon, uintptr_t currency, int32_t price, float activateButtonDelay) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, void*, uintptr_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x12CF3D4))(0, manager, caption, message, button0, button1, onClose, icon, currency, price, activateButtonDelay);
	}
	template <typename T = uintptr_t> static T ShowSingleMessage(uintptr_t manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, void* onClose) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x12CF510))(0, manager, caption, message, button0, onClose);
	}

};

}
