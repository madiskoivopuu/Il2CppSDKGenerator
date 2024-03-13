#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CircleWarningAnimd27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CircleWarningAnim>d__27"));
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
	template <typename T = float> T& startRadius5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& BaseColor5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& HoleColor5__5() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& AnimatedColor5__6() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CircleWarningAnimd27*))(Il2CppBase() + 0x22A7088))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CircleWarningAnimd27*))(Il2CppBase() + 0x22A708C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CircleWarningAnimd27*))(Il2CppBase() + 0x22A7434))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CircleWarningAnimd27*))(Il2CppBase() + 0x22A743C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CircleWarningAnimd27*))(Il2CppBase() + 0x22A747C))(this);
	}

};

