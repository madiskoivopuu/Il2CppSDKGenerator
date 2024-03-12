#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICraftEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICraftEntity"));
	}


	template <typename T = uintptr_t> T get_craft() {
		return ((T (*)(ICraftEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCraft() {
		return ((T (*)(ICraftEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<uintptr_t>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((T (*)(ICraftEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename T = void> T ReplaceCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<uintptr_t>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((T (*)(ICraftEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename T = void> T RemoveCraft() {
		return ((T (*)(ICraftEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
