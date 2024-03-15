#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Routined6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Routine>d__6"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = DamageAnimation*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& timer5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Routined6*))(Il2CppBase() + 0xE9453C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Routined6*))(Il2CppBase() + 0xE94540))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Routined6*))(Il2CppBase() + 0xE946AC))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Routined6*))(Il2CppBase() + 0xE946B4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Routined6*))(Il2CppBase() + 0xE946F4))(this);
	}

};

