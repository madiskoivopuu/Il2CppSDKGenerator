#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossView"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _infoButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _activeMark() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _selectMark() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _nameText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _previewImg() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _difficalties() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _activeDiffColor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _disabledDiffColor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _cooldownPanel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _cooldownText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _lockedPanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _lockedText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _resourcesPanel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _resourcesText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _resourcesBar() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = void*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> T& ClickInfoEvent() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& _targetId() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> static T& RebornInTextKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(BossView*))(Il2CppBase() + 0x16CDC94))(this);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(BossView*))(Il2CppBase() + 0x16CDC9C))(this);
	}
	template <typename T = void> T add_ClickEvent(void* value) {
		return ((T (*)(BossView*, void*))(Il2CppBase() + 0x16CDCA4))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(void* value) {
		return ((T (*)(BossView*, void*))(Il2CppBase() + 0x16CDD44))(this, value);
	}
	template <typename T = void> T add_ClickInfoEvent(void* value) {
		return ((T (*)(BossView*, void*))(Il2CppBase() + 0x16CDDE4))(this, value);
	}
	template <typename T = void> T remove_ClickInfoEvent(void* value) {
		return ((T (*)(BossView*, void*))(Il2CppBase() + 0x16CDE84))(this, value);
	}
	template <typename T = Il2CppString*> T get_Blueprint() {
		return ((T (*)(BossView*))(Il2CppBase() + 0x16CDF24))(this);
	}
	template <typename T = void> T set_Blueprint(Il2CppString* value) {
		return ((T (*)(BossView*, Il2CppString*))(Il2CppBase() + 0x16CDF2C))(this, value);
	}
	template <typename T = uintptr_t> T get_BossEntity() {
		return ((T (*)(BossView*))(Il2CppBase() + 0x16CDF34))(this);
	}
	template <typename T = bool> T get_Selected() {
		return ((T (*)(BossView*))(Il2CppBase() + 0x16CE028))(this);
	}
	template <typename T = void> T set_Selected(bool value) {
		return ((T (*)(BossView*, bool))(Il2CppBase() + 0x16CE044))(this, value);
	}
	template <typename T = bool> T get_Activated() {
		return ((T (*)(BossView*))(Il2CppBase() + 0x16CE09C))(this);
	}
	template <typename T = void> T set_Activated(bool value) {
		return ((T (*)(BossView*, bool))(Il2CppBase() + 0x16CE0B8))(this, value);
	}
	template <typename T = bool> T get_Disabled() {
		return ((T (*)(BossView*))(Il2CppBase() + 0x16CE110))(this);
	}
	template <typename T = void> T set_Disabled(bool value) {
		return ((T (*)(BossView*, bool))(Il2CppBase() + 0x16CE164))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BossView*))(Il2CppBase() + 0x16CE1CC))(this);
	}
	template <typename T = void> T Init(uintptr_t window, int64_t playerId, uintptr_t bossEntity, int32_t targetId, uintptr_t tooltipView) {
		return ((T (*)(BossView*, uintptr_t, int64_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x16CE2A8))(this, window, playerId, bossEntity, targetId, tooltipView);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BossView*))(Il2CppBase() + 0x16CF010))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(BossView*))(Il2CppBase() + 0x16CF10C))(this);
	}
	template <typename T = void> T OnInfoClick() {
		return ((T (*)(BossView*))(Il2CppBase() + 0x16CF178))(this);
	}
	template <typename T = void> T UpdateTimer(uintptr_t bossOpenState, uintptr_t bossResources) {
		return ((T (*)(BossView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16CE9F8))(this, bossOpenState, bossResources);
	}
	template <typename T = void> T UpdateBar(uintptr_t bossOpenState, uintptr_t bossResources) {
		return ((T (*)(BossView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16CED24))(this, bossOpenState, bossResources);
	}
	template <typename T = void> T UpdateLocked(uintptr_t bossResources) {
		return ((T (*)(BossView*, uintptr_t))(Il2CppBase() + 0x16CE6E4))(this, bossResources);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(BossView*, float))(Il2CppBase() + 0x16CF1D8))(this, deltaTime);
	}

};

}
