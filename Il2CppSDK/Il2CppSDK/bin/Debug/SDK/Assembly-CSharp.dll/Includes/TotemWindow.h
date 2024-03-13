#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class TotemWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TotemWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& GlowAnimator() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& BatteryActiveAnimator() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& Timer() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& NoBattery() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& HasBattery() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& ActiveBattery() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& DropHighlight() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& MaxText() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Serifs() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& Description2() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& Tips() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& ProgressCG() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& SlotCG() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& _totemLG() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = bool> T& _isRDFPBuffActive() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> static T& _batteryBurningAnimationSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& _currentAmount() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& _maxShieldTimeSeconds() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = int32_t> T& _warningId() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = HashSet1Il2CppString*>*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}

	template <typename T = HashSet1Il2CppString*>*> T GetNeedResources() {
		return ((T (*)(TotemWindow*))(Il2CppBase() + 0x14F9F74))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TotemWindow*))(Il2CppBase() + 0x14FA184))(this);
	}
	template <typename T = void> T CheckActiveBuffs() {
		return ((T (*)(TotemWindow*))(Il2CppBase() + 0x14FA934))(this);
	}
	template <typename T = void> T OnDropBattery() {
		return ((T (*)(TotemWindow*))(Il2CppBase() + 0x14FAE74))(this);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(TotemWindow*, IInventoryItem*))(Il2CppBase() + 0x14FB688))(this, item);
	}
	template <typename T = void> T SendApplyBattery(int32_t targetId, int32_t itemDraggedId, Il2CppString* name) {
		return ((T (*)(TotemWindow*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x14FB720))(this, targetId, itemDraggedId, name);
	}
	template <typename T = void> T OnSelectedInventoryChanged(InventorySlotEntity* selectedInventory) {
		return ((T (*)(TotemWindow*, InventorySlotEntity*))(Il2CppBase() + 0x14FB854))(this, selectedInventory);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(TotemWindow*))(Il2CppBase() + 0x14FB9F4))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(TotemWindow*, float))(Il2CppBase() + 0x14FBC88))(this, deltaTime);
	}
	template <typename T = void> T CheckCanApplyBattery() {
		return ((T (*)(TotemWindow*))(Il2CppBase() + 0x14FAE78))(this);
	}
	template <typename T = void> T OnSendApplyBattery() {
		return ((T (*)(TotemWindow*))(Il2CppBase() + 0x14FC218))(this);
	}
	template <typename T = void> T CheckCanApplyBatteryb__34_0(int32_t result) {
		return ((T (*)(TotemWindow*, int32_t))(Il2CppBase() + 0x14FC38C))(this, result);
	}

};

