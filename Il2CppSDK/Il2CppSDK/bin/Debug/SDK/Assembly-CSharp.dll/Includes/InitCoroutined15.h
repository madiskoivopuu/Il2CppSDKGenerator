#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitCoroutined15
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitCoroutine>d__15"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = PolyAndCodeUI::VerticalRecyclingSystem*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& onInitialized() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(InitCoroutined15*))(Il2CppBase() + 0x22A5A74))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(InitCoroutined15*))(Il2CppBase() + 0x22A5A78))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(InitCoroutined15*))(Il2CppBase() + 0x22A5BF8))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(InitCoroutined15*))(Il2CppBase() + 0x22A5C00))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(InitCoroutined15*))(Il2CppBase() + 0x22A5C40))(this);
	}

};

