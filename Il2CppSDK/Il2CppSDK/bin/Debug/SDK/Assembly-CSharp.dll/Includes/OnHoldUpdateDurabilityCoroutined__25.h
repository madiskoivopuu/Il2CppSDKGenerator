#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnHoldUpdateDurabilityCoroutined25
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnHoldUpdateDurabilityCoroutine>d__25"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& targetData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& requiredItems5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& interactItem5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& firstTime5__4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& lastDurability5__5() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& durability5__6() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(OnHoldUpdateDurabilityCoroutined25*))(Il2CppBase() + 0xEA751C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(OnHoldUpdateDurabilityCoroutined25*))(Il2CppBase() + 0xEA7520))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(OnHoldUpdateDurabilityCoroutined25*))(Il2CppBase() + 0xEA7938))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(OnHoldUpdateDurabilityCoroutined25*))(Il2CppBase() + 0xEA7940))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(OnHoldUpdateDurabilityCoroutined25*))(Il2CppBase() + 0xEA7980))(this);
	}

};

}
