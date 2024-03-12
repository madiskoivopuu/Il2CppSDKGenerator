#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConeWarningAnimd29
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ConeWarningAnim>d__29"));
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
	template <typename T = uintptr_t> T& BaseConeColor5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& AnimatedConeColor5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ConeWarningAnimd29*))(Il2CppBase() + 0x22A74B0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ConeWarningAnimd29*))(Il2CppBase() + 0x22A74B4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ConeWarningAnimd29*))(Il2CppBase() + 0x22A7798))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ConeWarningAnimd29*))(Il2CppBase() + 0x22A77A0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ConeWarningAnimd29*))(Il2CppBase() + 0x22A77E0))(this);
	}

};

}
