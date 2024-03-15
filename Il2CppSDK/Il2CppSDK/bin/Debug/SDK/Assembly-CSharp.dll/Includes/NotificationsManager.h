#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotificationsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationsManager"));
	}

	template <typename R = INotificationsService*> R& _service() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ICommonLogger*> R& _logger() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& _receivedToken() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& _worldStateEntered() {
		return *(R*)((uintptr_t)this + 0x29);
	}

	template <typename R = Il2CppString*> R get_RegistrationToken() {
		return ((R (*)(NotificationsManager*))(Il2CppBase() + 0x13BA87C))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(NotificationsManager*))(Il2CppBase() + 0x13BA934))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(NotificationsManager*))(Il2CppBase() + 0x13BAA28))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(NotificationsManager*))(Il2CppBase() + 0x13BAA90))(this);
	}
	template <typename R = void> R Init() {
		return ((R (*)(NotificationsManager*))(Il2CppBase() + 0x13BACF8))(this);
	}
	template <typename R = void> R OnTokenReceivedHandler() {
		return ((R (*)(NotificationsManager*))(Il2CppBase() + 0x13BAE18))(this);
	}
	template <typename R = void> R OnWorldStateEntered() {
		return ((R (*)(NotificationsManager*))(Il2CppBase() + 0x13BB0DC))(this);
	}
	template <typename R = void> R SendTokenToServer(Il2CppString* token) {
		return ((R (*)(NotificationsManager*, Il2CppString*))(Il2CppBase() + 0x13BAF6C))(this, token);
	}
	template <typename R = void> R CancelAllNotification() {
		return ((R (*)(NotificationsManager*))(Il2CppBase() + 0x13BAA2C))(this);
	}
	template <typename R = void> R Awakeb__6_0(Task1<uintptr_t>* task) {
		return ((R (*)(NotificationsManager*, Task1<uintptr_t>*))(Il2CppBase() + 0x13BB16C))(this, task);
	}

};

