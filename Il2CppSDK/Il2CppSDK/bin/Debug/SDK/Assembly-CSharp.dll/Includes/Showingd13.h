#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Showingd13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Showing>d__13"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = RateUsWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& delay() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Showingd13*))(Il2CppBase() + 0x10BFA10))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Showingd13*))(Il2CppBase() + 0x10BFA14))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Showingd13*))(Il2CppBase() + 0x10BFEB8))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Showingd13*))(Il2CppBase() + 0x10BFEC0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Showingd13*))(Il2CppBase() + 0x10BFF00))(this);
	}

};

