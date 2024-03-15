#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ErrorMessageWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ErrorMessageWindowHelper"));
	}


	template <typename R = ErrorMessageWindow*> static R ShowErrorMessage(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Action1<int32_t>* onClose) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Action1<int32_t>*))(Il2CppBase() + 0x137EC1C))(0, manager, caption, message, onClose);
	}
	template <typename R = ErrorMessageWindow*> static R ShowErrorMessage_1(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Action1<int32_t>* onClose) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Action1<int32_t>*))(Il2CppBase() + 0x137EC2C))(0, manager, caption, message, button0, onClose);
	}
	template <typename R = ErrorMessageWindow*> static R GetErrorMessage(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x137ED34))(0, manager);
	}
	template <typename R = ErrorMessageWindow*> static R ShowErrorMessage_2(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Il2CppString* button1, Action1<int32_t>* onClose) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Action1<int32_t>*))(Il2CppBase() + 0x137EC38))(0, manager, caption, message, button0, button1, onClose);
	}

};

