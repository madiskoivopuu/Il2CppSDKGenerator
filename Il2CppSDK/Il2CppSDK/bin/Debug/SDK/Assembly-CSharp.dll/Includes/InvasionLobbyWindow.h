#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class InvasionLobbyWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InvasionLobbyWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = StandartButton*> R& EnterButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppArray<ModeSettings*>*> R& Mods() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Mode*> R& DefaultMode() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& WorldImage() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& EnterCounterText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& ActiveModeColor() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& DisabledModeColor() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = Mode*> R& _currentMode() {
		return *(R*)((uintptr_t)this + 0xC8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146B2E0))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146B4E4))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(InvasionLobbyWindow*, float))(Il2CppBase() + 0x146BC58))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146BCEC))(this);
	}
	template <typename R = void> R Enter() {
		return ((R (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146BF68))(this);
	}
	template <typename R = void> R EnableMod(Mode* mode) {
		return ((R (*)(InvasionLobbyWindow*, Mode*))(Il2CppBase() + 0x146B988))(this, mode);
	}
	template <typename R = void> R UpdatePlayerEnterCount() {
		return ((R (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146B69C))(this);
	}
	template <typename R = int32_t> R GetPlayerEnterCountLeft() {
		return ((R (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146C504))(this);
	}
	template <typename R = void> R Awakeb__12_0() {
		return ((R (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146C804))(this);
	}

};

