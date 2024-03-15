#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class SpectatorWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpectatorWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& HPHideButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& HPHideImage() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = HUDSettingsButton*> R& SettingsButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = HUDActorInfo*> R& EnemyInfo() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = HUDBossTracker*> R& BossTracker() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& EffectRect() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = SpectatorClickHandler*> R& SpectatorClickHandler() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = HUDNotifyView*> R& _notify() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = Il2CppString*> R& _bossTag() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = bool> R& _isPlayerInfoShowing() {
		return *(R*)((uintptr_t)this + 0xC8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(SpectatorWindow*))(Il2CppBase() + 0x14868F0))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(SpectatorWindow*))(Il2CppBase() + 0x14869DC))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(SpectatorWindow*))(Il2CppBase() + 0x1486E60))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(SpectatorWindow*))(Il2CppBase() + 0x14877AC))(this);
	}
	template <typename R = void> R OnHPHideClick() {
		return ((R (*)(SpectatorWindow*))(Il2CppBase() + 0x1487B0C))(this);
	}
	template <typename R = void> R StartSpectate() {
		return ((R (*)(SpectatorWindow*))(Il2CppBase() + 0x148725C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(SpectatorWindow*, float))(Il2CppBase() + 0x1487DE4))(this, deltaTime);
	}
	template <typename R = void> R StopSpectate() {
		return ((R (*)(SpectatorWindow*))(Il2CppBase() + 0x14877B0))(this);
	}
	template <typename R = GameEntity*> static R GetEntityOrCreate(Il2CppString* uniqueLookup, bool isHidden) {
		return ((R (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x1487C04))(0, uniqueLookup, isHidden);
	}
	template <typename R = void> R OnLeft() {
		return ((R (*)(SpectatorWindow*))(Il2CppBase() + 0x1487F44))(this);
	}
	template <typename R = void> R OnRight() {
		return ((R (*)(SpectatorWindow*))(Il2CppBase() + 0x1487FC4))(this);
	}
	template <typename R = void> R OnTop() {
		return ((R (*)(SpectatorWindow*))(Il2CppBase() + 0x1487FC8))(this);
	}
	template <typename R = void> R OnBottom() {
		return ((R (*)(SpectatorWindow*))(Il2CppBase() + 0x1487FCC))(this);
	}

};

