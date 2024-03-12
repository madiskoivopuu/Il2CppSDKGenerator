#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventorySlotMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotMatcher"));
	}

	template <typename T = void*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherBroadcast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherDefaultItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherDurabilityCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherDurabilityTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherExternalInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherInventoryIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherItemCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherMailStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherMountSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherPersonal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherPetSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherRuneSlot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherStackCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& _matcherTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& _matcherUpdateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}

	template <typename T = void*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x123D674))(0);
	}
	template <typename T = void*> static T get_Broadcast() {
		return ((T (*)(void *))(Il2CppBase() + 0x123D7F4))(0);
	}
	template <typename T = void*> static T get_DefaultItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x123D990))(0);
	}
	template <typename T = void*> static T get_DurabilityCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x123DB2C))(0);
	}
	template <typename T = void*> static T get_DurabilityTick() {
		return ((T (*)(void *))(Il2CppBase() + 0x123DCC8))(0);
	}
	template <typename T = void*> static T get_ExternalInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x1237360))(0);
	}
	template <typename T = void*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0x1236ADC))(0);
	}
	template <typename T = void*> static T get_InventoryIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x1236E14))(0);
	}
	template <typename T = void*> static T get_ItemCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x123DE64))(0);
	}
	template <typename T = void*> static T get_MailStack() {
		return ((T (*)(void *))(Il2CppBase() + 0x123E000))(0);
	}
	template <typename T = void*> static T get_MountSlot() {
		return ((T (*)(void *))(Il2CppBase() + 0x123E19C))(0);
	}
	template <typename T = void*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x123E338))(0);
	}
	template <typename T = void*> static T get_Owner() {
		return ((T (*)(void *))(Il2CppBase() + 0x12371C4))(0);
	}
	template <typename T = void*> static T get_Parent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1236C78))(0);
	}
	template <typename T = void*> static T get_Personal() {
		return ((T (*)(void *))(Il2CppBase() + 0x123E4D4))(0);
	}
	template <typename T = void*> static T get_PetSlot() {
		return ((T (*)(void *))(Il2CppBase() + 0x12374FC))(0);
	}
	template <typename T = void*> static T get_RuneSlot() {
		return ((T (*)(void *))(Il2CppBase() + 0x123E670))(0);
	}
	template <typename T = void*> static T get_Stack() {
		return ((T (*)(void *))(Il2CppBase() + 0x1237028))(0);
	}
	template <typename T = void*> static T get_StackCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x123E80C))(0);
	}
	template <typename T = void*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0x123A0A8))(0);
	}
	template <typename T = void*> static T get_Target() {
		return ((T (*)(void *))(Il2CppBase() + 0x123E9A8))(0);
	}
	template <typename T = void*> static T get_UpdateTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x123EB44))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x123ECE0))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1236FB0))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x123ED58))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x123EDD0))(0, matchers);
	}

};

}
