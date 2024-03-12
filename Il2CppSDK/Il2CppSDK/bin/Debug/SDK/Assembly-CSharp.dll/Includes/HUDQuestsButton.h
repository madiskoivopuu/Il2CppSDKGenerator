#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable" 

class HUDQuestsButton: HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDQuestsButton"));
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

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDQuestsButton*, uintptr_t))(Il2CppBase() + 0x127BC50))(this, window);
	}
	template <typename T = void> T SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((T (*)(HUDQuestsButton*, bool))(Il2CppBase() + 0x127BD00))(this, isCustomizationModeOn);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDQuestsButton*, float))(Il2CppBase() + 0x127BD5C))(this, deltaTime);
	}
	template <typename T = void> T OnQuestsButtonClick() {
		return ((T (*)(HUDQuestsButton*))(Il2CppBase() + 0x127C238))(this);
	}

};

}
