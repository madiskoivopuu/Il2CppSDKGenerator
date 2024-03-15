#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Startd12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Start>d__12"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ScrollAnimator*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Startd12*))(Il2CppBase() + 0x10C8C88))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Startd12*))(Il2CppBase() + 0x10C8C8C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Startd12*))(Il2CppBase() + 0x10C907C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Startd12*))(Il2CppBase() + 0x10C9084))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Startd12*))(Il2CppBase() + 0x10C90C4))(this);
	}

};

