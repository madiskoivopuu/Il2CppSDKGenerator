#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AggressionCoroutined21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AggressionCoroutine>d__21"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = EntitySounds*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(AggressionCoroutined21*))(Il2CppBase() + 0xE9C51C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(AggressionCoroutined21*))(Il2CppBase() + 0xE9C520))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(AggressionCoroutined21*))(Il2CppBase() + 0xE9C72C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(AggressionCoroutined21*))(Il2CppBase() + 0xE9C734))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AggressionCoroutined21*))(Il2CppBase() + 0xE9C774))(this);
	}

};

