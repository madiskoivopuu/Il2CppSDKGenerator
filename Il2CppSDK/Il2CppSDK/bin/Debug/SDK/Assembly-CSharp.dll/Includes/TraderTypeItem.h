#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MountItem.h" 

class TraderTypeItem : public MountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraderTypeItem"));
	}

	template <typename T = uintptr_t> T& _toggle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& SlotIndex() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& _defaultIndex() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = MountFuser*> T& _mountFuser() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = int32_t> T get_SlotIndex() {
		return ((T (*)(TraderTypeItem*))(Il2CppBase() + 0x151112C))(this);
	}
	template <typename T = void> T set_SlotIndex(int32_t value) {
		return ((T (*)(TraderTypeItem*, int32_t))(Il2CppBase() + 0x1511134))(this, value);
	}
	template <typename T = bool> T get_IsRandomItem() {
		return ((T (*)(TraderTypeItem*))(Il2CppBase() + 0x151113C))(this);
	}
	template <typename T = bool> T get_IsSelected() {
		return ((T (*)(TraderTypeItem*))(Il2CppBase() + 0x151114C))(this);
	}
	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(TraderTypeItem*))(Il2CppBase() + 0x1511168))(this);
	}
	template <typename T = void> T Bind(MountsTraderWindow* window, GameEntity* entity, int32_t slotIndex, int32_t id) {
		return ((T (*)(TraderTypeItem*, MountsTraderWindow*, GameEntity*, int32_t, int32_t))(Il2CppBase() + 0x15111A4))(this, window, entity, slotIndex, id);
	}
	template <typename T = void> T Bind_1(IMountsInventoryWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot, Action1IInventoryItem*>* onArming) {
		return ((T (*)(TraderTypeItem*, IMountsInventoryWindow*, GameEntity*, int32_t, InventorySlot*, Action1IInventoryItem*>*))(Il2CppBase() + 0x1511224))(this, window, entity, index, slot, onArming);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TraderTypeItem*))(Il2CppBase() + 0x1511670))(this);
	}
	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(TraderTypeItem*, bool))(Il2CppBase() + 0x15116B8))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(TraderTypeItem*, bool))(Il2CppBase() + 0x1511714))(this, visual);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(TraderTypeItem*))(Il2CppBase() + 0x151185C))(this);
	}
	template <typename T = void> T OnToggleOn(bool isOn) {
		return ((T (*)(TraderTypeItem*, bool))(Il2CppBase() + 0x1511884))(this, isOn);
	}

};

