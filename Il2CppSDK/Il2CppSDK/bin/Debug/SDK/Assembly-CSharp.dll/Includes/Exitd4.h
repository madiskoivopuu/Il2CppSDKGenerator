#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Exitd4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Exit>d__4"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = FakeReloginState*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Exitd4*))(Il2CppBase() + 0xE9E2B8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Exitd4*))(Il2CppBase() + 0xE9E2BC))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Exitd4*))(Il2CppBase() + 0xE9E2F8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Exitd4*))(Il2CppBase() + 0xE9E300))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Exitd4*))(Il2CppBase() + 0xE9E340))(this);
	}

};

