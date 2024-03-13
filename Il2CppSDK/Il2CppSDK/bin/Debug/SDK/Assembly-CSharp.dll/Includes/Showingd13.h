#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Showingd13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Showing>d__13"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = RateUsWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Showingd13*))(Il2CppBase() + 0x10BFA10))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Showingd13*))(Il2CppBase() + 0x10BFA14))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Showingd13*))(Il2CppBase() + 0x10BFEB8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Showingd13*))(Il2CppBase() + 0x10BFEC0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Showingd13*))(Il2CppBase() + 0x10BFF00))(this);
	}

};

