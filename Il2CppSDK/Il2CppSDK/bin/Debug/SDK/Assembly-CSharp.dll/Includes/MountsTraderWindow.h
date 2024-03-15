#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMountsInventoryWindow1.h" 

class MountsTraderWindow : public BaseMountsInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsTraderWindow"));
	}

	template <typename R = uintptr_t> R& _npcDialogue() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = Il2CppArray<BaseMountTradeStep*>*> R& _tradeSteps() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& _allMountsButton() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& _previousButton() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& _nextButton() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& _autoAddButton() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& _nextButtonAnimator() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& _nextButtonErrorText() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& _nextButtonPriceIcon() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& _nextButtonPriceText() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& _nextButtonText() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = uintptr_t> R& _stepHintText() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = HUDStorePanel*> R& _silverPanel() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = IInventoryItem*> R& _lastTraderItem() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = BaseMountTradeStep*> R& _currentStep() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = bool> R& _lastForward() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = bool> R& _lastFinished() {
		return *(R*)((uintptr_t)this + 0x169);
	}
	template <typename R = MountFuser*> R& _mountFuser() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	 Il2CppDictionary<int32_t, Il2CppArray<int32_t>*>*& _playerChooseResult() {
		return *(Il2CppDictionary<int32_t, Il2CppArray<int32_t>*>**)((uintptr_t)this + 0x178);
	}
	template <typename R = int32_t> R& _lastStep() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = int32_t> R& _firstStep() {
		return *(R*)((uintptr_t)this + 0x184);
	}
	template <typename R = bool> R& _isOwnDistrict() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = bool> R& _isFuseProcessing() {
		return *(R*)((uintptr_t)this + 0x189);
	}
	template <typename R = Il2CppString*> R& _nextButtonKey() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = Il2CppString*> R& _exchangeButtonKey() {
		return *(R*)((uintptr_t)this + 0x198);
	}

	template <typename R = Il2CppArray<BaseMountTradeStep*>*> R get_TradeSteps() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x1551614))(this);
	}
	template <typename R = int32_t> R get_FirstStep() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x155161C))(this);
	}
	template <typename R = int32_t> R get_LastStep() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x1551624))(this);
	}
	template <typename R = MountFuser*> R get_MountFuser() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x155162C))(this);
	}
	 Il2CppDictionary<int32_t, Il2CppArray<int32_t>*>* get_PlayerChooseResult() {
		return ((Il2CppDictionary<int32_t, Il2CppArray<int32_t>*>* (*)(MountsTraderWindow*))(Il2CppBase() + 0x1551634))(this);
	}
	template <typename R = BaseMountTradeStep*> R get_CurrentStep() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x155163C))(this);
	}
	template <typename R = void> R set_CurrentStep(BaseMountTradeStep* value) {
		return ((R (*)(MountsTraderWindow*, BaseMountTradeStep*))(Il2CppBase() + 0x1551644))(this, value);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x1552040))(this);
	}
	template <typename R = void> R CheckArmingMount() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x15526E4))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x15528F4))(this);
	}
	template <typename R = void> R PreviosStep() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x1552B40))(this);
	}
	template <typename R = void> R NextStep() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x1552CA0))(this);
	}
	template <typename R = Il2CppString*> R GetErrorStringKey(Result result) {
		return ((R (*)(MountsTraderWindow*, Result))(Il2CppBase() + 0x1552F70))(this, result);
	}
	template <typename R = void> R FuseMount() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x1553004))(this);
	}
	template <typename R = void> R OnFuseFinished(FuseMountResultData data) {
		return ((R (*)(MountsTraderWindow*, FuseMountResultData))(Il2CppBase() + 0x1553408))(this, data);
	}
	template <typename R = uintptr_t> R WaitForInventory(IInventoryItem* inventoryItem, int32_t id) {
		return ((R (*)(MountsTraderWindow*, IInventoryItem*, int32_t))(Il2CppBase() + 0x1553CC0))(this, inventoryItem, id);
	}
	template <typename R = void> R ResetFuse() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x1553D5C))(this);
	}
	template <typename R = void> R OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(MountsTraderWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x15543CC))(this, item, eventData);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(MountsTraderWindow*, IInventoryItem*))(Il2CppBase() + 0x1554454))(this, item);
	}
	template <typename R = void> R OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(MountsTraderWindow*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1554A14))(this, item, eventData);
	}
	template <typename R = void> R Delete() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x1554C68))(this);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(MountsTraderWindow*, IInventoryItem*))(Il2CppBase() + 0x1554E80))(this, item);
	}
	template <typename R = bool> R IsMountAlreadyAdded(int32_t id) {
		return ((R (*)(MountsTraderWindow*, int32_t))(Il2CppBase() + 0x155497C))(this, id);
	}
	template <typename R = void> R OnSelect(IInventoryItem* item) {
		return ((R (*)(MountsTraderWindow*, IInventoryItem*))(Il2CppBase() + 0x155596C))(this, item);
	}
	template <typename R = void> R UpdateInventory() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x1553E64))(this);
	}
	template <typename R = int32_t> R GetFirstEptyStepSlotIndex() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x1555828))(this);
	}
	template <typename R = void> R OnStepChanged(bool isForward) {
		return ((R (*)(MountsTraderWindow*, bool))(Il2CppBase() + 0x15517AC))(this, isForward);
	}
	template <typename R = void> R AutoAddMount() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x1555DA0))(this);
	}
	 ValueTuple2<bool, Il2CppArray<IInventoryItem*>*>* CanAutoAddMounts() {
		return ((ValueTuple2<bool, Il2CppArray<IInventoryItem*>*>* (*)(MountsTraderWindow*))(Il2CppBase() + 0x1555A5C))(this);
	}
	template <typename R = Il2CppArray<IInventoryItem*>*> R GetMountsForAutoAdd(int32_t order, int32_t grade, bool thisGradeOnly) {
		return ((R (*)(MountsTraderWindow*, int32_t, int32_t, bool))(Il2CppBase() + 0x1555F2C))(this, order, grade, thisGradeOnly);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(MountsTraderWindow*, float))(Il2CppBase() + 0x15560D4))(this, deltaTime);
	}
	template <typename R = void> R OnShowb__39_0() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x1556384))(this);
	}
	template <typename R = void> R FuseMountb__45_0() {
		return ((R (*)(MountsTraderWindow*))(Il2CppBase() + 0x155639C))(this);
	}

};

