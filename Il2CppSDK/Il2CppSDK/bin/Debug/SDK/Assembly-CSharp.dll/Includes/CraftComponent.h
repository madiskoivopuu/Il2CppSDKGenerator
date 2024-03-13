#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftComponent"));
	}

	template <typename T = Il2CppString*> static T& FOOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DRINK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BOTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FOOD_OR_DRINK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Category() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SlotCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsProduction() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& WorkerSummonItem() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MinOutSlots() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& OutSlotUnlockConditions() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Fuel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& FuelType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& TaggedFuelConversionRate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& TaggedFuelIconAssetPath() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& TaggedFuelCaption() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& TaggedFuelDescription() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(CraftComponent*, Il2CppObject*))(Il2CppBase() + 0x1341394))(this, targetObject);
	}

};

