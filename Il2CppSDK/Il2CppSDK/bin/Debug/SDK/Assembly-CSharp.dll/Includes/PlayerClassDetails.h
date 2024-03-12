#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassDetails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassDetails"));
	}

	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _classIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _classRarityFrameIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _classPreviewIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _className() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _classRoleImages() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _paramsText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _paramsNextText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _skillViews() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _conditionsPanel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _conditionsHeaderText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _conditionsHeaderColor() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _conditions() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _descriptionPanel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _studiedPanel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _blockPanel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _blockText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _blockCondition() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _runeToggle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _runeToggleText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _detailsToggle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _detailsToggleText() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _toggleTextInactiveColor() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _runePanel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _detailsPanel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _iconNotify() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& _mainQuestName() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _classEntity() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _classView() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _classType() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _tooltipView() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _runeInventory() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _currentStatus() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = uintptr_t> T get_CurrentStatus() {
		return ((T (*)(PlayerClassDetails*))(Il2CppBase() + 0x1B63BAC))(this);
	}
	template <typename T = void> T set_CurrentStatus(uintptr_t value) {
		return ((T (*)(PlayerClassDetails*, uintptr_t))(Il2CppBase() + 0x1B63BB4))(this, value);
	}
	template <typename T = void> T ConditionSkipClick(uintptr_t questView) {
		return ((T (*)(PlayerClassDetails*, uintptr_t))(Il2CppBase() + 0x1B6458C))(this, questView);
	}
	template <typename T = void> T Init(uintptr_t window, uintptr_t tooltipView) {
		return ((T (*)(PlayerClassDetails*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B64590))(this, window, tooltipView);
	}
	template <typename T = void> T Show(uintptr_t classView, int64_t playerId, uintptr_t activeTogle) {
		return ((T (*)(PlayerClassDetails*, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x1B647F8))(this, classView, playerId, activeTogle);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PlayerClassDetails*))(Il2CppBase() + 0x1B657A8))(this);
	}
	template <typename T = void> T ShowDetails(bool isOn) {
		return ((T (*)(PlayerClassDetails*, bool))(Il2CppBase() + 0x1B64E54))(this, isOn);
	}
	template <typename T = void> T ShowRuneInventory(bool isOn) {
		return ((T (*)(PlayerClassDetails*, bool))(Il2CppBase() + 0x1B65540))(this, isOn);
	}
	template <typename T = uintptr_t> T GetStatus(int64_t playerId, bool getNext) {
		return ((T (*)(PlayerClassDetails*, int64_t, bool))(Il2CppBase() + 0x1B658C8))(this, playerId, getNext);
	}
	template <typename T = void> T SetStatus(uintptr_t status) {
		return ((T (*)(PlayerClassDetails*, uintptr_t))(Il2CppBase() + 0x1B63BC8))(this, status);
	}
	template <typename T = void> T ShowConditions(uintptr_t classDescription) {
		return ((T (*)(PlayerClassDetails*, uintptr_t))(Il2CppBase() + 0x1B66184))(this, classDescription);
	}
	template <typename T = Il2CppString*> T GetBlockerText() {
		return ((T (*)(PlayerClassDetails*))(Il2CppBase() + 0x1B664AC))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PlayerClassDetails*))(Il2CppBase() + 0x1B65A1C))(this);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(PlayerClassDetails*, float))(Il2CppBase() + 0x1B669C8))(this, deltaTime);
	}
	template <typename T = void> T Initb__40_0() {
		return ((T (*)(PlayerClassDetails*))(Il2CppBase() + 0x1B66B6C))(this);
	}

};

}
