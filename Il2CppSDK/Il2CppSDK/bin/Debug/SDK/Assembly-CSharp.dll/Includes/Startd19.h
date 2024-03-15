#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Startd19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Start>d__19"));
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
	template <typename R = uintptr_t> R& progress5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& loadConfiguration5__3() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& initDataContext5__4() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Startd19*))(Il2CppBase() + 0x1129884))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Startd19*))(Il2CppBase() + 0x1129888))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Startd19*))(Il2CppBase() + 0x1129C78))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Startd19*))(Il2CppBase() + 0x1129C80))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Startd19*))(Il2CppBase() + 0x1129CC0))(this);
	}

};

