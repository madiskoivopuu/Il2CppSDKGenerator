#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotificationPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationPlugin"));
	}

	template <typename R = Il2CppString*> static R& CLASS_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SHOW_METHOD_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CANCEL_ALL_METHOD_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& javaClass() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& _isAndroid() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = void> static R Init() {
		return ((R (*)(void *))(Il2CppBase() + 0x10AC33C))(0);
	}
	template <typename R = void> static R Show(Il2CppString* text, bool isLong) {
		return ((R (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x10AC3F4))(0, text, isLong);
	}
	template <typename R = void> static R CancelAllNotifications() {
		return ((R (*)(void *))(Il2CppBase() + 0x10AC594))(0);
	}

};

