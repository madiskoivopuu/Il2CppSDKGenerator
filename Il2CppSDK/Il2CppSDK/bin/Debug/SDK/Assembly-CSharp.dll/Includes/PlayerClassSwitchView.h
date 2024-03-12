#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassSwitchView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassSwitchView"));
	}

	template <typename T = uintptr_t> T& _selectToggle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _selectBtn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _classIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _classRarityIcon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _className() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _skill1View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _skill2View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _passiveSkill1View() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& _blueprint() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _isReset() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _disabled() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = void*> T& OnSelect() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = bool> T get_IsSelected() {
		return ((T (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B742FC))(this);
	}
	template <typename T = uintptr_t> T get_ClassEntity() {
		return ((T (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B6A2CC))(this);
	}
	template <typename T = bool> T get_Disabled() {
		return ((T (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B74318))(this);
	}
	template <typename T = void> T set_Disabled(bool value) {
		return ((T (*)(PlayerClassSwitchView*, bool))(Il2CppBase() + 0x1B74320))(this, value);
	}
	template <typename T = void> T add_OnSelect(void* value) {
		return ((T (*)(PlayerClassSwitchView*, void*))(Il2CppBase() + 0x1B743AC))(this, value);
	}
	template <typename T = void> T remove_OnSelect(void* value) {
		return ((T (*)(PlayerClassSwitchView*, void*))(Il2CppBase() + 0x1B7444C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B744EC))(this);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t classEntity, int64_t playerId, uintptr_t tooltipView, void* onSelect, bool isSelected) {
		return ((T (*)(PlayerClassSwitchView*, uintptr_t, uintptr_t, int64_t, uintptr_t, void*, bool))(Il2CppBase() + 0x1B695A0))(this, window, classEntity, playerId, tooltipView, onSelect, isSelected);
	}
	template <typename T = void> T Init(uintptr_t classEntity, int64_t playerId, bool isSelected) {
		return ((T (*)(PlayerClassSwitchView*, uintptr_t, int64_t, bool))(Il2CppBase() + 0x1B74650))(this, classEntity, playerId, isSelected);
	}
	template <typename T = void> T Click(bool isOn) {
		return ((T (*)(PlayerClassSwitchView*, bool))(Il2CppBase() + 0x1B74AD8))(this, isOn);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B69E9C))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B69A10))(this);
	}
	template <typename T = void> T ResetSelected() {
		return ((T (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B69A7C))(this);
	}
	template <typename T = void> T Awakeb__24_0() {
		return ((T (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B74B54))(this);
	}
	template <typename T = void> T Awakeb__24_1(bool isOn) {
		return ((T (*)(PlayerClassSwitchView*, bool))(Il2CppBase() + 0x1B74B7C))(this, isOn);
	}

};

}
