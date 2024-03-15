#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotificationsService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotificationsService"));
	}


	template <typename R = Il2CppString*> R get_Token() {
		return ((R (*)(INotificationsService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R add_OnTokenReceivedEvent(uintptr_t value) {
		return ((R (*)(INotificationsService*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnTokenReceivedEvent(uintptr_t value) {
		return ((R (*)(INotificationsService*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R Init() {
		return ((R (*)(INotificationsService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(INotificationsService*))(Il2CppBase() + 0x0))(this);
	}

};

