#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Exitd21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Exit>d__21"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ArenaUnityController*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(Exitd21*))(Il2CppBase() + 0xEDA9A4))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Exitd21*))(Il2CppBase() + 0xEDA9A8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(Exitd21*))(Il2CppBase() + 0xEDA9E4))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Exitd21*))(Il2CppBase() + 0xEDA9EC))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Exitd21*))(Il2CppBase() + 0xEDAA2C))(this);
	}

};

