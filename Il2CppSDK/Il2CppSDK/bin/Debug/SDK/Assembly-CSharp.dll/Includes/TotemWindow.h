#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class TotemWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TotemWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& GlowAnimator() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& BatteryActiveAnimator() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& Timer() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& NoBattery() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& HasBattery() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& ActiveBattery() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& DropHighlight() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& Progress() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& MaxText() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	 Il2CppList<uintptr_t>*& Serifs() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& Description2() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = uintptr_t> R& Tips() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = uintptr_t> R& ProgressCG() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = uintptr_t> R& SlotCG() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = uintptr_t> R& _totemLG() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = bool> R& _isRDFPBuffActive() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	template <typename R = float> static R& _batteryBurningAnimationSpeed() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> R& _currentAmount() {
		return *(R*)((uintptr_t)this + 0x1DC);
	}
	template <typename R = float> R& _maxShieldTimeSeconds() {
		return *(R*)((uintptr_t)this + 0x1E0);
	}
	template <typename R = int32_t> R& _warningId() {
		return *(R*)((uintptr_t)this + 0x1E4);
	}
	 HashSet1<Il2CppString*>*& _needResources() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x1E8);
	}

	 HashSet1<Il2CppString*>* GetNeedResources() {
		return ((HashSet1<Il2CppString*>* (*)(TotemWindow*))(Il2CppBase() + 0x14F9F74))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(TotemWindow*))(Il2CppBase() + 0x14FA184))(this);
	}
	template <typename R = void> R CheckActiveBuffs() {
		return ((R (*)(TotemWindow*))(Il2CppBase() + 0x14FA934))(this);
	}
	template <typename R = void> R OnDropBattery() {
		return ((R (*)(TotemWindow*))(Il2CppBase() + 0x14FAE74))(this);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(TotemWindow*, IInventoryItem*))(Il2CppBase() + 0x14FB688))(this, item);
	}
	template <typename R = void> R SendApplyBattery(int32_t targetId, int32_t itemDraggedId, Il2CppString* name) {
		return ((R (*)(TotemWindow*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x14FB720))(this, targetId, itemDraggedId, name);
	}
	template <typename R = void> R OnSelectedInventoryChanged(InventorySlotEntity* selectedInventory) {
		return ((R (*)(TotemWindow*, InventorySlotEntity*))(Il2CppBase() + 0x14FB854))(this, selectedInventory);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(TotemWindow*))(Il2CppBase() + 0x14FB9F4))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(TotemWindow*, float))(Il2CppBase() + 0x14FBC88))(this, deltaTime);
	}
	template <typename R = void> R CheckCanApplyBattery() {
		return ((R (*)(TotemWindow*))(Il2CppBase() + 0x14FAE78))(this);
	}
	template <typename R = void> R OnSendApplyBattery() {
		return ((R (*)(TotemWindow*))(Il2CppBase() + 0x14FC218))(this);
	}
	template <typename R = void> R CheckCanApplyBatteryb__34_0(int32_t result) {
		return ((R (*)(TotemWindow*, int32_t))(Il2CppBase() + 0x14FC38C))(this, result);
	}

};

