#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelayedShowd27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayedShow>d__27"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = LocationFarmWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& animationLenght5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& animationName5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& 7__wrap3() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DelayedShowd27*))(Il2CppBase() + 0x115F75C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelayedShowd27*))(Il2CppBase() + 0x115F97C))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(DelayedShowd27*))(Il2CppBase() + 0x115F7EC))(this);
	}
	template <typename T = void> T m__Finally2() {
		return ((T (*)(DelayedShowd27*))(Il2CppBase() + 0x115F8B4))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DelayedShowd27*))(Il2CppBase() + 0x1160078))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DelayedShowd27*))(Il2CppBase() + 0x1160080))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayedShowd27*))(Il2CppBase() + 0x11600C0))(this);
	}

};

