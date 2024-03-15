#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemsAnimationd27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ItemsAnimation>d__27"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = StoreVIPChestDetailedWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Store2DataEntity*> R& data5__2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<Resource>*> R& slotsProgress5__3() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& i5__4() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ItemsAnimationd27*))(Il2CppBase() + 0x10D3890))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ItemsAnimationd27*))(Il2CppBase() + 0x10D3894))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ItemsAnimationd27*))(Il2CppBase() + 0x10D4404))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ItemsAnimationd27*))(Il2CppBase() + 0x10D440C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ItemsAnimationd27*))(Il2CppBase() + 0x10D444C))(this);
	}

};

