#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LineWarningAnimd28
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LineWarningAnim>d__28"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = WarningController*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& timer5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LeftMaterial5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& RightMaterial5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& MiddleMaterial5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(LineWarningAnimd28*))(Il2CppBase() + 0x22A7814))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LineWarningAnimd28*))(Il2CppBase() + 0x22A7818))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(LineWarningAnimd28*))(Il2CppBase() + 0x22A7BC0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(LineWarningAnimd28*))(Il2CppBase() + 0x22A7BC8))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LineWarningAnimd28*))(Il2CppBase() + 0x22A7C08))(this);
	}

};

