#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable" 

class HUDPlayerPvPButton: HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDPlayerPvPButton"));
	}

	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _pvpStateColor() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _neutralStateColor() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& _cachedPlayerKillState() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _dialogWindow() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDPlayerPvPButton*, uintptr_t))(Il2CppBase() + 0x1279DB0))(this, window);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDPlayerPvPButton*, float))(Il2CppBase() + 0x127A194))(this, deltaTime);
	}
	template <typename T = void> T SwitchPlayerPvPMode() {
		return ((T (*)(HUDPlayerPvPButton*))(Il2CppBase() + 0x127A2BC))(this);
	}
	template <typename T = void> T UpdatePvPModeStatus(uintptr_t avatar) {
		return ((T (*)(HUDPlayerPvPButton*, uintptr_t))(Il2CppBase() + 0x1279FA8))(this, avatar);
	}

};

}
