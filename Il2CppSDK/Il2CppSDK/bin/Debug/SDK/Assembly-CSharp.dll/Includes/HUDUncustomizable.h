#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDCustomizableBase" 

class HUDUncustomizable: HUDCustomizableBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDUncustomizable"));
	}

	template <typename T = uintptr_t> T& _iconImage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _activeColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _inactiveColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _blockImage() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _hudCustomizer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _isCusomizationModeOn() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Bind(uintptr_t hudCustomizer) {
		return ((T (*)(HUDUncustomizable*, uintptr_t))(Il2CppBase() + 0x12859B4))(this, hudCustomizer);
	}
	template <typename T = void> T SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((T (*)(HUDUncustomizable*, bool))(Il2CppBase() + 0x127FA28))(this, isCustomizationModeOn);
	}

};

}
