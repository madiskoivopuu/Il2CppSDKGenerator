#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FadeInOutCrtd8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FadeInOutCrt>d__8"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = FaderBase*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onFadeIn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& startColor5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& halfDuration5__3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& fadeInDuration5__4() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& revertHalfDuration5__5() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& t5__6() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(FadeInOutCrtd8*))(Il2CppBase() + 0xE9DF18))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(FadeInOutCrtd8*))(Il2CppBase() + 0xE9DF1C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(FadeInOutCrtd8*))(Il2CppBase() + 0xE9E1A4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(FadeInOutCrtd8*))(Il2CppBase() + 0xE9E1AC))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FadeInOutCrtd8*))(Il2CppBase() + 0xE9E1EC))(this);
	}

};

