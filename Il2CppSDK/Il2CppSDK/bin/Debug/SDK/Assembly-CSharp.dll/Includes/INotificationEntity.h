#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotificationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotificationEntity"));
	}


	template <typename T = uintptr_t> T get_notification() {
		return ((T (*)(INotificationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasNotification() {
		return ((T (*)(INotificationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((T (*)(INotificationEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename T = void> T ReplaceNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((T (*)(INotificationEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename T = void> T RemoveNotification() {
		return ((T (*)(INotificationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
