#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryHelper"));
	}


	template <typename T = ItemEntity*> static T GetItemInSlot(GameEntity* entity, ICommonContexts* world, int32_t slotIndex) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x1471AEC))(0, entity, world, slotIndex);
	}
	template <typename T = int32_t> static T CalcBonusSlotCount(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1471CBC))(0, entity, world);
	}
	template <typename T = int32_t> static T GetResourceOrCurrencyCount(GameEntity* entity, ICommonContexts* world, Il2CppString* resource, bool useExternalInventory) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, bool))(Il2CppBase() + 0x146D5A0))(0, entity, world, resource, useExternalInventory);
	}
	template <typename T = int32_t> static T GetResourceCount(GameEntity* entity, ICommonContexts* world, Il2CppString* resource, bool useExternalInventory) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, bool))(Il2CppBase() + 0x1471D9C))(0, entity, world, resource, useExternalInventory);
	}
	template <typename T = bool> static T IsEnoughResource(GameEntity* entity, ICommonContexts* world, Resource* resource, bool useExternalInventory) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Resource*, bool))(Il2CppBase() + 0x1471EC4))(0, entity, world, resource, useExternalInventory);
	}
	template <typename T = bool> static T IsEnoughResource_1(GameEntity* entity, ICommonContexts* world, Il2CppString* resource, int32_t count, bool useExternalInventory) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x14720D0))(0, entity, world, resource, count, useExternalInventory);
	}
	template <typename T = bool> static T IsEnoughResources(GameEntity* entity, ICommonContexts* world, IEnumerable1Resource*>* resources, bool useExternalInventory) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, IEnumerable1Resource*>*, bool))(Il2CppBase() + 0x14722D8))(0, entity, world, resources, useExternalInventory);
	}
	template <typename T = bool> static T IsEnoughResourceOrCurrency(GameEntity* entity, ICommonContexts* world, Il2CppString* resource, int32_t count, bool useExternalInventory) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x14724D8))(0, entity, world, resource, count, useExternalInventory);
	}
	template <typename T = bool> static T IsEnoughResourcesAndCurrency(GameEntity* entity, ICommonContexts* world, IEnumerable1Resource*>* resources, bool useExternalInventory) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, IEnumerable1Resource*>*, bool))(Il2CppBase() + 0x1472850))(0, entity, world, resources, useExternalInventory);
	}
	template <typename T = int32_t> static T ConsumeResource(GameEntity* entity, ICommonContexts* world, Il2CppString* resource, int32_t count, bool useExternalInventory) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x1472ED8))(0, entity, world, resource, count, useExternalInventory);
	}
	template <typename T = int32_t> static T ConsumeResources(GameEntity* entity, ICommonContexts* world, IEnumerable1Resource*>* resources, bool useExternalInventory) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, IEnumerable1Resource*>*, bool))(Il2CppBase() + 0x14730E0))(0, entity, world, resources, useExternalInventory);
	}
	template <typename T = bool> static T IsArming(GameEntity* entity, ICommonContexts* world, Il2CppString* resourceName) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x14732E0))(0, entity, world, resourceName);
	}
	template <typename T = void> static T SetResource(InventorySlotEntity* inventoryEntity, ICommonContexts* world, ItemEntity* resourceItem, int32_t count, Nullable1int64_t>* signature, Nullable1float>* durabilityCoef) {
		return ((T (*)(void *, InventorySlotEntity*, ICommonContexts*, ItemEntity*, int32_t, Nullable1int64_t>*, Nullable1float>*))(Il2CppBase() + 0x1473534))(0, inventoryEntity, world, resourceItem, count, signature, durabilityCoef);
	}
	template <typename T = void> static T SetResource_1(InventorySlotEntity* inventoryEntity, ICommonContexts* world, Resource* resource, Nullable1int64_t>* signature) {
		return ((T (*)(void *, InventorySlotEntity*, ICommonContexts*, Resource*, Nullable1int64_t>*))(Il2CppBase() + 0x14738C8))(0, inventoryEntity, world, resource, signature);
	}
	template <typename T = void> static T ReplaceAndSignStack(InventorySlotEntity* slotEntity, Il2CppString* resource, int32_t count, Nullable1int64_t>* signature) {
		return ((T (*)(void *, InventorySlotEntity*, Il2CppString*, int32_t, Nullable1int64_t>*))(Il2CppBase() + 0x14739E0))(0, slotEntity, resource, count, signature);
	}
	template <typename T = void> static T UpdateStack(IStackEntity* slotEntity) {
		return ((T (*)(void *, IStackEntity*))(Il2CppBase() + 0x1473B3C))(0, slotEntity);
	}
	template <typename T = bool> static T SetStackResourceCount(InventorySlotEntity* slotEntity, int32_t newCount, bool saveResoures) {
		return ((T (*)(void *, InventorySlotEntity*, int32_t, bool))(Il2CppBase() + 0x1473CF4))(0, slotEntity, newCount, saveResoures);
	}
	template <typename T = bool> static T SetItem(InventorySlotEntity* inventoryEntity, ItemEntity* item, int32_t count, Nullable1int64_t>* signature, Nullable1float>* durabilityCoef) {
		return ((T (*)(void *, InventorySlotEntity*, ItemEntity*, int32_t, Nullable1int64_t>*, Nullable1float>*))(Il2CppBase() + 0x1473694))(0, inventoryEntity, item, count, signature, durabilityCoef);
	}
	template <typename T = int32_t> static T RemoveFromStack(InventorySlotEntity* inventoryEntity, int32_t count, bool saveResource) {
		return ((T (*)(void *, InventorySlotEntity*, int32_t, bool))(Il2CppBase() + 0x1473DB4))(0, inventoryEntity, count, saveResource);
	}
	template <typename T = int32_t> static T ClearStack(InventorySlotEntity* inventoryEntity, bool saveResource) {
		return ((T (*)(void *, InventorySlotEntity*, bool))(Il2CppBase() + 0x1473558))(0, inventoryEntity, saveResource);
	}
	template <typename T = void> static T Swap(InventorySlotEntity* from, InventorySlotEntity* to) {
		return ((T (*)(void *, InventorySlotEntity*, InventorySlotEntity*))(Il2CppBase() + 0x1473EAC))(0, from, to);
	}
	template <typename T = void> static T MoveTo(InventorySlotEntity* from, InventorySlotEntity* to) {
		return ((T (*)(void *, InventorySlotEntity*, InventorySlotEntity*))(Il2CppBase() + 0x147416C))(0, from, to);
	}
	template <typename T = bool> static T CanDeleteItems(GameEntity* player, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x14742DC))(0, player, world);
	}
	template <typename T = bool> static T IsAllResorcesCollected(InventorySlotContext* context, int32_t parentId) {
		return ((T (*)(void *, InventorySlotContext*, int32_t))(Il2CppBase() + 0x1474824))(0, context, parentId);
	}
	template <typename T = InventorySlotEntity*> static T GetMinStack(InventorySlotContext* context, IIdEntity* entity, Il2CppString* name) {
		return ((T (*)(void *, InventorySlotContext*, IIdEntity*, Il2CppString*))(Il2CppBase() + 0x14749CC))(0, context, entity, name);
	}
	template <typename T = InventorySlotEntity*> static T GetMinStack_1(InventorySlotContext* context, int32_t parentId, Il2CppString* name) {
		return ((T (*)(void *, InventorySlotContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1474A98))(0, context, parentId, name);
	}
	template <typename T = int32_t> static T CanAddResource(ICommonContexts* world, GameEntity* entity, Resource* resource) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, Resource*))(Il2CppBase() + 0x1474CB4))(0, world, entity, resource);
	}
	template <typename T = int32_t> static T CanAddResource_1(ICommonContexts* world, GameEntity* entity, ItemEntity* resourceItem, int32_t count) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, ItemEntity*, int32_t))(Il2CppBase() + 0x1474D64))(0, world, entity, resourceItem, count);
	}
	template <typename T = int32_t> static T CanAddResource_2(ICommonContexts* world, int32_t parentId, ItemEntity* resourceItem, int32_t count, int32_t maxCount) {
		return ((T (*)(void *, ICommonContexts*, int32_t, ItemEntity*, int32_t, int32_t))(Il2CppBase() + 0x14752C4))(0, world, parentId, resourceItem, count, maxCount);
	}
	template <typename T = ValueTuple2int32_t, int32_t>*> static T CanAddResources(ICommonContexts* world, GameEntity* avatar, IEnumerable1Resource*>* addedResources) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, IEnumerable1Resource*>*))(Il2CppBase() + 0x1475708))(0, world, avatar, addedResources);
	}
	template <typename T = int32_t> static T CanAddResourceToInventory(ICommonContexts* world, InventorySlotEntity* inventory, ItemEntity* resource, int32_t count) {
		return ((T (*)(void *, ICommonContexts*, InventorySlotEntity*, ItemEntity*, int32_t))(Il2CppBase() + 0x14755C4))(0, world, inventory, resource, count);
	}
	template <typename T = int32_t> static T GetInventorySize(GameEntity* entity, ICommonContexts* world, PlayerInventoryType* inventoryType) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, PlayerInventoryType*))(Il2CppBase() + 0x1474DDC))(0, entity, world, inventoryType);
	}
	template <typename T = int32_t> static T GetFreeSlotsCount(ICommonContexts* world, GameEntity* entity, PlayerInventoryType* inventoryType) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, PlayerInventoryType*))(Il2CppBase() + 0x146E650))(0, world, entity, inventoryType);
	}
	template <typename T = int32_t> static T GetNotEmptyInventoriesCount(InventorySlotContext* context, int32_t id) {
		return ((T (*)(void *, InventorySlotContext*, int32_t))(Il2CppBase() + 0x147663C))(0, context, id);
	}
	template <typename T = ValueTuple3InventorySlotEntity*, ItemEntity*, float>*> static T GetInteractItem(ICommonContexts* world, GameEntity* actor, Il2CppArray<uintptr_t>* requiredItems) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1476784))(0, world, actor, requiredItems);
	}
	template <typename T = bool> static T CanBlueprintCraft(ICommonContexts* world, GameEntity* entity, IEnumerable1Resource*>* resourcesToConsume, Il2CppString* name, int32_t count) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, IEnumerable1Resource*>*, Il2CppString*, int32_t))(Il2CppBase() + 0x1476DE8))(0, world, entity, resourcesToConsume, name, count);
	}
	template <typename T = void> static T DestroyAllInventories(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x147792C))(0, entity, world);
	}
	template <typename T = void> static T DestroyInventory(ICommonContexts* world, int32_t id, InventoryType* ignore) {
		return ((T (*)(void *, ICommonContexts*, int32_t, InventoryType*))(Il2CppBase() + 0x1477410))(0, world, id, ignore);
	}
	template <typename T = Il2CppString*> static T GetDebugInventoryString(InventorySlotContext* inventory, int32_t parentId) {
		return ((T (*)(void *, InventorySlotContext*, int32_t))(Il2CppBase() + 0x1477A2C))(0, inventory, parentId);
	}
	template <typename T = Il2CppString*> static T VeryHeavyMethodDONOTUSEME(InventorySlotContext* inventory, int32_t parentId) {
		return ((T (*)(void *, InventorySlotContext*, int32_t))(Il2CppBase() + 0x1478048))(0, inventory, parentId);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T GetResources(ICommonContexts* world, int32_t parentId) {
		return ((T (*)(void *, ICommonContexts*, int32_t))(Il2CppBase() + 0x1478C5C))(0, world, parentId);
	}
	template <typename T = void> static T GetResources_1(ICommonContexts* world, int32_t parentId, Il2CppList<Resource*>* result) {
		return ((T (*)(void *, ICommonContexts*, int32_t, Il2CppList<Resource*>*))(Il2CppBase() + 0x14791B0))(0, world, parentId, result);
	}
	template <typename T = int32_t> static T GetPlayerInventorySize(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x14764DC))(0, entity, world);
	}
	template <typename T = ItemEntity*> static T GetBackpackFromInventory(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1479714))(0, entity, world);
	}
	template <typename T = ValueTuple3bool, int32_t, int32_t>*> static T CanReplaceBackpack(GameEntity* entity, ICommonContexts* world, ItemEntity* newBackpack, int32_t moveCount) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, ItemEntity*, int32_t))(Il2CppBase() + 0x14798E4))(0, entity, world, newBackpack, moveCount);
	}
	template <typename T = int32_t> static T GetInventoryParentId(InventorySlotEntity* inventory, ICommonContexts* context) {
		return ((T (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x1479C30))(0, inventory, context);
	}
	template <typename T = int32_t> static T GetInventoryParentId_1(GameEntity* avatar, PlayerInventoryType* inventoryType) {
		return ((T (*)(void *, GameEntity*, PlayerInventoryType*))(Il2CppBase() + 0x1476564))(0, avatar, inventoryType);
	}
	template <typename T = int32_t> static T GetCampBathFuelConsumeCount(GameEntity* entity, ICommonContexts* world, Il2CppString* resource, int32_t stackCount) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, int32_t))(Il2CppBase() + 0x1479EC0))(0, entity, world, resource, stackCount);
	}
	template <typename T = InventoryPower*> static T GetInventoryPower(GameEntity* player, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x147A13C))(0, player, world);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T VeryHeavyMethodDONOTUSEMEg__getStringInventory|39_2(int32_t id, uintptr_t ) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x1478760))(0, id, );
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T VeryHeavyMethodDONOTUSEMEg__getIntersection|39_3(Il2CppArray<uintptr_t>* first, Il2CppArray<uintptr_t>* second, int32_t min) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x14789A8))(0, first, second, min);
	}

};

