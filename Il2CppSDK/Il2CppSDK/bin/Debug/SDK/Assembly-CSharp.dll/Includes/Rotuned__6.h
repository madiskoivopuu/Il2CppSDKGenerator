#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Rotuned6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Rotune>d__6"));
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
	template <typename T = float> T& timer5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& baseConeColor5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& animatedConeColor5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& duration5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& color5__6() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Rotuned6*))(Il2CppBase() + 0x22A6D04))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Rotuned6*))(Il2CppBase() + 0x22A6D08))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Rotuned6*))(Il2CppBase() + 0x22A700C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Rotuned6*))(Il2CppBase() + 0x22A7014))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Rotuned6*))(Il2CppBase() + 0x22A7054))(this);
	}

};

}
