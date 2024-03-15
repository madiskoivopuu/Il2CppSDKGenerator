#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartActiond7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StartAction>d__7"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = PillarsAnimation*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(StartActiond7*))(Il2CppBase() + 0x10AFC64))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(StartActiond7*))(Il2CppBase() + 0x10AFC68))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(StartActiond7*))(Il2CppBase() + 0x10AFE6C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(StartActiond7*))(Il2CppBase() + 0x10AFE74))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(StartActiond7*))(Il2CppBase() + 0x10AFEB4))(this);
	}

};

