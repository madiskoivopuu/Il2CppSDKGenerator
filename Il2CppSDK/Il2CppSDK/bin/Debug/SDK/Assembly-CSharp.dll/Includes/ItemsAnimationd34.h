#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemsAnimationd34
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ItemsAnimation>d__34"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = StoreSlotsDetailedWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& pause5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 IList1Resource*>*& shuffled5__3() {
		return *(IList1Resource*>**)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& i5__4() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ItemsAnimationd34*))(Il2CppBase() + 0x10D2AD8))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ItemsAnimationd34*))(Il2CppBase() + 0x10D2ADC))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ItemsAnimationd34*))(Il2CppBase() + 0x10D3644))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ItemsAnimationd34*))(Il2CppBase() + 0x10D364C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ItemsAnimationd34*))(Il2CppBase() + 0x10D368C))(this);
	}

};

