#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassDetails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassDetails"));
	}

	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _classIcon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _classRarityFrameIcon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _classPreviewIcon() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _className() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _classRoleImages() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _paramsText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _paramsNextText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _skillViews() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _conditionsPanel() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _conditionsHeaderText() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _conditionsHeaderColor() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppArray<ActQuestView*>*> R& _conditions() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _descriptionPanel() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _studiedPanel() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _blockPanel() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _blockText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = ActQuestView*> R& _blockCondition() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _runeToggle() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _runeToggleText() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _detailsToggle() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _detailsToggleText() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _toggleTextInactiveColor() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _runePanel() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& _detailsPanel() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& _iconNotify() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = Il2CppString*> R& _mainQuestName() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = ItemEntity*> R& _classEntity() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = PlayerClassView*> R& _classView() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = PlayerClassType*> R& _classType() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = PlayerClassRuneInventory*> R& _runeInventory() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = Status*> R& _currentStatus() {
		return *(R*)((uintptr_t)this + 0x138);
	}

	template <typename R = Status*> R get_CurrentStatus() {
		return ((R (*)(PlayerClassDetails*))(Il2CppBase() + 0x1B63BAC))(this);
	}
	template <typename R = void> R set_CurrentStatus(Status* value) {
		return ((R (*)(PlayerClassDetails*, Status*))(Il2CppBase() + 0x1B63BB4))(this, value);
	}
	template <typename R = void> R ConditionSkipClick(ActQuestView* questView) {
		return ((R (*)(PlayerClassDetails*, ActQuestView*))(Il2CppBase() + 0x1B6458C))(this, questView);
	}
	template <typename R = void> R Init(IUIWindow* window, TooltipView* tooltipView) {
		return ((R (*)(PlayerClassDetails*, IUIWindow*, TooltipView*))(Il2CppBase() + 0x1B64590))(this, window, tooltipView);
	}
	template <typename R = void> R Show(PlayerClassView* classView, int64_t playerId, ActiveClassDetailsToggle* activeTogle) {
		return ((R (*)(PlayerClassDetails*, PlayerClassView*, int64_t, ActiveClassDetailsToggle*))(Il2CppBase() + 0x1B647F8))(this, classView, playerId, activeTogle);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(PlayerClassDetails*))(Il2CppBase() + 0x1B657A8))(this);
	}
	template <typename R = void> R ShowDetails(bool isOn) {
		return ((R (*)(PlayerClassDetails*, bool))(Il2CppBase() + 0x1B64E54))(this, isOn);
	}
	template <typename R = void> R ShowRuneInventory(bool isOn) {
		return ((R (*)(PlayerClassDetails*, bool))(Il2CppBase() + 0x1B65540))(this, isOn);
	}
	template <typename R = Status*> R GetStatus(int64_t playerId, bool getNext) {
		return ((R (*)(PlayerClassDetails*, int64_t, bool))(Il2CppBase() + 0x1B658C8))(this, playerId, getNext);
	}
	template <typename R = void> R SetStatus(Status* status) {
		return ((R (*)(PlayerClassDetails*, Status*))(Il2CppBase() + 0x1B63BC8))(this, status);
	}
	template <typename R = void> R ShowConditions(PlayerClassDescriptionComponent* classDescription) {
		return ((R (*)(PlayerClassDetails*, PlayerClassDescriptionComponent*))(Il2CppBase() + 0x1B66184))(this, classDescription);
	}
	template <typename R = Il2CppString*> R GetBlockerText() {
		return ((R (*)(PlayerClassDetails*))(Il2CppBase() + 0x1B664AC))(this);
	}
	template <typename R = void> R UpdateView() {
		return ((R (*)(PlayerClassDetails*))(Il2CppBase() + 0x1B65A1C))(this);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(PlayerClassDetails*, float))(Il2CppBase() + 0x1B669C8))(this, deltaTime);
	}
	template <typename R = void> R Initb__40_0() {
		return ((R (*)(PlayerClassDetails*))(Il2CppBase() + 0x1B66B6C))(this);
	}

};

