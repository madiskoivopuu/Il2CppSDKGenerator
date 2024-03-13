#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Repeatd42
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Repeat>d__42"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = BaseLoaderStep*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Repeatd42*))(Il2CppBase() + 0xEE85F0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Repeatd42*))(Il2CppBase() + 0xEE85F4))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Repeatd42*))(Il2CppBase() + 0xEE866C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Repeatd42*))(Il2CppBase() + 0xEE8674))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Repeatd42*))(Il2CppBase() + 0xEE86B4))(this);
	}

};

