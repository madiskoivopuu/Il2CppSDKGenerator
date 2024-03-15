#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class Startd2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Start>d__2"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 T& tweenInfo() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& elapsedTime5__2() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Startd2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Startd2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Startd2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Startd2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Startd2*))(Il2CppBase() + 0x0))(this);
	}

};

