#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCurrencyChangedCoroutined13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnCurrencyChangedCoroutine>d__13"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ColoredAnimatedCounter*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& newCount() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& timeLeft5__2() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> R& currentCurrencyCount5__3() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& deltaOnTick5__4() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(OnCurrencyChangedCoroutined13*))(Il2CppBase() + 0x111DB54))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(OnCurrencyChangedCoroutined13*))(Il2CppBase() + 0x111DB58))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(OnCurrencyChangedCoroutined13*))(Il2CppBase() + 0x111DDD0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(OnCurrencyChangedCoroutined13*))(Il2CppBase() + 0x111DDD8))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(OnCurrencyChangedCoroutined13*))(Il2CppBase() + 0x111DE18))(this);
	}

};

