#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Exitd7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Exit>d__7"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Transition*> T& transition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = CoordinatorState*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& enumerator5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Exitd7*))(Il2CppBase() + 0xE90904))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Exitd7*))(Il2CppBase() + 0xE90908))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Exitd7*))(Il2CppBase() + 0xE90C20))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Exitd7*))(Il2CppBase() + 0xE90C28))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Exitd7*))(Il2CppBase() + 0xE90C68))(this);
	}

};

