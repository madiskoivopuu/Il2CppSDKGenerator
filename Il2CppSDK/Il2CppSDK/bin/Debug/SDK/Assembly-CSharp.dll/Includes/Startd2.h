#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Startd2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Start>d__2"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& tweenInfo() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& elapsedTime5__2() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Startd2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Startd2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Startd2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Startd2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Startd2*))(Il2CppBase() + 0x0))(this);
	}

};

