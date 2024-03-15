#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayedScrolld28
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayedScroll>d__28"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = LocationFarmWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& totalTime5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& startTime5__3() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& state5__4() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(DelayedScrolld28*))(Il2CppBase() + 0x115F508))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(DelayedScrolld28*))(Il2CppBase() + 0x115F50C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(DelayedScrolld28*))(Il2CppBase() + 0x115F6E0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(DelayedScrolld28*))(Il2CppBase() + 0x115F6E8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(DelayedScrolld28*))(Il2CppBase() + 0x115F728))(this);
	}

};

