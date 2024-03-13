#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDUncustomizable.h" 

class HUDCustomizationButton : public HUDUncustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDCustomizationButton"));
	}

	template <typename T = uintptr_t> T& _holdProgress() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _activeState() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& _holdTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& _fillThreshold() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& _timePassed() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& _isHolded() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& _revertHoldTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& _viewOnImage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& _viewOffImage() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& OnClick() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& OnHold() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Bind(IHUDWindow* hudWindow, uintptr_t onClick, uintptr_t onHold) {
		return ((T (*)(HUDCustomizationButton*, IHUDWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1450F5C))(this, hudWindow, onClick, onHold);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(HUDCustomizationButton*, uintptr_t))(Il2CppBase() + 0x14511B8))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(HUDCustomizationButton*, uintptr_t))(Il2CppBase() + 0x1451228))(this, eventData);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDCustomizationButton*, float))(Il2CppBase() + 0x14512D0))(this, deltaTime);
	}
	template <typename T = void> T OnShortModeOn(bool isShortModeOn) {
		return ((T (*)(HUDCustomizationButton*, bool))(Il2CppBase() + 0x14515D4))(this, isShortModeOn);
	}

};

