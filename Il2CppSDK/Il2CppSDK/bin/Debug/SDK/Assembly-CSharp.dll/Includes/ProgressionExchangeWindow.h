#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class ProgressionExchangeWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProgressionExchangeWindow"));
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
	template <typename T = InventoryContainer*> T& _capInventory() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _sellBtn() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& _infoBtn() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& _resetLimitBtn() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = StandartButton*> T& _useButton() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& resourceCollectedBlock() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& buttonLockPanel() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppList<ProgressionExchangeRewardView*>*> T& rewards() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& progressImages() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& pointsAnimsSpeed() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& scrollMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& scrollRect() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = RequiredResourcesView*> T& requiredResourcesView() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& _pointsRewardText() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = HashSet1int32_t>*> T& _lockedSet() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = int32_t> T& _selectedExchangeSum() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = int32_t> T& _limit() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = bool> T& _exchangeSuccessful() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = bool> T& _sendExchange() {
		return *(T*)((uintptr_t)this + 0x1F1);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& _prices() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = bool> T& _considerDurability() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = bool> T& _anyReward() {
		return *(T*)((uintptr_t)this + 0x201);
	}
	template <typename T = int32_t> T& _currentVisualPoints() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = int32_t> T& _fromPoints() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = int32_t> T& _toPoints() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = float> T& _changeTime() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = HashSet1Il2CppString*>*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& _movingToNextScrollPos() {
		return *(T*)((uintptr_t)this + 0x220);
	}

	template <typename T = HashSet1Il2CppString*>*> T GetNeedResources() {
		return ((T (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E5F1C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E60B4))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E6264))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E73A4))(this);
	}
	template <typename T = void> T OnAnyTabClick(TabType* tabType) {
		return ((T (*)(ProgressionExchangeWindow*, TabType*))(Il2CppBase() + 0x16E7574))(this, tabType);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ProgressionExchangeWindow*, float))(Il2CppBase() + 0x16E7594))(this, deltaTime);
	}
	template <typename T = uintptr_t> T MovingToNextScrollPos(float nextPos) {
		return ((T (*)(ProgressionExchangeWindow*, float))(Il2CppBase() + 0x16E88F4))(this, nextPos);
	}
	template <typename T = bool> T IsAnyRewards() {
		return ((T (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E8770))(this);
	}
	template <typename T = bool> T IsExchangeLocked() {
		return ((T (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E897C))(this);
	}
	template <typename T = void> T OnSellButtonClicked() {
		return ((T (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E89D8))(this);
	}
	template <typename T = void> T OnInfoButtonClicked() {
		return ((T (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E9258))(this);
	}
	template <typename T = void> T OnCloseButtonClicked() {
		return ((T (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E95F4))(this);
	}
	template <typename T = void> T CreateFakeInventory(int32_t count) {
		return ((T (*)(ProgressionExchangeWindow*, int32_t))(Il2CppBase() + 0x16E7284))(this, count);
	}
	template <typename T = bool> T IsInventoryEntitySelected(int32_t id) {
		return ((T (*)(ProgressionExchangeWindow*, int32_t))(Il2CppBase() + 0x16E9604))(this, id);
	}
	template <typename T = void> T OnSelect(InventorySlotEntity* selectedInventory, InventorySlot* selectedSlot) {
		return ((T (*)(ProgressionExchangeWindow*, InventorySlotEntity*, InventorySlot*))(Il2CppBase() + 0x16E9840))(this, selectedInventory, selectedSlot);
	}
	template <typename T = void> T OnDrop(IInventoryItem* item) {
		return ((T (*)(ProgressionExchangeWindow*, IInventoryItem*))(Il2CppBase() + 0x16E9AD4))(this, item);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(ProgressionExchangeWindow*, IInventoryItem*))(Il2CppBase() + 0x16EA508))(this, item);
	}
	template <typename T = bool> T IsItemInFilter(ItemEntity* entity) {
		return ((T (*)(ProgressionExchangeWindow*, ItemEntity*))(Il2CppBase() + 0x16E9A44))(this, entity);
	}
	template <typename T = void> T UpdateFakeInventory() {
		return ((T (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E8204))(this);
	}
	template <typename T = bool> T UpdateInventoryEntity(InventorySlotEntity* inventoryEntity) {
		return ((T (*)(ProgressionExchangeWindow*, InventorySlotEntity*))(Il2CppBase() + 0x16EA978))(this, inventoryEntity);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16EABF4))(this);
	}
	template <typename T = void> T OnExchangeResult(int32_t reward, Il2CppString* errorMsg) {
		return ((T (*)(ProgressionExchangeWindow*, int32_t, Il2CppString*))(Il2CppBase() + 0x16EAF18))(this, reward, errorMsg);
	}
	template <typename T = void> T OnSellButtonClickedg__SendExchange|44_0() {
		return ((T (*)(ProgressionExchangeWindow*))(Il2CppBase() + 0x16E8ECC))(this);
	}
	template <typename T = void> T OnSellButtonClickedb__44_1(int32_t buttonIndex) {
		return ((T (*)(ProgressionExchangeWindow*, int32_t))(Il2CppBase() + 0x16EB450))(this, buttonIndex);
	}

};

