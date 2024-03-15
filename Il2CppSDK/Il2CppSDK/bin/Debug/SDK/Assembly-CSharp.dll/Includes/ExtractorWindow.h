#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class ExtractorWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractorWindow"));
	}

	template <typename R = uintptr_t> R& InfoBtn() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& ExtractBtn() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& TakeAllBtn() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& TakeBtn() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& UpgradeBtn() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& CaptionText() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& DescriptionText() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& CloseTimer() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& TimerText() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& BottomDescriptionText() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& ProgressBar() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = InventorySlot*> R& RewardSlot() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	 Il2CppList<InventorySlot*>*& ResourcesSlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0x1B0);
	}
	template <typename R = InventoryItemDraggable*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = uintptr_t> R& UpgradePanel() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = uintptr_t> R& UpgradePanelButton() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = uintptr_t> R& UpgradeCloseButton() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = uintptr_t> R& UpgradeBackButton() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	template <typename R = uintptr_t> R& UpgradeItemsContainer() {
		return *(R*)((uintptr_t)this + 0x1E0);
	}
	template <typename R = RecipeSlotView*> R& UpgradeItemViewPrefab() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = uintptr_t> R& UpgradeFloorError() {
		return *(R*)((uintptr_t)this + 0x1F0);
	}
	template <typename R = uintptr_t> R& UpgradeFloorErrorText() {
		return *(R*)((uintptr_t)this + 0x1F8);
	}
	template <typename R = uintptr_t> R& UpgradeCaptioText() {
		return *(R*)((uintptr_t)this + 0x200);
	}
	template <typename R = uintptr_t> R& UpgradeText() {
		return *(R*)((uintptr_t)this + 0x208);
	}
	template <typename R = uintptr_t> R& InfoPanel() {
		return *(R*)((uintptr_t)this + 0x210);
	}
	template <typename R = uintptr_t> R& InfoPanelText() {
		return *(R*)((uintptr_t)this + 0x218);
	}
	template <typename R = uintptr_t> R& InfoPanelTitle() {
		return *(R*)((uintptr_t)this + 0x220);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& InfoResourceViews() {
		return *(R*)((uintptr_t)this + 0x228);
	}
	template <typename R = uintptr_t> R& CheatsPanel() {
		return *(R*)((uintptr_t)this + 0x230);
	}
	template <typename R = uintptr_t> R& ResetCheatButton() {
		return *(R*)((uintptr_t)this + 0x238);
	}
	template <typename R = uintptr_t> R& MyCheatButton() {
		return *(R*)((uintptr_t)this + 0x240);
	}
	template <typename R = uintptr_t> R& EnemyCheatButton() {
		return *(R*)((uintptr_t)this + 0x248);
	}
	template <typename R = uintptr_t> R& SpeedUpCheatButton() {
		return *(R*)((uintptr_t)this + 0x250);
	}
	template <typename R = InventorySlotEntity*> R& robbedSlotEntity() {
		return *(R*)((uintptr_t)this + 0x258);
	}
	 Il2CppList<InventorySlotEntity*>*& robberFakeResourceSlots() {
		return *(Il2CppList<InventorySlotEntity*>**)((uintptr_t)this + 0x260);
	}
	template <typename R = int32_t> R& resourcesCount() {
		return *(R*)((uintptr_t)this + 0x268);
	}
	template <typename R = bool> R& oldSameClan() {
		return *(R*)((uintptr_t)this + 0x26C);
	}
	template <typename R = int32_t> R& grade() {
		return *(R*)((uintptr_t)this + 0x270);
	}
	 HashSet1Il2CppString*>*& needResourcesResult() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x278);
	}

	 HashSet1Il2CppString*>* GetNeedResources() {
		return ((HashSet1Il2CppString*>* (*)(ExtractorWindow*))(Il2CppBase() + 0x168BCF0))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(ExtractorWindow*))(Il2CppBase() + 0x168BE14))(this);
	}
	template <typename R = void> R UpdateCloseTimer(GameEntity* target) {
		return ((R (*)(ExtractorWindow*, GameEntity*))(Il2CppBase() + 0x168CE88))(this, target);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(ExtractorWindow*, IInventoryItem*))(Il2CppBase() + 0x168D0AC))(this, item);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(ExtractorWindow*, IInventoryItem*))(Il2CppBase() + 0x168DF18))(this, item);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ExtractorWindow*))(Il2CppBase() + 0x168E054))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(ExtractorWindow*))(Il2CppBase() + 0x168E19C))(this);
	}
	template <typename R = void> R CloseUpgradePanel() {
		return ((R (*)(ExtractorWindow*))(Il2CppBase() + 0x168E404))(this);
	}
	template <typename R = void> R ShowUpgradePanel() {
		return ((R (*)(ExtractorWindow*))(Il2CppBase() + 0x168E424))(this);
	}
	template <typename R = void> R UpgradeExtractor() {
		return ((R (*)(ExtractorWindow*))(Il2CppBase() + 0x168EAE4))(this);
	}
	template <typename R = bool> R ProcessMoveItem(IItem* item, Nullable1int32_t>* toSlotId) {
		return ((R (*)(ExtractorWindow*, IItem*, Nullable1int32_t>*))(Il2CppBase() + 0x168D12C))(this, item, toSlotId);
	}
	template <typename R = void> R StartExtraction() {
		return ((R (*)(ExtractorWindow*))(Il2CppBase() + 0x168EC9C))(this);
	}
	template <typename R = void> R TakeReward() {
		return ((R (*)(ExtractorWindow*))(Il2CppBase() + 0x168F3B0))(this);
	}
	template <typename R = void> R ShowInfo() {
		return ((R (*)(ExtractorWindow*))(Il2CppBase() + 0x168F6A4))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ExtractorWindow*, float))(Il2CppBase() + 0x168FADC))(this, deltaTime);
	}
	template <typename R = void> R UpdateRobberResourceUI(ICommonUnityWorld* world, GameEntity* target, ExtractComponent* extractComponent, int32_t newResourceCount) {
		return ((R (*)(ExtractorWindow*, ICommonUnityWorld*, GameEntity*, ExtractComponent*, int32_t))(Il2CppBase() + 0x1690194))(this, world, target, extractComponent, newResourceCount);
	}
	template <typename R = void> R UpdateInventory(ICommonUnityWorld* world, GameEntity* target, bool sameClan, ExtractComponent* extractComponent) {
		return ((R (*)(ExtractorWindow*, ICommonUnityWorld*, GameEntity*, bool, ExtractComponent*))(Il2CppBase() + 0x168C6FC))(this, world, target, sameClan, extractComponent);
	}
	template <typename R = void> R UpdateExtractOnWorkUI(ICommonUnityWorld* world, GameEntity* target, ExtractComponent* extractComponent, bool sameClan) {
		return ((R (*)(ExtractorWindow*, ICommonUnityWorld*, GameEntity*, ExtractComponent*, bool))(Il2CppBase() + 0x1690408))(this, world, target, extractComponent, sameClan);
	}
	template <typename R = void> R UpdateExtractOnFinishUI(ICommonUnityWorld* world, GameEntity* target, ExtractComponent* extractComponent, bool sameClan) {
		return ((R (*)(ExtractorWindow*, ICommonUnityWorld*, GameEntity*, ExtractComponent*, bool))(Il2CppBase() + 0x1690BBC))(this, world, target, extractComponent, sameClan);
	}
	template <typename R = void> R ShowExtractionPrepareUI(ICommonUnityWorld* world, GameEntity* target, ExtractComponent* extractComponent, bool wasRobbed, bool sameClan) {
		return ((R (*)(ExtractorWindow*, ICommonUnityWorld*, GameEntity*, ExtractComponent*, bool, bool))(Il2CppBase() + 0x1691090))(this, world, target, extractComponent, wasRobbed, sameClan);
	}
	template <typename R = void> R SetRewardSlotAssess(bool locked, bool dragged) {
		return ((R (*)(ExtractorWindow*, bool, bool))(Il2CppBase() + 0x1691800))(this, locked, dragged);
	}
	template <typename R = void> R SetResourcesSlotAssess(bool locked, bool dragged) {
		return ((R (*)(ExtractorWindow*, bool, bool))(Il2CppBase() + 0x16918C0))(this, locked, dragged);
	}
	template <typename R = int32_t> R CalculateResourceCount(ICommonUnityWorld* world, GameEntity* target) {
		return ((R (*)(ExtractorWindow*, ICommonUnityWorld*, GameEntity*))(Il2CppBase() + 0x168FF4C))(this, world, target);
	}
	template <typename R = void> R StartExtractionb__52_0(int32_t i) {
		return ((R (*)(ExtractorWindow*, int32_t))(Il2CppBase() + 0x1691B68))(this, i);
	}

};

