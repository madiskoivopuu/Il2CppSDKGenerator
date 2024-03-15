#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enterd8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Enter>d__8"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = BaseState*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Enterd8*))(Il2CppBase() + 0xEE8BAC))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Enterd8*))(Il2CppBase() + 0xEE8BB0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Enterd8*))(Il2CppBase() + 0xEE8BF0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Enterd8*))(Il2CppBase() + 0xEE8BF8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Enterd8*))(Il2CppBase() + 0xEE8C38))(this);
	}

};

