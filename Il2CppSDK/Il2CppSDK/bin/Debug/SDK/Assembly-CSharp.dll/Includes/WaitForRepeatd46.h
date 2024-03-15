#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitForRepeatd46
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitForRepeat>d__46"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& delay() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = BaseLoaderStep*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& delayStringKey() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& action() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& timeToReconnect5__2() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& progress5__3() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(WaitForRepeatd46*))(Il2CppBase() + 0xEE883C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(WaitForRepeatd46*))(Il2CppBase() + 0xEE8840))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(WaitForRepeatd46*))(Il2CppBase() + 0xEE8B30))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(WaitForRepeatd46*))(Il2CppBase() + 0xEE8B38))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(WaitForRepeatd46*))(Il2CppBase() + 0xEE8B78))(this);
	}

};

