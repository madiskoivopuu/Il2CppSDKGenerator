#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotificationContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotificationContexts"));
	}


	template <typename T = NotificationContext*> T get_notifications() {
		return ((T (*)(INotificationContexts*))(Il2CppBase() + 0x0))(this);
	}

};

