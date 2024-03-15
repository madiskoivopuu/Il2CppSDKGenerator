#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryHelper"));
	}


	template <typename R = ItemEntity*> static R GetItemInSlot(GameEntity* entity, ICommonContexts* world, int32_t slotIndex) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, int32_t))(Il2CppBase() + 0x1471AEC))(0, entity, world, slotIndex);
	}
	template <typename R = int32_t> static R CalcBonusSlotCount(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1471CBC))(0, entity, world);
	}
	template <typename R = int32_t> static R GetResourceOrCurrencyCount(GameEntity* entity, ICommonContexts* world, Il2CppString* resource, bool useExternalInventory) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, bool))(Il2CppBase() + 0x146D5A0))(0, entity, world, resource, useExternalInventory);
	}
	template <typename R = int32_t> static R GetResourceCount(GameEntity* entity, ICommonContexts* world, Il2CppString* resource, bool useExternalInventory) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, bool))(Il2CppBase() + 0x1471D9C))(0, entity, world, resource, useExternalInventory);
	}
	template <typename R = bool> static R IsEnoughResource(GameEntity* entity, ICommonContexts* world, Resource resource, bool useExternalInventory) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Resource, bool))(Il2CppBase() + 0x1471EC4))(0, entity, world, resource, useExternalInventory);
	}
	template <typename R = bool> static R IsEnoughResource_1(GameEntity* entity, ICommonContexts* world, Il2CppString* resource, int32_t count, bool useExternalInventory) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x14720D0))(0, entity, world, resource, count, useExternalInventory);
	}
	template <typename R = bool> static R IsEnoughResources(GameEntity* entity, ICommonContexts* world, IEnumerable1<Resource>* resources, bool useExternalInventory) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, IEnumerable1<Resource>*, bool))(Il2CppBase() + 0x14722D8))(0, entity, world, resources, useExternalInventory);
	}
	template <typename R = bool> static R IsEnoughResourceOrCurrency(GameEntity* entity, ICommonContexts* world, Il2CppString* resource, int32_t count, bool useExternalInventory) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x14724D8))(0, entity, world, resource, count, useExternalInventory);
	}
	template <typename R = bool> static R IsEnoughResourcesAndCurrency(GameEntity* entity, ICommonContexts* world, IEnumerable1<Resource>* resources, bool useExternalInventory) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, IEnumerable1<Resource>*, bool))(Il2CppBase() + 0x1472850))(0, entity, world, resources, useExternalInventory);
	}
	template <typename R = int32_t> static R ConsumeResource(GameEntity* entity, ICommonContexts* world, Il2CppString* resource, int32_t count, bool useExternalInventory) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x1472ED8))(0, entity, world, resource, count, useExternalInventory);
	}
	template <typename R = int32_t> static R ConsumeResources(GameEntity* entity, ICommonContexts* world, IEnumerable1<Resource>* resources, bool useExternalInventory) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, IEnumerable1<Resource>*, bool))(Il2CppBase() + 0x14730E0))(0, entity, world, resources, useExternalInventory);
	}
	template <typename R = bool> static R IsArming(GameEntity* entity, ICommonContexts* world, Il2CppString* resourceName) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x14732E0))(0, entity, world, resourceName);
	}
	template <typename R = void> static R SetResource(InventorySlotEntity* inventoryEntity, ICommonContexts* world, ItemEntity* resourceItem, int32_t count, Nullable1<int64_t>* signature, Nullable1<float>* durabilityCoef) {
		return ((R (*)(void *, InventorySlotEntity*, ICommonContexts*, ItemEntity*, int32_t, Nullable1<int64_t>*, Nullable1<float>*))(Il2CppBase() + 0x1473534))(0, inventoryEntity, world, resourceItem, count, signature, durabilityCoef);
	}
	template <typename R = void> static R SetResource_1(InventorySlotEntity* inventoryEntity, ICommonContexts* world, Resource resource, Nullable1<int64_t>* signature) {
		return ((R (*)(void *, InventorySlotEntity*, ICommonContexts*, Resource, Nullable1<int64_t>*))(Il2CppBase() + 0x14738C8))(0, inventoryEntity, world, resource, signature);
	}
	template <typename R = void> static R ReplaceAndSignStack(InventorySlotEntity* slotEntity, Il2CppString* resource, int32_t count, Nullable1<int64_t>* signature) {
		return ((R (*)(void *, InventorySlotEntity*, Il2CppString*, int32_t, Nullable1<int64_t>*))(Il2CppBase() + 0x14739E0))(0, slotEntity, resource, count, signature);
	}
	template <typename R = void> static R UpdateStack(IStackEntity* slotEntity) {
		return ((R (*)(void *, IStackEntity*))(Il2CppBase() + 0x1473B3C))(0, slotEntity);
	}
	template <typename R = bool> static R SetStackResourceCount(InventorySlotEntity* slotEntity, int32_t newCount, bool saveResoures) {
		return ((R (*)(void *, InventorySlotEntity*, int32_t, bool))(Il2CppBase() + 0x1473CF4))(0, slotEntity, newCount, saveResoures);
	}
	template <typename R = bool> static R SetItem(InventorySlotEntity* inventoryEntity, ItemEntity* item, int32_t count, Nullable1<int64_t>* signature, Nullable1<float>* durabilityCoef) {
		return ((R (*)(void *, InventorySlotEntity*, ItemEntity*, int32_t, Nullable1<int64_t>*, Nullable1<float>*))(Il2CppBase() + 0x1473694))(0, inventoryEntity, item, count, signature, durabilityCoef);
	}
	template <typename R = int32_t> static R RemoveFromStack(InventorySlotEntity* inventoryEntity, int32_t count, bool saveResource) {
		return ((R (*)(void *, InventorySlotEntity*, int32_t, bool))(Il2CppBase() + 0x1473DB4))(0, inventoryEntity, count, saveResource);
	}
	template <typename R = int32_t> static R ClearStack(InventorySlotEntity* inventoryEntity, bool saveResource) {
		return ((R (*)(void *, InventorySlotEntity*, bool))(Il2CppBase() + 0x1473558))(0, inventoryEntity, saveResource);
	}
	template <typename R = void> static R Swap(InventorySlotEntity* from, InventorySlotEntity* to) {
		return ((R (*)(void *, InventorySlotEntity*, InventorySlotEntity*))(Il2CppBase() + 0x1473EAC))(0, from, to);
	}
	template <typename R = void> static R MoveTo(InventorySlotEntity* from, InventorySlotEntity* to) {
		return ((R (*)(void *, InventorySlotEntity*, InventorySlotEntity*))(Il2CppBase() + 0x147416C))(0, from, to);
	}
	template <typename R = bool> static R CanDeleteItems(GameEntity* player, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x14742DC))(0, player, world);
	}
	template <typename R = bool> static R IsAllResorcesCollected(InventorySlotContext* context, int32_t parentId) {
		return ((R (*)(void *, InventorySlotContext*, int32_t))(Il2CppBase() + 0x1474824))(0, context, parentId);
	}
	template <typename R = InventorySlotEntity*> static R GetMinStack(InventorySlotContext* context, IIdEntity* entity, Il2CppString* name) {
		return ((R (*)(void *, InventorySlotContext*, IIdEntity*, Il2CppString*))(Il2CppBase() + 0x14749CC))(0, context, entity, name);
	}
	template <typename R = InventorySlotEntity*> static R GetMinStack_1(InventorySlotContext* context, int32_t parentId, Il2CppString* name) {
		return ((R (*)(void *, InventorySlotContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1474A98))(0, context, parentId, name);
	}
	template <typename R = int32_t> static R CanAddResource(ICommonContexts* world, GameEntity* entity, Resource resource) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, Resource))(Il2CppBase() + 0x1474CB4))(0, world, entity, resource);
	}
	template <typename R = int32_t> static R CanAddResource_1(ICommonContexts* world, GameEntity* entity, ItemEntity* resourceItem, int32_t count) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, ItemEntity*, int32_t))(Il2CppBase() + 0x1474D64))(0, world, entity, resourceItem, count);
	}
	template <typename R = int32_t> static R CanAddResource_2(ICommonContexts* world, int32_t parentId, ItemEntity* resourceItem, int32_t count, int32_t maxCount) {
		return ((R (*)(void *, ICommonContexts*, int32_t, ItemEntity*, int32_t, int32_t))(Il2CppBase() + 0x14752C4))(0, world, parentId, resourceItem, count, maxCount);
	}
	 static ValueTuple2<int32_t, int32_t>* CanAddResources(ICommonContexts* world, GameEntity* avatar, IEnumerable1<Resource>* addedResources) {
		return ((ValueTuple2<int32_t, int32_t>* (*)(void *, ICommonContexts*, GameEntity*, IEnumerable1<Resource>*))(Il2CppBase() + 0x1475708))(0, world, avatar, addedResources);
	}
	template <typename R = int32_t> static R CanAddResourceToInventory(ICommonContexts* world, InventorySlotEntity* inventory, ItemEntity* resource, int32_t count) {
		return ((R (*)(void *, ICommonContexts*, InventorySlotEntity*, ItemEntity*, int32_t))(Il2CppBase() + 0x14755C4))(0, world, inventory, resource, count);
	}
	template <typename R = int32_t> static R GetInventorySize(GameEntity* entity, ICommonContexts* world, PlayerInventoryType inventoryType) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, PlayerInventoryType))(Il2CppBase() + 0x1474DDC))(0, entity, world, inventoryType);
	}
	template <typename R = int32_t> static R GetFreeSlotsCount(ICommonContexts* world, GameEntity* entity, PlayerInventoryType inventoryType) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, PlayerInventoryType))(Il2CppBase() + 0x146E650))(0, world, entity, inventoryType);
	}
	template <typename R = int32_t> static R GetNotEmptyInventoriesCount(InventorySlotContext* context, int32_t id) {
		return ((R (*)(void *, InventorySlotContext*, int32_t))(Il2CppBase() + 0x147663C))(0, context, id);
	}
	 static ValueTuple3<InventorySlotEntity*, ItemEntity*, float>* GetInteractItem(ICommonContexts* world, GameEntity* actor, Il2CppArray<NameChance>* requiredItems) {
		return ((ValueTuple3<InventorySlotEntity*, ItemEntity*, float>* (*)(void *, ICommonContexts*, GameEntity*, Il2CppArray<NameChance>*))(Il2CppBase() + 0x1476784))(0, world, actor, requiredItems);
	}
	template <typename R = bool> static R CanBlueprintCraft(ICommonContexts* world, GameEntity* entity, IEnumerable1<Resource>* resourcesToConsume, Il2CppString* name, int32_t count) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, IEnumerable1<Resource>*, Il2CppString*, int32_t))(Il2CppBase() + 0x1476DE8))(0, world, entity, resourcesToConsume, name, count);
	}
	template <typename R = void> static R DestroyAllInventories(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x147792C))(0, entity, world);
	}
	template <typename R = void> static R DestroyInventory(ICommonContexts* world, int32_t id, InventoryType ignore) {
		return ((R (*)(void *, ICommonContexts*, int32_t, InventoryType))(Il2CppBase() + 0x1477410))(0, world, id, ignore);
	}
	template <typename R = Il2CppString*> static R GetDebugInventoryString(InventorySlotContext* inventory, int32_t parentId) {
		return ((R (*)(void *, InventorySlotContext*, int32_t))(Il2CppBase() + 0x1477A2C))(0, inventory, parentId);
	}
	template <typename R = Il2CppString*> static R VeryHeavyMethodDONOTUSEME(InventorySlotContext* inventory, int32_t parentId) {
		return ((R (*)(void *, InventorySlotContext*, int32_t))(Il2CppBase() + 0x1478048))(0, inventory, parentId);
	}
	 static Il2CppDictionary<Il2CppString*, int32_t>* GetResources(ICommonContexts* world, int32_t parentId) {
		return ((Il2CppDictionary<Il2CppString*, int32_t>* (*)(void *, ICommonContexts*, int32_t))(Il2CppBase() + 0x1478C5C))(0, world, parentId);
	}
	template <typename R = void> static R GetResources_1(ICommonContexts* world, int32_t parentId, Il2CppList<Resource>* result) {
		return ((R (*)(void *, ICommonContexts*, int32_t, Il2CppList<Resource>*))(Il2CppBase() + 0x14791B0))(0, world, parentId, result);
	}
	template <typename R = int32_t> static R GetPlayerInventorySize(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x14764DC))(0, entity, world);
	}
	template <typename R = ItemEntity*> static R GetBackpackFromInventory(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1479714))(0, entity, world);
	}
	 static ValueTuple3<bool, int32_t, int32_t>* CanReplaceBackpack(GameEntity* entity, ICommonContexts* world, ItemEntity* newBackpack, int32_t moveCount) {
		return ((ValueTuple3<bool, int32_t, int32_t>* (*)(void *, GameEntity*, ICommonContexts*, ItemEntity*, int32_t))(Il2CppBase() + 0x14798E4))(0, entity, world, newBackpack, moveCount);
	}
	template <typename R = int32_t> static R GetInventoryParentId(InventorySlotEntity* inventory, ICommonContexts* context) {
		return ((R (*)(void *, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x1479C30))(0, inventory, context);
	}
	template <typename R = int32_t> static R GetInventoryParentId_1(GameEntity* avatar, PlayerInventoryType inventoryType) {
		return ((R (*)(void *, GameEntity*, PlayerInventoryType))(Il2CppBase() + 0x1476564))(0, avatar, inventoryType);
	}
	template <typename R = int32_t> static R GetCampBathFuelConsumeCount(GameEntity* entity, ICommonContexts* world, Il2CppString* resource, int32_t stackCount) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*, int32_t))(Il2CppBase() + 0x1479EC0))(0, entity, world, resource, stackCount);
	}
	template <typename R = InventoryPower> static R GetInventoryPower(GameEntity* player, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x147A13C))(0, player, world);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R VeryHeavyMethodDONOTUSEMEg__getStringInventory|39_2(int32_t id, uintptr_t ) {
		return ((R (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x1478760))(0, id, );
	}
	 static Il2CppList<Il2CppString*>* VeryHeavyMethodDONOTUSEMEg__getIntersection|39_3(Il2CppArray<Il2CppString*>* first, Il2CppArray<Il2CppString*>* second, int32_t min) {
		return ((Il2CppList<Il2CppString*>* (*)(void *, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, int32_t))(Il2CppBase() + 0x14789A8))(0, first, second, min);
	}

};

