#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Repeatd15
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Repeat>d__15"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = CoordinatorLS*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Repeatd15*))(Il2CppBase() + 0x112B330))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Repeatd15*))(Il2CppBase() + 0x112B334))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Repeatd15*))(Il2CppBase() + 0x112B4AC))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Repeatd15*))(Il2CppBase() + 0x112B4B4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Repeatd15*))(Il2CppBase() + 0x112B4F4))(this);
	}

};

