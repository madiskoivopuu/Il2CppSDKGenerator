#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossView"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _infoButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _activeMark() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _selectMark() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _nameText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _previewImg() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _difficalties() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _activeDiffColor() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _disabledDiffColor() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _cooldownPanel() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _cooldownText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _lockedPanel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _lockedText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _resourcesPanel() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _resourcesText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _resourcesBar() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	 Action1BossView*>*& ClickEvent() {
		return *(Action1BossView*>**)((uintptr_t)this + 0xA8);
	}
	 Action1BossView*>*& ClickInfoEvent() {
		return *(Action1BossView*>**)((uintptr_t)this + 0xB0);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = int32_t> R& _targetId() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = Il2CppString*> static R& RebornInTextKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(BossView*))(Il2CppBase() + 0x16CDC94))(this);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(BossView*))(Il2CppBase() + 0x16CDC9C))(this);
	}
	template <typename R = void> R add_ClickEvent(Action1BossView*>* value) {
		return ((R (*)(BossView*, Action1BossView*>*))(Il2CppBase() + 0x16CDCA4))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1BossView*>* value) {
		return ((R (*)(BossView*, Action1BossView*>*))(Il2CppBase() + 0x16CDD44))(this, value);
	}
	template <typename R = void> R add_ClickInfoEvent(Action1BossView*>* value) {
		return ((R (*)(BossView*, Action1BossView*>*))(Il2CppBase() + 0x16CDDE4))(this, value);
	}
	template <typename R = void> R remove_ClickInfoEvent(Action1BossView*>* value) {
		return ((R (*)(BossView*, Action1BossView*>*))(Il2CppBase() + 0x16CDE84))(this, value);
	}
	template <typename R = Il2CppString*> R get_Blueprint() {
		return ((R (*)(BossView*))(Il2CppBase() + 0x16CDF24))(this);
	}
	template <typename R = void> R set_Blueprint(Il2CppString* value) {
		return ((R (*)(BossView*, Il2CppString*))(Il2CppBase() + 0x16CDF2C))(this, value);
	}
	template <typename R = ItemEntity*> R get_BossEntity() {
		return ((R (*)(BossView*))(Il2CppBase() + 0x16CDF34))(this);
	}
	template <typename R = bool> R get_Selected() {
		return ((R (*)(BossView*))(Il2CppBase() + 0x16CE028))(this);
	}
	template <typename R = void> R set_Selected(bool value) {
		return ((R (*)(BossView*, bool))(Il2CppBase() + 0x16CE044))(this, value);
	}
	template <typename R = bool> R get_Activated() {
		return ((R (*)(BossView*))(Il2CppBase() + 0x16CE09C))(this);
	}
	template <typename R = void> R set_Activated(bool value) {
		return ((R (*)(BossView*, bool))(Il2CppBase() + 0x16CE0B8))(this, value);
	}
	template <typename R = bool> R get_Disabled() {
		return ((R (*)(BossView*))(Il2CppBase() + 0x16CE110))(this);
	}
	template <typename R = void> R set_Disabled(bool value) {
		return ((R (*)(BossView*, bool))(Il2CppBase() + 0x16CE164))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(BossView*))(Il2CppBase() + 0x16CE1CC))(this);
	}
	template <typename R = void> R Init(UIWindow* window, int64_t playerId, ItemEntity* bossEntity, int32_t targetId, TooltipView* tooltipView) {
		return ((R (*)(BossView*, UIWindow*, int64_t, ItemEntity*, int32_t, TooltipView*))(Il2CppBase() + 0x16CE2A8))(this, window, playerId, bossEntity, targetId, tooltipView);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(BossView*))(Il2CppBase() + 0x16CF010))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(BossView*))(Il2CppBase() + 0x16CF10C))(this);
	}
	template <typename R = void> R OnInfoClick() {
		return ((R (*)(BossView*))(Il2CppBase() + 0x16CF178))(this);
	}
	template <typename R = void> R UpdateTimer(BossState* bossOpenState, BossOpenResourcesComponent* bossResources) {
		return ((R (*)(BossView*, BossState*, BossOpenResourcesComponent*))(Il2CppBase() + 0x16CE9F8))(this, bossOpenState, bossResources);
	}
	template <typename R = void> R UpdateBar(BossState* bossOpenState, BossOpenResourcesComponent* bossResources) {
		return ((R (*)(BossView*, BossState*, BossOpenResourcesComponent*))(Il2CppBase() + 0x16CED24))(this, bossOpenState, bossResources);
	}
	template <typename R = void> R UpdateLocked(BossOpenResourcesComponent* bossResources) {
		return ((R (*)(BossView*, BossOpenResourcesComponent*))(Il2CppBase() + 0x16CE6E4))(this, bossResources);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(BossView*, float))(Il2CppBase() + 0x16CF1D8))(this, deltaTime);
	}

};

