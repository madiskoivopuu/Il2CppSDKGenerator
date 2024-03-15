#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheatsCrashClientCoroutined104
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheatsCrashClientCoroutine>d__104"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& bank5__2() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& position5__3() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(CheatsCrashClientCoroutined104*))(Il2CppBase() + 0x115B96C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(CheatsCrashClientCoroutined104*))(Il2CppBase() + 0x115B970))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(CheatsCrashClientCoroutined104*))(Il2CppBase() + 0x115BD90))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(CheatsCrashClientCoroutined104*))(Il2CppBase() + 0x115BD98))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(CheatsCrashClientCoroutined104*))(Il2CppBase() + 0x115BDD8))(this);
	}

};

