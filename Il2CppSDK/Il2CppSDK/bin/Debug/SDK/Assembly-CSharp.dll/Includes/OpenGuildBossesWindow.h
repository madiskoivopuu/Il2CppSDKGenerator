#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class OpenGuildBossesWindow: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenGuildBossesWindow"));
	}

	template <typename T = uintptr_t> T& _capInventory() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _infoBtn() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _donateBtn() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _selectBossBtn() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _backlight() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _bossDetailView() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& _requiredResourcesView() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _coinsTooltipsTriggers() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& _portalPanel() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& _bossPanel() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& _bossImage() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& _bossName() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& _currentProgressImage() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& _newProgressImage() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& _procProgressImage() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& _portalImage() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& _progressText() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& _donateAnimator() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& _animationCurve() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = float> T& StartProgressDuration() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _currencyImgs() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& _currencyCountText() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& _procText() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& _cheatsPanel() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& _resetAltarButton() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& _addPointsButton() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& _resetCooldownButton() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uintptr_t> T& _pointsInputField() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = uintptr_t> T& _errorColor() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = Il2CppString*> static T& _selectedBoss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& _lastSelectedBoss() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _currentBossResources() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = int32_t> T& _currentProgress() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& _currentMaxProgress() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = int32_t> T& _currentNewProgress() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = int32_t> T& _currentCurrencyCount() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = int32_t> T& _currentRandomSeed() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = bool> T& _isOverlayed() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = bool> T& _donate() {
		return *(T*)((uintptr_t)this + 0x265);
	}
	template <typename T = float> T& _openTimer() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = void*> T& _lockedSet() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = bool> T& isDonateAnimationActive() {
		return *(T*)((uintptr_t)this + 0x278);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11DDE80))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11DE048))(this);
	}
	template <typename T = void> T ShowSelectBoss() {
		return ((T (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11DE7A4))(this);
	}
	template <typename T = void> T OnBossSelected(Il2CppString* newBoss) {
		return ((T (*)(OpenGuildBossesWindow*, Il2CppString*))(Il2CppBase() + 0x11DE8D8))(this, newBoss);
	}
	template <typename T = void> T ShowBoss(Il2CppString* bossBlueprint) {
		return ((T (*)(OpenGuildBossesWindow*, Il2CppString*))(Il2CppBase() + 0x11DE9E0))(this, bossBlueprint);
	}
	template <typename T = void> T UpdateRequiredResources(Il2CppString* bossBlueprint) {
		return ((T (*)(OpenGuildBossesWindow*, Il2CppString*))(Il2CppBase() + 0x11DED18))(this, bossBlueprint);
	}
	template <typename T = void> T CreateFakeInventory(int32_t count) {
		return ((T (*)(OpenGuildBossesWindow*, int32_t))(Il2CppBase() + 0x11DE4E0))(this, count);
	}
	template <typename T = bool> T IsInventoryEntitySelected(int32_t id) {
		return ((T (*)(OpenGuildBossesWindow*, int32_t))(Il2CppBase() + 0x11DEF94))(this, id);
	}
	template <typename T = bool> T IsItemInBossRequiredResources(uintptr_t entity) {
		return ((T (*)(OpenGuildBossesWindow*, uintptr_t))(Il2CppBase() + 0x11DF1D0))(this, entity);
	}
	template <typename T = bool> T IsItemRequiredByPoints() {
		return ((T (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11DF274))(this);
	}
	template <typename T = void> T OnSelect(uintptr_t selectedInventory, uintptr_t selectedSlot) {
		return ((T (*)(OpenGuildBossesWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x11DF828))(this, selectedInventory, selectedSlot);
	}
	template <typename T = void> T OnDrop(uintptr_t item) {
		return ((T (*)(OpenGuildBossesWindow*, uintptr_t))(Il2CppBase() + 0x11DFA18))(this, item);
	}
	template <typename T = void> T OnDoubleClick(uintptr_t item) {
		return ((T (*)(OpenGuildBossesWindow*, uintptr_t))(Il2CppBase() + 0x11E04A4))(this, item);
	}
	template <typename T = bool> T CanDonate() {
		return ((T (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E0BA0))(this);
	}
	template <typename T = bool> T CanOpen() {
		return ((T (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E0DE0))(this);
	}
	template <typename T = void> T OnDonateClick() {
		return ((T (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E108C))(this);
	}
	template <typename T = void> T OnInfoClick() {
		return ((T (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E1B90))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(OpenGuildBossesWindow*, float))(Il2CppBase() + 0x11E1DB0))(this, deltaTime);
	}
	template <typename T = float> T UpdateFakeInventory() {
		return ((T (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11DF3B4))(this);
	}
	template <typename T = float> T UpdateInventoryEntity(uintptr_t inventoryEntity, float silverCoef) {
		return ((T (*)(OpenGuildBossesWindow*, uintptr_t, float))(Il2CppBase() + 0x11E251C))(this, inventoryEntity, silverCoef);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E2840))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E2B60))(this);
	}
	template <typename T = void> T OnDonationSuccess(uintptr_t donationResult) {
		return ((T (*)(OpenGuildBossesWindow*, uintptr_t))(Il2CppBase() + 0x11E2DFC))(this, donationResult);
	}
	template <typename T = uintptr_t> T DonateProgressAnimation(int32_t addValue, float newProgress, bool opened) {
		return ((T (*)(OpenGuildBossesWindow*, int32_t, float, bool))(Il2CppBase() + 0x11E3424))(this, addValue, newProgress, opened);
	}
	template <typename T = uintptr_t> T AnimateProgressBar(uintptr_t filledImage, float fillOrigin, float fillTarget, float duration, int32_t addValue) {
		return ((T (*)(OpenGuildBossesWindow*, uintptr_t, float, float, float, int32_t))(Il2CppBase() + 0x11E3588))(this, filledImage, fillOrigin, fillTarget, duration, addValue);
	}
	template <typename T = void> T OpenPortalWindow() {
		return ((T (*)(OpenGuildBossesWindow*))(Il2CppBase() + 0x11E34C8))(this);
	}
	template <typename T = void> T CheckForSelectedBoss(bool ignoreCheck) {
		return ((T (*)(OpenGuildBossesWindow*, bool))(Il2CppBase() + 0x11DE674))(this, ignoreCheck);
	}

};

}
