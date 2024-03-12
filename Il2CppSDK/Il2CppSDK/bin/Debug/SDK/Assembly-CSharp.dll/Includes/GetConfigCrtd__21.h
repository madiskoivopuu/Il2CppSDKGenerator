#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetConfigCrtd21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetConfigCrt>d__21"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetConfigCrtd21*))(Il2CppBase() + 0x10C5DF0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetConfigCrtd21*))(Il2CppBase() + 0x10C5DF4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(GetConfigCrtd21*))(Il2CppBase() + 0x10C5FB8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetConfigCrtd21*))(Il2CppBase() + 0x10C5FC0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetConfigCrtd21*))(Il2CppBase() + 0x10C6000))(this);
	}

};

}
