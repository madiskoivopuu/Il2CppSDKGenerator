#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitCoroutined15
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitCoroutine>d__15"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onInitialized() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(InitCoroutined15*))(Il2CppBase() + 0x22A5A74))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(InitCoroutined15*))(Il2CppBase() + 0x22A5A78))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(InitCoroutined15*))(Il2CppBase() + 0x22A5BF8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(InitCoroutined15*))(Il2CppBase() + 0x22A5C00))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InitCoroutined15*))(Il2CppBase() + 0x22A5C40))(this);
	}

};

}
