#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WallHideUnhided14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WallHideUnhide>d__14"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = WallHider*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& state() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& timer5__2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(WallHideUnhided14*))(Il2CppBase() + 0x22A64D4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WallHideUnhided14*))(Il2CppBase() + 0x22A64D8))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(WallHideUnhided14*))(Il2CppBase() + 0x22A685C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(WallHideUnhided14*))(Il2CppBase() + 0x22A6864))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WallHideUnhided14*))(Il2CppBase() + 0x22A68A4))(this);
	}

};

