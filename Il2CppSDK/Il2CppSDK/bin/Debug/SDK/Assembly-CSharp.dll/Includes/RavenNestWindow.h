#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class RavenNestWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestWindow"));
	}

	template <typename R = uintptr_t> R& NestStatusText() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& ActiveDutation() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& DropHighlight() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& StatsBtn() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = Il2CppString*> R& ActiveLocalizationKey() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = Il2CppString*> R& InactiveLocalizationKey() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	 HashSet1<Il2CppString*>*& _fuels() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x178);
	}

	 HashSet1<Il2CppString*>* GetNeedResources() {
		return ((HashSet1<Il2CppString*>* (*)(RavenNestWindow*))(Il2CppBase() + 0x1393230))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(RavenNestWindow*))(Il2CppBase() + 0x1393238))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(RavenNestWindow*))(Il2CppBase() + 0x1393348))(this);
	}
	template <typename R = void> R OnStatsClick() {
		return ((R (*)(RavenNestWindow*))(Il2CppBase() + 0x139362C))(this);
	}
	template <typename R = void> R OnSelectedInventoryChanged(InventorySlotEntity* selectedInventory) {
		return ((R (*)(RavenNestWindow*, InventorySlotEntity*))(Il2CppBase() + 0x13936A8))(this, selectedInventory);
	}
	template <typename R = bool> R CanFill(InventorySlotEntity* inventoryEntity) {
		return ((R (*)(RavenNestWindow*, InventorySlotEntity*))(Il2CppBase() + 0x1393704))(this, inventoryEntity);
	}
	template <typename R = void> R OnDropFood() {
		return ((R (*)(RavenNestWindow*))(Il2CppBase() + 0x1393800))(this);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(RavenNestWindow*, IInventoryItem*))(Il2CppBase() + 0x1393968))(this, item);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(RavenNestWindow*))(Il2CppBase() + 0x1393B50))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(RavenNestWindow*, float))(Il2CppBase() + 0x1393DD8))(this, deltaTime);
	}

};

