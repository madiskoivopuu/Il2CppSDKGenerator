#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotificationContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotificationContexts"));
	}


	template <typename R = NotificationContext*> R get_notifications() {
		return ((R (*)(INotificationContexts*))(Il2CppBase() + 0x0))(this);
	}

};

