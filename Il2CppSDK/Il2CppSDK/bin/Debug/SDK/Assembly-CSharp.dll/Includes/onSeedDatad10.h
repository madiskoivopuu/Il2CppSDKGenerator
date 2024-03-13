#pragma once
#include <Il2Cpp/Il2Cpp.h>

class onSeedDatad10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<onSeedData>d__10"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = DynamicScrollView*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(onSeedDatad10*))(Il2CppBase() + 0xE9B724))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(onSeedDatad10*))(Il2CppBase() + 0xE9B728))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(onSeedDatad10*))(Il2CppBase() + 0xE9B9A0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(onSeedDatad10*))(Il2CppBase() + 0xE9B9A8))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(onSeedDatad10*))(Il2CppBase() + 0xE9B9E8))(this);
	}

};

