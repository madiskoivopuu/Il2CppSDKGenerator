#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enterd8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Enter>d__8"));
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
		return ((T (*)(Enterd8*))(Il2CppBase() + 0xEE8BAC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Enterd8*))(Il2CppBase() + 0xEE8BB0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Enterd8*))(Il2CppBase() + 0xEE8BF0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Enterd8*))(Il2CppBase() + 0xEE8BF8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Enterd8*))(Il2CppBase() + 0xEE8C38))(this);
	}

};

}
