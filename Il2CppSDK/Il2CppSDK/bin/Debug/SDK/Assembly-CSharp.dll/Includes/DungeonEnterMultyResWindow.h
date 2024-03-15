#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class DungeonEnterMultyResWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonEnterMultyResWindow"));
	}

	template <typename R = uintptr_t> R& DungeonIcon() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& DungeonCaption() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& InfoBtn() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& PassBtn() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = InventoryItemDraggable*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& ScrollRect() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	 Il2CppList<DungeonDifficaltyView*>*& DungeonGradeButtons() {
		return *(Il2CppList<DungeonDifficaltyView*>**)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& DifficultyDescription() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& TimerText() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	 HashSet1<Il2CppString*>*& _needResources() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x198);
	}
	template <typename R = bool> R& _cachedPass() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = int32_t> R& _locationGrade() {
		return *(R*)((uintptr_t)this + 0x1A4);
	}

	 HashSet1<Il2CppString*>* GetNeedResources() {
		return ((HashSet1<Il2CppString*>* (*)(DungeonEnterMultyResWindow*))(Il2CppBase() + 0x1307750))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(DungeonEnterMultyResWindow*))(Il2CppBase() + 0x1307D68))(this);
	}
	template <typename R = void> R ShowInfo() {
		return ((R (*)(DungeonEnterMultyResWindow*))(Il2CppBase() + 0x130896C))(this);
	}
	template <typename R = void> R OnSelect(InventorySlotEntity* selectedInventory, InventorySlot* selectedSlot) {
		return ((R (*)(DungeonEnterMultyResWindow*, InventorySlotEntity*, InventorySlot*))(Il2CppBase() + 0x1308D10))(this, selectedInventory, selectedSlot);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(DungeonEnterMultyResWindow*, IInventoryItem*))(Il2CppBase() + 0x1308DDC))(this, item);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(DungeonEnterMultyResWindow*, IInventoryItem*))(Il2CppBase() + 0x130956C))(this, item);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(DungeonEnterMultyResWindow*))(Il2CppBase() + 0x1309C58))(this);
	}
	template <typename R = void> R ChangeLocationGrade(int32_t index) {
		return ((R (*)(DungeonEnterMultyResWindow*, int32_t))(Il2CppBase() + 0x1308560))(this, index);
	}
	template <typename R = void> R Confirm() {
		return ((R (*)(DungeonEnterMultyResWindow*))(Il2CppBase() + 0x1309EC0))(this);
	}
	template <typename R = bool> R CanPass(GameEntity* target) {
		return ((R (*)(DungeonEnterMultyResWindow*, GameEntity*))(Il2CppBase() + 0x1309FD4))(this, target);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(DungeonEnterMultyResWindow*, float))(Il2CppBase() + 0x130A380))(this, deltaTime);
	}

};

