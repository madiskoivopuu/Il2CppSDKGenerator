#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassSwitchView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassSwitchView"));
	}

	template <typename R = uintptr_t> R& _selectToggle() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _selectBtn() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _classIcon() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _classRarityIcon() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _className() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = RewardResourceView*> R& _skill1View() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = RewardResourceView*> R& _skill2View() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = RewardResourceView*> R& _passiveSkill1View() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& _blueprint() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& _isReset() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = bool> R& _disabled() {
		return *(R*)((uintptr_t)this + 0x79);
	}
	 Action2<Il2CppString*, bool>*& OnSelect() {
		return *(Action2<Il2CppString*, bool>**)((uintptr_t)this + 0x80);
	}

	template <typename R = bool> R get_IsSelected() {
		return ((R (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B742FC))(this);
	}
	template <typename R = ItemEntity*> R get_ClassEntity() {
		return ((R (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B6A2CC))(this);
	}
	template <typename R = bool> R get_Disabled() {
		return ((R (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B74318))(this);
	}
	template <typename R = void> R set_Disabled(bool value) {
		return ((R (*)(PlayerClassSwitchView*, bool))(Il2CppBase() + 0x1B74320))(this, value);
	}
	template <typename R = void> R add_OnSelect(Action2<Il2CppString*, bool>* value) {
		return ((R (*)(PlayerClassSwitchView*, Action2<Il2CppString*, bool>*))(Il2CppBase() + 0x1B743AC))(this, value);
	}
	template <typename R = void> R remove_OnSelect(Action2<Il2CppString*, bool>* value) {
		return ((R (*)(PlayerClassSwitchView*, Action2<Il2CppString*, bool>*))(Il2CppBase() + 0x1B7444C))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B744EC))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window, ItemEntity* classEntity, int64_t playerId, TooltipView* tooltipView, Action2<Il2CppString*, bool>* onSelect, bool isSelected) {
		return ((R (*)(PlayerClassSwitchView*, IUIWindow*, ItemEntity*, int64_t, TooltipView*, Action2<Il2CppString*, bool>*, bool))(Il2CppBase() + 0x1B695A0))(this, window, classEntity, playerId, tooltipView, onSelect, isSelected);
	}
	template <typename R = void> R Init(ItemEntity* classEntity, int64_t playerId, bool isSelected) {
		return ((R (*)(PlayerClassSwitchView*, ItemEntity*, int64_t, bool))(Il2CppBase() + 0x1B74650))(this, classEntity, playerId, isSelected);
	}
	template <typename R = void> R Click(bool isOn) {
		return ((R (*)(PlayerClassSwitchView*, bool))(Il2CppBase() + 0x1B74AD8))(this, isOn);
	}
	template <typename R = void> R Deactivate() {
		return ((R (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B69E9C))(this);
	}
	template <typename R = void> R Activate() {
		return ((R (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B69A10))(this);
	}
	template <typename R = void> R ResetSelected() {
		return ((R (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B69A7C))(this);
	}
	template <typename R = void> R Awakeb__24_0() {
		return ((R (*)(PlayerClassSwitchView*))(Il2CppBase() + 0x1B74B54))(this);
	}
	template <typename R = void> R Awakeb__24_1(bool isOn) {
		return ((R (*)(PlayerClassSwitchView*, bool))(Il2CppBase() + 0x1B74B7C))(this, isOn);
	}

};

