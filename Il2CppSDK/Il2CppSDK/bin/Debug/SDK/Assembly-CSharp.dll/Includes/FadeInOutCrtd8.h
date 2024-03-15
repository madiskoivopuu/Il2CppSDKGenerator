#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FadeInOutCrtd8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FadeInOutCrt>d__8"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = FaderBase*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& onFadeIn() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& startColor5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& halfDuration5__3() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& fadeInDuration5__4() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = float> R& revertHalfDuration5__5() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& t5__6() {
		return *(R*)((uintptr_t)this + 0x4C);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(FadeInOutCrtd8*))(Il2CppBase() + 0xE9DF18))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(FadeInOutCrtd8*))(Il2CppBase() + 0xE9DF1C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(FadeInOutCrtd8*))(Il2CppBase() + 0xE9E1A4))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(FadeInOutCrtd8*))(Il2CppBase() + 0xE9E1AC))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(FadeInOutCrtd8*))(Il2CppBase() + 0xE9E1EC))(this);
	}

};

