#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FirebaseNotificationsService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FirebaseNotificationsService"));
	}

	template <typename T = Il2CppString*> T& Token() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OnTokenReceivedEvent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ICommonLogger*> T& _logger() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T get_Token() {
		return ((T (*)(FirebaseNotificationsService*))(Il2CppBase() + 0x1699080))(this);
	}
	template <typename T = void> T set_Token(Il2CppString* value) {
		return ((T (*)(FirebaseNotificationsService*, Il2CppString*))(Il2CppBase() + 0x1699088))(this, value);
	}
	template <typename T = void> T add_OnTokenReceivedEvent(uintptr_t value) {
		return ((T (*)(FirebaseNotificationsService*, uintptr_t))(Il2CppBase() + 0x1699090))(this, value);
	}
	template <typename T = void> T remove_OnTokenReceivedEvent(uintptr_t value) {
		return ((T (*)(FirebaseNotificationsService*, uintptr_t))(Il2CppBase() + 0x1699130))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FirebaseNotificationsService*))(Il2CppBase() + 0x16991D0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(FirebaseNotificationsService*))(Il2CppBase() + 0x1699330))(this);
	}
	template <typename T = void> T OnMessageReceived(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(FirebaseNotificationsService*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x1699450))(this, sender, e);
	}
	template <typename T = void> T OnTokenReceived(Il2CppObject* sender, uintptr_t e) {
		return ((T (*)(FirebaseNotificationsService*, Il2CppObject*, uintptr_t))(Il2CppBase() + 0x16994F4))(this, sender, e);
	}
	template <typename T = void> T RaiseTokenReceivedEvent() {
		return ((T (*)(FirebaseNotificationsService*))(Il2CppBase() + 0x16995AC))(this);
	}

};

