#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotificationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationWindowHelper"));
	}


	template <typename R = PushNotificationWindow*> static R ShowPushNotificationWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x11BB898))(0, manager);
	}
	template <typename R = void> static R ClosePushNotificationWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x11BB954))(0, manager);
	}

};

