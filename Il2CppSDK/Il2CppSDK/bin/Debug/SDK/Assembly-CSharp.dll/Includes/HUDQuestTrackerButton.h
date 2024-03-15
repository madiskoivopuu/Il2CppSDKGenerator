#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDQuestTrackerButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDQuestTrackerButton"));
	}

	template <typename R = uintptr_t> R& _objectToHide() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = HUDButtonBaseCustomizable*> R& _synhroObject() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = bool> R& IsHiddenByShortMod() {
		return *(R*)((uintptr_t)this + 0xD8);
	}

	template <typename R = bool> R get_IsHiddenByShortMod() {
		return ((R (*)(HUDQuestTrackerButton*))(Il2CppBase() + 0x127B9FC))(this);
	}
	template <typename R = void> R set_IsHiddenByShortMod(bool value) {
		return ((R (*)(HUDQuestTrackerButton*, bool))(Il2CppBase() + 0x127BA04))(this, value);
	}
	template <typename R = uintptr_t> R get_Button() {
		return ((R (*)(HUDQuestTrackerButton*))(Il2CppBase() + 0x127BA10))(this);
	}
	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDQuestTrackerButton*, IHUDWindow*))(Il2CppBase() + 0x127BA18))(this, window);
	}
	template <typename R = void> R SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((R (*)(HUDQuestTrackerButton*, bool))(Il2CppBase() + 0x127BA20))(this, isCustomizationModeOn);
	}
	template <typename R = void> R SwitchShortMode(bool isShortModeOn) {
		return ((R (*)(HUDQuestTrackerButton*, bool))(Il2CppBase() + 0x127BA74))(this, isShortModeOn);
	}
	template <typename R = void> R SaveState() {
		return ((R (*)(HUDQuestTrackerButton*))(Il2CppBase() + 0x127BBE8))(this);
	}

};

