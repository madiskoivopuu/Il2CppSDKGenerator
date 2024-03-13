#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitDataContextd29
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitDataContext>d__29"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ConfigurationLS*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& init5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(InitDataContextd29*))(Il2CppBase() + 0x1128DDC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(InitDataContextd29*))(Il2CppBase() + 0x1128DE0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(InitDataContextd29*))(Il2CppBase() + 0x1128FCC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(InitDataContextd29*))(Il2CppBase() + 0x1128FD4))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InitDataContextd29*))(Il2CppBase() + 0x1129014))(this);
	}

};

