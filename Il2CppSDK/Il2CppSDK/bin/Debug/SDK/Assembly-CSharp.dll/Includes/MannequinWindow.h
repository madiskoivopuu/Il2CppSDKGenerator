#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class MannequinWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MannequinWindow"));
	}

	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = HUDActorInfo*> T& AvatarInfo() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AvatarPuppetSlots() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = PuppetRendererController*> T& AvatarPuppetRenderer() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& AvatarHideHeadBtn() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& AvatarShowHeadMark() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& AvatarHideHeadMark() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& MannequinCaption() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& CloseTimer() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MannequinPuppetSlots() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = InventoryContainer*> T& MannequinContainer() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& ShareToggle() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = InventoryItemDraggable*> T& PuppetItemPrefab() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& SwapBtn() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MannequinWindow*))(Il2CppBase() + 0x1261D0C))(this);
	}
	template <typename T = void> T OnHideHeadBtnClick() {
		return ((T (*)(MannequinWindow*))(Il2CppBase() + 0x1261F1C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(MannequinWindow*))(Il2CppBase() + 0x126203C))(this);
	}
	template <typename T = void> T InitPuppetSlots(GameEntity* entity, Il2CppArray<uintptr_t>* slots) {
		return ((T (*)(MannequinWindow*, GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12624E0))(this, entity, slots);
	}
	template <typename T = void> T UpdateCloseTimer(GameEntity* target) {
		return ((T (*)(MannequinWindow*, GameEntity*))(Il2CppBase() + 0x1262A50))(this, target);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(MannequinWindow*, float))(Il2CppBase() + 0x1262C74))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(MannequinWindow*))(Il2CppBase() + 0x1262FF4))(this);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(MannequinWindow*, float))(Il2CppBase() + 0x1263270))(this, deltaTime);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(MannequinWindow*, IInventoryItem*))(Il2CppBase() + 0x1263444))(this, item);
	}
	template <typename T = void> T OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(MannequinWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1263790))(this, item, eventData);
	}
	template <typename T = void> T OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(MannequinWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1263A7C))(this, item, eventData);
	}
	template <typename T = void> T UpdatePuppetSlots(Il2CppArray<uintptr_t>* puppetSlots, ItemEntity* item) {
		return ((T (*)(MannequinWindow*, Il2CppArray<uintptr_t>*, ItemEntity*))(Il2CppBase() + 0x1263854))(this, puppetSlots, item);
	}
	template <typename T = void> T OnSwapInventory() {
		return ((T (*)(MannequinWindow*))(Il2CppBase() + 0x1263AF8))(this);
	}
	template <typename T = void> T OnShareValueChanged(bool value) {
		return ((T (*)(MannequinWindow*, bool))(Il2CppBase() + 0x1263D0C))(this, value);
	}

};

