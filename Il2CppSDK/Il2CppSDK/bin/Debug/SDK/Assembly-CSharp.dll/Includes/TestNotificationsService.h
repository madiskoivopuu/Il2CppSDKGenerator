#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TestNotificationsService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TestNotificationsService"));
	}

	template <typename R = uintptr_t> R& OnTokenReceivedEvent() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& _token() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = Il2CppString*> R get_Token() {
		return ((R (*)(TestNotificationsService*))(Il2CppBase() + 0x16B64F0))(this);
	}
	template <typename R = void> R add_OnTokenReceivedEvent(uintptr_t value) {
		return ((R (*)(TestNotificationsService*, uintptr_t))(Il2CppBase() + 0x16B64F8))(this, value);
	}
	template <typename R = void> R remove_OnTokenReceivedEvent(uintptr_t value) {
		return ((R (*)(TestNotificationsService*, uintptr_t))(Il2CppBase() + 0x16B6598))(this, value);
	}
	template <typename R = void> R Init() {
		return ((R (*)(TestNotificationsService*))(Il2CppBase() + 0x16B6638))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(TestNotificationsService*))(Il2CppBase() + 0x16B6778))(this);
	}
	template <typename R = void> R GenerateToken() {
		return ((R (*)(TestNotificationsService*))(Il2CppBase() + 0x16B6670))(this);
	}
	template <typename R = void> R InvokeAction() {
		return ((R (*)(TestNotificationsService*))(Il2CppBase() + 0x16B6764))(this);
	}

};

