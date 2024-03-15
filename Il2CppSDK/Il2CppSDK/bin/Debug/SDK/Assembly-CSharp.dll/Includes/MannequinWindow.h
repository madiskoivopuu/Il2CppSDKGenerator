#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class MannequinWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MannequinWindow"));
	}

	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = HUDActorInfo*> R& AvatarInfo() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = Il2CppArray<InventoryPuppetSlot*>*> R& AvatarPuppetSlots() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = PuppetRendererController*> R& AvatarPuppetRenderer() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& AvatarHideHeadBtn() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& AvatarShowHeadMark() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& AvatarHideHeadMark() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& MannequinCaption() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& CloseTimer() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = Il2CppArray<InventoryPuppetSlot*>*> R& MannequinPuppetSlots() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = InventoryContainer*> R& MannequinContainer() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& ShareToggle() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = InventoryItemDraggable*> R& PuppetItemPrefab() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = uintptr_t> R& SwapBtn() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(MannequinWindow*))(Il2CppBase() + 0x1261D0C))(this);
	}
	template <typename R = void> R OnHideHeadBtnClick() {
		return ((R (*)(MannequinWindow*))(Il2CppBase() + 0x1261F1C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(MannequinWindow*))(Il2CppBase() + 0x126203C))(this);
	}
	template <typename R = void> R InitPuppetSlots(GameEntity* entity, Il2CppArray<InventoryPuppetSlot*>* slots) {
		return ((R (*)(MannequinWindow*, GameEntity*, Il2CppArray<InventoryPuppetSlot*>*))(Il2CppBase() + 0x12624E0))(this, entity, slots);
	}
	template <typename R = void> R UpdateCloseTimer(GameEntity* target) {
		return ((R (*)(MannequinWindow*, GameEntity*))(Il2CppBase() + 0x1262A50))(this, target);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(MannequinWindow*, float))(Il2CppBase() + 0x1262C74))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(MannequinWindow*))(Il2CppBase() + 0x1262FF4))(this);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(MannequinWindow*, float))(Il2CppBase() + 0x1263270))(this, deltaTime);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(MannequinWindow*, IInventoryItem*))(Il2CppBase() + 0x1263444))(this, item);
	}
	template <typename R = void> R OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(MannequinWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1263790))(this, item, eventData);
	}
	template <typename R = void> R OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(MannequinWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1263A7C))(this, item, eventData);
	}
	template <typename R = void> R UpdatePuppetSlots(Il2CppArray<InventoryPuppetSlot*>* puppetSlots, ItemEntity* item) {
		return ((R (*)(MannequinWindow*, Il2CppArray<InventoryPuppetSlot*>*, ItemEntity*))(Il2CppBase() + 0x1263854))(this, puppetSlots, item);
	}
	template <typename R = void> R OnSwapInventory() {
		return ((R (*)(MannequinWindow*))(Il2CppBase() + 0x1263AF8))(this);
	}
	template <typename R = void> R OnShareValueChanged(bool value) {
		return ((R (*)(MannequinWindow*, bool))(Il2CppBase() + 0x1263D0C))(this, value);
	}

};

