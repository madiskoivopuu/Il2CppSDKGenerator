#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDCustomizableBase.h" 

class HUDUncustomizable : public HUDCustomizableBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDUncustomizable"));
	}

	template <typename R = uintptr_t> R& _iconImage() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _activeColor() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _inactiveColor() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _blockImage() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = IHUDCustomizer*> R& _hudCustomizer() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& _isCusomizationModeOn() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R Bind(IHUDCustomizer* hudCustomizer) {
		return ((R (*)(HUDUncustomizable*, IHUDCustomizer*))(Il2CppBase() + 0x12859B4))(this, hudCustomizer);
	}
	template <typename R = void> R SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((R (*)(HUDUncustomizable*, bool))(Il2CppBase() + 0x127FA28))(this, isCustomizationModeOn);
	}

};

