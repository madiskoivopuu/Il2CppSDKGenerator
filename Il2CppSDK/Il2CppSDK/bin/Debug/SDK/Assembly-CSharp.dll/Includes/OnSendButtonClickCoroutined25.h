#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnSendButtonClickCoroutined25
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnSendButtonClickCoroutine>d__25"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = BugReportWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = cDisplayClass250*> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(OnSendButtonClickCoroutined25*))(Il2CppBase() + 0xEECD94))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(OnSendButtonClickCoroutined25*))(Il2CppBase() + 0xEECD98))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(OnSendButtonClickCoroutined25*))(Il2CppBase() + 0xEED598))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(OnSendButtonClickCoroutined25*))(Il2CppBase() + 0xEED5A0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(OnSendButtonClickCoroutined25*))(Il2CppBase() + 0xEED5E0))(this);
	}

};

