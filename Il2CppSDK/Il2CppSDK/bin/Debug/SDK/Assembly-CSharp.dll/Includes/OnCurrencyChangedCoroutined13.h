#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCurrencyChangedCoroutined13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnCurrencyChangedCoroutine>d__13"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ColoredAnimatedCounter*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& newCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& timeLeft5__2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& currentCurrencyCount5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& deltaOnTick5__4() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(OnCurrencyChangedCoroutined13*))(Il2CppBase() + 0x111DB54))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(OnCurrencyChangedCoroutined13*))(Il2CppBase() + 0x111DB58))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(OnCurrencyChangedCoroutined13*))(Il2CppBase() + 0x111DDD0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(OnCurrencyChangedCoroutined13*))(Il2CppBase() + 0x111DDD8))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(OnCurrencyChangedCoroutined13*))(Il2CppBase() + 0x111DE18))(this);
	}

};

