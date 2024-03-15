#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Claimingd9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Claiming>d__9"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = RewardWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Claimingd9*))(Il2CppBase() + 0x10C52AC))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Claimingd9*))(Il2CppBase() + 0x10C52B0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Claimingd9*))(Il2CppBase() + 0x10C552C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Claimingd9*))(Il2CppBase() + 0x10C5534))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Claimingd9*))(Il2CppBase() + 0x10C5574))(this);
	}

};

