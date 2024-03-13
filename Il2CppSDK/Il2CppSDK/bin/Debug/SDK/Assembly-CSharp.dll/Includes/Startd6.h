#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Startd6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Start>d__6"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = PlatformAuthLS*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& progress5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Startd6*))(Il2CppBase() + 0x10AFEE8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Startd6*))(Il2CppBase() + 0x10AFEEC))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Startd6*))(Il2CppBase() + 0x10B018C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Startd6*))(Il2CppBase() + 0x10B0194))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Startd6*))(Il2CppBase() + 0x10B01D4))(this);
	}

};

