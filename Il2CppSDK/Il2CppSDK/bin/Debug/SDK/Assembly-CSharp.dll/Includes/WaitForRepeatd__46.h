#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitForRepeatd46
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitForRepeat>d__46"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& delayStringKey() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& timeToReconnect5__2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& progress5__3() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(WaitForRepeatd46*))(Il2CppBase() + 0xEE883C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitForRepeatd46*))(Il2CppBase() + 0xEE8840))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(WaitForRepeatd46*))(Il2CppBase() + 0xEE8B30))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(WaitForRepeatd46*))(Il2CppBase() + 0xEE8B38))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitForRepeatd46*))(Il2CppBase() + 0xEE8B78))(this);
	}

};

}
