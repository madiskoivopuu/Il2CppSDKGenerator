#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Startd3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Start>d__3"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ResourcesPreloader*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& 7__wrap1() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& 7__wrap2() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Startd3*))(Il2CppBase() + 0x10C4DC4))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Startd3*))(Il2CppBase() + 0x10C4DC8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Startd3*))(Il2CppBase() + 0x10C4EC0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Startd3*))(Il2CppBase() + 0x10C4EC8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Startd3*))(Il2CppBase() + 0x10C4F08))(this);
	}

};

