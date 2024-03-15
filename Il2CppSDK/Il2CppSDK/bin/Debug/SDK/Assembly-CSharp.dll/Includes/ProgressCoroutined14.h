#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProgressCoroutined14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ProgressCoroutine>d__14"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ChanceProgressItem*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& newValue() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& currentProgress5__2() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& progressTime5__3() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& processTimeRevert5__4() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ProgressCoroutined14*))(Il2CppBase() + 0x1118208))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ProgressCoroutined14*))(Il2CppBase() + 0x111820C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ProgressCoroutined14*))(Il2CppBase() + 0x1118578))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ProgressCoroutined14*))(Il2CppBase() + 0x1118580))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ProgressCoroutined14*))(Il2CppBase() + 0x11185C0))(this);
	}

};

