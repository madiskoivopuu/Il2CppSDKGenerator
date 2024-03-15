#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FirebaseNotificationsService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FirebaseNotificationsService"));
	}

	template <typename R = Il2CppString*> R& Token() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& OnTokenReceivedEvent() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ICommonLogger*> R& _logger() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = Il2CppString*> R get_Token() {
		return ((R (*)(FirebaseNotificationsService*))(Il2CppBase() + 0x1699080))(this);
	}
	template <typename R = void> R set_Token(Il2CppString* value) {
		return ((R (*)(FirebaseNotificationsService*, Il2CppString*))(Il2CppBase() + 0x1699088))(this, value);
	}
	template <typename R = void> R add_OnTokenReceivedEvent(uintptr_t value) {
		return ((R (*)(FirebaseNotificationsService*, uintptr_t))(Il2CppBase() + 0x1699090))(this, value);
	}
	template <typename R = void> R remove_OnTokenReceivedEvent(uintptr_t value) {
		return ((R (*)(FirebaseNotificationsService*, uintptr_t))(Il2CppBase() + 0x1699130))(this, value);
	}
	template <typename R = void> R Init() {
		return ((R (*)(FirebaseNotificationsService*))(Il2CppBase() + 0x16991D0))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(FirebaseNotificationsService*))(Il2CppBase() + 0x1699330))(this);
	}
	template <typename R = void> R OnMessageReceived(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(FirebaseNotificationsService*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1699450))(this, sender, e);
	}
	template <typename R = void> R OnTokenReceived(Il2CppObject* sender, uintptr_t e) {
		return ((R (*)(FirebaseNotificationsService*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x16994F4))(this, sender, e);
	}
	template <typename R = void> R RaiseTokenReceivedEvent() {
		return ((R (*)(FirebaseNotificationsService*))(Il2CppBase() + 0x16995AC))(this);
	}

};

