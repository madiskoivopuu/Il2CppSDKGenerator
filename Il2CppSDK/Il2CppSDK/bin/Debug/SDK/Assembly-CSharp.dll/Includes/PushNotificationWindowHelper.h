#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotificationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationWindowHelper"));
	}


	template <typename T = PushNotificationWindow*> static T ShowPushNotificationWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x11BB898))(0, manager);
	}
	template <typename T = void> static T ClosePushNotificationWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x11BB954))(0, manager);
	}

};

