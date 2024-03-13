#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowConnectionProblemAlertd5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowConnectionProblemAlert>d__5"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = HUDConnectionPanel*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShowConnectionProblemAlertd5*))(Il2CppBase() + 0xEA7308))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShowConnectionProblemAlertd5*))(Il2CppBase() + 0xEA730C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShowConnectionProblemAlertd5*))(Il2CppBase() + 0xEA74A0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShowConnectionProblemAlertd5*))(Il2CppBase() + 0xEA74A8))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowConnectionProblemAlertd5*))(Il2CppBase() + 0xEA74E8))(this);
	}

};

