#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetItemDragged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetItemDragged"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _slot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _parentId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _parentPetInventoryId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& _petBlueprint() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _petBaseBlueprint() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _grade() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _handler() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_Item() {
		return ((T (*)(PetItemDragged*))(Il2CppBase() + 0x16EC45C))(this);
	}
	template <typename T = uintptr_t> T get_SlotEntity() {
		return ((T (*)(PetItemDragged*))(Il2CppBase() + 0x16EC560))(this);
	}
	template <typename T = uintptr_t> T get_Slot() {
		return ((T (*)(PetItemDragged*))(Il2CppBase() + 0x16EC664))(this);
	}
	template <typename T = uintptr_t> T get_ParentEntity() {
		return ((T (*)(PetItemDragged*))(Il2CppBase() + 0x16EC66C))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(PetItemDragged*))(Il2CppBase() + 0x16EC768))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(PetItemDragged*, int32_t))(Il2CppBase() + 0x16EC770))(this, value);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(PetItemDragged*))(Il2CppBase() + 0x16EC778))(this);
	}
	template <typename T = Il2CppString*> T get_PetBlueprint() {
		return ((T (*)(PetItemDragged*))(Il2CppBase() + 0x16EC780))(this);
	}
	template <typename T = bool> T get_IsEmptyItem() {
		return ((T (*)(PetItemDragged*))(Il2CppBase() + 0x16EC788))(this);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t entity, int32_t index) {
		return ((T (*)(PetItemDragged*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x16EC800))(this, window, entity, index);
	}
	template <typename T = void> T Close() {
		return ((T (*)(PetItemDragged*))(Il2CppBase() + 0x16ECDCC))(this);
	}

};

}
