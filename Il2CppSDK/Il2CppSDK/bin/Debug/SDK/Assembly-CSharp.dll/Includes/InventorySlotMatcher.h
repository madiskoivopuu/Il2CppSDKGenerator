#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventorySlotMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotMatcher"));
	}

	 static IMatcher1<InventorySlotEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherBroadcast() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherDefaultItem() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherDurabilityCoef() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherDurabilityTick() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherExternalInventory() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherId() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherInventoryIndex() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherItemCondition() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherMailStack() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherMountSlot() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherOwner() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherParent() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherPersonal() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherPetSlot() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherRuneSlot() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherStack() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherStackCount() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherTags() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherTarget() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<InventorySlotEntity*>*& _matcherUpdateTime() {
		return *(IMatcher1<InventorySlotEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}

	 static IMatcher1<InventorySlotEntity*>* get_Blueprint() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123D674))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_Broadcast() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123D7F4))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_DefaultItem() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123D990))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_DurabilityCoef() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123DB2C))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_DurabilityTick() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123DCC8))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_ExternalInventory() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x1237360))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_Id() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x1236ADC))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_InventoryIndex() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x1236E14))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_ItemCondition() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123DE64))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_MailStack() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123E000))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_MountSlot() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123E19C))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_OldBlueprint() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123E338))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_Owner() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x12371C4))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_Parent() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x1236C78))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_Personal() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123E4D4))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_PetSlot() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x12374FC))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_RuneSlot() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123E670))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_Stack() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x1237028))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_StackCount() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123E80C))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_Tags() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123A0A8))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_Target() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123E9A8))(0);
	}
	 static IMatcher1<InventorySlotEntity*>* get_UpdateTime() {
		return ((IMatcher1<InventorySlotEntity*>* (*)(void *))(Il2CppBase() + 0x123EB44))(0);
	}
	 static IAllOfMatcher1<InventorySlotEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<InventorySlotEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x123ECE0))(0, indices);
	}
	 static IAllOfMatcher1<InventorySlotEntity*>* AllOf_1(Il2CppArray<IMatcher1<InventorySlotEntity*>*>* matchers) {
		return ((IAllOfMatcher1<InventorySlotEntity*>* (*)(void *, Il2CppArray<IMatcher1<InventorySlotEntity*>*>*))(Il2CppBase() + 0x1236FB0))(0, matchers);
	}
	 static IAnyOfMatcher1<InventorySlotEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<InventorySlotEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x123ED58))(0, indices);
	}
	 static IAnyOfMatcher1<InventorySlotEntity*>* AnyOf_1(Il2CppArray<IMatcher1<InventorySlotEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<InventorySlotEntity*>* (*)(void *, Il2CppArray<IMatcher1<InventorySlotEntity*>*>*))(Il2CppBase() + 0x123EDD0))(0, matchers);
	}

};

