#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TestNotificationsService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TestNotificationsService"));
	}

	template <typename T = uintptr_t> T& OnTokenReceivedEvent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _token() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T get_Token() {
		return ((T (*)(TestNotificationsService*))(Il2CppBase() + 0x16B64F0))(this);
	}
	template <typename T = void> T add_OnTokenReceivedEvent(uintptr_t value) {
		return ((T (*)(TestNotificationsService*, uintptr_t))(Il2CppBase() + 0x16B64F8))(this, value);
	}
	template <typename T = void> T remove_OnTokenReceivedEvent(uintptr_t value) {
		return ((T (*)(TestNotificationsService*, uintptr_t))(Il2CppBase() + 0x16B6598))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TestNotificationsService*))(Il2CppBase() + 0x16B6638))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(TestNotificationsService*))(Il2CppBase() + 0x16B6778))(this);
	}
	template <typename T = void> T GenerateToken() {
		return ((T (*)(TestNotificationsService*))(Il2CppBase() + 0x16B6670))(this);
	}
	template <typename T = void> T InvokeAction() {
		return ((T (*)(TestNotificationsService*))(Il2CppBase() + 0x16B6764))(this);
	}

};

}
