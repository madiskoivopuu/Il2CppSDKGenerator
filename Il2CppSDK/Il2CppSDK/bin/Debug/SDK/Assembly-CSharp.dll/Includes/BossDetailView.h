#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossDetailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossDetailView"));
	}

	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _nameText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _deskText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _previewImg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _difficalties() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _activeDiffColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _disabledDiffColor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _requireResourceViews() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rewardResourceViews() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<BossSkillView*>*> T& _skillsPanels() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _skillsRect() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _infoToggle() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _infoToggleText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _skillsToggle() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _skillsToggleText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _toggleTextInactiveColor() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _infoPanel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _skillsPanel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = VideoPreviewView*> T& VideoPreviewViewPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = VideoPreviewView*> T& VideoPreviewViewInstance() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = ItemEntity*> T& _bossEntity() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = TooltipView*> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = VideoPreviewView*> T get_VideoPreviewViewInstance() {
		return ((T (*)(BossDetailView*))(Il2CppBase() + 0x16C9D9C))(this);
	}
	template <typename T = void> T set_VideoPreviewViewInstance(VideoPreviewView* value) {
		return ((T (*)(BossDetailView*, VideoPreviewView*))(Il2CppBase() + 0x16C9DA4))(this, value);
	}
	template <typename T = void> T Init(IUIWindow* window, TooltipView* tooltipView) {
		return ((T (*)(BossDetailView*, IUIWindow*, TooltipView*))(Il2CppBase() + 0x16C9DAC))(this, window, tooltipView);
	}
	template <typename T = void> T InitVideoMenu() {
		return ((T (*)(BossDetailView*))(Il2CppBase() + 0x16C9F60))(this);
	}
	template <typename T = void> T Show(ItemEntity* bossEntity, GameEntity* target) {
		return ((T (*)(BossDetailView*, ItemEntity*, GameEntity*))(Il2CppBase() + 0x16CA140))(this, bossEntity, target);
	}
	template <typename T = void> T SetUpResourcesPanel(GameEntity* target) {
		return ((T (*)(BossDetailView*, GameEntity*))(Il2CppBase() + 0x16CAA78))(this, target);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(BossDetailView*, float))(Il2CppBase() + 0x16CBE28))(this, deltaTime);
	}
	template <typename T = void> T ShowInfo(bool isOn) {
		return ((T (*)(BossDetailView*, bool))(Il2CppBase() + 0x16CB5EC))(this, isOn);
	}
	template <typename T = void> T ShowSkills(bool isOn) {
		return ((T (*)(BossDetailView*, bool))(Il2CppBase() + 0x16CBF60))(this, isOn);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BossDetailView*))(Il2CppBase() + 0x16CC04C))(this);
	}
	template <typename T = void> T Initb__26_0() {
		return ((T (*)(BossDetailView*))(Il2CppBase() + 0x16CC22C))(this);
	}

};

