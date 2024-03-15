#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitDataContextd29
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitDataContext>d__29"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ConfigurationLS*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& init5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(InitDataContextd29*))(Il2CppBase() + 0x1128DDC))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(InitDataContextd29*))(Il2CppBase() + 0x1128DE0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(InitDataContextd29*))(Il2CppBase() + 0x1128FCC))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(InitDataContextd29*))(Il2CppBase() + 0x1128FD4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(InitDataContextd29*))(Il2CppBase() + 0x1129014))(this);
	}

};

