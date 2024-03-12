#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DonateProgressAnimationd64
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DonateProgressAnimation>d__64"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& newProgress() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& proc() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& superProc() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DonateProgressAnimationd64*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DonateProgressAnimationd64*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DonateProgressAnimationd64*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DonateProgressAnimationd64*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DonateProgressAnimationd64*))(Il2CppBase() + 0x0))(this);
	}

};

}
