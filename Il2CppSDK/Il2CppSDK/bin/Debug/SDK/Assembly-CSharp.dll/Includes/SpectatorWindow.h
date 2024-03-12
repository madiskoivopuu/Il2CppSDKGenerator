#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class SpectatorWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpectatorWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& HPHideButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& HPHideImage() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SettingsButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& EnemyInfo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BossTracker() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& EffectRect() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SpectatorClickHandler() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _notify() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& _bossTag() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& _isPlayerInfoShowing() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SpectatorWindow*))(Il2CppBase() + 0x14868F0))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(SpectatorWindow*))(Il2CppBase() + 0x14869DC))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(SpectatorWindow*))(Il2CppBase() + 0x1486E60))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SpectatorWindow*))(Il2CppBase() + 0x14877AC))(this);
	}
	template <typename T = void> T OnHPHideClick() {
		return ((T (*)(SpectatorWindow*))(Il2CppBase() + 0x1487B0C))(this);
	}
	template <typename T = void> T StartSpectate() {
		return ((T (*)(SpectatorWindow*))(Il2CppBase() + 0x148725C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(SpectatorWindow*, float))(Il2CppBase() + 0x1487DE4))(this, deltaTime);
	}
	template <typename T = void> T StopSpectate() {
		return ((T (*)(SpectatorWindow*))(Il2CppBase() + 0x14877B0))(this);
	}
	template <typename T = uintptr_t> static T GetEntityOrCreate(Il2CppString* uniqueLookup, bool isHidden) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x1487C04))(0, uniqueLookup, isHidden);
	}
	template <typename T = void> T OnLeft() {
		return ((T (*)(SpectatorWindow*))(Il2CppBase() + 0x1487F44))(this);
	}
	template <typename T = void> T OnRight() {
		return ((T (*)(SpectatorWindow*))(Il2CppBase() + 0x1487FC4))(this);
	}
	template <typename T = void> T OnTop() {
		return ((T (*)(SpectatorWindow*))(Il2CppBase() + 0x1487FC8))(this);
	}
	template <typename T = void> T OnBottom() {
		return ((T (*)(SpectatorWindow*))(Il2CppBase() + 0x1487FCC))(this);
	}

};

}
