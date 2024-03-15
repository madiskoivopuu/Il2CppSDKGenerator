#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotificationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationData"));
	}

	template <typename R = bool> R& IsEnabled() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Blocked() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PushNotificationData*, uintptr_t))(Il2CppBase() + 0x11BA904))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PushNotificationData*, uintptr_t))(Il2CppBase() + 0x11BA958))(this, reader);
	}

};

