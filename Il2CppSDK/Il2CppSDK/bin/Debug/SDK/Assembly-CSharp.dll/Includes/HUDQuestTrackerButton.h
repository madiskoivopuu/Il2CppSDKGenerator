#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDQuestTrackerButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDQuestTrackerButton"));
	}

	template <typename T = uintptr_t> T& _objectToHide() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = HUDButtonBaseCustomizable*> T& _synhroObject() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& IsHiddenByShortMod() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = bool> T get_IsHiddenByShortMod() {
		return ((T (*)(HUDQuestTrackerButton*))(Il2CppBase() + 0x127B9FC))(this);
	}
	template <typename T = void> T set_IsHiddenByShortMod(bool value) {
		return ((T (*)(HUDQuestTrackerButton*, bool))(Il2CppBase() + 0x127BA04))(this, value);
	}
	template <typename T = uintptr_t> T get_Button() {
		return ((T (*)(HUDQuestTrackerButton*))(Il2CppBase() + 0x127BA10))(this);
	}
	template <typename T = void> T Bind(IHUDWindow* window) {
		return ((T (*)(HUDQuestTrackerButton*, IHUDWindow*))(Il2CppBase() + 0x127BA18))(this, window);
	}
	template <typename T = void> T SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((T (*)(HUDQuestTrackerButton*, bool))(Il2CppBase() + 0x127BA20))(this, isCustomizationModeOn);
	}
	template <typename T = void> T SwitchShortMode(bool isShortModeOn) {
		return ((T (*)(HUDQuestTrackerButton*, bool))(Il2CppBase() + 0x127BA74))(this, isShortModeOn);
	}
	template <typename T = void> T SaveState() {
		return ((T (*)(HUDQuestTrackerButton*))(Il2CppBase() + 0x127BBE8))(this);
	}

};

