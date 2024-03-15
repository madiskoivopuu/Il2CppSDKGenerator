#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Repeatd13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Repeat>d__13"));
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

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Repeatd13*))(Il2CppBase() + 0xE9847C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Repeatd13*))(Il2CppBase() + 0xE98480))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Repeatd13*))(Il2CppBase() + 0xE985F8))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Repeatd13*))(Il2CppBase() + 0xE98600))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Repeatd13*))(Il2CppBase() + 0xE98640))(this);
	}

};

