#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotificationPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationPlugin"));
	}

	template <typename T = Il2CppString*> static T& CLASS_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHOW_METHOD_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CANCEL_ALL_METHOD_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& javaClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& _isAndroid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x10AC33C))(0);
	}
	template <typename T = void> static T Show(Il2CppString* text, bool isLong) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x10AC3F4))(0, text, isLong);
	}
	template <typename T = void> static T CancelAllNotifications() {
		return ((T (*)(void *))(Il2CppBase() + 0x10AC594))(0);
	}

};

