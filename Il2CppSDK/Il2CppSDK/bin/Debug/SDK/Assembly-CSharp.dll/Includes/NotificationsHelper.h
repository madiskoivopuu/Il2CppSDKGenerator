#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotificationsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationsHelper"));
	}


	template <typename T = NotificationEntity*> static T OnNotification(NotificationContext* context, ServerNotificationData* nData) {
		return ((T (*)(void *, NotificationContext*, ServerNotificationData*))(Il2CppBase() + 0x13BA484))(0, context, nData);
	}
	template <typename T = Il2CppString*> static T OnNotificationg__getLocalizedPayloadEntry|0_0(MessagePayload* p) {
		return ((T (*)(void *, MessagePayload*))(Il2CppBase() + 0x13BA604))(0, p);
	}

};

