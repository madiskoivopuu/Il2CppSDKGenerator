#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Moved9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Move>d__9"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& projectile() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = FireHazardtest*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& distanse_diff5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Moved9*))(Il2CppBase() + 0xE9EAFC))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Moved9*))(Il2CppBase() + 0xE9EB00))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Moved9*))(Il2CppBase() + 0xE9ECDC))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Moved9*))(Il2CppBase() + 0xE9ECE4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Moved9*))(Il2CppBase() + 0xE9ED24))(this);
	}

};

