#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Rotuned5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Rotune>d__5"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = WarningLineAreaView*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& timer5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& leftMaterial5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& rightMaterial5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& middleMaterial5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& duration5__6() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& color5__7() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Rotuned5*))(Il2CppBase() + 0x22A7C3C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Rotuned5*))(Il2CppBase() + 0x22A7C40))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Rotuned5*))(Il2CppBase() + 0x22A8018))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Rotuned5*))(Il2CppBase() + 0x22A8020))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Rotuned5*))(Il2CppBase() + 0x22A8060))(this);
	}

};

