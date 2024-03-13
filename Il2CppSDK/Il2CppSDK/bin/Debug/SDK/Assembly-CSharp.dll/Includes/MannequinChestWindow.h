#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class MannequinChestWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MannequinChestWindow"));
	}

	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& MannequinCaption() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& CloseTimer() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MannequinPuppetSlots() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = InventoryContainer*> T& MannequinContainer() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = InventoryItemDraggable*> T& PuppetItemPrefab() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& TakeAllButton() {
		return *(T*)((uintptr_t)this + 0x178);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MannequinChestWindow*))(Il2CppBase() + 0x1260438))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(MannequinChestWindow*))(Il2CppBase() + 0x12605C0))(this);
	}
	template <typename T = void> T InitPuppetSlots(GameEntity* entity, Il2CppArray<uintptr_t>* slots) {
		return ((T (*)(MannequinChestWindow*, GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12607F8))(this, entity, slots);
	}
	template <typename T = void> T UpdateCloseTimer(GameEntity* target) {
		return ((T (*)(MannequinChestWindow*, GameEntity*))(Il2CppBase() + 0x1260C28))(this, target);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(MannequinChestWindow*))(Il2CppBase() + 0x1260E4C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(MannequinChestWindow*, float))(Il2CppBase() + 0x12610C8))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(MannequinChestWindow*, float))(Il2CppBase() + 0x12613BC))(this, deltaTime);
	}
	template <typename T = void> T OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(MannequinChestWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1261590))(this, item, eventData);
	}
	template <typename T = void> T OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(MannequinChestWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1261860))(this, item, eventData);
	}
	template <typename T = void> T UpdatePuppetSlots(Il2CppArray<uintptr_t>* puppetSlots, ItemEntity* item) {
		return ((T (*)(MannequinChestWindow*, Il2CppArray<uintptr_t>*, ItemEntity*))(Il2CppBase() + 0x1261638))(this, puppetSlots, item);
	}
	template <typename T = void> T OnTakeAllButton() {
		return ((T (*)(MannequinChestWindow*))(Il2CppBase() + 0x12618D0))(this);
	}

};

