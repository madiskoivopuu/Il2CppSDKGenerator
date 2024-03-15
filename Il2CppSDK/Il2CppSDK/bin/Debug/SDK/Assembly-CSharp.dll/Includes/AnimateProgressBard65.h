#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class AnimateProgressBard65
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AnimateProgressBar>d__65"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& filledImage() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& fillOrigin() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& fillTarget() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 BaseCupWindow1T>*& 4__this() {
		return *(BaseCupWindow1T>**)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& duration() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& valueOrigin() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& valueTarget() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& timer5__2() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(AnimateProgressBard65*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(AnimateProgressBard65*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(AnimateProgressBard65*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(AnimateProgressBard65*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(AnimateProgressBard65*))(Il2CppBase() + 0x0))(this);
	}

};

