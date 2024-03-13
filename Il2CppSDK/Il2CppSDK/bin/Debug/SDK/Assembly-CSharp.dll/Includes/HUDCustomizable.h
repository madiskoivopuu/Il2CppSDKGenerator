#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDCustomizableBase.h" 

class HUDCustomizable : public HUDCustomizableBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDCustomizable"));
	}

	template <typename T = HUDElement*> T& _elementType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _onOffImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _onOffImageBack() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _onOffButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _activeColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _inactiveColor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = IHUDCustomizer*> T& _hudCustomizer() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = HudElementState*> T& _state() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _isShortModeOn() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& _isCustomizationModeOn() {
		return *(T*)((uintptr_t)this + 0x75);
	}
	template <typename T = Il2CppString*> T& _saveKey() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& _viewOnImage() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& _viewOffImage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = HudElementState*> T& _initialState() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = HudElementState*> T get_State() {
		return ((T (*)(HUDCustomizable*))(Il2CppBase() + 0x1450750))(this);
	}
	template <typename T = void> T set_State(HudElementState* value) {
		return ((T (*)(HUDCustomizable*, HudElementState*))(Il2CppBase() + 0x144EE90))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HUDCustomizable*))(Il2CppBase() + 0x1450890))(this);
	}
	template <typename T = void> T Bind(IHUDCustomizer* hudCustomizer) {
		return ((T (*)(HUDCustomizable*, IHUDCustomizer*))(Il2CppBase() + 0x144E43C))(this, hudCustomizer);
	}
	template <typename T = void> T SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((T (*)(HUDCustomizable*, bool))(Il2CppBase() + 0x144EEFC))(this, isCustomizationModeOn);
	}
	template <typename T = void> T SwitchShortMode(bool isShortModeOn) {
		return ((T (*)(HUDCustomizable*, bool))(Il2CppBase() + 0x1450B38))(this, isShortModeOn);
	}
	template <typename T = void> T OnOffViewClick() {
		return ((T (*)(HUDCustomizable*))(Il2CppBase() + 0x1450C24))(this);
	}
	template <typename T = void> T OnStateChanged() {
		return ((T (*)(HUDCustomizable*))(Il2CppBase() + 0x1450758))(this);
	}
	template <typename T = void> T SaveState() {
		return ((T (*)(HUDCustomizable*))(Il2CppBase() + 0x1450CB8))(this);
	}

};

