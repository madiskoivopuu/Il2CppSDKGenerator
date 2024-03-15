#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class CurrencyExchangeWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyExchangeWindow"));
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
	template <typename R = uintptr_t> R& _sellBtn() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& _resetLimitBtn() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = TooltipTrigger*> R& _infoTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& _bottomDescription() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& _sliderPanel() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& _slider() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& _sliderText() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& _sliderConfirmButton() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& _pointsLimitText() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = uintptr_t> R& _timer() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = uintptr_t> R& _rewardCountText() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = uintptr_t> R& _rewardCurrencyIcon() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = InventoryItemDraggable*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = InventorySlot*> R& CurrencySlot() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = InventorySlot*> R& BuffSlot() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	template <typename R = uintptr_t> R& BuffPercentText() {
		return *(R*)((uintptr_t)this + 0x1E0);
	}
	template <typename R = uintptr_t> R& BuffPercentIcon() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = uintptr_t> R& BuffPercentCanvaGroup() {
		return *(R*)((uintptr_t)this + 0x1F0);
	}
	template <typename R = float> R& InactivePercentAlpha() {
		return *(R*)((uintptr_t)this + 0x1F8);
	}
	 Nullable1<int32_t>*& _selectedExchangeSum() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x1FC);
	}
	 Nullable1<int32_t>*& _limit() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x204);
	}
	template <typename R = bool> R& _exchangeSuccessful() {
		return *(R*)((uintptr_t)this + 0x20C);
	}
	template <typename R = bool> R& _isDailyLimitReached() {
		return *(R*)((uintptr_t)this + 0x20D);
	}
	template <typename R = int32_t> R& _lastRewardCurrencyCount() {
		return *(R*)((uintptr_t)this + 0x210);
	}
	 HashSet1<Il2CppString*>*& _needResources() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x218);
	}
	template <typename R = int32_t> R& _currencyDiff() {
		return *(R*)((uintptr_t)this + 0x220);
	}
	template <typename R = int32_t> R& _currencyAvatarSlotId() {
		return *(R*)((uintptr_t)this + 0x224);
	}
	template <typename R = bool> R& _sendExchange() {
		return *(R*)((uintptr_t)this + 0x228);
	}

	 HashSet1<Il2CppString*>* GetNeedResources() {
		return ((HashSet1<Il2CppString*>* (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD12FC))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD1658))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD18B4))(this);
	}
	template <typename R = void> R UpdateFakeInventory() {
		return ((R (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD28A0))(this);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(CurrencyExchangeWindow*, IInventoryItem*))(Il2CppBase() + 0x1BD2F74))(this, item);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(CurrencyExchangeWindow*, IInventoryItem*))(Il2CppBase() + 0x1BD39F4))(this, item);
	}
	template <typename R = void> R UpdateBuffInventory() {
		return ((R (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD4060))(this);
	}
	template <typename R = bool> R UpdateInventoryEntity(InventorySlotEntity* inventoryEntity) {
		return ((R (*)(CurrencyExchangeWindow*, InventorySlotEntity*))(Il2CppBase() + 0x1BD439C))(this, inventoryEntity);
	}
	template <typename R = void> R OnSliderConfirm() {
		return ((R (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD4594))(this);
	}
	template <typename R = void> R OnSlideValueChanged(float value) {
		return ((R (*)(CurrencyExchangeWindow*, float))(Il2CppBase() + 0x1BD38F0))(this, value);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(CurrencyExchangeWindow*, float))(Il2CppBase() + 0x1BD45B4))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD4EDC))(this);
	}
	template <typename R = void> R OnSellButtonClicked() {
		return ((R (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD5200))(this);
	}
	template <typename R = void> R OnCloseButtonClicked() {
		return ((R (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD5308))(this);
	}
	template <typename R = void> R OnExchangeResult(int32_t reward, Il2CppString* errorMsg) {
		return ((R (*)(CurrencyExchangeWindow*, int32_t, Il2CppString*))(Il2CppBase() + 0x1BD5318))(this, reward, errorMsg);
	}

};

