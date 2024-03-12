#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProgressCoroutined14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ProgressCoroutine>d__14"));
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
	template <typename T = float> T& newValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& currentProgress5__2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& progressTime5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& processTimeRevert5__4() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ProgressCoroutined14*))(Il2CppBase() + 0x1118208))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ProgressCoroutined14*))(Il2CppBase() + 0x111820C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ProgressCoroutined14*))(Il2CppBase() + 0x1118578))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ProgressCoroutined14*))(Il2CppBase() + 0x1118580))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ProgressCoroutined14*))(Il2CppBase() + 0x11185C0))(this);
	}

};

}
