#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventorySlotView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotView"));
	}

	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Text() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _durabilityPanel() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _durability() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _durabilityEquippedPanel() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _durabilityEquipped() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _selected() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = uintptr_t> R IImageMonoBehaviour_get_Image() {
		return ((R (*)(InventorySlotView*))(Il2CppBase() + 0x123EE70))(this);
	}
	template <typename R = uintptr_t> R ITextMonoBehaviour_get_Text() {
		return ((R (*)(InventorySlotView*))(Il2CppBase() + 0x123EE78))(this);
	}
	template <typename R = uintptr_t> R IButtonMonoBehaviour_get_Button() {
		return ((R (*)(InventorySlotView*))(Il2CppBase() + 0x123EE80))(this);
	}
	template <typename R = void> R set_Durability(Nullable1<float>* value) {
		return ((R (*)(InventorySlotView*, Nullable1<float>*))(Il2CppBase() + 0x123EE88))(this, value);
	}
	template <typename R = void> R set_DurabilityEquipped(Nullable1<float>* value) {
		return ((R (*)(InventorySlotView*, Nullable1<float>*))(Il2CppBase() + 0x123EF08))(this, value);
	}
	template <typename R = void> R UpdateUI(InventorySlotEntity* bindedEntity, bool isSelected) {
		return ((R (*)(InventorySlotView*, InventorySlotEntity*, bool))(Il2CppBase() + 0x123EF88))(this, bindedEntity, isSelected);
	}

};

