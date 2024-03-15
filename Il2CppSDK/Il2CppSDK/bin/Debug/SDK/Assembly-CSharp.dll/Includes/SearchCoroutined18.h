#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SearchCoroutined18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SearchCoroutine>d__18"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = FindPlayerGuildWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(SearchCoroutined18*))(Il2CppBase() + 0xE9E5E4))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(SearchCoroutined18*))(Il2CppBase() + 0xE9E5E8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(SearchCoroutined18*))(Il2CppBase() + 0xE9E6E4))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(SearchCoroutined18*))(Il2CppBase() + 0xE9E6EC))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(SearchCoroutined18*))(Il2CppBase() + 0xE9E72C))(this);
	}

};

