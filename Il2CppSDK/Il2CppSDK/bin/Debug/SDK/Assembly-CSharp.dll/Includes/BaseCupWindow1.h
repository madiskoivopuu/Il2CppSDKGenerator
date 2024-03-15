#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

template <typename T>
class BaseCupWindow1 : public BaseInventoryWindow1<T>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseCupWindow`1"));
	}

	template <typename R = InventoryContainer*> R& _capInventory() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _donateBtn() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = TooltipTrigger*> R& _procTooltip() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _pointsText() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = TooltipProxy*> R& _helpTooltipProxy() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _noBonusPointsKey() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _bonusPointsParam_ShortKey() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _classIcon() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _classRarityFrameIcon() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _classBtn() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _className() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _currentProgressImage() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _newProgressImage() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _procProgressImage() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _progressText() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _selectClassBtn() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _backlight() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _donateAnimator() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _bonusText() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _procText() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _procButtonAnimator() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& StartProgressDuration() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& ProcNormalProgressDuration() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& ProcSuperProgressDuration() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& FinalProgressDuration() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& animationCurve() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = TooltipProxy*> R& _classTooltip() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = ItemEntity*> R& _classEntity() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = PlayerClassType> R& _playerClassType() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _progressQuestName() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _currentProgress() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _currentMaxProgress() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _currentNewProgress() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _currentPoints() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> static R& _lastClassName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& _donate() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 HashSet1<int32_t>*& _lockedSet() {
		return *(HashSet1<int32_t>**)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& isDonateAnimationActive() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = PlayerClassProgress> R get_ProgressType() {
		return ((R (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = float> R get_GetProcNormal() {
		return ((R (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = ItemEntity*> R GetItemEntity() {
		return ((R (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	 ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>* GetHelpTitleAndText() {
		return ((ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>* (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R ShowSelectPlayerClass() {
		return ((R (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnSelectClass(int64_t playerId, Il2CppString* className) {
		return ((R (*)(BaseCupWindow1*, int64_t, Il2CppString*))(Il2CppBase() + 0x0))(this, playerId, className);
	}
	template <typename R = void> R ShowClass(ItemEntity* classEntity, QuestEntity* progressQuest) {
		return ((R (*)(BaseCupWindow1*, ItemEntity*, QuestEntity*))(Il2CppBase() + 0x0))(this, classEntity, progressQuest);
	}
	template <typename R = void> R CreateFakeInventory(int32_t count) {
		return ((R (*)(BaseCupWindow1*, int32_t))(Il2CppBase() + 0x0))(this, count);
	}
	template <typename R = void> R ClearFakeInventory() {
		return ((R (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R IsInventoryEntitySelected(int32_t id) {
		return ((R (*)(BaseCupWindow1*, int32_t))(Il2CppBase() + 0x0))(this, id);
	}
	template <typename R = void> R OnSelect(InventorySlotEntity* selectedInventory, InventorySlot* selectedSlot) {
		return ((R (*)(BaseCupWindow1*, InventorySlotEntity*, InventorySlot*))(Il2CppBase() + 0x0))(this, selectedInventory, selectedSlot);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(BaseCupWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(BaseCupWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = bool> R CanDonate(GameEntity* avatar) {
		return ((R (*)(BaseCupWindow1*, GameEntity*))(Il2CppBase() + 0x0))(this, avatar);
	}
	template <typename R = void> R OnDonateClick() {
		return ((R (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BaseCupWindow1*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename R = float> R UpdateFakeInventory() {
		return ((R (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = float> R UpdateInventoryEntity(InventorySlotEntity* inventoryEntity) {
		return ((R (*)(BaseCupWindow1*, InventorySlotEntity*))(Il2CppBase() + 0x0))(this, inventoryEntity);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnDonationSuccess(DonationResult donationResult) {
		return ((R (*)(BaseCupWindow1*, DonationResult))(Il2CppBase() + 0x0))(this, donationResult);
	}
	template <typename R = uintptr_t> R DonateProgressAnimation(ValueTuple2<int32_t, float>* newProgress, ValueTuple2<int32_t, float>* proc, ValueTuple2<int32_t, float>* superProc) {
		return ((R (*)(BaseCupWindow1*, ValueTuple2<int32_t, float>*, ValueTuple2<int32_t, float>*, ValueTuple2<int32_t, float>*))(Il2CppBase() + 0x0))(this, newProgress, proc, superProc);
	}
	template <typename R = uintptr_t> R AnimateProgressBar(uintptr_t filledImage, float fillOrigin, float fillTarget, float duration, int32_t valueOrigin, int32_t valueTarget) {
		return ((R (*)(BaseCupWindow1*, uintptr_t, float, float, float, int32_t, int32_t))(Il2CppBase() + 0x0))(this, filledImage, fillOrigin, fillTarget, duration, valueOrigin, valueTarget);
	}
	template <typename R = void> R Awakeb__40_0() {
		return ((R (*)(BaseCupWindow1*))(Il2CppBase() + 0x0))(this);
	}

};

