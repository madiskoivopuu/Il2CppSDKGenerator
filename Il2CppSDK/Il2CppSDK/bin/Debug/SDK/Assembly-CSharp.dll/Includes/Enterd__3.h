#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enterd3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Enter>d__3"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Enterd3*))(Il2CppBase() + 0xE9E220))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Enterd3*))(Il2CppBase() + 0xE9E224))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Enterd3*))(Il2CppBase() + 0xE9E23C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Enterd3*))(Il2CppBase() + 0xE9E244))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Enterd3*))(Il2CppBase() + 0xE9E284))(this);
	}

};

}
