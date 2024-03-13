#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class RepairWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RepairWindow"));
	}

	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = RepairContainer*> T& Container() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& TakeAllButton() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& CraftTime() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& RepairDurabilityPanel() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& RepairDurability() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& SkipButton() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& SkipPricePanel() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& SkipButtonText() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& ShareToggle() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& TaxNotification() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& CostPanel() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& _skipPrice() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& _recipesWindowId() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}

	template <typename T = bool> T get_IsForeignStation() {
		return ((T (*)(RepairWindow*))(Il2CppBase() + 0x13A3880))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(RepairWindow*))(Il2CppBase() + 0x13A3A00))(this);
	}
	template <typename T = void> T OnShareValueChanged(bool value) {
		return ((T (*)(RepairWindow*, bool))(Il2CppBase() + 0x13A4110))(this, value);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(RepairWindow*))(Il2CppBase() + 0x13A4224))(this);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(RepairWindow*, IInventoryItem*))(Il2CppBase() + 0x13A448C))(this, item);
	}
	template <typename T = void> T OnDrop(IInventoryItem* item) {
		return ((T (*)(RepairWindow*, IInventoryItem*))(Il2CppBase() + 0x13A54B8))(this, item);
	}
	template <typename T = void> T OnDrop_1(IInventoryItem* item, bool checkTax) {
		return ((T (*)(RepairWindow*, IInventoryItem*, bool))(Il2CppBase() + 0x13A5544))(this, item, checkTax);
	}
	template <typename T = bool> T CanBeRepaired(GameEntity* entity, InventorySlotEntity* toRepair) {
		return ((T (*)(RepairWindow*, GameEntity*, InventorySlotEntity*))(Il2CppBase() + 0x13A52A0))(this, entity, toRepair);
	}
	template <typename T = void> T ShowRecipes() {
		return ((T (*)(RepairWindow*))(Il2CppBase() + 0x13A6808))(this);
	}
	template <typename T = void> T OnTakeAll() {
		return ((T (*)(RepairWindow*))(Il2CppBase() + 0x13A68B0))(this);
	}
	template <typename T = void> T OnSkip() {
		return ((T (*)(RepairWindow*))(Il2CppBase() + 0x13A6940))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(RepairWindow*, float))(Il2CppBase() + 0x13A6BA4))(this, deltaTime);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RepairWindow*))(Il2CppBase() + 0x13A7790))(this);
	}

};

