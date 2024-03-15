#pragma once
#include <Il2Cpp/Il2Cpp.h>

class onSeedDatad10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<onSeedData>d__10"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Mosframe::DynamicScrollView*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(onSeedDatad10*))(Il2CppBase() + 0xE9B724))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(onSeedDatad10*))(Il2CppBase() + 0xE9B728))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(onSeedDatad10*))(Il2CppBase() + 0xE9B9A0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(onSeedDatad10*))(Il2CppBase() + 0xE9B9A8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(onSeedDatad10*))(Il2CppBase() + 0xE9B9E8))(this);
	}

};

