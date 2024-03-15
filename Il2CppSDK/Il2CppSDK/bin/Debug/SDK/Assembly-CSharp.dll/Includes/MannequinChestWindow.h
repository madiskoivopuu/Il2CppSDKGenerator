#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class MannequinChestWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MannequinChestWindow"));
	}

	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& MannequinCaption() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& CloseTimer() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = Il2CppArray<InventoryPuppetSlot*>*> R& MannequinPuppetSlots() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = InventoryContainer*> R& MannequinContainer() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = InventoryItemDraggable*> R& PuppetItemPrefab() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& TakeAllButton() {
		return *(R*)((uintptr_t)this + 0x178);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(MannequinChestWindow*))(Il2CppBase() + 0x1260438))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(MannequinChestWindow*))(Il2CppBase() + 0x12605C0))(this);
	}
	template <typename R = void> R InitPuppetSlots(GameEntity* entity, Il2CppArray<InventoryPuppetSlot*>* slots) {
		return ((R (*)(MannequinChestWindow*, GameEntity*, Il2CppArray<InventoryPuppetSlot*>*))(Il2CppBase() + 0x12607F8))(this, entity, slots);
	}
	template <typename R = void> R UpdateCloseTimer(GameEntity* target) {
		return ((R (*)(MannequinChestWindow*, GameEntity*))(Il2CppBase() + 0x1260C28))(this, target);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(MannequinChestWindow*))(Il2CppBase() + 0x1260E4C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(MannequinChestWindow*, float))(Il2CppBase() + 0x12610C8))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(MannequinChestWindow*, float))(Il2CppBase() + 0x12613BC))(this, deltaTime);
	}
	template <typename R = void> R OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(MannequinChestWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1261590))(this, item, eventData);
	}
	template <typename R = void> R OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(MannequinChestWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1261860))(this, item, eventData);
	}
	template <typename R = void> R UpdatePuppetSlots(Il2CppArray<InventoryPuppetSlot*>* puppetSlots, ItemEntity* item) {
		return ((R (*)(MannequinChestWindow*, Il2CppArray<InventoryPuppetSlot*>*, ItemEntity*))(Il2CppBase() + 0x1261638))(this, puppetSlots, item);
	}
	template <typename R = void> R OnTakeAllButton() {
		return ((R (*)(MannequinChestWindow*))(Il2CppBase() + 0x12618D0))(this);
	}

};

