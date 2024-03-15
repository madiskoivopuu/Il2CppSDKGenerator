#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossDetailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossDetailView"));
	}

	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _nameText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _deskText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _previewImg() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _difficalties() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _activeDiffColor() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _disabledDiffColor() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _requireResourceViews() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppArray<RewardResourceView*>*> R& _rewardResourceViews() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	 Il2CppList<BossSkillView*>*& _skillsPanels() {
		return *(Il2CppList<BossSkillView*>**)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _skillsRect() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _infoToggle() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _infoToggleText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _skillsToggle() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _skillsToggleText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _toggleTextInactiveColor() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _infoPanel() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _skillsPanel() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = VideoPreviewView*> R& VideoPreviewViewPrefab() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = VideoPreviewView*> R& VideoPreviewViewInstance() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = ItemEntity*> R& _bossEntity() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = TooltipView*> R& _tooltipView() {
		return *(R*)((uintptr_t)this + 0xE0);
	}

	template <typename R = VideoPreviewView*> R get_VideoPreviewViewInstance() {
		return ((R (*)(BossDetailView*))(Il2CppBase() + 0x16C9D9C))(this);
	}
	template <typename R = void> R set_VideoPreviewViewInstance(VideoPreviewView* value) {
		return ((R (*)(BossDetailView*, VideoPreviewView*))(Il2CppBase() + 0x16C9DA4))(this, value);
	}
	template <typename R = void> R Init(IUIWindow* window, TooltipView* tooltipView) {
		return ((R (*)(BossDetailView*, IUIWindow*, TooltipView*))(Il2CppBase() + 0x16C9DAC))(this, window, tooltipView);
	}
	template <typename R = void> R InitVideoMenu() {
		return ((R (*)(BossDetailView*))(Il2CppBase() + 0x16C9F60))(this);
	}
	template <typename R = void> R Show(ItemEntity* bossEntity, GameEntity* target) {
		return ((R (*)(BossDetailView*, ItemEntity*, GameEntity*))(Il2CppBase() + 0x16CA140))(this, bossEntity, target);
	}
	template <typename R = void> R SetUpResourcesPanel(GameEntity* target) {
		return ((R (*)(BossDetailView*, GameEntity*))(Il2CppBase() + 0x16CAA78))(this, target);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(BossDetailView*, float))(Il2CppBase() + 0x16CBE28))(this, deltaTime);
	}
	template <typename R = void> R ShowInfo(bool isOn) {
		return ((R (*)(BossDetailView*, bool))(Il2CppBase() + 0x16CB5EC))(this, isOn);
	}
	template <typename R = void> R ShowSkills(bool isOn) {
		return ((R (*)(BossDetailView*, bool))(Il2CppBase() + 0x16CBF60))(this, isOn);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(BossDetailView*))(Il2CppBase() + 0x16CC04C))(this);
	}
	template <typename R = void> R Initb__26_0() {
		return ((R (*)(BossDetailView*))(Il2CppBase() + 0x16CC22C))(this);
	}

};

