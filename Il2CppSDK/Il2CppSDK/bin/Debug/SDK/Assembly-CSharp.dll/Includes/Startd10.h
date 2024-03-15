#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Startd10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Start>d__10"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = DefineLastServerLS*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = cDisplayClass100*> R& 8__1() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& progress5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Startd10*))(Il2CppBase() + 0xE98674))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Startd10*))(Il2CppBase() + 0xE98678))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Startd10*))(Il2CppBase() + 0xE996A8))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Startd10*))(Il2CppBase() + 0xE996B0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Startd10*))(Il2CppBase() + 0xE996F0))(this);
	}

};

