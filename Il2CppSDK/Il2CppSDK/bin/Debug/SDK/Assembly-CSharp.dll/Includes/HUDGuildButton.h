#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDGuildButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDGuildButton"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _activeIconColor() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _inactiveIconColor() {
		return *(R*)((uintptr_t)this + 0xE0);
	}

	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDGuildButton*, IHUDWindow*))(Il2CppBase() + 0x1455AE4))(this, window);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDGuildButton*, float))(Il2CppBase() + 0x1455BA4))(this, deltaTime);
	}
	template <typename R = void> R SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((R (*)(HUDGuildButton*, bool))(Il2CppBase() + 0x1456690))(this, isCustomizationModeOn);
	}
	template <typename R = void> R UpdateCounter() {
		return ((R (*)(HUDGuildButton*))(Il2CppBase() + 0x1455CB4))(this);
	}
	template <typename R = void> R Bindb__3_0() {
		return ((R (*)(HUDGuildButton*))(Il2CppBase() + 0x1456734))(this);
	}

};

