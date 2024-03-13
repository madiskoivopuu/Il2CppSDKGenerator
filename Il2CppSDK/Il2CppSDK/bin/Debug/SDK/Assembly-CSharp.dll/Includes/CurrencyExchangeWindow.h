#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class CurrencyExchangeWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyExchangeWindow"));
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
	template <typename T = uintptr_t> T& _sellBtn() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _resetLimitBtn() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = TooltipTrigger*> T& _infoTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& _bottomDescription() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& _sliderPanel() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& _slider() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& _sliderText() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& _sliderConfirmButton() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& _pointsLimitText() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& _rewardCountText() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& _rewardCurrencyIcon() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = InventoryItemDraggable*> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = InventorySlot*> T& CurrencySlot() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = InventorySlot*> T& BuffSlot() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& BuffPercentText() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& BuffPercentIcon() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& BuffPercentCanvaGroup() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = float> T& InactivePercentAlpha() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = Nullable1int32_t>*> T& _selectedExchangeSum() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = Nullable1int32_t>*> T& _limit() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = bool> T& _exchangeSuccessful() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = bool> T& _isDailyLimitReached() {
		return *(T*)((uintptr_t)this + 0x20D);
	}
	template <typename T = int32_t> T& _lastRewardCurrencyCount() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = HashSet1Il2CppString*>*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = int32_t> T& _currencyDiff() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = int32_t> T& _currencyAvatarSlotId() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = bool> T& _sendExchange() {
		return *(T*)((uintptr_t)this + 0x228);
	}

	template <typename T = HashSet1Il2CppString*>*> T GetNeedResources() {
		return ((T (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD12FC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD1658))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD18B4))(this);
	}
	template <typename T = void> T UpdateFakeInventory() {
		return ((T (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD28A0))(this);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(CurrencyExchangeWindow*, IInventoryItem*))(Il2CppBase() + 0x1BD2F74))(this, item);
	}
	template <typename T = void> T OnDrop(IInventoryItem* item) {
		return ((T (*)(CurrencyExchangeWindow*, IInventoryItem*))(Il2CppBase() + 0x1BD39F4))(this, item);
	}
	template <typename T = void> T UpdateBuffInventory() {
		return ((T (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD4060))(this);
	}
	template <typename T = bool> T UpdateInventoryEntity(InventorySlotEntity* inventoryEntity) {
		return ((T (*)(CurrencyExchangeWindow*, InventorySlotEntity*))(Il2CppBase() + 0x1BD439C))(this, inventoryEntity);
	}
	template <typename T = void> T OnSliderConfirm() {
		return ((T (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD4594))(this);
	}
	template <typename T = void> T OnSlideValueChanged(float value) {
		return ((T (*)(CurrencyExchangeWindow*, float))(Il2CppBase() + 0x1BD38F0))(this, value);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(CurrencyExchangeWindow*, float))(Il2CppBase() + 0x1BD45B4))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD4EDC))(this);
	}
	template <typename T = void> T OnSellButtonClicked() {
		return ((T (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD5200))(this);
	}
	template <typename T = void> T OnCloseButtonClicked() {
		return ((T (*)(CurrencyExchangeWindow*))(Il2CppBase() + 0x1BD5308))(this);
	}
	template <typename T = void> T OnExchangeResult(int32_t reward, Il2CppString* errorMsg) {
		return ((T (*)(CurrencyExchangeWindow*, int32_t, Il2CppString*))(Il2CppBase() + 0x1BD5318))(this, reward, errorMsg);
	}

};

