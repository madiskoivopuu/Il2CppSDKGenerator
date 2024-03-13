#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotificationsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationsManager"));
	}

	template <typename T = INotificationsService*> T& _service() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ICommonLogger*> T& _logger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _receivedToken() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _worldStateEntered() {
		return *(T*)((uintptr_t)this + 0x29);
	}

	template <typename T = Il2CppString*> T get_RegistrationToken() {
		return ((T (*)(NotificationsManager*))(Il2CppBase() + 0x13BA87C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NotificationsManager*))(Il2CppBase() + 0x13BA934))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(NotificationsManager*))(Il2CppBase() + 0x13BAA28))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(NotificationsManager*))(Il2CppBase() + 0x13BAA90))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(NotificationsManager*))(Il2CppBase() + 0x13BACF8))(this);
	}
	template <typename T = void> T OnTokenReceivedHandler() {
		return ((T (*)(NotificationsManager*))(Il2CppBase() + 0x13BAE18))(this);
	}
	template <typename T = void> T OnWorldStateEntered() {
		return ((T (*)(NotificationsManager*))(Il2CppBase() + 0x13BB0DC))(this);
	}
	template <typename T = void> T SendTokenToServer(Il2CppString* token) {
		return ((T (*)(NotificationsManager*, Il2CppString*))(Il2CppBase() + 0x13BAF6C))(this, token);
	}
	template <typename T = void> T CancelAllNotification() {
		return ((T (*)(NotificationsManager*))(Il2CppBase() + 0x13BAA2C))(this);
	}
	template <typename T = void> T Awakeb__6_0(Task1uintptr_t>* task) {
		return ((T (*)(NotificationsManager*, Task1uintptr_t>*))(Il2CppBase() + 0x13BB16C))(this, task);
	}

};

