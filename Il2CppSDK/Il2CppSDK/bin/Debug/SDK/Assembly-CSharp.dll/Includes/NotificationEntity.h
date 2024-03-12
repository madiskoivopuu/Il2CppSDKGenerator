#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotificationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationEntity"));
	}


	template <typename T = uintptr_t> T get_count() {
		return ((T (*)(NotificationEntity*))(Il2CppBase() + 0x13B8FA4))(this);
	}
	template <typename T = bool> T get_hasCount() {
		return ((T (*)(NotificationEntity*))(Il2CppBase() + 0x13B902C))(this);
	}
	template <typename T = void> T AddCount(int32_t newValue) {
		return ((T (*)(NotificationEntity*, int32_t))(Il2CppBase() + 0x13B9038))(this, newValue);
	}
	template <typename T = void> T ReplaceCount(int32_t newValue) {
		return ((T (*)(NotificationEntity*, int32_t))(Il2CppBase() + 0x13B913C))(this, newValue);
	}
	template <typename T = void> T RemoveCount() {
		return ((T (*)(NotificationEntity*))(Il2CppBase() + 0x13B9240))(this);
	}
	template <typename T = uintptr_t> T get_notificationType() {
		return ((T (*)(NotificationEntity*))(Il2CppBase() + 0x13B924C))(this);
	}
	template <typename T = bool> T get_hasNotificationType() {
		return ((T (*)(NotificationEntity*))(Il2CppBase() + 0x13B92D4))(this);
	}
	template <typename T = void> T AddNotificationType(uintptr_t newType) {
		return ((T (*)(NotificationEntity*, uintptr_t))(Il2CppBase() + 0x13B92E0))(this, newType);
	}
	template <typename T = void> T ReplaceNotificationType(uintptr_t newType) {
		return ((T (*)(NotificationEntity*, uintptr_t))(Il2CppBase() + 0x13B93E4))(this, newType);
	}
	template <typename T = void> T RemoveNotificationType() {
		return ((T (*)(NotificationEntity*))(Il2CppBase() + 0x13B94E8))(this);
	}
	template <typename T = uintptr_t> T get_text() {
		return ((T (*)(NotificationEntity*))(Il2CppBase() + 0x13B94F4))(this);
	}
	template <typename T = bool> T get_hasText() {
		return ((T (*)(NotificationEntity*))(Il2CppBase() + 0x13B957C))(this);
	}
	template <typename T = void> T AddText(Il2CppString* newValue) {
		return ((T (*)(NotificationEntity*, Il2CppString*))(Il2CppBase() + 0x13B9588))(this, newValue);
	}
	template <typename T = void> T ReplaceText(Il2CppString* newValue) {
		return ((T (*)(NotificationEntity*, Il2CppString*))(Il2CppBase() + 0x13B969C))(this, newValue);
	}
	template <typename T = void> T RemoveText() {
		return ((T (*)(NotificationEntity*))(Il2CppBase() + 0x13B97B0))(this);
	}

};

}
