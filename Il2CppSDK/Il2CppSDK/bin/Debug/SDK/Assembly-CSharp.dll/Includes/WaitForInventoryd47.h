#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitForInventoryd47
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitForInventory>d__47"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = IInventoryItem*> R& inventoryItem() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& id() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = MountsTraderWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& waitTime5__2() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(WaitForInventoryd47*))(Il2CppBase() + 0x10A81E0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(WaitForInventoryd47*))(Il2CppBase() + 0x10A81E4))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(WaitForInventoryd47*))(Il2CppBase() + 0x10A8694))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(WaitForInventoryd47*))(Il2CppBase() + 0x10A869C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(WaitForInventoryd47*))(Il2CppBase() + 0x10A86DC))(this);
	}

};

