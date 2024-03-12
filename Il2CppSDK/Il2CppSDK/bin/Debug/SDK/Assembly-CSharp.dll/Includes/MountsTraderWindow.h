#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMountsInventoryWindow`1" 

class MountsTraderWindow: BaseMountsInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsTraderWindow"));
	}

	template <typename T = uintptr_t> T& _npcDialogue() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _tradeSteps() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _allMountsButton() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _previousButton() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _nextButton() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _autoAddButton() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _nextButtonAnimator() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _nextButtonErrorText() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _nextButtonPriceIcon() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _nextButtonPriceText() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _nextButtonText() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _stepHintText() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _silverPanel() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _lastTraderItem() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _currentStep() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& _lastForward() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& _lastFinished() {
		return *(T*)((uintptr_t)this + 0x169);
	}
	template <typename T = uintptr_t> T& _mountFuser() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*> T& _playerChooseResult() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& _lastStep() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = int32_t> T& _firstStep() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& _isOwnDistrict() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& _isFuseProcessing() {
		return *(T*)((uintptr_t)this + 0x189);
	}
	template <typename T = Il2CppString*> T& _nextButtonKey() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppString*> T& _exchangeButtonKey() {
		return *(T*)((uintptr_t)this + 0x198);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_TradeSteps() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1551614))(this);
	}
	template <typename T = int32_t> T get_FirstStep() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x155161C))(this);
	}
	template <typename T = int32_t> T get_LastStep() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1551624))(this);
	}
	template <typename T = uintptr_t> T get_MountFuser() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x155162C))(this);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*> T get_PlayerChooseResult() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1551634))(this);
	}
	template <typename T = uintptr_t> T get_CurrentStep() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x155163C))(this);
	}
	template <typename T = void> T set_CurrentStep(uintptr_t value) {
		return ((T (*)(MountsTraderWindow*, uintptr_t))(Il2CppBase() + 0x1551644))(this, value);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1552040))(this);
	}
	template <typename T = void> T CheckArmingMount() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x15526E4))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x15528F4))(this);
	}
	template <typename T = void> T PreviosStep() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1552B40))(this);
	}
	template <typename T = void> T NextStep() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1552CA0))(this);
	}
	template <typename T = Il2CppString*> T GetErrorStringKey(uintptr_t result) {
		return ((T (*)(MountsTraderWindow*, uintptr_t))(Il2CppBase() + 0x1552F70))(this, result);
	}
	template <typename T = void> T FuseMount() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1553004))(this);
	}
	template <typename T = void> T OnFuseFinished(uintptr_t data) {
		return ((T (*)(MountsTraderWindow*, uintptr_t))(Il2CppBase() + 0x1553408))(this, data);
	}
	template <typename T = uintptr_t> T WaitForInventory(uintptr_t inventoryItem, int32_t id) {
		return ((T (*)(MountsTraderWindow*, uintptr_t, int32_t))(Il2CppBase() + 0x1553CC0))(this, inventoryItem, id);
	}
	template <typename T = void> T ResetFuse() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1553D5C))(this);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(MountsTraderWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x15543CC))(this, item, eventData);
	}
	template <typename T = void> T OnDrop(uintptr_t item) {
		return ((T (*)(MountsTraderWindow*, uintptr_t))(Il2CppBase() + 0x1554454))(this, item);
	}
	template <typename T = void> T OnEndDrag(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(MountsTraderWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1554A14))(this, item, eventData);
	}
	template <typename T = void> T Delete() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1554C68))(this);
	}
	template <typename T = void> T OnDoubleClick(uintptr_t item) {
		return ((T (*)(MountsTraderWindow*, uintptr_t))(Il2CppBase() + 0x1554E80))(this, item);
	}
	template <typename T = bool> T IsMountAlreadyAdded(int32_t id) {
		return ((T (*)(MountsTraderWindow*, int32_t))(Il2CppBase() + 0x155497C))(this, id);
	}
	template <typename T = void> T OnSelect(uintptr_t item) {
		return ((T (*)(MountsTraderWindow*, uintptr_t))(Il2CppBase() + 0x155596C))(this, item);
	}
	template <typename T = void> T UpdateInventory() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1553E64))(this);
	}
	template <typename T = int32_t> T GetFirstEptyStepSlotIndex() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1555828))(this);
	}
	template <typename T = void> T OnStepChanged(bool isForward) {
		return ((T (*)(MountsTraderWindow*, bool))(Il2CppBase() + 0x15517AC))(this, isForward);
	}
	template <typename T = void> T AutoAddMount() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1555DA0))(this);
	}
	template <typename T = void*> T CanAutoAddMounts() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1555A5C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMountsForAutoAdd(int32_t order, int32_t grade, bool thisGradeOnly) {
		return ((T (*)(MountsTraderWindow*, int32_t, int32_t, bool))(Il2CppBase() + 0x1555F2C))(this, order, grade, thisGradeOnly);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(MountsTraderWindow*, float))(Il2CppBase() + 0x15560D4))(this, deltaTime);
	}
	template <typename T = void> T OnShowb__39_0() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x1556384))(this);
	}
	template <typename T = void> T FuseMountb__45_0() {
		return ((T (*)(MountsTraderWindow*))(Il2CppBase() + 0x155639C))(this);
	}

};

}
