#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDUncustomizable.h" 

class HUDCustomizationButton : public HUDUncustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDCustomizationButton"));
	}

	template <typename R = uintptr_t> R& _holdProgress() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _activeState() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = float> R& _holdTime() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = float> R& _fillThreshold() {
		return *(R*)((uintptr_t)this + 0x7C);
	}
	template <typename R = float> R& _timePassed() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = bool> R& _isHolded() {
		return *(R*)((uintptr_t)this + 0x84);
	}
	template <typename R = float> R& _revertHoldTime() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppString*> R& _viewOnImage() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = Il2CppString*> R& _viewOffImage() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& OnClick() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& OnHold() {
		return *(R*)((uintptr_t)this + 0xA8);
	}

	template <typename R = void> R Bind(IHUDWindow* hudWindow, uintptr_t onClick, uintptr_t onHold) {
		return ((R (*)(HUDCustomizationButton*, IHUDWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1450F5C))(this, hudWindow, onClick, onHold);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(HUDCustomizationButton*, uintptr_t))(Il2CppBase() + 0x14511B8))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(HUDCustomizationButton*, uintptr_t))(Il2CppBase() + 0x1451228))(this, eventData);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDCustomizationButton*, float))(Il2CppBase() + 0x14512D0))(this, deltaTime);
	}
	template <typename R = void> R OnShortModeOn(bool isShortModeOn) {
		return ((R (*)(HUDCustomizationButton*, bool))(Il2CppBase() + 0x14515D4))(this, isShortModeOn);
	}

};

