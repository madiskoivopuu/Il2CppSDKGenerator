#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Moved9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Move>d__9"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& projectile() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = FireHazardtest*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& distanse_diff5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Moved9*))(Il2CppBase() + 0xE9EAFC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Moved9*))(Il2CppBase() + 0xE9EB00))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Moved9*))(Il2CppBase() + 0xE9ECDC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Moved9*))(Il2CppBase() + 0xE9ECE4))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Moved9*))(Il2CppBase() + 0xE9ED24))(this);
	}

};

