#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowConnectionProblemAlertd5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowConnectionProblemAlert>d__5"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = HUDConnectionPanel*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ShowConnectionProblemAlertd5*))(Il2CppBase() + 0xEA7308))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ShowConnectionProblemAlertd5*))(Il2CppBase() + 0xEA730C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ShowConnectionProblemAlertd5*))(Il2CppBase() + 0xEA74A0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ShowConnectionProblemAlertd5*))(Il2CppBase() + 0xEA74A8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ShowConnectionProblemAlertd5*))(Il2CppBase() + 0xEA74E8))(this);
	}

};

