#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class ExchangeWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeWindow"));
	}

	template <typename R = uintptr_t> R& _faceImg() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& _hintLine() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& _backlight() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = InventoryContainer*> R& _capInventory() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& _timer() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& _pointsLimitText() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& _pointsRewardText() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& _pointsLimitFromPreviousText() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& _sellBtn() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& _sellBtnErrorText() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& _sellBtnAnim() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = uintptr_t> R& _infoBtn() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = uintptr_t> R& _resetLimitBtn() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _rewardsIcons() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = TextImageMonoBehaviour*> R& _bpPanel() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = uintptr_t> R& _bpCompleteColor() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	 HashSet1int32_t>*& _lockedSet() {
		return *(HashSet1int32_t>**)((uintptr_t)this + 0x1E8);
	}
	 Nullable1int32_t>*& _selectedExchangeSum() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x1F0);
	}
	 Nullable1int32_t>*& _limit() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x1F8);
	}
	template <typename R = bool> R& _exchangeSuccessful() {
		return *(R*)((uintptr_t)this + 0x200);
	}
	template <typename R = bool> R& _isDailyLimitReached() {
		return *(R*)((uintptr_t)this + 0x201);
	}
	template <typename R = bool> R& _isBpLimitReached() {
		return *(R*)((uintptr_t)this + 0x202);
	}
	template <typename R = int32_t> R& _lastRewardCurrencyCount() {
		return *(R*)((uintptr_t)this + 0x204);
	}
	 Il2CppDictionary<Il2CppString*, int32_t>*& _prices() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0x208);
	}
	template <typename R = bool> R& _considerDurability() {
		return *(R*)((uintptr_t)this + 0x210);
	}
	 HashSet1Il2CppString*>*& _needResources() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x218);
	}
	template <typename R = bool> R& _sendExchange() {
		return *(R*)((uintptr_t)this + 0x220);
	}

	 HashSet1Il2CppString*>* GetNeedResources() {
		return ((HashSet1Il2CppString*>* (*)(ExchangeWindow*))(Il2CppBase() + 0x17951F4))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ExchangeWindow*))(Il2CppBase() + 0x179538C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(ExchangeWindow*))(Il2CppBase() + 0x179555C))(this);
	}
	template <typename R = void> R OnAnyTabClick(TabType* tabType) {
		return ((R (*)(ExchangeWindow*, TabType*))(Il2CppBase() + 0x1795E24))(this, tabType);
	}
	template <typename R = void> R CreateFakeInventory(int32_t count) {
		return ((R (*)(ExchangeWindow*, int32_t))(Il2CppBase() + 0x1795D04))(this, count);
	}
	template <typename R = void> R OnSelect(InventorySlotEntity* selectedInventory, InventorySlot* selectedSlot) {
		return ((R (*)(ExchangeWindow*, InventorySlotEntity*, InventorySlot*))(Il2CppBase() + 0x1795E44))(this, selectedInventory, selectedSlot);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(ExchangeWindow*, IInventoryItem*))(Il2CppBase() + 0x1796308))(this, item);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(ExchangeWindow*, IInventoryItem*))(Il2CppBase() + 0x1796C28))(this, item);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(ExchangeWindow*))(Il2CppBase() + 0x179708C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ExchangeWindow*, float))(Il2CppBase() + 0x17973B0))(this, deltaTime);
	}
	template <typename R = bool> R IsInventoryEntitySelected(int32_t id) {
		return ((R (*)(ExchangeWindow*, int32_t))(Il2CppBase() + 0x17960CC))(this, id);
	}
	template <typename R = bool> R IsItemInFilter(ItemEntity* entity) {
		return ((R (*)(ExchangeWindow*, ItemEntity*))(Il2CppBase() + 0x179603C))(this, entity);
	}
	template <typename R = void> R UpdateFakeInventory(bool owner) {
		return ((R (*)(ExchangeWindow*, bool))(Il2CppBase() + 0x1798210))(this, owner);
	}
	template <typename R = void> R OnSellButtonClicked() {
		return ((R (*)(ExchangeWindow*))(Il2CppBase() + 0x17989EC))(this);
	}
	template <typename R = void> R OnCloseButtonClicked() {
		return ((R (*)(ExchangeWindow*))(Il2CppBase() + 0x179955C))(this);
	}
	template <typename R = void> R OnInfoButtonClicked() {
		return ((R (*)(ExchangeWindow*))(Il2CppBase() + 0x179956C))(this);
	}
	template <typename R = bool> R UpdateInventoryEntity(InventorySlotEntity* inventoryEntity) {
		return ((R (*)(ExchangeWindow*, InventorySlotEntity*))(Il2CppBase() + 0x179877C))(this, inventoryEntity);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ExchangeWindow*))(Il2CppBase() + 0x1799604))(this);
	}
	template <typename R = void> R OnExchangeResult(int32_t reward, Il2CppString* errorMsg) {
		return ((R (*)(ExchangeWindow*, int32_t, Il2CppString*))(Il2CppBase() + 0x17997D8))(this, reward, errorMsg);
	}
	template <typename R = void> R OnSellButtonClickedg__SendExchange|44_0() {
		return ((R (*)(ExchangeWindow*))(Il2CppBase() + 0x17991E4))(this);
	}
	template <typename R = void> R OnSellButtonClickedb__44_1(int32_t buttonIndex) {
		return ((R (*)(ExchangeWindow*, int32_t))(Il2CppBase() + 0x1799A28))(this, buttonIndex);
	}

};

