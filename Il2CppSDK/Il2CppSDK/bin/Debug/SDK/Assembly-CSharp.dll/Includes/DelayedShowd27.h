#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayedShowd27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayedShow>d__27"));
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
	template <typename R = float> R& animationLenght5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& animationName5__3() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& 7__wrap3() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(DelayedShowd27*))(Il2CppBase() + 0x115F75C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(DelayedShowd27*))(Il2CppBase() + 0x115F97C))(this);
	}
	template <typename R = void> R m__Finally1() {
		return ((R (*)(DelayedShowd27*))(Il2CppBase() + 0x115F7EC))(this);
	}
	template <typename R = void> R m__Finally2() {
		return ((R (*)(DelayedShowd27*))(Il2CppBase() + 0x115F8B4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(DelayedShowd27*))(Il2CppBase() + 0x1160078))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(DelayedShowd27*))(Il2CppBase() + 0x1160080))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(DelayedShowd27*))(Il2CppBase() + 0x11600C0))(this);
	}

};

