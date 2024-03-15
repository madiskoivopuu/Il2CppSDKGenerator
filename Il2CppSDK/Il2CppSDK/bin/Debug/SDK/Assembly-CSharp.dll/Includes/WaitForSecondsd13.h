#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitForSecondsd13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitForSeconds>d__13"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& time() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& start5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(WaitForSecondsd13*))(Il2CppBase() + 0xEE8D2C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(WaitForSecondsd13*))(Il2CppBase() + 0xEE8D30))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(WaitForSecondsd13*))(Il2CppBase() + 0xEE8E44))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(WaitForSecondsd13*))(Il2CppBase() + 0xEE8E4C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(WaitForSecondsd13*))(Il2CppBase() + 0xEE8E8C))(this);
	}

};

