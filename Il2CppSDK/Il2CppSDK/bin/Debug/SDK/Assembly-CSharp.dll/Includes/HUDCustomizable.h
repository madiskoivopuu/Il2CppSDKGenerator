#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDCustomizableBase.h" 

class HUDCustomizable : public HUDCustomizableBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDCustomizable"));
	}

	template <typename R = HUDElement> R& _elementType() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _onOffImage() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _onOffImageBack() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _onOffButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _activeColor() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _inactiveColor() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = IHUDCustomizer*> R& _hudCustomizer() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = HudElementState> R& _state() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& _isShortModeOn() {
		return *(R*)((uintptr_t)this + 0x74);
	}
	template <typename R = bool> R& _isCustomizationModeOn() {
		return *(R*)((uintptr_t)this + 0x75);
	}
	template <typename R = Il2CppString*> R& _saveKey() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppString*> R& _viewOnImage() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppString*> R& _viewOffImage() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = HudElementState> R& _initialState() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = HudElementState> R get_State() {
		return ((R (*)(HUDCustomizable*))(Il2CppBase() + 0x1450750))(this);
	}
	template <typename R = void> R set_State(HudElementState value) {
		return ((R (*)(HUDCustomizable*, HudElementState))(Il2CppBase() + 0x144EE90))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(HUDCustomizable*))(Il2CppBase() + 0x1450890))(this);
	}
	template <typename R = void> R Bind(IHUDCustomizer* hudCustomizer) {
		return ((R (*)(HUDCustomizable*, IHUDCustomizer*))(Il2CppBase() + 0x144E43C))(this, hudCustomizer);
	}
	template <typename R = void> R SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((R (*)(HUDCustomizable*, bool))(Il2CppBase() + 0x144EEFC))(this, isCustomizationModeOn);
	}
	template <typename R = void> R SwitchShortMode(bool isShortModeOn) {
		return ((R (*)(HUDCustomizable*, bool))(Il2CppBase() + 0x1450B38))(this, isShortModeOn);
	}
	template <typename R = void> R OnOffViewClick() {
		return ((R (*)(HUDCustomizable*))(Il2CppBase() + 0x1450C24))(this);
	}
	template <typename R = void> R OnStateChanged() {
		return ((R (*)(HUDCustomizable*))(Il2CppBase() + 0x1450758))(this);
	}
	template <typename R = void> R SaveState() {
		return ((R (*)(HUDCustomizable*))(Il2CppBase() + 0x1450CB8))(this);
	}

};

