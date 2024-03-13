#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Startd12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Start>d__12"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ScrollAnimator*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Startd12*))(Il2CppBase() + 0x10C8C88))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Startd12*))(Il2CppBase() + 0x10C8C8C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Startd12*))(Il2CppBase() + 0x10C907C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Startd12*))(Il2CppBase() + 0x10C9084))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Startd12*))(Il2CppBase() + 0x10C90C4))(this);
	}

};

