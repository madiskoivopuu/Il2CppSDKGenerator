#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class ExchangeWindow: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeWindow"));
	}

	template <typename T = uintptr_t> T& _faceImg() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _hintLine() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _backlight() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _capInventory() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& _pointsLimitText() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& _pointsRewardText() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& _pointsLimitFromPreviousText() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& _sellBtn() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& _sellBtnErrorText() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& _sellBtnAnim() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& _infoBtn() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& _resetLimitBtn() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rewardsIcons() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& _bpPanel() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& _bpCompleteColor() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = void*> T& _lockedSet() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = void*> T& _selectedExchangeSum() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = void*> T& _limit() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = bool> T& _exchangeSuccessful() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = bool> T& _isDailyLimitReached() {
		return *(T*)((uintptr_t)this + 0x201);
	}
	template <typename T = bool> T& _isBpLimitReached() {
		return *(T*)((uintptr_t)this + 0x202);
	}
	template <typename T = int32_t> T& _lastRewardCurrencyCount() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& _prices() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = bool> T& _considerDurability() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = void*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = bool> T& _sendExchange() {
		return *(T*)((uintptr_t)this + 0x220);
	}

	template <typename T = void*> T GetNeedResources() {
		return ((T (*)(ExchangeWindow*))(Il2CppBase() + 0x17951F4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ExchangeWindow*))(Il2CppBase() + 0x179538C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(ExchangeWindow*))(Il2CppBase() + 0x179555C))(this);
	}
	template <typename T = void> T OnAnyTabClick(uintptr_t tabType) {
		return ((T (*)(ExchangeWindow*, uintptr_t))(Il2CppBase() + 0x1795E24))(this, tabType);
	}
	template <typename T = void> T CreateFakeInventory(int32_t count) {
		return ((T (*)(ExchangeWindow*, int32_t))(Il2CppBase() + 0x1795D04))(this, count);
	}
	template <typename T = void> T OnSelect(uintptr_t selectedInventory, uintptr_t selectedSlot) {
		return ((T (*)(ExchangeWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1795E44))(this, selectedInventory, selectedSlot);
	}
	template <typename T = void> T OnDrop(uintptr_t item) {
		return ((T (*)(ExchangeWindow*, uintptr_t))(Il2CppBase() + 0x1796308))(this, item);
	}
	template <typename T = void> T OnDoubleClick(uintptr_t item) {
		return ((T (*)(ExchangeWindow*, uintptr_t))(Il2CppBase() + 0x1796C28))(this, item);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(ExchangeWindow*))(Il2CppBase() + 0x179708C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ExchangeWindow*, float))(Il2CppBase() + 0x17973B0))(this, deltaTime);
	}
	template <typename T = bool> T IsInventoryEntitySelected(int32_t id) {
		return ((T (*)(ExchangeWindow*, int32_t))(Il2CppBase() + 0x17960CC))(this, id);
	}
	template <typename T = bool> T IsItemInFilter(uintptr_t entity) {
		return ((T (*)(ExchangeWindow*, uintptr_t))(Il2CppBase() + 0x179603C))(this, entity);
	}
	template <typename T = void> T UpdateFakeInventory(bool owner) {
		return ((T (*)(ExchangeWindow*, bool))(Il2CppBase() + 0x1798210))(this, owner);
	}
	template <typename T = void> T OnSellButtonClicked() {
		return ((T (*)(ExchangeWindow*))(Il2CppBase() + 0x17989EC))(this);
	}
	template <typename T = void> T OnCloseButtonClicked() {
		return ((T (*)(ExchangeWindow*))(Il2CppBase() + 0x179955C))(this);
	}
	template <typename T = void> T OnInfoButtonClicked() {
		return ((T (*)(ExchangeWindow*))(Il2CppBase() + 0x179956C))(this);
	}
	template <typename T = bool> T UpdateInventoryEntity(uintptr_t inventoryEntity) {
		return ((T (*)(ExchangeWindow*, uintptr_t))(Il2CppBase() + 0x179877C))(this, inventoryEntity);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ExchangeWindow*))(Il2CppBase() + 0x1799604))(this);
	}
	template <typename T = void> T OnExchangeResult(int32_t reward, Il2CppString* errorMsg) {
		return ((T (*)(ExchangeWindow*, int32_t, Il2CppString*))(Il2CppBase() + 0x17997D8))(this, reward, errorMsg);
	}
	template <typename T = void> T OnSellButtonClickedg__SendExchange|44_0() {
		return ((T (*)(ExchangeWindow*))(Il2CppBase() + 0x17991E4))(this);
	}
	template <typename T = void> T OnSellButtonClickedb__44_1(int32_t buttonIndex) {
		return ((T (*)(ExchangeWindow*, int32_t))(Il2CppBase() + 0x1799A28))(this, buttonIndex);
	}

};

}
