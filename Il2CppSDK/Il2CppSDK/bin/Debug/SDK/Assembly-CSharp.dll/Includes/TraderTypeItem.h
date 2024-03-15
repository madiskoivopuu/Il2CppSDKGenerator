#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MountItem.h" 

class TraderTypeItem : public MountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraderTypeItem"));
	}

	template <typename R = uintptr_t> R& _toggle() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = int32_t> R& SlotIndex() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = int32_t> R& _defaultIndex() {
		return *(R*)((uintptr_t)this + 0xBC);
	}
	template <typename R = MountFuser*> R& _mountFuser() {
		return *(R*)((uintptr_t)this + 0xC0);
	}

	template <typename R = int32_t> R get_SlotIndex() {
		return ((R (*)(TraderTypeItem*))(Il2CppBase() + 0x151112C))(this);
	}
	template <typename R = void> R set_SlotIndex(int32_t value) {
		return ((R (*)(TraderTypeItem*, int32_t))(Il2CppBase() + 0x1511134))(this, value);
	}
	template <typename R = bool> R get_IsRandomItem() {
		return ((R (*)(TraderTypeItem*))(Il2CppBase() + 0x151113C))(this);
	}
	template <typename R = bool> R get_IsSelected() {
		return ((R (*)(TraderTypeItem*))(Il2CppBase() + 0x151114C))(this);
	}
	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(TraderTypeItem*))(Il2CppBase() + 0x1511168))(this);
	}
	template <typename R = void> R Bind(MountsTraderWindow* window, GameEntity* entity, int32_t slotIndex, int32_t id) {
		return ((R (*)(TraderTypeItem*, MountsTraderWindow*, GameEntity*, int32_t, int32_t))(Il2CppBase() + 0x15111A4))(this, window, entity, slotIndex, id);
	}
	template <typename R = void> R Bind_1(IMountsInventoryWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot, Action1<IInventoryItem*>* onArming) {
		return ((R (*)(TraderTypeItem*, IMountsInventoryWindow*, GameEntity*, int32_t, InventorySlot*, Action1<IInventoryItem*>*))(Il2CppBase() + 0x1511224))(this, window, entity, index, slot, onArming);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(TraderTypeItem*))(Il2CppBase() + 0x1511670))(this);
	}
	template <typename R = void> R Lock(bool visual) {
		return ((R (*)(TraderTypeItem*, bool))(Il2CppBase() + 0x15116B8))(this, visual);
	}
	template <typename R = void> R Unlock(bool visual) {
		return ((R (*)(TraderTypeItem*, bool))(Il2CppBase() + 0x1511714))(this, visual);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(TraderTypeItem*))(Il2CppBase() + 0x151185C))(this);
	}
	template <typename R = void> R OnToggleOn(bool isOn) {
		return ((R (*)(TraderTypeItem*, bool))(Il2CppBase() + 0x1511884))(this, isOn);
	}

};

