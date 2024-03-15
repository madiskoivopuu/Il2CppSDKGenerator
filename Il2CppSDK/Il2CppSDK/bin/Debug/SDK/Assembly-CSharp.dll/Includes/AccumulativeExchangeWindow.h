#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class AccumulativeExchangeWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccumulativeExchangeWindow"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& _backlight() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = InventoryContainer*> R& _capInventory() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = StandartButton*> R& _sellBtn() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = StandartButton*> R& _getRewardBtn() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = StandartButton*> R& _speedUpBtn() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = TooltipTrigger*> R& _infoTrigger() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& resourceCollectedBlock() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	 Il2CppList<ProgressionExchangeRewardView*>*& rewards() {
		return *(Il2CppList<ProgressionExchangeRewardView*>**)((uintptr_t)this + 0x1A0);
	}
	 Il2CppList<uintptr_t>*& progressImages() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x1A8);
	}
	 Il2CppList<TooltipTrigger*>*& rewardsTooltipTriggers() {
		return *(Il2CppList<TooltipTrigger*>**)((uintptr_t)this + 0x1B0);
	}
	template <typename R = float> R& pointsAnimsSpeed() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = uintptr_t> R& _accumulativeRewardIcon() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = uintptr_t> R& _accumulativeRewardProgressCount() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = uintptr_t> R& _accumulativeRewardProgressImage() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = uintptr_t> R& _accumulativeRewardGlow() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	template <typename R = uintptr_t> R& _grayscaleMaterial() {
		return *(R*)((uintptr_t)this + 0x1E0);
	}
	template <typename R = TooltipTrigger*> R& _accumulativeRewardTrigger() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = uintptr_t> R& _rewardsPanel() {
		return *(R*)((uintptr_t)this + 0x1F0);
	}
	template <typename R = uintptr_t> R& _progressPanel() {
		return *(R*)((uintptr_t)this + 0x1F8);
	}
	template <typename R = uintptr_t> R& _progressText() {
		return *(R*)((uintptr_t)this + 0x200);
	}
	template <typename R = InventorySlot*> R& _rewardSlot() {
		return *(R*)((uintptr_t)this + 0x208);
	}
	template <typename R = uintptr_t> R& _timerRewardText() {
		return *(R*)((uintptr_t)this + 0x210);
	}
	template <typename R = uintptr_t> R& _rewardProgressImage() {
		return *(R*)((uintptr_t)this + 0x218);
	}
	template <typename R = uintptr_t> R& _resetAllBtn() {
		return *(R*)((uintptr_t)this + 0x220);
	}
	template <typename R = uintptr_t> R& _speedUpCheatBtn() {
		return *(R*)((uintptr_t)this + 0x228);
	}
	 HashSet1int32_t>*& _lockedSet() {
		return *(HashSet1int32_t>**)((uintptr_t)this + 0x230);
	}
	template <typename R = int32_t> R& _selectedExchangeSum() {
		return *(R*)((uintptr_t)this + 0x238);
	}
	template <typename R = int32_t> R& _limit() {
		return *(R*)((uintptr_t)this + 0x23C);
	}
	template <typename R = bool> R& _exchangeSuccessful() {
		return *(R*)((uintptr_t)this + 0x240);
	}
	template <typename R = bool> R& _sendExchange() {
		return *(R*)((uintptr_t)this + 0x241);
	}
	 Il2CppDictionary<Il2CppString*, int32_t>*& _prices() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0x248);
	}
	template <typename R = bool> R& _considerDurability() {
		return *(R*)((uintptr_t)this + 0x250);
	}
	template <typename R = bool> R& _anyReward() {
		return *(R*)((uintptr_t)this + 0x251);
	}
	template <typename R = int32_t> R& _currentVisualPoints() {
		return *(R*)((uintptr_t)this + 0x254);
	}
	template <typename R = int32_t> R& _fromPoints() {
		return *(R*)((uintptr_t)this + 0x258);
	}
	template <typename R = int32_t> R& _toPoints() {
		return *(R*)((uintptr_t)this + 0x25C);
	}
	template <typename R = int32_t> R& _fromAccumulativePoints() {
		return *(R*)((uintptr_t)this + 0x260);
	}
	template <typename R = int32_t> R& _toAccumulativePoints() {
		return *(R*)((uintptr_t)this + 0x264);
	}
	template <typename R = float> R& _changeTime() {
		return *(R*)((uintptr_t)this + 0x268);
	}
	template <typename R = uintptr_t> R& _accumulativeRewardGlowColor() {
		return *(R*)((uintptr_t)this + 0x26C);
	}
	template <typename R = bool> R& _accumulativeRewardLastAccessible() {
		return *(R*)((uintptr_t)this + 0x27C);
	}
	 HashSet1Il2CppString*>*& _needResources() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x280);
	}

	 HashSet1Il2CppString*>* GetNeedResources() {
		return ((HashSet1Il2CppString*>* (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18DF970))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18DFB08))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18DFDF4))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E1D1C))(this);
	}
	template <typename R = void> R OnAnyTabClick(TabType* tabType) {
		return ((R (*)(AccumulativeExchangeWindow*, TabType*))(Il2CppBase() + 0x18E1EEC))(this, tabType);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(AccumulativeExchangeWindow*, float))(Il2CppBase() + 0x18E2214))(this, deltaTime);
	}
	template <typename R = void> R UpdateResultPanel(ICommonContexts* world, GameEntity* target) {
		return ((R (*)(AccumulativeExchangeWindow*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x18E1304))(this, world, target);
	}
	template <typename R = bool> R IsAnyRewards(GameEntity* target) {
		return ((R (*)(AccumulativeExchangeWindow*, GameEntity*))(Il2CppBase() + 0x18E3288))(this, target);
	}
	template <typename R = bool> R IsExchangeLocked() {
		return ((R (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E340C))(this);
	}
	template <typename R = void> R OnSellButtonClicked() {
		return ((R (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E3468))(this);
	}
	template <typename R = void> R OnGetRewardButtonClicked() {
		return ((R (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E3A28))(this);
	}
	template <typename R = void> R OnSpeedUpButtonClicked() {
		return ((R (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E3F3C))(this);
	}
	template <typename R = void> R OnCloseButtonClicked() {
		return ((R (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E4234))(this);
	}
	template <typename R = void> R SendGetReward(int32_t targetSlotId) {
		return ((R (*)(AccumulativeExchangeWindow*, int32_t))(Il2CppBase() + 0x18E3A30))(this, targetSlotId);
	}
	template <typename R = void> R CreateFakeInventory(int32_t count) {
		return ((R (*)(AccumulativeExchangeWindow*, int32_t))(Il2CppBase() + 0x18E11E4))(this, count);
	}
	template <typename R = bool> R IsInventoryEntitySelected(int32_t id) {
		return ((R (*)(AccumulativeExchangeWindow*, int32_t))(Il2CppBase() + 0x18E4244))(this, id);
	}
	template <typename R = void> R OnSelect(InventorySlotEntity* selectedInventory, InventorySlot* selectedSlot) {
		return ((R (*)(AccumulativeExchangeWindow*, InventorySlotEntity*, InventorySlot*))(Il2CppBase() + 0x18E4480))(this, selectedInventory, selectedSlot);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(AccumulativeExchangeWindow*, IInventoryItem*))(Il2CppBase() + 0x18E4708))(this, item);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(AccumulativeExchangeWindow*, IInventoryItem*))(Il2CppBase() + 0x18E5784))(this, item);
	}
	template <typename R = void> R UpdateCurrentTab(InventorySlotEntity* slot) {
		return ((R (*)(AccumulativeExchangeWindow*, InventorySlotEntity*))(Il2CppBase() + 0x18E6010))(this, slot);
	}
	template <typename R = bool> R CheckIfItemFromResourcesContainer(int32_t id) {
		return ((R (*)(AccumulativeExchangeWindow*, int32_t))(Il2CppBase() + 0x18E5620))(this, id);
	}
	template <typename R = bool> R IsItemInFilter(ItemEntity* entity) {
		return ((R (*)(AccumulativeExchangeWindow*, ItemEntity*))(Il2CppBase() + 0x18E4678))(this, entity);
	}
	template <typename R = void> R UpdateFakeInventory() {
		return ((R (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E2D1C))(this);
	}
	template <typename R = bool> R UpdateInventoryEntity(InventorySlotEntity* inventoryEntity) {
		return ((R (*)(AccumulativeExchangeWindow*, InventorySlotEntity*))(Il2CppBase() + 0x18E6014))(this, inventoryEntity);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E6288))(this);
	}
	template <typename R = void> R OnExchangeResult(int32_t reward, Il2CppString* errorMsg) {
		return ((R (*)(AccumulativeExchangeWindow*, int32_t, Il2CppString*))(Il2CppBase() + 0x18E65AC))(this, reward, errorMsg);
	}
	template <typename R = void> R OnUpdateDrawb__52_0() {
		return ((R (*)(AccumulativeExchangeWindow*))(Il2CppBase() + 0x18E6BA4))(this);
	}

};

