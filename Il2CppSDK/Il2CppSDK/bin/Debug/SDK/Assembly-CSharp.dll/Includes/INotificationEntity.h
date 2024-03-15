#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotificationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotificationEntity"));
	}


	template <typename R = NotificationComponent*> R get_notification() {
		return ((R (*)(INotificationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasNotification() {
		return ((R (*)(INotificationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((R (*)(INotificationEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename R = void> R ReplaceNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((R (*)(INotificationEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename R = void> R RemoveNotification() {
		return ((R (*)(INotificationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

