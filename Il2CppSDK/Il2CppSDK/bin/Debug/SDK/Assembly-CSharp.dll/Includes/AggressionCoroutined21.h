#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AggressionCoroutined21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AggressionCoroutine>d__21"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = EntitySounds*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(AggressionCoroutined21*))(Il2CppBase() + 0xE9C51C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(AggressionCoroutined21*))(Il2CppBase() + 0xE9C520))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(AggressionCoroutined21*))(Il2CppBase() + 0xE9C72C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(AggressionCoroutined21*))(Il2CppBase() + 0xE9C734))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(AggressionCoroutined21*))(Il2CppBase() + 0xE9C774))(this);
	}

};

