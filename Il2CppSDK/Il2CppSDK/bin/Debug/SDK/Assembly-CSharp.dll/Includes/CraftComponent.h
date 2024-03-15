#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftComponent"));
	}

	template <typename R = Il2CppString*> static R& FOOD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DRINK() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& BOTH() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R& FOOD_OR_DRINK() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Category() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& SlotCount() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& IsProduction() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = Il2CppString*> R& WorkerSummonItem() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& MinOutSlots() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Il2CppList<Il2CppString*>*& OutSlotUnlockConditions() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<FuelItem*>*> R& Fuel() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& FuelType() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& TaggedFuelConversionRate() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& TaggedFuelIconAssetPath() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& TaggedFuelCaption() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& TaggedFuelDescription() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CraftComponent*, Il2CppObject*))(Il2CppBase() + 0x1341394))(this, targetObject);
	}

};

