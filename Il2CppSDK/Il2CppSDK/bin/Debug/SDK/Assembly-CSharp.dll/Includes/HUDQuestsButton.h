#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDQuestsButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDQuestsButton"));
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
		return ((R (*)(HUDQuestsButton*, IHUDWindow*))(Il2CppBase() + 0x127BC50))(this, window);
	}
	template <typename R = void> R SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((R (*)(HUDQuestsButton*, bool))(Il2CppBase() + 0x127BD00))(this, isCustomizationModeOn);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDQuestsButton*, float))(Il2CppBase() + 0x127BD5C))(this, deltaTime);
	}
	template <typename R = void> R OnQuestsButtonClick() {
		return ((R (*)(HUDQuestsButton*))(Il2CppBase() + 0x127C238))(this);
	}

};

