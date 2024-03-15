#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetConfigCrtd21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetConfigCrt>d__21"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(GetConfigCrtd21*))(Il2CppBase() + 0x10C5DF0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(GetConfigCrtd21*))(Il2CppBase() + 0x10C5DF4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(GetConfigCrtd21*))(Il2CppBase() + 0x10C5FB8))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(GetConfigCrtd21*))(Il2CppBase() + 0x10C5FC0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(GetConfigCrtd21*))(Il2CppBase() + 0x10C6000))(this);
	}

};

