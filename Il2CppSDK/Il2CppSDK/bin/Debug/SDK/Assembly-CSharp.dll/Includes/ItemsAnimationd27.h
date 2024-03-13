#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemsAnimationd27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ItemsAnimation>d__27"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = StoreVIPChestDetailedWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Store2DataEntity*> T& data5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& slotsProgress5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& i5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ItemsAnimationd27*))(Il2CppBase() + 0x10D3890))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ItemsAnimationd27*))(Il2CppBase() + 0x10D3894))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ItemsAnimationd27*))(Il2CppBase() + 0x10D4404))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ItemsAnimationd27*))(Il2CppBase() + 0x10D440C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ItemsAnimationd27*))(Il2CppBase() + 0x10D444C))(this);
	}

};

