#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ButtonWithSliderOnHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ButtonWithSliderOnHold"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _slider() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _holdThreshold() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& _updateThreshold() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = uintptr_t> R& _valueText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& _startHold() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& _isHolded() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = uintptr_t> R& _checkCoroutine() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& _isSliderInited() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = bool> R& _isActionInited() {
		return *(R*)((uintptr_t)this + 0x49);
	}
	template <typename R = int32_t> R& _borders() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = float> R& _minPosition() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = float> R& _maxPosition() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = float> R& _buttonPivotPosition() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _buttonRect() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& OnClick() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	 Action1int32_t>*& OnHoldRelease() {
		return *(Action1int32_t>**)((uintptr_t)this + 0x70);
	}
	 Action1int32_t>*& OnValueChanged() {
		return *(Action1int32_t>**)((uintptr_t)this + 0x78);
	}

	template <typename R = bool> R get_Interactable() {
		return ((R (*)(ButtonWithSliderOnHold*))(Il2CppBase() + 0x15B1878))(this);
	}
	template <typename R = void> R set_Interactable(bool value) {
		return ((R (*)(ButtonWithSliderOnHold*, bool))(Il2CppBase() + 0x15B1894))(this, value);
	}
	template <typename R = void> R Bind(Action1int32_t>* onValueChanged, Action1int32_t>* onHoldRelease, uintptr_t onClick, bool addListeners) {
		return ((R (*)(ButtonWithSliderOnHold*, Action1int32_t>*, Action1int32_t>*, uintptr_t, bool))(Il2CppBase() + 0x15B18CC))(this, onValueChanged, onHoldRelease, onClick, addListeners);
	}
	template <typename R = void> R ChangeValues(int32_t minValue, int32_t maxValue, int32_t value, int32_t borders) {
		return ((R (*)(ButtonWithSliderOnHold*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x15B1C24))(this, minValue, maxValue, value, borders);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(ButtonWithSliderOnHold*, uintptr_t))(Il2CppBase() + 0x15B1CDC))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(ButtonWithSliderOnHold*, uintptr_t))(Il2CppBase() + 0x15B1DC8))(this, eventData);
	}
	template <typename R = void> R Click() {
		return ((R (*)(ButtonWithSliderOnHold*))(Il2CppBase() + 0x15B1EE4))(this);
	}
	template <typename R = void> R ChangeValue(float value) {
		return ((R (*)(ButtonWithSliderOnHold*, float))(Il2CppBase() + 0x15B1EF8))(this, value);
	}
	template <typename R = uintptr_t> R CheckForHold() {
		return ((R (*)(ButtonWithSliderOnHold*))(Il2CppBase() + 0x15B1D50))(this);
	}

};

