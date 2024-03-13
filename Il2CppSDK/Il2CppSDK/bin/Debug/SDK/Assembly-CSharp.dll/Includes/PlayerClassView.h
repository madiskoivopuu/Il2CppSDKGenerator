#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassView"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _buttonRunes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _activeMark() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _selectMark() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _newClassMark() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _newGradeMark() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _classIcon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _classPreviewIcon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _grayscaleMaterial() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _classRarityFrameIcon() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _className() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _skillsHolder() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _skillViews() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _altSkillsHolder() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _altSkillViews() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _lockedMark() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _lockedText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _NotLerned() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _runeCounter() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _runeNotify() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _deactivatedRuneCounter() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _deactivatedRuneNotify() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& _classTreeMode() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _masteryProgressPanel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _masteryProgressImage() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _masteryProgressText() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _expertiseProgressPanel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _expertiseProgressImage() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _expertiseProgressText() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _currentProgressPanel() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _currentProgressImage() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _currentProgressText() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = PlayerClassType*> T& ClassType() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppString*> T& _blueprint() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> T& _nextBlueprint() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppString*> T& _mainQuestName() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppString*> T& _prgQuestName() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = TooltipView*> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppString*> T& _classTypeString() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Status*> T& _currentStatus() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& _disabled() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& HasNewRuneNotify() {
		return *(T*)((uintptr_t)this + 0x165);
	}
	template <typename T = bool> T& HasNewDeactivatedRuneNotify() {
		return *(T*)((uintptr_t)this + 0x166);
	}
	template <typename T = Action1PlayerClassView*>*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Action2PlayerClassView*, ActiveClassDetailsToggle*>*> T& ClickDetailEvent() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Action1bool>*> T& OnSeenUpdated() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& _updateCoroutine() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = int32_t> T& _progress() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& _showProgress() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = PlayerClassProgress*> T& _selectType() {
		return *(T*)((uintptr_t)this + 0x18D);
	}
	template <typename T = bool> T& _isNewGradeActive() {
		return *(T*)((uintptr_t)this + 0x18E);
	}
	template <typename T = Il2CppString*> static T& _levelKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = ItemEntity*> T get_ClassEntity() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B64D50))(this);
	}
	template <typename T = PlayerClassType*> T get_ClassType() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B74B84))(this);
	}
	template <typename T = void> T set_ClassType(PlayerClassType* value) {
		return ((T (*)(PlayerClassView*, PlayerClassType*))(Il2CppBase() + 0x1B74B8C))(this, value);
	}
	template <typename T = Status*> T get_CurrentStatus() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B74B94))(this);
	}
	template <typename T = void> T set_CurrentStatus(Status* value) {
		return ((T (*)(PlayerClassView*, Status*))(Il2CppBase() + 0x1B74B9C))(this, value);
	}
	template <typename T = bool> T get_Selected() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B74E50))(this);
	}
	template <typename T = void> T set_Selected(bool value) {
		return ((T (*)(PlayerClassView*, bool))(Il2CppBase() + 0x1B74E6C))(this, value);
	}
	template <typename T = bool> T get_Activated() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B74EC4))(this);
	}
	template <typename T = void> T set_Activated(bool value) {
		return ((T (*)(PlayerClassView*, bool))(Il2CppBase() + 0x1B736CC))(this, value);
	}
	template <typename T = bool> T get_Disabled() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B74EE0))(this);
	}
	template <typename T = void> T set_Disabled(bool value) {
		return ((T (*)(PlayerClassView*, bool))(Il2CppBase() + 0x1B74EE8))(this, value);
	}
	template <typename T = bool> T get_Interactable() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B74FD0))(this);
	}
	template <typename T = void> T set_Interactable(bool value) {
		return ((T (*)(PlayerClassView*, bool))(Il2CppBase() + 0x1B73474))(this, value);
	}
	template <typename T = bool> T get_HasNewRuneNotify() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B74FEC))(this);
	}
	template <typename T = void> T set_HasNewRuneNotify(bool value) {
		return ((T (*)(PlayerClassView*, bool))(Il2CppBase() + 0x1B74FF4))(this, value);
	}
	template <typename T = bool> T get_HasNewDeactivatedRuneNotify() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B75000))(this);
	}
	template <typename T = void> T set_HasNewDeactivatedRuneNotify(bool value) {
		return ((T (*)(PlayerClassView*, bool))(Il2CppBase() + 0x1B75008))(this, value);
	}
	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B75014))(this);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B7501C))(this);
	}
	template <typename T = void> T add_ClickEvent(Action1PlayerClassView*>* value) {
		return ((T (*)(PlayerClassView*, Action1PlayerClassView*>*))(Il2CppBase() + 0x1B731F4))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(Action1PlayerClassView*>* value) {
		return ((T (*)(PlayerClassView*, Action1PlayerClassView*>*))(Il2CppBase() + 0x1B75024))(this, value);
	}
	template <typename T = void> T add_ClickDetailEvent(Action2PlayerClassView*, ActiveClassDetailsToggle*>* value) {
		return ((T (*)(PlayerClassView*, Action2PlayerClassView*, ActiveClassDetailsToggle*>*))(Il2CppBase() + 0x1B750C8))(this, value);
	}
	template <typename T = void> T remove_ClickDetailEvent(Action2PlayerClassView*, ActiveClassDetailsToggle*>* value) {
		return ((T (*)(PlayerClassView*, Action2PlayerClassView*, ActiveClassDetailsToggle*>*))(Il2CppBase() + 0x1B7516C))(this, value);
	}
	template <typename T = void> T add_OnSeenUpdated(Action1bool>* value) {
		return ((T (*)(PlayerClassView*, Action1bool>*))(Il2CppBase() + 0x1B75210))(this, value);
	}
	template <typename T = void> T remove_OnSeenUpdated(Action1bool>* value) {
		return ((T (*)(PlayerClassView*, Action1bool>*))(Il2CppBase() + 0x1B752B4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B75358))(this);
	}
	template <typename T = void> T Init(int64_t playerId, ItemEntity* classEntity, TooltipView* tooltipView, PlayerClassProgress* selectType) {
		return ((T (*)(PlayerClassView*, int64_t, ItemEntity*, TooltipView*, PlayerClassProgress*))(Il2CppBase() + 0x1B726D4))(this, playerId, classEntity, tooltipView, selectType);
	}
	template <typename T = void> T InitRuneCounter(IRuneInventoryCounter* counter) {
		return ((T (*)(PlayerClassView*, IRuneInventoryCounter*))(Il2CppBase() + 0x1B6744C))(this, counter);
	}
	template <typename T = void> T SetCurrentStatus(Status* newStatus) {
		return ((T (*)(PlayerClassView*, Status*))(Il2CppBase() + 0x1B74BB0))(this, newStatus);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B66CD4))(this);
	}
	template <typename T = uintptr_t> T UpdateCoroutine() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B7564C))(this);
	}
	template <typename T = void> T UpdateClassNotify() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B75434))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B756C4))(this);
	}
	template <typename T = void> T Awakeb__91_0() {
		return ((T (*)(PlayerClassView*))(Il2CppBase() + 0x1B75828))(this);
	}

};

