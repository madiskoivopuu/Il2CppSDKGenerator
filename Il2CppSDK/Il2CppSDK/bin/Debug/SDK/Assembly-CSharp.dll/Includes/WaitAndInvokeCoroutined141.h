#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class WaitAndInvokeCoroutined141
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitAndInvokeCoroutine>d__14`1"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& delay() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = CoroutineWithIndex*> R& coroutineObject() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Func1T>*& function() {
		return *(Func1T>**)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(WaitAndInvokeCoroutined141*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(WaitAndInvokeCoroutined141*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(WaitAndInvokeCoroutined141*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(WaitAndInvokeCoroutined141*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(WaitAndInvokeCoroutined141*))(Il2CppBase() + 0x0))(this);
	}

};

