#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimateProgressBard65
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AnimateProgressBar>d__65"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& filledImage() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& fillOrigin() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& fillTarget() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& valueOrigin() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& valueTarget() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& timer5__2() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(AnimateProgressBard65*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(AnimateProgressBard65*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(AnimateProgressBard65*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(AnimateProgressBard65*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AnimateProgressBard65*))(Il2CppBase() + 0x0))(this);
	}

};

}
