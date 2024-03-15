#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Executed13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Execute>d__13"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Transition*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = IState*> R& stateTo() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = ICommonLogger*> R& logger() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& enumerator5__2() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Executed13*))(Il2CppBase() + 0x22A08BC))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Executed13*))(Il2CppBase() + 0x22A08C0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Executed13*))(Il2CppBase() + 0x22A0E90))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Executed13*))(Il2CppBase() + 0x22A0E98))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Executed13*))(Il2CppBase() + 0x22A0ED8))(this);
	}

};

