#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ButtonWithSliderOnHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ButtonWithSliderOnHold"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _slider() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _holdThreshold() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _updateThreshold() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _valueText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _startHold() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _isHolded() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _checkCoroutine() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _isSliderInited() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _isActionInited() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = int32_t> T& _borders() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& _minPosition() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& _maxPosition() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& _buttonPivotPosition() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _buttonRect() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& OnClick() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& OnHoldRelease() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& OnValueChanged() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = bool> T get_Interactable() {
		return ((T (*)(ButtonWithSliderOnHold*))(Il2CppBase() + 0x15B1878))(this);
	}
	template <typename T = void> T set_Interactable(bool value) {
		return ((T (*)(ButtonWithSliderOnHold*, bool))(Il2CppBase() + 0x15B1894))(this, value);
	}
	template <typename T = void> T Bind(void* onValueChanged, void* onHoldRelease, uintptr_t onClick, bool addListeners) {
		return ((T (*)(ButtonWithSliderOnHold*, void*, void*, uintptr_t, bool))(Il2CppBase() + 0x15B18CC))(this, onValueChanged, onHoldRelease, onClick, addListeners);
	}
	template <typename T = void> T ChangeValues(int32_t minValue, int32_t maxValue, int32_t value, int32_t borders) {
		return ((T (*)(ButtonWithSliderOnHold*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x15B1C24))(this, minValue, maxValue, value, borders);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(ButtonWithSliderOnHold*, uintptr_t))(Il2CppBase() + 0x15B1CDC))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(ButtonWithSliderOnHold*, uintptr_t))(Il2CppBase() + 0x15B1DC8))(this, eventData);
	}
	template <typename T = void> T Click() {
		return ((T (*)(ButtonWithSliderOnHold*))(Il2CppBase() + 0x15B1EE4))(this);
	}
	template <typename T = void> T ChangeValue(float value) {
		return ((T (*)(ButtonWithSliderOnHold*, float))(Il2CppBase() + 0x15B1EF8))(this, value);
	}
	template <typename T = uintptr_t> T CheckForHold() {
		return ((T (*)(ButtonWithSliderOnHold*))(Il2CppBase() + 0x15B1D50))(this);
	}

};

}
