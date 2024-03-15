#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class RepairWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RepairWindow"));
	}

	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = RepairContainer*> R& Container() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& TakeAllButton() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& CraftTime() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& RepairDurabilityPanel() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& RepairDurability() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& SkipButton() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& SkipPricePanel() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& SkipButtonText() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& ShareToggle() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& TaxNotification() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& CostPanel() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = float> R& _skipPrice() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = int32_t> R& _recipesWindowId() {
		return *(R*)((uintptr_t)this + 0x1AC);
	}

	template <typename R = bool> R get_IsForeignStation() {
		return ((R (*)(RepairWindow*))(Il2CppBase() + 0x13A3880))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(RepairWindow*))(Il2CppBase() + 0x13A3A00))(this);
	}
	template <typename R = void> R OnShareValueChanged(bool value) {
		return ((R (*)(RepairWindow*, bool))(Il2CppBase() + 0x13A4110))(this, value);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(RepairWindow*))(Il2CppBase() + 0x13A4224))(this);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(RepairWindow*, IInventoryItem*))(Il2CppBase() + 0x13A448C))(this, item);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(RepairWindow*, IInventoryItem*))(Il2CppBase() + 0x13A54B8))(this, item);
	}
	template <typename R = void> R OnDrop_1(IInventoryItem* item, bool checkTax) {
		return ((R (*)(RepairWindow*, IInventoryItem*, bool))(Il2CppBase() + 0x13A5544))(this, item, checkTax);
	}
	template <typename R = bool> R CanBeRepaired(GameEntity* entity, InventorySlotEntity* toRepair) {
		return ((R (*)(RepairWindow*, GameEntity*, InventorySlotEntity*))(Il2CppBase() + 0x13A52A0))(this, entity, toRepair);
	}
	template <typename R = void> R ShowRecipes() {
		return ((R (*)(RepairWindow*))(Il2CppBase() + 0x13A6808))(this);
	}
	template <typename R = void> R OnTakeAll() {
		return ((R (*)(RepairWindow*))(Il2CppBase() + 0x13A68B0))(this);
	}
	template <typename R = void> R OnSkip() {
		return ((R (*)(RepairWindow*))(Il2CppBase() + 0x13A6940))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(RepairWindow*, float))(Il2CppBase() + 0x13A6BA4))(this, deltaTime);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(RepairWindow*))(Il2CppBase() + 0x13A7790))(this);
	}

};

