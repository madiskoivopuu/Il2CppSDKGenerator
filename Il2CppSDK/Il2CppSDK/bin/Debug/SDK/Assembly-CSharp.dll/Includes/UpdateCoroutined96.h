#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateCoroutined96
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateCoroutine>d__96"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = PlayerClassView*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = AccountEntity*> R& avatar5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& previousMarkState5__3() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(UpdateCoroutined96*))(Il2CppBase() + 0x10B2660))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(UpdateCoroutined96*))(Il2CppBase() + 0x10B2664))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(UpdateCoroutined96*))(Il2CppBase() + 0x10B2920))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(UpdateCoroutined96*))(Il2CppBase() + 0x10B2928))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(UpdateCoroutined96*))(Il2CppBase() + 0x10B2968))(this);
	}

};

