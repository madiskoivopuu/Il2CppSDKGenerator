#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassView"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _buttonRunes() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _activeMark() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _selectMark() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _newClassMark() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _newGradeMark() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _classIcon() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _classPreviewIcon() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _grayscaleMaterial() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _classRarityFrameIcon() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _className() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _skillsHolder() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _skillViews() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _altSkillsHolder() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _altSkillViews() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _lockedMark() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _lockedText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _NotLerned() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _runeCounter() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _runeNotify() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _deactivatedRuneCounter() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _deactivatedRuneNotify() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = bool> R& _classTreeMode() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _masteryProgressPanel() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& _masteryProgressImage() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& _masteryProgressText() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& _expertiseProgressPanel() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& _expertiseProgressImage() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& _expertiseProgressText() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& _currentProgressPanel() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& _currentProgressImage() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& _currentProgressText() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = PlayerClassType*> R& ClassType() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = Il2CppString*> R& _blueprint() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = Il2CppString*> R& _nextBlueprint() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = Il2CppString*> R& _mainQuestName() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = Il2CppString*> R& _prgQuestName() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = Il2CppString*> R& _classTypeString() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = Status*> R& _currentStatus() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = bool> R& _disabled() {
		return *(R*)((uintptr_t)this + 0x164);
	}
	template <typename R = bool> R& HasNewRuneNotify() {
		return *(R*)((uintptr_t)this + 0x165);
	}
	template <typename R = bool> R& HasNewDeactivatedRuneNotify() {
		return *(R*)((uintptr_t)this + 0x166);
	}
	 Action1PlayerClassView*>*& ClickEvent() {
		return *(Action1PlayerClassView*>**)((uintptr_t)this + 0x168);
	}
	 Action2PlayerClassView*, ActiveClassDetailsToggle*>*& ClickDetailEvent() {
		return *(Action2PlayerClassView*, ActiveClassDetailsToggle*>**)((uintptr_t)this + 0x170);
	}
	 Action1bool>*& OnSeenUpdated() {
		return *(Action1bool>**)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& _updateCoroutine() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = int32_t> R& _progress() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = bool> R& _showProgress() {
		return *(R*)((uintptr_t)this + 0x18C);
	}
	template <typename R = PlayerClassProgress*> R& _selectType() {
		return *(R*)((uintptr_t)this + 0x18D);
	}
	template <typename R = bool> R& _isNewGradeActive() {
		return *(R*)((uintptr_t)this + 0x18E);
	}
	template <typename R = Il2CppString*> static R& _levelKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = ItemEntity*> R get_ClassEntity() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B64D50))(this);
	}
	template <typename R = PlayerClassType*> R get_ClassType() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B74B84))(this);
	}
	template <typename R = void> R set_ClassType(PlayerClassType* value) {
		return ((R (*)(PlayerClassView*, PlayerClassType*))(Il2CppBase() + 0x1B74B8C))(this, value);
	}
	template <typename R = Status*> R get_CurrentStatus() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B74B94))(this);
	}
	template <typename R = void> R set_CurrentStatus(Status* value) {
		return ((R (*)(PlayerClassView*, Status*))(Il2CppBase() + 0x1B74B9C))(this, value);
	}
	template <typename R = bool> R get_Selected() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B74E50))(this);
	}
	template <typename R = void> R set_Selected(bool value) {
		return ((R (*)(PlayerClassView*, bool))(Il2CppBase() + 0x1B74E6C))(this, value);
	}
	template <typename R = bool> R get_Activated() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B74EC4))(this);
	}
	template <typename R = void> R set_Activated(bool value) {
		return ((R (*)(PlayerClassView*, bool))(Il2CppBase() + 0x1B736CC))(this, value);
	}
	template <typename R = bool> R get_Disabled() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B74EE0))(this);
	}
	template <typename R = void> R set_Disabled(bool value) {
		return ((R (*)(PlayerClassView*, bool))(Il2CppBase() + 0x1B74EE8))(this, value);
	}
	template <typename R = bool> R get_Interactable() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B74FD0))(this);
	}
	template <typename R = void> R set_Interactable(bool value) {
		return ((R (*)(PlayerClassView*, bool))(Il2CppBase() + 0x1B73474))(this, value);
	}
	template <typename R = bool> R get_HasNewRuneNotify() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B74FEC))(this);
	}
	template <typename R = void> R set_HasNewRuneNotify(bool value) {
		return ((R (*)(PlayerClassView*, bool))(Il2CppBase() + 0x1B74FF4))(this, value);
	}
	template <typename R = bool> R get_HasNewDeactivatedRuneNotify() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B75000))(this);
	}
	template <typename R = void> R set_HasNewDeactivatedRuneNotify(bool value) {
		return ((R (*)(PlayerClassView*, bool))(Il2CppBase() + 0x1B75008))(this, value);
	}
	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B75014))(this);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B7501C))(this);
	}
	template <typename R = void> R add_ClickEvent(Action1PlayerClassView*>* value) {
		return ((R (*)(PlayerClassView*, Action1PlayerClassView*>*))(Il2CppBase() + 0x1B731F4))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1PlayerClassView*>* value) {
		return ((R (*)(PlayerClassView*, Action1PlayerClassView*>*))(Il2CppBase() + 0x1B75024))(this, value);
	}
	template <typename R = void> R add_ClickDetailEvent(Action2PlayerClassView*, ActiveClassDetailsToggle*>* value) {
		return ((R (*)(PlayerClassView*, Action2PlayerClassView*, ActiveClassDetailsToggle*>*))(Il2CppBase() + 0x1B750C8))(this, value);
	}
	template <typename R = void> R remove_ClickDetailEvent(Action2PlayerClassView*, ActiveClassDetailsToggle*>* value) {
		return ((R (*)(PlayerClassView*, Action2PlayerClassView*, ActiveClassDetailsToggle*>*))(Il2CppBase() + 0x1B7516C))(this, value);
	}
	template <typename R = void> R add_OnSeenUpdated(Action1bool>* value) {
		return ((R (*)(PlayerClassView*, Action1bool>*))(Il2CppBase() + 0x1B75210))(this, value);
	}
	template <typename R = void> R remove_OnSeenUpdated(Action1bool>* value) {
		return ((R (*)(PlayerClassView*, Action1bool>*))(Il2CppBase() + 0x1B752B4))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B75358))(this);
	}
	template <typename R = void> R Init(int64_t playerId, ItemEntity* classEntity, TooltipView* tooltipView, PlayerClassProgress* selectType) {
		return ((R (*)(PlayerClassView*, int64_t, ItemEntity*, TooltipView*, PlayerClassProgress*))(Il2CppBase() + 0x1B726D4))(this, playerId, classEntity, tooltipView, selectType);
	}
	template <typename R = void> R InitRuneCounter(IRuneInventoryCounter* counter) {
		return ((R (*)(PlayerClassView*, IRuneInventoryCounter*))(Il2CppBase() + 0x1B6744C))(this, counter);
	}
	template <typename R = void> R SetCurrentStatus(Status* newStatus) {
		return ((R (*)(PlayerClassView*, Status*))(Il2CppBase() + 0x1B74BB0))(this, newStatus);
	}
	template <typename R = void> R UpdateView() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B66CD4))(this);
	}
	template <typename R = uintptr_t> R UpdateCoroutine() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B7564C))(this);
	}
	template <typename R = void> R UpdateClassNotify() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B75434))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B756C4))(this);
	}
	template <typename R = void> R Awakeb__91_0() {
		return ((R (*)(PlayerClassView*))(Il2CppBase() + 0x1B75828))(this);
	}

};

