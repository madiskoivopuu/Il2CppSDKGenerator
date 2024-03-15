#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnHoldUpdateDurabilityCoroutined25
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnHoldUpdateDurabilityCoroutine>d__25"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = GameDataEntity*> R& targetData() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = HUDInteractButton*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<NameChance>*> R& requiredItems5__2() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 ValueTuple3<InventorySlotEntity*, ItemEntity*, float>*& interactItem5__3() {
		return *(ValueTuple3<InventorySlotEntity*, ItemEntity*, float>**)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& firstTime5__4() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = float> R& lastDurability5__5() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = float> R& durability5__6() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(OnHoldUpdateDurabilityCoroutined25*))(Il2CppBase() + 0xEA751C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(OnHoldUpdateDurabilityCoroutined25*))(Il2CppBase() + 0xEA7520))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(OnHoldUpdateDurabilityCoroutined25*))(Il2CppBase() + 0xEA7938))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(OnHoldUpdateDurabilityCoroutined25*))(Il2CppBase() + 0xEA7940))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(OnHoldUpdateDurabilityCoroutined25*))(Il2CppBase() + 0xEA7980))(this);
	}

};

