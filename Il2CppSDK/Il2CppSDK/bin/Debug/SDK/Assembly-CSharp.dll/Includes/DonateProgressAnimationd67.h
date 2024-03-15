#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DonateProgressAnimationd67
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DonateProgressAnimation>d__67"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = OpenGuildBossesWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& newProgress() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& addValue() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = bool> R& opened() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(DonateProgressAnimationd67*))(Il2CppBase() + 0x10AE68C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(DonateProgressAnimationd67*))(Il2CppBase() + 0x10AE690))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(DonateProgressAnimationd67*))(Il2CppBase() + 0x10AE7CC))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(DonateProgressAnimationd67*))(Il2CppBase() + 0x10AE7D4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(DonateProgressAnimationd67*))(Il2CppBase() + 0x10AE814))(this);
	}

};

