#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class InvasionLobbyWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InvasionLobbyWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = StandartButton*> T& EnterButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Mods() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Mode*> T& DefaultMode() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& WorldImage() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& EnterCounterText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ActiveModeColor() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& DisabledModeColor() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Mode*> T& _currentMode() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146B2E0))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146B4E4))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(InvasionLobbyWindow*, float))(Il2CppBase() + 0x146BC58))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146BCEC))(this);
	}
	template <typename T = void> T Enter() {
		return ((T (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146BF68))(this);
	}
	template <typename T = void> T EnableMod(Mode* mode) {
		return ((T (*)(InvasionLobbyWindow*, Mode*))(Il2CppBase() + 0x146B988))(this, mode);
	}
	template <typename T = void> T UpdatePlayerEnterCount() {
		return ((T (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146B69C))(this);
	}
	template <typename T = int32_t> T GetPlayerEnterCountLeft() {
		return ((T (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146C504))(this);
	}
	template <typename T = void> T Awakeb__12_0() {
		return ((T (*)(InvasionLobbyWindow*))(Il2CppBase() + 0x146C804))(this);
	}

};

