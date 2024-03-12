#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryHelper"));
	}


	template <typename T = uintptr_t> static T GetItemInSlot(uintptr_t entity, uintptr_t world, int32_t slotIndex) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1471AEC))(0, entity, world, slotIndex);
	}
	template <typename T = int32_t> static T CalcBonusSlotCount(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1471CBC))(0, entity, world);
	}
	template <typename T = int32_t> static T GetResourceOrCurrencyCount(uintptr_t entity, uintptr_t world, Il2CppString* resource, bool useExternalInventory) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x146D5A0))(0, entity, world, resource, useExternalInventory);
	}
	template <typename T = int32_t> static T GetResourceCount(uintptr_t entity, uintptr_t world, Il2CppString* resource, bool useExternalInventory) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x1471D9C))(0, entity, world, resource, useExternalInventory);
	}
	template <typename T = bool> static T IsEnoughResource(uintptr_t entity, uintptr_t world, uintptr_t resource, bool useExternalInventory) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1471EC4))(0, entity, world, resource, useExternalInventory);
	}
	template <typename T = bool> static T IsEnoughResource_1(uintptr_t entity, uintptr_t world, Il2CppString* resource, int32_t count, bool useExternalInventory) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x14720D0))(0, entity, world, resource, count, useExternalInventory);
	}
	template <typename T = bool> static T IsEnoughResources(uintptr_t entity, uintptr_t world, void* resources, bool useExternalInventory) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*, bool))(Il2CppBase() + 0x14722D8))(0, entity, world, resources, useExternalInventory);
	}
	template <typename T = bool> static T IsEnoughResourceOrCurrency(uintptr_t entity, uintptr_t world, Il2CppString* resource, int32_t count, bool useExternalInventory) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x14724D8))(0, entity, world, resource, count, useExternalInventory);
	}
	template <typename T = bool> static T IsEnoughResourcesAndCurrency(uintptr_t entity, uintptr_t world, void* resources, bool useExternalInventory) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*, bool))(Il2CppBase() + 0x1472850))(0, entity, world, resources, useExternalInventory);
	}
	template <typename T = int32_t> static T ConsumeResource(uintptr_t entity, uintptr_t world, Il2CppString* resource, int32_t count, bool useExternalInventory) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x1472ED8))(0, entity, world, resource, count, useExternalInventory);
	}
	template <typename T = int32_t> static T ConsumeResources(uintptr_t entity, uintptr_t world, void* resources, bool useExternalInventory) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*, bool))(Il2CppBase() + 0x14730E0))(0, entity, world, resources, useExternalInventory);
	}
	template <typename T = bool> static T IsArming(uintptr_t entity, uintptr_t world, Il2CppString* resourceName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14732E0))(0, entity, world, resourceName);
	}
	template <typename T = void> static T SetResource(uintptr_t inventoryEntity, uintptr_t world, uintptr_t resourceItem, int32_t count, void* signature, void* durabilityCoef) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, void*, void*))(Il2CppBase() + 0x1473534))(0, inventoryEntity, world, resourceItem, count, signature, durabilityCoef);
	}
	template <typename T = void> static T SetResource_1(uintptr_t inventoryEntity, uintptr_t world, uintptr_t resource, void* signature) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x14738C8))(0, inventoryEntity, world, resource, signature);
	}
	template <typename T = void> static T ReplaceAndSignStack(uintptr_t slotEntity, Il2CppString* resource, int32_t count, void* signature) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x14739E0))(0, slotEntity, resource, count, signature);
	}
	template <typename T = void> static T UpdateStack(uintptr_t slotEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1473B3C))(0, slotEntity);
	}
	template <typename T = bool> static T SetStackResourceCount(uintptr_t slotEntity, int32_t newCount, bool saveResoures) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1473CF4))(0, slotEntity, newCount, saveResoures);
	}
	template <typename T = bool> static T SetItem(uintptr_t inventoryEntity, uintptr_t item, int32_t count, void* signature, void* durabilityCoef) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, void*, void*))(Il2CppBase() + 0x1473694))(0, inventoryEntity, item, count, signature, durabilityCoef);
	}
	template <typename T = int32_t> static T RemoveFromStack(uintptr_t inventoryEntity, int32_t count, bool saveResource) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1473DB4))(0, inventoryEntity, count, saveResource);
	}
	template <typename T = int32_t> static T ClearStack(uintptr_t inventoryEntity, bool saveResource) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x1473558))(0, inventoryEntity, saveResource);
	}
	template <typename T = void> static T Swap(uintptr_t from, uintptr_t to) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1473EAC))(0, from, to);
	}
	template <typename T = void> static T MoveTo(uintptr_t from, uintptr_t to) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x147416C))(0, from, to);
	}
	template <typename T = bool> static T CanDeleteItems(uintptr_t player, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x14742DC))(0, player, world);
	}
	template <typename T = bool> static T IsAllResorcesCollected(uintptr_t context, int32_t parentId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1474824))(0, context, parentId);
	}
	template <typename T = uintptr_t> static T GetMinStack(uintptr_t context, uintptr_t entity, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x14749CC))(0, context, entity, name);
	}
	template <typename T = uintptr_t> static T GetMinStack_1(uintptr_t context, int32_t parentId, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1474A98))(0, context, parentId, name);
	}
	template <typename T = int32_t> static T CanAddResource(uintptr_t world, uintptr_t entity, uintptr_t resource) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1474CB4))(0, world, entity, resource);
	}
	template <typename T = int32_t> static T CanAddResource_1(uintptr_t world, uintptr_t entity, uintptr_t resourceItem, int32_t count) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1474D64))(0, world, entity, resourceItem, count);
	}
	template <typename T = int32_t> static T CanAddResource_2(uintptr_t world, int32_t parentId, uintptr_t resourceItem, int32_t count, int32_t maxCount) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x14752C4))(0, world, parentId, resourceItem, count, maxCount);
	}
	template <typename T = void*> static T CanAddResources(uintptr_t world, uintptr_t avatar, void* addedResources) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x1475708))(0, world, avatar, addedResources);
	}
	template <typename T = int32_t> static T CanAddResourceToInventory(uintptr_t world, uintptr_t inventory, uintptr_t resource, int32_t count) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x14755C4))(0, world, inventory, resource, count);
	}
	template <typename T = int32_t> static T GetInventorySize(uintptr_t entity, uintptr_t world, uintptr_t inventoryType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1474DDC))(0, entity, world, inventoryType);
	}
	template <typename T = int32_t> static T GetFreeSlotsCount(uintptr_t world, uintptr_t entity, uintptr_t inventoryType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x146E650))(0, world, entity, inventoryType);
	}
	template <typename T = int32_t> static T GetNotEmptyInventoriesCount(uintptr_t context, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x147663C))(0, context, id);
	}
	template <typename T = void*> static T GetInteractItem(uintptr_t world, uintptr_t actor, Il2CppArray<uintptr_t>* requiredItems) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1476784))(0, world, actor, requiredItems);
	}
	template <typename T = bool> static T CanBlueprintCraft(uintptr_t world, uintptr_t entity, void* resourcesToConsume, Il2CppString* name, int32_t count) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*, Il2CppString*, int32_t))(Il2CppBase() + 0x1476DE8))(0, world, entity, resourcesToConsume, name, count);
	}
	template <typename T = void> static T DestroyAllInventories(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x147792C))(0, entity, world);
	}
	template <typename T = void> static T DestroyInventory(uintptr_t world, int32_t id, uintptr_t ignore) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1477410))(0, world, id, ignore);
	}
	template <typename T = Il2CppString*> static T GetDebugInventoryString(uintptr_t inventory, int32_t parentId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1477A2C))(0, inventory, parentId);
	}
	template <typename T = Il2CppString*> static T VeryHeavyMethodDONOTUSEME(uintptr_t inventory, int32_t parentId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1478048))(0, inventory, parentId);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T GetResources(uintptr_t world, int32_t parentId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1478C5C))(0, world, parentId);
	}
	template <typename T = void> static T GetResources_1(uintptr_t world, int32_t parentId, Il2CppList<uintptr_t>* result) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x14791B0))(0, world, parentId, result);
	}
	template <typename T = int32_t> static T GetPlayerInventorySize(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x14764DC))(0, entity, world);
	}
	template <typename T = uintptr_t> static T GetBackpackFromInventory(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1479714))(0, entity, world);
	}
	template <typename T = void*> static T CanReplaceBackpack(uintptr_t entity, uintptr_t world, uintptr_t newBackpack, int32_t moveCount) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x14798E4))(0, entity, world, newBackpack, moveCount);
	}
	template <typename T = int32_t> static T GetInventoryParentId(uintptr_t inventory, uintptr_t context) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1479C30))(0, inventory, context);
	}
	template <typename T = int32_t> static T GetInventoryParentId_1(uintptr_t avatar, uintptr_t inventoryType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1476564))(0, avatar, inventoryType);
	}
	template <typename T = int32_t> static T GetCampBathFuelConsumeCount(uintptr_t entity, uintptr_t world, Il2CppString* resource, int32_t stackCount) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1479EC0))(0, entity, world, resource, stackCount);
	}
	template <typename T = uintptr_t> static T GetInventoryPower(uintptr_t player, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x147A13C))(0, player, world);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T VeryHeavyMethodDONOTUSEMEg__getStringInventory|39_2(int32_t id, uintptr_t ) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x1478760))(0, id, );
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T VeryHeavyMethodDONOTUSEMEg__getIntersection|39_3(Il2CppArray<uintptr_t>* first, Il2CppArray<uintptr_t>* second, int32_t min) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x14789A8))(0, first, second, min);
	}

};

}
