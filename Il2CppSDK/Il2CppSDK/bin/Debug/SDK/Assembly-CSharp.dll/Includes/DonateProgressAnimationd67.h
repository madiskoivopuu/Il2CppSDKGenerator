#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DonateProgressAnimationd67
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DonateProgressAnimation>d__67"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = OpenGuildBossesWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& newProgress() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& addValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& opened() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DonateProgressAnimationd67*))(Il2CppBase() + 0x10AE68C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DonateProgressAnimationd67*))(Il2CppBase() + 0x10AE690))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DonateProgressAnimationd67*))(Il2CppBase() + 0x10AE7CC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DonateProgressAnimationd67*))(Il2CppBase() + 0x10AE7D4))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DonateProgressAnimationd67*))(Il2CppBase() + 0x10AE814))(this);
	}

};

