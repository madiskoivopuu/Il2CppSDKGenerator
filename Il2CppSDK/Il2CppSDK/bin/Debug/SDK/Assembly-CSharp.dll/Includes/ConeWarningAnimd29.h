#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConeWarningAnimd29
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ConeWarningAnim>d__29"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = WarningController*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& timer5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& BaseConeColor5__3() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& AnimatedConeColor5__4() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ConeWarningAnimd29*))(Il2CppBase() + 0x22A74B0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ConeWarningAnimd29*))(Il2CppBase() + 0x22A74B4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ConeWarningAnimd29*))(Il2CppBase() + 0x22A7798))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ConeWarningAnimd29*))(Il2CppBase() + 0x22A77A0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ConeWarningAnimd29*))(Il2CppBase() + 0x22A77E0))(this);
	}

};

