#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaitForInventoryd47
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<WaitForInventory>d__47"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IInventoryItem*> T& inventoryItem() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = MountsTraderWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& waitTime5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(WaitForInventoryd47*))(Il2CppBase() + 0x10A81E0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(WaitForInventoryd47*))(Il2CppBase() + 0x10A81E4))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(WaitForInventoryd47*))(Il2CppBase() + 0x10A8694))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(WaitForInventoryd47*))(Il2CppBase() + 0x10A869C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(WaitForInventoryd47*))(Il2CppBase() + 0x10A86DC))(this);
	}

};

