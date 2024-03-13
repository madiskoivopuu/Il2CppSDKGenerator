#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDGuildButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDGuildButton"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _activeIconColor() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _inactiveIconColor() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Bind(IHUDWindow* window) {
		return ((T (*)(HUDGuildButton*, IHUDWindow*))(Il2CppBase() + 0x1455AE4))(this, window);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDGuildButton*, float))(Il2CppBase() + 0x1455BA4))(this, deltaTime);
	}
	template <typename T = void> T SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((T (*)(HUDGuildButton*, bool))(Il2CppBase() + 0x1456690))(this, isCustomizationModeOn);
	}
	template <typename T = void> T UpdateCounter() {
		return ((T (*)(HUDGuildButton*))(Il2CppBase() + 0x1455CB4))(this);
	}
	template <typename T = void> T Bindb__3_0() {
		return ((T (*)(HUDGuildButton*))(Il2CppBase() + 0x1456734))(this);
	}

};

