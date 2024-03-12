#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheatsCrashClientCoroutined104
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheatsCrashClientCoroutine>d__104"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& bank5__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& position5__3() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CheatsCrashClientCoroutined104*))(Il2CppBase() + 0x115B96C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CheatsCrashClientCoroutined104*))(Il2CppBase() + 0x115B970))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CheatsCrashClientCoroutined104*))(Il2CppBase() + 0x115BD90))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CheatsCrashClientCoroutined104*))(Il2CppBase() + 0x115BD98))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CheatsCrashClientCoroutined104*))(Il2CppBase() + 0x115BDD8))(this);
	}

};

}
