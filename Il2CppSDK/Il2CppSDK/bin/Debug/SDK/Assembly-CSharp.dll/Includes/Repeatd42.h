#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Repeatd42
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Repeat>d__42"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = BaseLoaderStep*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Repeatd42*))(Il2CppBase() + 0xEE85F0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Repeatd42*))(Il2CppBase() + 0xEE85F4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Repeatd42*))(Il2CppBase() + 0xEE866C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Repeatd42*))(Il2CppBase() + 0xEE8674))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Repeatd42*))(Il2CppBase() + 0xEE86B4))(this);
	}

};

