#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitAndInvokeCoroutined13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitAndInvokeCoroutine>d__13"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& delay() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& action() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = CoroutineWithIndex*> R& coroutineObject() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(WaitAndInvokeCoroutined13*))(Il2CppBase() + 0xE90C9C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(WaitAndInvokeCoroutined13*))(Il2CppBase() + 0xE90CA0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(WaitAndInvokeCoroutined13*))(Il2CppBase() + 0xE90E98))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(WaitAndInvokeCoroutined13*))(Il2CppBase() + 0xE90EA0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(WaitAndInvokeCoroutined13*))(Il2CppBase() + 0xE90EE0))(this);
	}

};

