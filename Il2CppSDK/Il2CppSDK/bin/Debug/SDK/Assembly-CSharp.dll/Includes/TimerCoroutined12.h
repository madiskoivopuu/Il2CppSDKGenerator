#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimerCoroutined12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TimerCoroutine>d__12"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = NewsWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& secondsLeft5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(TimerCoroutined12*))(Il2CppBase() + 0x10A9E94))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(TimerCoroutined12*))(Il2CppBase() + 0x10A9E98))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(TimerCoroutined12*))(Il2CppBase() + 0x10AA194))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(TimerCoroutined12*))(Il2CppBase() + 0x10AA19C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(TimerCoroutined12*))(Il2CppBase() + 0x10AA1DC))(this);
	}

};

