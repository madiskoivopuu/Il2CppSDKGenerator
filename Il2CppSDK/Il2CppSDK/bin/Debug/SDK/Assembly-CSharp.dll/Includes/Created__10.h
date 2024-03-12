#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Created10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Create>d__10"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Created10*))(Il2CppBase() + 0x1166A4C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Created10*))(Il2CppBase() + 0x1166A50))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Created10*))(Il2CppBase() + 0x1166AAC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Created10*))(Il2CppBase() + 0x1166AB4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Created10*))(Il2CppBase() + 0x1166AF4))(this);
	}

};

}
