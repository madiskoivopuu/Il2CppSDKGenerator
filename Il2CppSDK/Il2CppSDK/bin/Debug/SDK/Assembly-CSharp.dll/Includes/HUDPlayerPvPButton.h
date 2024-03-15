#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDPlayerPvPButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDPlayerPvPButton"));
	}

	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _pvpStateColor() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& _neutralStateColor() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = bool> R& _cachedPlayerKillState() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = DialogWindow*> R& _dialogWindow() {
		return *(R*)((uintptr_t)this + 0x100);
	}

	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDPlayerPvPButton*, IHUDWindow*))(Il2CppBase() + 0x1279DB0))(this, window);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDPlayerPvPButton*, float))(Il2CppBase() + 0x127A194))(this, deltaTime);
	}
	template <typename R = void> R SwitchPlayerPvPMode() {
		return ((R (*)(HUDPlayerPvPButton*))(Il2CppBase() + 0x127A2BC))(this);
	}
	template <typename R = void> R UpdatePvPModeStatus(GameEntity* avatar) {
		return ((R (*)(HUDPlayerPvPButton*, GameEntity*))(Il2CppBase() + 0x1279FA8))(this, avatar);
	}

};

