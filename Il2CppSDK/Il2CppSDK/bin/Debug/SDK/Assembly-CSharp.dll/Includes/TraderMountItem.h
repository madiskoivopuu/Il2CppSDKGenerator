#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MountItem.h" 

class TraderMountItem : public MountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraderMountItem"));
	}

	template <typename T = int32_t> T& SlotIndex() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = MountFuser*> T& _mountFuser() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = int32_t> T get_SlotIndex() {
		return ((T (*)(TraderMountItem*))(Il2CppBase() + 0x150EC9C))(this);
	}
	template <typename T = void> T set_SlotIndex(int32_t value) {
		return ((T (*)(TraderMountItem*, int32_t))(Il2CppBase() + 0x150ECA4))(this, value);
	}
	template <typename T = void> T Bind(MountsTraderWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot) {
		return ((T (*)(TraderMountItem*, MountsTraderWindow*, GameEntity*, int32_t, InventorySlot*))(Il2CppBase() + 0x150ECAC))(this, window, entity, index, slot);
	}
	template <typename T = void> T Bind_1(IMountsInventoryWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot, Action1IInventoryItem*>* onArming) {
		return ((T (*)(TraderMountItem*, IMountsInventoryWindow*, GameEntity*, int32_t, InventorySlot*, Action1IInventoryItem*>*))(Il2CppBase() + 0x150ED24))(this, window, entity, index, slot, onArming);
	}
	template <typename T = void> T ChangeMountInventoryId(int32_t mountInventoryId, Il2CppString* blueprint, int32_t index, int32_t id) {
		return ((T (*)(TraderMountItem*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x150F034))(this, mountInventoryId, blueprint, index, id);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(TraderMountItem*, float))(Il2CppBase() + 0x150F140))(this, deltaTime);
	}
	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(TraderMountItem*, bool))(Il2CppBase() + 0x150F330))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(TraderMountItem*, bool))(Il2CppBase() + 0x150F3DC))(this, visual);
	}

};

