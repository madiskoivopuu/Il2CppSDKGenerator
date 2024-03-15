#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enterd6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Enter>d__6"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = CoordinatorState*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Transition*> R& transition() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Enterd6*))(Il2CppBase() + 0xE90660))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Enterd6*))(Il2CppBase() + 0xE90664))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Enterd6*))(Il2CppBase() + 0xE90888))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Enterd6*))(Il2CppBase() + 0xE90890))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Enterd6*))(Il2CppBase() + 0xE908D0))(this);
	}

};

