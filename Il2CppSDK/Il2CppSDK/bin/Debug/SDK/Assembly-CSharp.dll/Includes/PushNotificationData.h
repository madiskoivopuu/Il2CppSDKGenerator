#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotificationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationData"));
	}

	template <typename T = bool> T& IsEnabled() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Blocked() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PushNotificationData*, uintptr_t))(Il2CppBase() + 0x11BA904))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PushNotificationData*, uintptr_t))(Il2CppBase() + 0x11BA958))(this, reader);
	}

};

