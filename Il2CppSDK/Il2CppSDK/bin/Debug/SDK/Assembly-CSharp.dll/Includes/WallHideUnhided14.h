#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WallHideUnhided14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WallHideUnhide>d__14"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = WallHider*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& state() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& timer5__2() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(WallHideUnhided14*))(Il2CppBase() + 0x22A64D4))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(WallHideUnhided14*))(Il2CppBase() + 0x22A64D8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(WallHideUnhided14*))(Il2CppBase() + 0x22A685C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(WallHideUnhided14*))(Il2CppBase() + 0x22A6864))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(WallHideUnhided14*))(Il2CppBase() + 0x22A68A4))(this);
	}

};

