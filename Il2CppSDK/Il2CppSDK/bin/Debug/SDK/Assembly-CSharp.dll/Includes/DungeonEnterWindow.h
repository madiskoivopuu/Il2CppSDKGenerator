#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class DungeonEnterWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonEnterWindow"));
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
	 Il2CppList<InventorySlot*>*& ResourcesSlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0x170);
	}
	template <typename R = InventoryItemDraggable*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& DifficultyAnimator() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& GradesCanvasGroup() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = Il2CppArray<DungeonGradeButton*>*> R& DungeonGradeButtons() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& DifficultyHolder() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& DifficultyDescription() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = bool> R& _cachedPass() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = int32_t> R& _locationGrade() {
		return *(R*)((uintptr_t)this + 0x1AC);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(DungeonEnterWindow*))(Il2CppBase() + 0x130A984))(this);
	}
	template <typename R = void> R ShowInfo() {
		return ((R (*)(DungeonEnterWindow*))(Il2CppBase() + 0x130B830))(this);
	}
	template <typename R = void> R InitResources(GameEntity* target) {
		return ((R (*)(DungeonEnterWindow*, GameEntity*))(Il2CppBase() + 0x130B15C))(this, target);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(DungeonEnterWindow*, IInventoryItem*))(Il2CppBase() + 0x130BBD4))(this, item);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(DungeonEnterWindow*, IInventoryItem*))(Il2CppBase() + 0x130C17C))(this, item);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(DungeonEnterWindow*))(Il2CppBase() + 0x130C66C))(this);
	}
	template <typename R = void> R ChangeLocationGrade(int32_t index) {
		return ((R (*)(DungeonEnterWindow*, int32_t))(Il2CppBase() + 0x130C8D4))(this, index);
	}
	template <typename R = void> R Confirm() {
		return ((R (*)(DungeonEnterWindow*))(Il2CppBase() + 0x130CCC8))(this);
	}
	template <typename R = bool> R CanPass(GameEntity* target) {
		return ((R (*)(DungeonEnterWindow*, GameEntity*))(Il2CppBase() + 0x130CDD8))(this, target);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(DungeonEnterWindow*, float))(Il2CppBase() + 0x130D04C))(this, deltaTime);
	}

};

