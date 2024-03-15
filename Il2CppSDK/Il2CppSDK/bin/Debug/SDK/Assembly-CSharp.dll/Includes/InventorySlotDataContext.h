#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "InventorySlotEntity.h" 

class InventorySlotDataContext : public DataContext1<InventorySlotEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotDataContext"));
	}

	template <typename R = Il2CppString*> static R& DEFAULT_SLOT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DEFAULT_CRAFT_SLOT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DEFAULT_MOUNT_SLOT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DEFAULT_RUNE_SLOT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 EntityIndex2<InventorySlotEntity*, Il2CppString*>*& _tagIndex() {
		return *(EntityIndex2<InventorySlotEntity*, Il2CppString*>**)((uintptr_t)this + 0x110);
	}
	 PrimaryEntityIndex2<InventorySlotEntity*, Il2CppString*>*& _petTypeIndex() {
		return *(PrimaryEntityIndex2<InventorySlotEntity*, Il2CppString*>**)((uintptr_t)this + 0x118);
	}
	 IGroup1<InventorySlotEntity*>*& _petSlots() {
		return *(IGroup1<InventorySlotEntity*>**)((uintptr_t)this + 0x120);
	}

	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(InventorySlotDataContext*))(Il2CppBase() + 0x1239D58))(this);
	}
	 HashSet1<InventorySlotEntity*>* GetEntitiesWithTag(Il2CppString* tag) {
		return ((HashSet1<InventorySlotEntity*>* (*)(InventorySlotDataContext*, Il2CppString*))(Il2CppBase() + 0x123A244))(this, tag);
	}
	template <typename R = InventorySlotEntity*> R GetPetSlot(Il2CppString* petType) {
		return ((R (*)(InventorySlotDataContext*, Il2CppString*))(Il2CppBase() + 0x123A2A8))(this, petType);
	}
	 IGroup1<InventorySlotEntity*>* GetPetSlots() {
		return ((IGroup1<InventorySlotEntity*>* (*)(InventorySlotDataContext*))(Il2CppBase() + 0x123A330))(this);
	}

};

