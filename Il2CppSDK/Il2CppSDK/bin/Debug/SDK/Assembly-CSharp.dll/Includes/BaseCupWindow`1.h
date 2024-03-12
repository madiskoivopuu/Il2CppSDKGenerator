#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow`1" 

class BaseCupWindow1: BaseInventoryWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseCupWindow`1"));
	}

	template <typename T = uintptr_t> T& _capInventory() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _donateBtn() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _procTooltip() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _pointsText() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _helpTooltipProxy() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _noBonusPointsKey() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _bonusPointsParam_ShortKey() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _classIcon() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _classRarityFrameIcon() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _classBtn() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _className() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _currentProgressImage() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _newProgressImage() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _procProgressImage() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _progressText() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _selectClassBtn() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _backlight() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _donateAnimator() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _bonusText() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _procText() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _procButtonAnimator() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& StartProgressDuration() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& ProcNormalProgressDuration() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& ProcSuperProgressDuration() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& FinalProgressDuration() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& animationCurve() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _classTooltip() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _classEntity() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _playerClassType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _progressQuestName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _currentProgress() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _currentMaxProgress() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _currentNewProgress() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _currentPoints() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> static T& _lastClassName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& _donate() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _lockedSet() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& isDonateAnimationActive() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_ProgressType() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_GetProcNormal() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetItemEntity() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T GetHelpTitleAndText() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ShowSelectPlayerClass() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnSelectClass(int64_t playerId, Il2CppString* className) {
		return ((T (*)(BaseCupWindow1*, int64_t, Il2CppString*))(Il2CppBase() + 0x0))(this, playerId, className);
	}
	template <typename T = void> T ShowClass(uintptr_t classEntity, uintptr_t progressQuest) {
		return ((T (*)(BaseCupWindow1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, classEntity, progressQuest);
	}
	template <typename T = void> T CreateFakeInventory(int32_t count) {
		return ((T (*)(BaseCupWindow1*, int32_t))(Il2CppBase() + 0x0))(this, count);
	}
	template <typename T = void> T ClearFakeInventory() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsInventoryEntitySelected(int32_t id) {
		return ((T (*)(BaseCupWindow1*, int32_t))(Il2CppBase() + 0x0))(this, id);
	}
	template <typename T = void> T OnSelect(uintptr_t selectedInventory, uintptr_t selectedSlot) {
		return ((T (*)(BaseCupWindow1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, selectedInventory, selectedSlot);
	}
	template <typename T = void> T OnDrop(uintptr_t item) {
		return ((T (*)(BaseCupWindow1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnDoubleClick(uintptr_t item) {
		return ((T (*)(BaseCupWindow1*, uintptr_t))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = bool> T CanDonate(uintptr_t avatar) {
		return ((T (*)(BaseCupWindow1*, uintptr_t))(Il2CppBase() + 0x0))(this, avatar);
	}
	template <typename T = void> T OnDonateClick() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BaseCupWindow1*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = float> T UpdateFakeInventory() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T UpdateInventoryEntity(uintptr_t inventoryEntity) {
		return ((T (*)(BaseCupWindow1*, uintptr_t))(Il2CppBase() + 0x0))(this, inventoryEntity);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnDonationSuccess(uintptr_t donationResult) {
		return ((T (*)(BaseCupWindow1*, uintptr_t))(Il2CppBase() + 0x0))(this, donationResult);
	}
	template <typename T = uintptr_t> T DonateProgressAnimation(void* newProgress, void* proc, void* superProc) {
		return ((T (*)(BaseCupWindow1*, void*, void*, void*))(Il2CppBase() + 0x0))(this, newProgress, proc, superProc);
	}
	template <typename T = uintptr_t> T AnimateProgressBar(uintptr_t filledImage, float fillOrigin, float fillTarget, float duration, int32_t valueOrigin, int32_t valueTarget) {
		return ((T (*)(BaseCupWindow1*, uintptr_t, float, float, float, int32_t, int32_t))(Il2CppBase() + 0x0))(this, filledImage, fillOrigin, fillTarget, duration, valueOrigin, valueTarget);
	}
	template <typename T = void> T Awakeb__40_0() {
		return ((T (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}

};

}
