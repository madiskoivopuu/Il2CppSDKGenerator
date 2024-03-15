#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Created10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Create>d__10"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Created10*))(Il2CppBase() + 0x1166A4C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Created10*))(Il2CppBase() + 0x1166A50))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Created10*))(Il2CppBase() + 0x1166AAC))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Created10*))(Il2CppBase() + 0x1166AB4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Created10*))(Il2CppBase() + 0x1166AF4))(this);
	}

};

