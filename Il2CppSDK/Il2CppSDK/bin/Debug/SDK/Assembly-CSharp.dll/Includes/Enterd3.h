#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enterd3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Enter>d__3"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Enterd3*))(Il2CppBase() + 0xE9E220))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Enterd3*))(Il2CppBase() + 0xE9E224))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Enterd3*))(Il2CppBase() + 0xE9E23C))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Enterd3*))(Il2CppBase() + 0xE9E244))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Enterd3*))(Il2CppBase() + 0xE9E284))(this);
	}

};

