#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventorySlotView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotView"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Text() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _durabilityPanel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _durability() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _durabilityEquippedPanel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _durabilityEquipped() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _selected() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T IImageMonoBehaviour_get_Image() {
		return ((T (*)(InventorySlotView*))(Il2CppBase() + 0x123EE70))(this);
	}
	template <typename T = uintptr_t> T ITextMonoBehaviour_get_Text() {
		return ((T (*)(InventorySlotView*))(Il2CppBase() + 0x123EE78))(this);
	}
	template <typename T = uintptr_t> T IButtonMonoBehaviour_get_Button() {
		return ((T (*)(InventorySlotView*))(Il2CppBase() + 0x123EE80))(this);
	}
	template <typename T = void> T set_Durability(Nullable1float>* value) {
		return ((T (*)(InventorySlotView*, Nullable1float>*))(Il2CppBase() + 0x123EE88))(this, value);
	}
	template <typename T = void> T set_DurabilityEquipped(Nullable1float>* value) {
		return ((T (*)(InventorySlotView*, Nullable1float>*))(Il2CppBase() + 0x123EF08))(this, value);
	}
	template <typename T = void> T UpdateUI(InventorySlotEntity* bindedEntity, bool isSelected) {
		return ((T (*)(InventorySlotView*, InventorySlotEntity*, bool))(Il2CppBase() + 0x123EF88))(this, bindedEntity, isSelected);
	}

};

