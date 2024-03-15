#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICraftEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICraftEntity"));
	}


	template <typename R = CraftComponent*> R get_craft() {
		return ((R (*)(ICraftEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCraft() {
		return ((R (*)(ICraftEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<FuelItem>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((R (*)(ICraftEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<FuelItem>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename R = void> R ReplaceCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<FuelItem>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((R (*)(ICraftEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<FuelItem>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename R = void> R RemoveCraft() {
		return ((R (*)(ICraftEntity*))(Il2CppBase() + 0x0))(this);
	}

};

