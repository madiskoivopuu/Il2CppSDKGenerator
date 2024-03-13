#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class DungeonEnterMultyResWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonEnterMultyResWindow"));
	}

	template <typename T = uintptr_t> T& DungeonIcon() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& DungeonCaption() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& InfoBtn() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& PassBtn() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = InventoryItemDraggable*> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& ScrollRect() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppList<DungeonDifficaltyView*>*> T& DungeonGradeButtons() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& DifficultyDescription() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& TimerText() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = HashSet1Il2CppString*>*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = bool> T& _cachedPass() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& _locationGrade() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}

	template <typename T = HashSet1Il2CppString*>*> T GetNeedResources() {
		return ((T (*)(DungeonEnterMultyResWindow*))(Il2CppBase() + 0x1307750))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(DungeonEnterMultyResWindow*))(Il2CppBase() + 0x1307D68))(this);
	}
	template <typename T = void> T ShowInfo() {
		return ((T (*)(DungeonEnterMultyResWindow*))(Il2CppBase() + 0x130896C))(this);
	}
	template <typename T = void> T OnSelect(InventorySlotEntity* selectedInventory, InventorySlot* selectedSlot) {
		return ((T (*)(DungeonEnterMultyResWindow*, InventorySlotEntity*, InventorySlot*))(Il2CppBase() + 0x1308D10))(this, selectedInventory, selectedSlot);
	}
	template <typename T = void> T OnDrop(IInventoryItem* item) {
		return ((T (*)(DungeonEnterMultyResWindow*, IInventoryItem*))(Il2CppBase() + 0x1308DDC))(this, item);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(DungeonEnterMultyResWindow*, IInventoryItem*))(Il2CppBase() + 0x130956C))(this, item);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(DungeonEnterMultyResWindow*))(Il2CppBase() + 0x1309C58))(this);
	}
	template <typename T = void> T ChangeLocationGrade(int32_t index) {
		return ((T (*)(DungeonEnterMultyResWindow*, int32_t))(Il2CppBase() + 0x1308560))(this, index);
	}
	template <typename T = void> T Confirm() {
		return ((T (*)(DungeonEnterMultyResWindow*))(Il2CppBase() + 0x1309EC0))(this);
	}
	template <typename T = bool> T CanPass(GameEntity* target) {
		return ((T (*)(DungeonEnterMultyResWindow*, GameEntity*))(Il2CppBase() + 0x1309FD4))(this, target);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(DungeonEnterMultyResWindow*, float))(Il2CppBase() + 0x130A380))(this, deltaTime);
	}

};

