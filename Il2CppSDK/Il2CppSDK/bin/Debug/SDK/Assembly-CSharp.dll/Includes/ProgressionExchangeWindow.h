#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class ProgressionExchangeWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProgressionExchangeWindow"));
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
	template <typename R = uintptr_t> R& _timer() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& _sellBtn() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& _infoBtn() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& _resetLimitBtn() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = StandartButton*> R& _useButton() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& resourceCollectedBlock() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& buttonLockPanel() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	 Il2CppList<ProgressionExchangeRewardView*>*& rewards() {
		return *(Il2CppList<ProgressionExchangeRewardView*>**)((uintptr_t)this + 0x1B0);
	}
	 Il2CppList<uintptr_t>*& progressImages() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x1B8);
	}
	template <typename R = float> R& pointsAnimsSpeed() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = float> R& scrollMoveSpeed() {
		return *(R*)((uintptr_t)this + 0x1C4);
	}
	template <typename R = uintptr_t> R& scrollRect() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = RequiredResourcesView*> R& requiredResourcesView() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = uintptr_t> R& _pointsRewardText() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	 HashSet1<int32_t>*& _lockedSet() {
		return *(HashSet1<int32_t>**)((uintptr_t)this + 0x1E0);
	}
	template <typename R = int32_t> R& _selectedExchangeSum() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = int32_t> R& _limit() {
		return *(R*)((uintptr_t)this + 0x1EC);
	}
	template <typename R = bool> R& _exchangeSuccessful() {
		return *(R*)((uintptr_t)this + 0x1F0);
	}
	template <typename R = bool> R& _sendExchange() {
		return *(R*)((uintptr_t)this + 0x1F1);
	}
	 Il2CppDictionary<Il2CppString*, int32_t>*& _prices() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0x1F8);
	}
	template <typename R = bool> R& _considerDurability() {
		return *(R*)((uintptr_t)this + 0x200);
	}
	template <typename R = bool> R& _anyReward() {
		return *(R*)((uintptr_t)this + 0x201);
	}
	template <typename R = int32_t> R& _currentVisualPoints() {
		return *(R*)((uintptr_t)this + 0x204);
	}
	template <typename R = int32_t> R& _fromPoints() {
		return *(R*)((uintptr_t)this + 0x208);
	}
	template <typename R = int32_t> R& _toPoints() {
		return *(R*)((uintptr_t)this + 0x20C);
	}
	template <typename R = float> R& _changeTime() {
		return *(R*)((uintptr_t)this + 0x210);
	}
	 HashSet1<Il2CppString*>*& _needResources() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x218);
	}
	template <typename R = uintptr_t> R& _movingToNextScrollPos() {
		return *(R*)((uintptr_t)this + 0x220);
	}

	 HashSet1<Il2CppString*>* GetNeedResources() {
		return ((HashSet1<Il2CppString*>* (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E5F1C))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E60B4))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E6264))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E73A4))(this);
	}
	template <typename R = void> R OnAnyTabClick(TabType tabType) {
		return ((R (*)(ProgressionExchangeWindow*, TabType))(Il2CppBase() + 0x16E7574))(this, tabType);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ProgressionExchangeWindow*, float))(Il2CppBase() + 0x16E7594))(this, deltaTime);
	}
	template <typename R = uintptr_t> R MovingToNextScrollPos(float nextPos) {
		return ((R (*)(ProgressionExchangeWindow*, float))(Il2CppBase() + 0x16E88F4))(this, nextPos);
	}
	template <typename R = bool> R IsAnyRewards() {
		return ((R (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E8770))(this);
	}
	template <typename R = bool> R IsExchangeLocked() {
		return ((R (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E897C))(this);
	}
	template <typename R = void> R OnSellButtonClicked() {
		return ((R (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E89D8))(this);
	}
	template <typename R = void> R OnInfoButtonClicked() {
		return ((R (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E9258))(this);
	}
	template <typename R = void> R OnCloseButtonClicked() {
		return ((R (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E95F4))(this);
	}
	template <typename R = void> R CreateFakeInventory(int32_t count) {
		return ((R (*)(ProgressionExchangeWindow*, int32_t))(Il2CppBase() + 0x16E7284))(this, count);
	}
	template <typename R = bool> R IsInventoryEntitySelected(int32_t id) {
		return ((R (*)(ProgressionExchangeWindow*, int32_t))(Il2CppBase() + 0x16E9604))(this, id);
	}
	template <typename R = void> R OnSelect(InventorySlotEntity* selectedInventory, InventorySlot* selectedSlot) {
		return ((R (*)(ProgressionExchangeWindow*, InventorySlotEntity*, InventorySlot*))(Il2CppBase() + 0x16E9840))(this, selectedInventory, selectedSlot);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(ProgressionExchangeWindow*, IInventoryItem*))(Il2CppBase() + 0x16E9AD4))(this, item);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(ProgressionExchangeWindow*, IInventoryItem*))(Il2CppBase() + 0x16EA508))(this, item);
	}
	template <typename R = bool> R IsItemInFilter(ItemEntity* entity) {
		return ((R (*)(ProgressionExchangeWindow*, ItemEntity*))(Il2CppBase() + 0x16E9A44))(this, entity);
	}
	template <typename R = void> R UpdateFakeInventory() {
		return ((R (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E8204))(this);
	}
	template <typename R = bool> R UpdateInventoryEntity(InventorySlotEntity* inventoryEntity) {
		return ((R (*)(ProgressionExchangeWindow*, InventorySlotEntity*))(Il2CppBase() + 0x16EA978))(this, inventoryEntity);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16EABF4))(this);
	}
	template <typename R = void> R OnExchangeResult(int32_t reward, Il2CppString* errorMsg) {
		return ((R (*)(ProgressionExchangeWindow*, int32_t, Il2CppString*))(Il2CppBase() + 0x16EAF18))(this, reward, errorMsg);
	}
	template <typename R = void> R OnSellButtonClickedg__SendExchange|44_0() {
		return ((R (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E8ECC))(this);
	}
	template <typename R = void> R OnSellButtonClickedb__44_1(int32_t buttonIndex) {
		return ((R (*)(ProgressionExchangeWindow*, int32_t))(Il2CppBase() + 0x16EB450))(this, buttonIndex);
	}

};

