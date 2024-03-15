#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class OpenGuildBossesWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenGuildBossesWindow"));
	}

	template <typename R = InventoryContainer*> R& _capInventory() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = StandartButton*> R& _infoBtn() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = StandartButton*> R& _donateBtn() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& _selectBossBtn() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& _backlight() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = BossDetailView*> R& _bossDetailView() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = RequiredResourcesView*> R& _requiredResourcesView() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = Il2CppArray<TooltipTrigger*>*> R& _coinsTooltipsTriggers() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& _portalPanel() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& _bossPanel() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& _bossImage() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& _bossName() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = uintptr_t> R& _currentProgressImage() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = uintptr_t> R& _newProgressImage() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = uintptr_t> R& _procProgressImage() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = uintptr_t> R& _portalImage() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = uintptr_t> R& _progressText() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = uintptr_t> R& _donateAnimator() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	template <typename R = uintptr_t> R& _animationCurve() {
		return *(R*)((uintptr_t)this + 0x1E0);
	}
	template <typename R = float> R& StartProgressDuration() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _currencyImgs() {
		return *(R*)((uintptr_t)this + 0x1F0);
	}
	template <typename R = uintptr_t> R& _currencyCountText() {
		return *(R*)((uintptr_t)this + 0x1F8);
	}
	template <typename R = uintptr_t> R& _procText() {
		return *(R*)((uintptr_t)this + 0x200);
	}
	template <typename R = uintptr_t> R& _cheatsPanel() {
		return *(R*)((uintptr_t)this + 0x208);
	}
	template <typename R = uintptr_t> R& _resetAltarButton() {
		return *(R*)((uintptr_t)this + 0x210);
	}
	template <typename R = uintptr_t> R& _addPointsButton() {
		return *(R*)((uintptr_t)this + 0x218);
	}
	template <typename R = uintptr_t> R& _resetCooldownButton() {
		return *(R*)((uintptr_t)this + 0x220);
	}
	template <typename R = uintptr_t> R& _pointsInputField() {
		return *(R*)((uintptr_t)this + 0x228);
	}
	template <typename R = uintptr_t> R& _errorColor() {
		return *(R*)((uintptr_t)this + 0x230);
	}
	template <typename R = Il2CppString*> static R& _selectedBoss() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& _lastSelectedBoss() {
		return *(R*)((uintptr_t)this + 0x240);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& _currentBossResources() {
		return *(R*)((uintptr_t)this + 0x248);
	}
	template <typename R = int32_t> R& _currentProgress() {
		return *(R*)((uintptr_t)this + 0x250);
	}
	template <typename R = int32_t> R& _currentMaxProgress() {
		return *(R*)((uintptr_t)this + 0x254);
	}
	template <typename R = int32_t> R& _currentNewProgress() {
		return *(R*)((uintptr_t)this + 0x258);
	}
	template <typename R = int32_t> R& _currentCurrencyCount() {
		return *(R*)((uintptr_t)this + 0x25C);
	}
	template <typename R = int32_t> R& _currentRandomSeed() {
		return *(R*)((uintptr_t)this + 0x260);
	}
	template <typename R = bool> R& _isOverlayed() {
		return *(R*)((uintptr_t)this + 0x264);
	}
	template <typename R = bool> R& _donate() {
		return *(R*)((uintptr_t)this + 0x265);
	}
	template <typename R = float> R& _openTimer() {
		return *(R*)((uintptr_t)this + 0x268);
	}
	 HashSet1int32_t>*& _lockedSet() {
		return *(HashSet1int32_t>**)((uintptr_t)this + 0x270);
	}
	template <typename R = bool> R& isDonateAnimationActive() {
		return *(R*)((uintptr_t)this + 0x278);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11DDE80))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11DE048))(this);
	}
	template <typename R = void> R ShowSelectBoss() {
		return ((R (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11DE7A4))(this);
	}
	template <typename R = void> R OnBossSelected(Il2CppString* newBoss) {
		return ((R (*)(OpenGuildBossesWindow*, Il2CppString*))(Il2CppBase() + 0x11DE8D8))(this, newBoss);
	}
	template <typename R = void> R ShowBoss(Il2CppString* bossBlueprint) {
		return ((R (*)(OpenGuildBossesWindow*, Il2CppString*))(Il2CppBase() + 0x11DE9E0))(this, bossBlueprint);
	}
	template <typename R = void> R UpdateRequiredResources(Il2CppString* bossBlueprint) {
		return ((R (*)(OpenGuildBossesWindow*, Il2CppString*))(Il2CppBase() + 0x11DED18))(this, bossBlueprint);
	}
	template <typename R = void> R CreateFakeInventory(int32_t count) {
		return ((R (*)(OpenGuildBossesWindow*, int32_t))(Il2CppBase() + 0x11DE4E0))(this, count);
	}
	template <typename R = bool> R IsInventoryEntitySelected(int32_t id) {
		return ((R (*)(OpenGuildBossesWindow*, int32_t))(Il2CppBase() + 0x11DEF94))(this, id);
	}
	template <typename R = bool> R IsItemInBossRequiredResources(ItemEntity* entity) {
		return ((R (*)(OpenGuildBossesWindow*, ItemEntity*))(Il2CppBase() + 0x11DF1D0))(this, entity);
	}
	template <typename R = bool> R IsItemRequiredByPoints() {
		return ((R (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11DF274))(this);
	}
	template <typename R = void> R OnSelect(InventorySlotEntity* selectedInventory, InventorySlot* selectedSlot) {
		return ((R (*)(OpenGuildBossesWindow*, InventorySlotEntity*, InventorySlot*))(Il2CppBase() + 0x11DF828))(this, selectedInventory, selectedSlot);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(OpenGuildBossesWindow*, IInventoryItem*))(Il2CppBase() + 0x11DFA18))(this, item);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(OpenGuildBossesWindow*, IInventoryItem*))(Il2CppBase() + 0x11E04A4))(this, item);
	}
	template <typename R = bool> R CanDonate() {
		return ((R (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E0BA0))(this);
	}
	template <typename R = bool> R CanOpen() {
		return ((R (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E0DE0))(this);
	}
	template <typename R = void> R OnDonateClick() {
		return ((R (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E108C))(this);
	}
	template <typename R = void> R OnInfoClick() {
		return ((R (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E1B90))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(OpenGuildBossesWindow*, float))(Il2CppBase() + 0x11E1DB0))(this, deltaTime);
	}
	template <typename R = float> R UpdateFakeInventory() {
		return ((R (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11DF3B4))(this);
	}
	template <typename R = float> R UpdateInventoryEntity(InventorySlotEntity* inventoryEntity, float silverCoef) {
		return ((R (*)(OpenGuildBossesWindow*, InventorySlotEntity*, float))(Il2CppBase() + 0x11E251C))(this, inventoryEntity, silverCoef);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E2840))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E2B60))(this);
	}
	template <typename R = void> R OnDonationSuccess(BossOperationResultData* donationResult) {
		return ((R (*)(OpenGuildBossesWindow*, BossOperationResultData*))(Il2CppBase() + 0x11E2DFC))(this, donationResult);
	}
	template <typename R = uintptr_t> R DonateProgressAnimation(int32_t addValue, float newProgress, bool opened) {
		return ((R (*)(OpenGuildBossesWindow*, int32_t, float, bool))(Il2CppBase() + 0x11E3424))(this, addValue, newProgress, opened);
	}
	template <typename R = uintptr_t> R AnimateProgressBar(uintptr_t filledImage, float fillOrigin, float fillTarget, float duration, int32_t addValue) {
		return ((R (*)(OpenGuildBossesWindow*, uintptr_t, float, float, float, int32_t))(Il2CppBase() + 0x11E3588))(this, filledImage, fillOrigin, fillTarget, duration, addValue);
	}
	template <typename R = void> R OpenPortalWindow() {
		return ((R (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E34C8))(this);
	}
	template <typename R = void> R CheckForSelectedBoss(bool ignoreCheck) {
		return ((R (*)(OpenGuildBossesWindow*, bool))(Il2CppBase() + 0x11DE674))(this, ignoreCheck);
	}

};

