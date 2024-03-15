#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class DonateProgressAnimationd64
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DonateProgressAnimation>d__64"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 BaseCupWindow1<T>*& 4__this() {
		return *(BaseCupWindow1<T>**)((uintptr_t)this + 0x0);
	}
	 ValueTuple2<int32_t, float>*& newProgress() {
		return *(ValueTuple2<int32_t, float>**)((uintptr_t)this + 0x0);
	}
	 ValueTuple2<int32_t, float>*& proc() {
		return *(ValueTuple2<int32_t, float>**)((uintptr_t)this + 0x0);
	}
	 ValueTuple2<int32_t, float>*& superProc() {
		return *(ValueTuple2<int32_t, float>**)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(DonateProgressAnimationd64*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(DonateProgressAnimationd64*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(DonateProgressAnimationd64*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(DonateProgressAnimationd64*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(DonateProgressAnimationd64*))(Il2CppBase() + 0x0))(this);
	}

};

