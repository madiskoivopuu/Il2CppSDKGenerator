#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class AccumulativeExchangeWindow: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccumulativeExchangeWindow"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _backlight() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _capInventory() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _sellBtn() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _getRewardBtn() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& _speedUpBtn() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& _infoTrigger() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& resourceCollectedBlock() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rewards() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& progressImages() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rewardsTooltipTriggers() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& pointsAnimsSpeed() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& _accumulativeRewardIcon() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& _accumulativeRewardProgressCount() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& _accumulativeRewardProgressImage() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& _accumulativeRewardGlow() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& _grayscaleMaterial() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& _accumulativeRewardTrigger() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& _rewardsPanel() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& _progressPanel() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& _progressText() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& _rewardSlot() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& _timerRewardText() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& _rewardProgressImage() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& _resetAllBtn() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uintptr_t> T& _speedUpCheatBtn() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = void*> T& _lockedSet() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = int32_t> T& _selectedExchangeSum() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = int32_t> T& _limit() {
		return *(T*)((uintptr_t)this + 0x23C);
	}
	template <typename T = bool> T& _exchangeSuccessful() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = bool> T& _sendExchange() {
		return *(T*)((uintptr_t)this + 0x241);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& _prices() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = bool> T& _considerDurability() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = bool> T& _anyReward() {
		return *(T*)((uintptr_t)this + 0x251);
	}
	template <typename T = int32_t> T& _currentVisualPoints() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = int32_t> T& _fromPoints() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = int32_t> T& _toPoints() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = int32_t> T& _fromAccumulativePoints() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = int32_t> T& _toAccumulativePoints() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = float> T& _changeTime() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = uintptr_t> T& _accumulativeRewardGlowColor() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = bool> T& _accumulativeRewardLastAccessible() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = void*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x280);
	}

	template <typename T = void*> T GetNeedResources() {
		return ((T (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18DF970))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18DFB08))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18DFDF4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E1D1C))(this);
	}
	template <typename T = void> T OnAnyTabClick(uintptr_t tabType) {
		return ((T (*)(AccumulativeExchangeWindow*, uintptr_t))(Il2CppBase() + 0x18E1EEC))(this, tabType);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(AccumulativeExchangeWindow*, float))(Il2CppBase() + 0x18E2214))(this, deltaTime);
	}
	template <typename T = void> T UpdateResultPanel(uintptr_t world, uintptr_t target) {
		return ((T (*)(AccumulativeExchangeWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18E1304))(this, world, target);
	}
	template <typename T = bool> T IsAnyRewards(uintptr_t target) {
		return ((T (*)(AccumulativeExchangeWindow*, uintptr_t))(Il2CppBase() + 0x18E3288))(this, target);
	}
	template <typename T = bool> T IsExchangeLocked() {
		return ((T (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E340C))(this);
	}
	template <typename T = void> T OnSellButtonClicked() {
		return ((T (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E3468))(this);
	}
	template <typename T = void> T OnGetRewardButtonClicked() {
		return ((T (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E3A28))(this);
	}
	template <typename T = void> T OnSpeedUpButtonClicked() {
		return ((T (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E3F3C))(this);
	}
	template <typename T = void> T OnCloseButtonClicked() {
		return ((T (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E4234))(this);
	}
	template <typename T = void> T SendGetReward(int32_t targetSlotId) {
		return ((T (*)(AccumulativeExchangeWindow*, int32_t))(Il2CppBase() + 0x18E3A30))(this, targetSlotId);
	}
	template <typename T = void> T CreateFakeInventory(int32_t count) {
		return ((T (*)(AccumulativeExchangeWindow*, int32_t))(Il2CppBase() + 0x18E11E4))(this, count);
	}
	template <typename T = bool> T IsInventoryEntitySelected(int32_t id) {
		return ((T (*)(AccumulativeExchangeWindow*, int32_t))(Il2CppBase() + 0x18E4244))(this, id);
	}
	template <typename T = void> T OnSelect(uintptr_t selectedInventory, uintptr_t selectedSlot) {
		return ((T (*)(AccumulativeExchangeWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18E4480))(this, selectedInventory, selectedSlot);
	}
	template <typename T = void> T OnDrop(uintptr_t item) {
		return ((T (*)(AccumulativeExchangeWindow*, uintptr_t))(Il2CppBase() + 0x18E4708))(this, item);
	}
	template <typename T = void> T OnDoubleClick(uintptr_t item) {
		return ((T (*)(AccumulativeExchangeWindow*, uintptr_t))(Il2CppBase() + 0x18E5784))(this, item);
	}
	template <typename T = void> T UpdateCurrentTab(uintptr_t slot) {
		return ((T (*)(AccumulativeExchangeWindow*, uintptr_t))(Il2CppBase() + 0x18E6010))(this, slot);
	}
	template <typename T = bool> T CheckIfItemFromResourcesContainer(int32_t id) {
		return ((T (*)(AccumulativeExchangeWindow*, int32_t))(Il2CppBase() + 0x18E5620))(this, id);
	}
	template <typename T = bool> T IsItemInFilter(uintptr_t entity) {
		return ((T (*)(AccumulativeExchangeWindow*, uintptr_t))(Il2CppBase() + 0x18E4678))(this, entity);
	}
	template <typename T = void> T UpdateFakeInventory() {
		return ((T (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E2D1C))(this);
	}
	template <typename T = bool> T UpdateInventoryEntity(uintptr_t inventoryEntity) {
		return ((T (*)(AccumulativeExchangeWindow*, uintptr_t))(Il2CppBase() + 0x18E6014))(this, inventoryEntity);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E6288))(this);
	}
	template <typename T = void> T OnExchangeResult(int32_t reward, Il2CppString* errorMsg) {
		return ((T (*)(AccumulativeExchangeWindow*, int32_t, Il2CppString*))(Il2CppBase() + 0x18E65AC))(this, reward, errorMsg);
	}
	template <typename T = void> T OnUpdateDrawb__52_0() {
		return ((T (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E6BA4))(this);
	}

};

}
