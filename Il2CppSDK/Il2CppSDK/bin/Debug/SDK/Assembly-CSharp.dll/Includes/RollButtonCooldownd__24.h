#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RollButtonCooldownd24
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RollButtonCooldown>d__24"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(RollButtonCooldownd24*))(Il2CppBase() + 0x111A07C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RollButtonCooldownd24*))(Il2CppBase() + 0x111A080))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(RollButtonCooldownd24*))(Il2CppBase() + 0x111A160))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(RollButtonCooldownd24*))(Il2CppBase() + 0x111A168))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RollButtonCooldownd24*))(Il2CppBase() + 0x111A1A8))(this);
	}

};

}
