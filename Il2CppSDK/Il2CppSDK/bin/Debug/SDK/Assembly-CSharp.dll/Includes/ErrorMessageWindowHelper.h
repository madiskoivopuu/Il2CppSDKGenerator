#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ErrorMessageWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ErrorMessageWindowHelper"));
	}


	template <typename T = ErrorMessageWindow*> static T ShowErrorMessage(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Action1int32_t>* onClose) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Action1int32_t>*))(Il2CppBase() + 0x137EC1C))(0, manager, caption, message, onClose);
	}
	template <typename T = ErrorMessageWindow*> static T ShowErrorMessage_1(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Action1int32_t>* onClose) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Action1int32_t>*))(Il2CppBase() + 0x137EC2C))(0, manager, caption, message, button0, onClose);
	}
	template <typename T = ErrorMessageWindow*> static T GetErrorMessage(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x137ED34))(0, manager);
	}
	template <typename T = ErrorMessageWindow*> static T ShowErrorMessage_2(UIWindowsManager* manager, Il2CppString* caption, Il2CppString* message, Il2CppString* button0, Il2CppString* button1, Action1int32_t>* onClose) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Action1int32_t>*))(Il2CppBase() + 0x137EC38))(0, manager, caption, message, button0, button1, onClose);
	}

};

