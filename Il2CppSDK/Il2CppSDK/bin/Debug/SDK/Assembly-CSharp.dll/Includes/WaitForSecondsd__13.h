#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitForSecondsd13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitForSeconds>d__13"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& start5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(WaitForSecondsd13*))(Il2CppBase() + 0xEE8D2C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitForSecondsd13*))(Il2CppBase() + 0xEE8D30))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(WaitForSecondsd13*))(Il2CppBase() + 0xEE8E44))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(WaitForSecondsd13*))(Il2CppBase() + 0xEE8E4C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitForSecondsd13*))(Il2CppBase() + 0xEE8E8C))(this);
	}

};

}
