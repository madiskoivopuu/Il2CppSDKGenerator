#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotificationsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationsHelper"));
	}


	template <typename T = uintptr_t> static T OnNotification(uintptr_t context, uintptr_t nData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13BA484))(0, context, nData);
	}
	template <typename T = Il2CppString*> static T OnNotificationg__getLocalizedPayloadEntry|0_0(uintptr_t p) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13BA604))(0, p);
	}

};

}
