#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SearchCoroutined21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SearchCoroutine>d__21"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = FindGuildWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(SearchCoroutined21*))(Il2CppBase() + 0xE9E444))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SearchCoroutined21*))(Il2CppBase() + 0xE9E448))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(SearchCoroutined21*))(Il2CppBase() + 0xE9E550))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SearchCoroutined21*))(Il2CppBase() + 0xE9E558))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SearchCoroutined21*))(Il2CppBase() + 0xE9E598))(this);
	}

};

