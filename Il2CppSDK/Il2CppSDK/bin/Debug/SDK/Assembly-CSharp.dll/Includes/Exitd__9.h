#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Exitd9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Exit>d__9"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Exitd9*))(Il2CppBase() + 0xEE8C6C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Exitd9*))(Il2CppBase() + 0xEE8C70))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Exitd9*))(Il2CppBase() + 0xEE8CB0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Exitd9*))(Il2CppBase() + 0xEE8CB8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Exitd9*))(Il2CppBase() + 0xEE8CF8))(this);
	}

};

}
