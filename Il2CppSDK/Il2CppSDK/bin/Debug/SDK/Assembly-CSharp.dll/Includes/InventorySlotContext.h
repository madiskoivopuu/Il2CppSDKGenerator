#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BlueprintContext`2" 

class InventorySlotContext: BlueprintContext2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotContext"));
	}

	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = void*> T& _idIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = void*> T& _parentIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = void*> T& _resourceIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = void*> T& _parentIndexIndex() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = void*> T& _externalResourceIndex() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = void*> T& _externalSlotIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = void*> T& _petSlotIndex() {
		return *(T*)((uintptr_t)this + 0x150);
	}

	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(InventorySlotContext*))(Il2CppBase() + 0x1235C4C))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(InventorySlotContext*, uintptr_t))(Il2CppBase() + 0x1235C54))(this, value);
	}
	template <typename T = uintptr_t> T GetEntityWithId(int32_t id) {
		return ((T (*)(InventorySlotContext*, int32_t))(Il2CppBase() + 0x1237698))(this, id);
	}
	template <typename T = uintptr_t> T GetPetSlot(int32_t parentId, Il2CppString* petType) {
		return ((T (*)(InventorySlotContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x12376FC))(this, parentId, petType);
	}
	template <typename T = void*> T GetEntitiesWithParent(int32_t id) {
		return ((T (*)(InventorySlotContext*, int32_t))(Il2CppBase() + 0x12338D0))(this, id);
	}
	template <typename T = void*> T GetEntitiesWithResource(int32_t id, Il2CppString* resource) {
		return ((T (*)(InventorySlotContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x12377B0))(this, id, resource);
	}
	template <typename T = uintptr_t> T GetFirstEntityWithResource(int32_t id, Il2CppString* resource) {
		return ((T (*)(InventorySlotContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1237864))(this, id, resource);
	}
	template <typename T = void*> T GetEmptySlots(int32_t id) {
		return ((T (*)(InventorySlotContext*, int32_t))(Il2CppBase() + 0x12379A0))(this, id);
	}
	template <typename T = int32_t> T GetNotEmptySlotsCount(int32_t id) {
		return ((T (*)(InventorySlotContext*, int32_t))(Il2CppBase() + 0x1237A48))(this, id);
	}
	template <typename T = void*> T GetExternalSlots(int64_t ownerId) {
		return ((T (*)(InventorySlotContext*, int64_t))(Il2CppBase() + 0x1237AC0))(this, ownerId);
	}
	template <typename T = void*> T GetExternalEntitiesWithResource(int64_t ownerId, Il2CppString* resource) {
		return ((T (*)(InventorySlotContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x1237B24))(this, ownerId, resource);
	}
	template <typename T = uintptr_t> T GetEntityWithParentIdInSlot(int32_t parentId, int32_t index) {
		return ((T (*)(InventorySlotContext*, int32_t, int32_t))(Il2CppBase() + 0x1237BD8))(this, parentId, index);
	}
	template <typename T = uintptr_t> T CreateSlot(Il2CppString* blueprint, int32_t id, int32_t parentId, void* personalId, int32_t index, bool setEmptyStack) {
		return ((T (*)(InventorySlotContext*, Il2CppString*, int32_t, int32_t, void*, int32_t, bool))(Il2CppBase() + 0x1237C68))(this, blueprint, id, parentId, personalId, index, setEmptyStack);
	}
	template <typename T = uintptr_t> T CreateEmptySlot(Il2CppString* blueprint, int32_t parentId, void* personalId, int32_t index, uintptr_t owner) {
		return ((T (*)(InventorySlotContext*, Il2CppString*, int32_t, void*, int32_t, uintptr_t))(Il2CppBase() + 0x1238344))(this, blueprint, parentId, personalId, index, owner);
	}
	template <typename T = int32_t> T GetResourceCount(int32_t parentId, Il2CppString* resource, int64_t externalOwnerId) {
		return ((T (*)(InventorySlotContext*, int32_t, Il2CppString*, int64_t))(Il2CppBase() + 0x1238770))(this, parentId, resource, externalOwnerId);
	}
	template <typename T = int32_t> T GetResourceCount_1(int32_t parentId, void* resources, int64_t externalOwnerId) {
		return ((T (*)(InventorySlotContext*, int32_t, void*, int64_t))(Il2CppBase() + 0x12389EC))(this, parentId, resources, externalOwnerId);
	}
	template <typename T = bool> T IsEnoughResource(int32_t parentId, Il2CppString* resource, int32_t count, int64_t externalOwnerId) {
		return ((T (*)(InventorySlotContext*, int32_t, Il2CppString*, int32_t, int64_t))(Il2CppBase() + 0x1238D28))(this, parentId, resource, count, externalOwnerId);
	}
	template <typename T = bool> T IsEnoughResources(int32_t parentId, void* resources, int64_t externalOwnerId) {
		return ((T (*)(InventorySlotContext*, int32_t, void*, int64_t))(Il2CppBase() + 0x1239010))(this, parentId, resources, externalOwnerId);
	}
	template <typename T = int32_t> T ConsumeResource(Il2CppList<uintptr_t>* slots, int32_t count) {
		return ((T (*)(InventorySlotContext*, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x1239308))(this, slots, count);
	}
	template <typename T = int32_t> T ConsumeResource_1(int32_t parentId, Il2CppString* resource, int32_t count, int64_t externalOwnerId) {
		return ((T (*)(InventorySlotContext*, int32_t, Il2CppString*, int32_t, int64_t))(Il2CppBase() + 0x1239568))(this, parentId, resource, count, externalOwnerId);
	}
	template <typename T = int32_t> T ConsumeResources(int32_t parentId, void* resources, int64_t externalOwnerId) {
		return ((T (*)(InventorySlotContext*, int32_t, void*, int64_t))(Il2CppBase() + 0x12398A8))(this, parentId, resources, externalOwnerId);
	}

};

}
