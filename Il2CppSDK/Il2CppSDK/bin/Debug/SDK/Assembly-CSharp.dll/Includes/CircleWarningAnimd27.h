#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CircleWarningAnimd27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CircleWarningAnim>d__27"));
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
	template <typename R = float> R& startRadius5__3() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = uintptr_t> R& BaseColor5__4() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& HoleColor5__5() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& AnimatedColor5__6() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(CircleWarningAnimd27*))(Il2CppBase() + 0x22A7088))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(CircleWarningAnimd27*))(Il2CppBase() + 0x22A708C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(CircleWarningAnimd27*))(Il2CppBase() + 0x22A7434))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(CircleWarningAnimd27*))(Il2CppBase() + 0x22A743C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(CircleWarningAnimd27*))(Il2CppBase() + 0x22A747C))(this);
	}

};

