#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IItem"));
	}


	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(IItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = InventorySlotEntity*> R get_SlotEntity() {
		return ((R (*)(IItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = GameEntity*> R get_ParentEntity() {
		return ((R (*)(IItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R get_Id() {
		return ((R (*)(IItem*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R get_Index() {
		return ((R (*)(IItem*))(Il2CppBase() + 0x0))(this);
	}

};

