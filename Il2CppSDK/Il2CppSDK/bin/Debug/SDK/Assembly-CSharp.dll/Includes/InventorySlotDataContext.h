#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext`1" 

class InventorySlotDataContext: DataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotDataContext"));
	}

	template <typename T = Il2CppString*> static T& DEFAULT_SLOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DEFAULT_CRAFT_SLOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DEFAULT_MOUNT_SLOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DEFAULT_RUNE_SLOT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _tagIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& _petTypeIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = void*> T& _petSlots() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(InventorySlotDataContext*))(Il2CppBase() + 0x1239D58))(this);
	}
	template <typename T = void*> T GetEntitiesWithTag(Il2CppString* tag) {
		return ((T (*)(InventorySlotDataContext*, Il2CppString*))(Il2CppBase() + 0x123A244))(this, tag);
	}
	template <typename T = uintptr_t> T GetPetSlot(Il2CppString* petType) {
		return ((T (*)(InventorySlotDataContext*, Il2CppString*))(Il2CppBase() + 0x123A2A8))(this, petType);
	}
	template <typename T = void*> T GetPetSlots() {
		return ((T (*)(InventorySlotDataContext*))(Il2CppBase() + 0x123A330))(this);
	}

};

}
