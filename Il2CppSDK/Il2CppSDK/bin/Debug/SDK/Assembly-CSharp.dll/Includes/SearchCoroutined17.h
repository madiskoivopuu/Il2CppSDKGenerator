#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SearchCoroutined17
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SearchCoroutine>d__17"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = FindPlayerWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(SearchCoroutined17*))(Il2CppBase() + 0xE9E778))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(SearchCoroutined17*))(Il2CppBase() + 0xE9E77C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(SearchCoroutined17*))(Il2CppBase() + 0xE9E93C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(SearchCoroutined17*))(Il2CppBase() + 0xE9E944))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(SearchCoroutined17*))(Il2CppBase() + 0xE9E984))(this);
	}

};

