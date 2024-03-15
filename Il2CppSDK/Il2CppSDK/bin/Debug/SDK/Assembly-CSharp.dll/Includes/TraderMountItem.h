#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MountItem.h" 

class TraderMountItem : public MountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraderMountItem"));
	}

	template <typename R = int32_t> R& SlotIndex() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = MountFuser*> R& _mountFuser() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = int32_t> R get_SlotIndex() {
		return ((R (*)(TraderMountItem*))(Il2CppBase() + 0x150EC9C))(this);
	}
	template <typename R = void> R set_SlotIndex(int32_t value) {
		return ((R (*)(TraderMountItem*, int32_t))(Il2CppBase() + 0x150ECA4))(this, value);
	}
	template <typename R = void> R Bind(MountsTraderWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot) {
		return ((R (*)(TraderMountItem*, MountsTraderWindow*, GameEntity*, int32_t, InventorySlot*))(Il2CppBase() + 0x150ECAC))(this, window, entity, index, slot);
	}
	template <typename R = void> R Bind_1(IMountsInventoryWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot, Action1IInventoryItem*>* onArming) {
		return ((R (*)(TraderMountItem*, IMountsInventoryWindow*, GameEntity*, int32_t, InventorySlot*, Action1IInventoryItem*>*))(Il2CppBase() + 0x150ED24))(this, window, entity, index, slot, onArming);
	}
	template <typename R = void> R ChangeMountInventoryId(int32_t mountInventoryId, Il2CppString* blueprint, int32_t index, int32_t id) {
		return ((R (*)(TraderMountItem*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x150F034))(this, mountInventoryId, blueprint, index, id);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(TraderMountItem*, float))(Il2CppBase() + 0x150F140))(this, deltaTime);
	}
	template <typename R = void> R Lock(bool visual) {
		return ((R (*)(TraderMountItem*, bool))(Il2CppBase() + 0x150F330))(this, visual);
	}
	template <typename R = void> R Unlock(bool visual) {
		return ((R (*)(TraderMountItem*, bool))(Il2CppBase() + 0x150F3DC))(this, visual);
	}

};

