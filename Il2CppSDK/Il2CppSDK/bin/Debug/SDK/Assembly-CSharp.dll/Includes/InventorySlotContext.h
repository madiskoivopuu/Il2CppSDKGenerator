#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BlueprintContext2.h" 
#include "InventorySlotEntity.h" 

class InventorySlotContext : public BlueprintContext2<InventorySlotEntity*, InventorySlotEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotContext"));
	}

	template <typename R = InventorySlotDataContext*> R& Data() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	 PrimaryEntityIndex2InventorySlotEntity*, int32_t>*& _idIndex() {
		return *(PrimaryEntityIndex2InventorySlotEntity*, int32_t>**)((uintptr_t)this + 0x120);
	}
	 EntityIndex2InventorySlotEntity*, int32_t>*& _parentIndex() {
		return *(EntityIndex2InventorySlotEntity*, int32_t>**)((uintptr_t)this + 0x128);
	}
	 EntityIndex2InventorySlotEntity*, IntString*>*& _resourceIndex() {
		return *(EntityIndex2InventorySlotEntity*, IntString*>**)((uintptr_t)this + 0x130);
	}
	 PrimaryEntityIndex2InventorySlotEntity*, IntInt*>*& _parentIndexIndex() {
		return *(PrimaryEntityIndex2InventorySlotEntity*, IntInt*>**)((uintptr_t)this + 0x138);
	}
	 EntityIndex2InventorySlotEntity*, LongString*>*& _externalResourceIndex() {
		return *(EntityIndex2InventorySlotEntity*, LongString*>**)((uintptr_t)this + 0x140);
	}
	 EntityIndex2InventorySlotEntity*, int64_t>*& _externalSlotIndex() {
		return *(EntityIndex2InventorySlotEntity*, int64_t>**)((uintptr_t)this + 0x148);
	}
	 PrimaryEntityIndex2InventorySlotEntity*, IntString*>*& _petSlotIndex() {
		return *(PrimaryEntityIndex2InventorySlotEntity*, IntString*>**)((uintptr_t)this + 0x150);
	}

	template <typename R = InventorySlotDataContext*> R get_Data() {
		return ((R (*)(InventorySlotContext*))(Il2CppBase() + 0x1235C4C))(this);
	}
	template <typename R = void> R set_Data(InventorySlotDataContext* value) {
		return ((R (*)(InventorySlotContext*, InventorySlotDataContext*))(Il2CppBase() + 0x1235C54))(this, value);
	}
	template <typename R = InventorySlotEntity*> R GetEntityWithId(int32_t id) {
		return ((R (*)(InventorySlotContext*, int32_t))(Il2CppBase() + 0x1237698))(this, id);
	}
	template <typename R = InventorySlotEntity*> R GetPetSlot(int32_t parentId, Il2CppString* petType) {
		return ((R (*)(InventorySlotContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x12376FC))(this, parentId, petType);
	}
	 HashSet1InventorySlotEntity*>* GetEntitiesWithParent(int32_t id) {
		return ((HashSet1InventorySlotEntity*>* (*)(InventorySlotContext*, int32_t))(Il2CppBase() + 0x12338D0))(this, id);
	}
	 HashSet1InventorySlotEntity*>* GetEntitiesWithResource(int32_t id, Il2CppString* resource) {
		return ((HashSet1InventorySlotEntity*>* (*)(InventorySlotContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x12377B0))(this, id, resource);
	}
	template <typename R = InventorySlotEntity*> R GetFirstEntityWithResource(int32_t id, Il2CppString* resource) {
		return ((R (*)(InventorySlotContext*, int32_t, Il2CppString*))(Il2CppBase() + 0x1237864))(this, id, resource);
	}
	 HashSet1InventorySlotEntity*>* GetEmptySlots(int32_t id) {
		return ((HashSet1InventorySlotEntity*>* (*)(InventorySlotContext*, int32_t))(Il2CppBase() + 0x12379A0))(this, id);
	}
	template <typename R = int32_t> R GetNotEmptySlotsCount(int32_t id) {
		return ((R (*)(InventorySlotContext*, int32_t))(Il2CppBase() + 0x1237A48))(this, id);
	}
	 HashSet1InventorySlotEntity*>* GetExternalSlots(int64_t ownerId) {
		return ((HashSet1InventorySlotEntity*>* (*)(InventorySlotContext*, int64_t))(Il2CppBase() + 0x1237AC0))(this, ownerId);
	}
	 HashSet1InventorySlotEntity*>* GetExternalEntitiesWithResource(int64_t ownerId, Il2CppString* resource) {
		return ((HashSet1InventorySlotEntity*>* (*)(InventorySlotContext*, int64_t, Il2CppString*))(Il2CppBase() + 0x1237B24))(this, ownerId, resource);
	}
	template <typename R = InventorySlotEntity*> R GetEntityWithParentIdInSlot(int32_t parentId, int32_t index) {
		return ((R (*)(InventorySlotContext*, int32_t, int32_t))(Il2CppBase() + 0x1237BD8))(this, parentId, index);
	}
	template <typename R = InventorySlotEntity*> R CreateSlot(Il2CppString* blueprint, int32_t id, int32_t parentId, Nullable1int64_t>* personalId, int32_t index, bool setEmptyStack) {
		return ((R (*)(InventorySlotContext*, Il2CppString*, int32_t, int32_t, Nullable1int64_t>*, int32_t, bool))(Il2CppBase() + 0x1237C68))(this, blueprint, id, parentId, personalId, index, setEmptyStack);
	}
	template <typename R = InventorySlotEntity*> R CreateEmptySlot(Il2CppString* blueprint, int32_t parentId, Nullable1int64_t>* personalId, int32_t index, GameEntity* owner) {
		return ((R (*)(InventorySlotContext*, Il2CppString*, int32_t, Nullable1int64_t>*, int32_t, GameEntity*))(Il2CppBase() + 0x1238344))(this, blueprint, parentId, personalId, index, owner);
	}
	template <typename R = int32_t> R GetResourceCount(int32_t parentId, Il2CppString* resource, int64_t externalOwnerId) {
		return ((R (*)(InventorySlotContext*, int32_t, Il2CppString*, int64_t))(Il2CppBase() + 0x1238770))(this, parentId, resource, externalOwnerId);
	}
	template <typename R = int32_t> R GetResourceCount_1(int32_t parentId, IEnumerable1Resource*>* resources, int64_t externalOwnerId) {
		return ((R (*)(InventorySlotContext*, int32_t, IEnumerable1Resource*>*, int64_t))(Il2CppBase() + 0x12389EC))(this, parentId, resources, externalOwnerId);
	}
	template <typename R = bool> R IsEnoughResource(int32_t parentId, Il2CppString* resource, int32_t count, int64_t externalOwnerId) {
		return ((R (*)(InventorySlotContext*, int32_t, Il2CppString*, int32_t, int64_t))(Il2CppBase() + 0x1238D28))(this, parentId, resource, count, externalOwnerId);
	}
	template <typename R = bool> R IsEnoughResources(int32_t parentId, IEnumerable1Resource*>* resources, int64_t externalOwnerId) {
		return ((R (*)(InventorySlotContext*, int32_t, IEnumerable1Resource*>*, int64_t))(Il2CppBase() + 0x1239010))(this, parentId, resources, externalOwnerId);
	}
	template <typename R = int32_t> R ConsumeResource(Il2CppList<InventorySlotEntity*>* slots, int32_t count) {
		return ((R (*)(InventorySlotContext*, Il2CppList<InventorySlotEntity*>*, int32_t))(Il2CppBase() + 0x1239308))(this, slots, count);
	}
	template <typename R = int32_t> R ConsumeResource_1(int32_t parentId, Il2CppString* resource, int32_t count, int64_t externalOwnerId) {
		return ((R (*)(InventorySlotContext*, int32_t, Il2CppString*, int32_t, int64_t))(Il2CppBase() + 0x1239568))(this, parentId, resource, count, externalOwnerId);
	}
	template <typename R = int32_t> R ConsumeResources(int32_t parentId, IEnumerable1Resource*>* resources, int64_t externalOwnerId) {
		return ((R (*)(InventorySlotContext*, int32_t, IEnumerable1Resource*>*, int64_t))(Il2CppBase() + 0x12398A8))(this, parentId, resources, externalOwnerId);
	}

};

