#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotificationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationEntity"));
	}


	template <typename R = CountComponent*> R get_count() {
		return ((R (*)(NotificationEntity*))(Il2CppBase() + 0x13B8FA4))(this);
	}
	template <typename R = bool> R get_hasCount() {
		return ((R (*)(NotificationEntity*))(Il2CppBase() + 0x13B902C))(this);
	}
	template <typename R = void> R AddCount(int32_t newValue) {
		return ((R (*)(NotificationEntity*, int32_t))(Il2CppBase() + 0x13B9038))(this, newValue);
	}
	template <typename R = void> R ReplaceCount(int32_t newValue) {
		return ((R (*)(NotificationEntity*, int32_t))(Il2CppBase() + 0x13B913C))(this, newValue);
	}
	template <typename R = void> R RemoveCount() {
		return ((R (*)(NotificationEntity*))(Il2CppBase() + 0x13B9240))(this);
	}
	template <typename R = NotificationTypeComponent*> R get_notificationType() {
		return ((R (*)(NotificationEntity*))(Il2CppBase() + 0x13B924C))(this);
	}
	template <typename R = bool> R get_hasNotificationType() {
		return ((R (*)(NotificationEntity*))(Il2CppBase() + 0x13B92D4))(this);
	}
	template <typename R = void> R AddNotificationType(ServerNotificationType newType) {
		return ((R (*)(NotificationEntity*, ServerNotificationType))(Il2CppBase() + 0x13B92E0))(this, newType);
	}
	template <typename R = void> R ReplaceNotificationType(ServerNotificationType newType) {
		return ((R (*)(NotificationEntity*, ServerNotificationType))(Il2CppBase() + 0x13B93E4))(this, newType);
	}
	template <typename R = void> R RemoveNotificationType() {
		return ((R (*)(NotificationEntity*))(Il2CppBase() + 0x13B94E8))(this);
	}
	template <typename R = TextComponent*> R get_text() {
		return ((R (*)(NotificationEntity*))(Il2CppBase() + 0x13B94F4))(this);
	}
	template <typename R = bool> R get_hasText() {
		return ((R (*)(NotificationEntity*))(Il2CppBase() + 0x13B957C))(this);
	}
	template <typename R = void> R AddText(Il2CppString* newValue) {
		return ((R (*)(NotificationEntity*, Il2CppString*))(Il2CppBase() + 0x13B9588))(this, newValue);
	}
	template <typename R = void> R ReplaceText(Il2CppString* newValue) {
		return ((R (*)(NotificationEntity*, Il2CppString*))(Il2CppBase() + 0x13B969C))(this, newValue);
	}
	template <typename R = void> R RemoveText() {
		return ((R (*)(NotificationEntity*))(Il2CppBase() + 0x13B97B0))(this);
	}

};

