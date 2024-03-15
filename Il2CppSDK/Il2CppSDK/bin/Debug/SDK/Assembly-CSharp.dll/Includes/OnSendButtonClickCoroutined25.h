#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnSendButtonClickCoroutined25
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnSendButtonClickCoroutine>d__25"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = BugReportWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = cDisplayClass250*> R& 8__1() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(OnSendButtonClickCoroutined25*))(Il2CppBase() + 0xEECD94))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(OnSendButtonClickCoroutined25*))(Il2CppBase() + 0xEECD98))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(OnSendButtonClickCoroutined25*))(Il2CppBase() + 0xEED598))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(OnSendButtonClickCoroutined25*))(Il2CppBase() + 0xEED5A0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(OnSendButtonClickCoroutined25*))(Il2CppBase() + 0xEED5E0))(this);
	}

};

