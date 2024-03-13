#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotificationsService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotificationsService"));
	}


	template <typename T = Il2CppString*> T get_Token() {
		return ((T (*)(INotificationsService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnTokenReceivedEvent(uintptr_t value) {
		return ((T (*)(INotificationsService*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnTokenReceivedEvent(uintptr_t value) {
		return ((T (*)(INotificationsService*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(INotificationsService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(INotificationsService*))(Il2CppBase() + 0x0))(this);
	}

};

