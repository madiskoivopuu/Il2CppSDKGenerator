#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimateProgressBard68
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AnimateProgressBar>d__68"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& filledImage() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& fillOrigin() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& fillTarget() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = OpenGuildBossesWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& duration() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& addValue() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = float> R& timer5__2() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(AnimateProgressBard68*))(Il2CppBase() + 0x10AE408))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(AnimateProgressBard68*))(Il2CppBase() + 0x10AE40C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(AnimateProgressBard68*))(Il2CppBase() + 0x10AE610))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(AnimateProgressBard68*))(Il2CppBase() + 0x10AE618))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(AnimateProgressBard68*))(Il2CppBase() + 0x10AE658))(this);
	}

};

