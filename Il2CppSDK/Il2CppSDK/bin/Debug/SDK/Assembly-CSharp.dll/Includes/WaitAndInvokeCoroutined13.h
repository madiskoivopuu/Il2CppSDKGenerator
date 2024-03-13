#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitAndInvokeCoroutined13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitAndInvokeCoroutine>d__13"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = CoroutineWithIndex*> T& coroutineObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(WaitAndInvokeCoroutined13*))(Il2CppBase() + 0xE90C9C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitAndInvokeCoroutined13*))(Il2CppBase() + 0xE90CA0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(WaitAndInvokeCoroutined13*))(Il2CppBase() + 0xE90E98))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(WaitAndInvokeCoroutined13*))(Il2CppBase() + 0xE90EA0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitAndInvokeCoroutined13*))(Il2CppBase() + 0xE90EE0))(this);
	}

};

