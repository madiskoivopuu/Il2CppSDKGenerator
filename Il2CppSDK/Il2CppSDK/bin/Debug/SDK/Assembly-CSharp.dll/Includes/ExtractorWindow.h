#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class ExtractorWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractorWindow"));
	}

	template <typename T = uintptr_t> T& InfoBtn() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& ExtractBtn() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& TakeAllBtn() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& TakeBtn() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& UpgradeBtn() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& CaptionText() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& DescriptionText() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& CloseTimer() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& TimerText() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& BottomDescriptionText() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = InventorySlot*> T& RewardSlot() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppList<InventorySlot*>*> T& ResourcesSlots() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = InventoryItemDraggable*> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& UpgradePanel() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& UpgradePanelButton() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& UpgradeCloseButton() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& UpgradeBackButton() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& UpgradeItemsContainer() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = RecipeSlotView*> T& UpgradeItemViewPrefab() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& UpgradeFloorError() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& UpgradeFloorErrorText() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& UpgradeCaptioText() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& UpgradeText() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& InfoPanel() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& InfoPanelText() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& InfoPanelTitle() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& InfoResourceViews() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = uintptr_t> T& CheatsPanel() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = uintptr_t> T& ResetCheatButton() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& MyCheatButton() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& EnemyCheatButton() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& SpeedUpCheatButton() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = InventorySlotEntity*> T& robbedSlotEntity() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = Il2CppList<InventorySlotEntity*>*> T& robberFakeResourceSlots() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = int32_t> T& resourcesCount() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = bool> T& oldSameClan() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = int32_t> T& grade() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = HashSet1Il2CppString*>*> T& needResourcesResult() {
		return *(T*)((uintptr_t)this + 0x278);
	}

	template <typename T = HashSet1Il2CppString*>*> T GetNeedResources() {
		return ((T (*)(ExtractorWindow*))(Il2CppBase() + 0x168BCF0))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(ExtractorWindow*))(Il2CppBase() + 0x168BE14))(this);
	}
	template <typename T = void> T UpdateCloseTimer(GameEntity* target) {
		return ((T (*)(ExtractorWindow*, GameEntity*))(Il2CppBase() + 0x168CE88))(this, target);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(ExtractorWindow*, IInventoryItem*))(Il2CppBase() + 0x168D0AC))(this, item);
	}
	template <typename T = void> T OnDrop(IInventoryItem* item) {
		return ((T (*)(ExtractorWindow*, IInventoryItem*))(Il2CppBase() + 0x168DF18))(this, item);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ExtractorWindow*))(Il2CppBase() + 0x168E054))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(ExtractorWindow*))(Il2CppBase() + 0x168E19C))(this);
	}
	template <typename T = void> T CloseUpgradePanel() {
		return ((T (*)(ExtractorWindow*))(Il2CppBase() + 0x168E404))(this);
	}
	template <typename T = void> T ShowUpgradePanel() {
		return ((T (*)(ExtractorWindow*))(Il2CppBase() + 0x168E424))(this);
	}
	template <typename T = void> T UpgradeExtractor() {
		return ((T (*)(ExtractorWindow*))(Il2CppBase() + 0x168EAE4))(this);
	}
	template <typename T = bool> T ProcessMoveItem(IItem* item, Nullable1int32_t>* toSlotId) {
		return ((T (*)(ExtractorWindow*, IItem*, Nullable1int32_t>*))(Il2CppBase() + 0x168D12C))(this, item, toSlotId);
	}
	template <typename T = void> T StartExtraction() {
		return ((T (*)(ExtractorWindow*))(Il2CppBase() + 0x168EC9C))(this);
	}
	template <typename T = void> T TakeReward() {
		return ((T (*)(ExtractorWindow*))(Il2CppBase() + 0x168F3B0))(this);
	}
	template <typename T = void> T ShowInfo() {
		return ((T (*)(ExtractorWindow*))(Il2CppBase() + 0x168F6A4))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ExtractorWindow*, float))(Il2CppBase() + 0x168FADC))(this, deltaTime);
	}
	template <typename T = void> T UpdateRobberResourceUI(ICommonUnityWorld* world, GameEntity* target, ExtractComponent* extractComponent, int32_t newResourceCount) {
		return ((T (*)(ExtractorWindow*, ICommonUnityWorld*, GameEntity*, ExtractComponent*, int32_t))(Il2CppBase() + 0x1690194))(this, world, target, extractComponent, newResourceCount);
	}
	template <typename T = void> T UpdateInventory(ICommonUnityWorld* world, GameEntity* target, bool sameClan, ExtractComponent* extractComponent) {
		return ((T (*)(ExtractorWindow*, ICommonUnityWorld*, GameEntity*, bool, ExtractComponent*))(Il2CppBase() + 0x168C6FC))(this, world, target, sameClan, extractComponent);
	}
	template <typename T = void> T UpdateExtractOnWorkUI(ICommonUnityWorld* world, GameEntity* target, ExtractComponent* extractComponent, bool sameClan) {
		return ((T (*)(ExtractorWindow*, ICommonUnityWorld*, GameEntity*, ExtractComponent*, bool))(Il2CppBase() + 0x1690408))(this, world, target, extractComponent, sameClan);
	}
	template <typename T = void> T UpdateExtractOnFinishUI(ICommonUnityWorld* world, GameEntity* target, ExtractComponent* extractComponent, bool sameClan) {
		return ((T (*)(ExtractorWindow*, ICommonUnityWorld*, GameEntity*, ExtractComponent*, bool))(Il2CppBase() + 0x1690BBC))(this, world, target, extractComponent, sameClan);
	}
	template <typename T = void> T ShowExtractionPrepareUI(ICommonUnityWorld* world, GameEntity* target, ExtractComponent* extractComponent, bool wasRobbed, bool sameClan) {
		return ((T (*)(ExtractorWindow*, ICommonUnityWorld*, GameEntity*, ExtractComponent*, bool, bool))(Il2CppBase() + 0x1691090))(this, world, target, extractComponent, wasRobbed, sameClan);
	}
	template <typename T = void> T SetRewardSlotAssess(bool locked, bool dragged) {
		return ((T (*)(ExtractorWindow*, bool, bool))(Il2CppBase() + 0x1691800))(this, locked, dragged);
	}
	template <typename T = void> T SetResourcesSlotAssess(bool locked, bool dragged) {
		return ((T (*)(ExtractorWindow*, bool, bool))(Il2CppBase() + 0x16918C0))(this, locked, dragged);
	}
	template <typename T = int32_t> T CalculateResourceCount(ICommonUnityWorld* world, GameEntity* target) {
		return ((T (*)(ExtractorWindow*, ICommonUnityWorld*, GameEntity*))(Il2CppBase() + 0x168FF4C))(this, world, target);
	}
	template <typename T = void> T StartExtractionb__52_0(int32_t i) {
		return ((T (*)(ExtractorWindow*, int32_t))(Il2CppBase() + 0x1691B68))(this, i);
	}

};

