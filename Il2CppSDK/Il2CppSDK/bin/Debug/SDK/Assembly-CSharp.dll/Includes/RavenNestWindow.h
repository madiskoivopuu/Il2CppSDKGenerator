#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class RavenNestWindow: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestWindow"));
	}

	template <typename T = uintptr_t> T& NestStatusText() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& ActiveDutation() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& DropHighlight() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& StatsBtn() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppString*> T& ActiveLocalizationKey() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppString*> T& InactiveLocalizationKey() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = void*> T& _fuels() {
		return *(T*)((uintptr_t)this + 0x178);
	}

	template <typename T = void*> T GetNeedResources() {
		return ((T (*)(RavenNestWindow*))(Il2CppBase() + 0x1393230))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RavenNestWindow*))(Il2CppBase() + 0x1393238))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(RavenNestWindow*))(Il2CppBase() + 0x1393348))(this);
	}
	template <typename T = void> T OnStatsClick() {
		return ((T (*)(RavenNestWindow*))(Il2CppBase() + 0x139362C))(this);
	}
	template <typename T = void> T OnSelectedInventoryChanged(uintptr_t selectedInventory) {
		return ((T (*)(RavenNestWindow*, uintptr_t))(Il2CppBase() + 0x13936A8))(this, selectedInventory);
	}
	template <typename T = bool> T CanFill(uintptr_t inventoryEntity) {
		return ((T (*)(RavenNestWindow*, uintptr_t))(Il2CppBase() + 0x1393704))(this, inventoryEntity);
	}
	template <typename T = void> T OnDropFood() {
		return ((T (*)(RavenNestWindow*))(Il2CppBase() + 0x1393800))(this);
	}
	template <typename T = void> T OnDoubleClick(uintptr_t item) {
		return ((T (*)(RavenNestWindow*, uintptr_t))(Il2CppBase() + 0x1393968))(this, item);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(RavenNestWindow*))(Il2CppBase() + 0x1393B50))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(RavenNestWindow*, float))(Il2CppBase() + 0x1393DD8))(this, deltaTime);
	}

};

}
