#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Exitd3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Exit>d__3"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Transition*> R& transition() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = LoginState*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& enumerator5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Exitd3*))(Il2CppBase() + 0x1161A8C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Exitd3*))(Il2CppBase() + 0x1161A90))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Exitd3*))(Il2CppBase() + 0x1161DA8))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Exitd3*))(Il2CppBase() + 0x1161DB0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Exitd3*))(Il2CppBase() + 0x1161DF0))(this);
	}

};
