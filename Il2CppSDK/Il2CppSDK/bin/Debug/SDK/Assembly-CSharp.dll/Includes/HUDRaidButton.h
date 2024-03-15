#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDRaidButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDRaidButton"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _buttonAnimator() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _notificationContainer() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& _searchingContainer() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& _combatContainer() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& _shieldContainer() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& _timerContainer() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& _activeIconColor() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& _inactiveIconColor() {
		return *(R*)((uintptr_t)this + 0x118);
	}

	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDRaidButton*, IHUDWindow*))(Il2CppBase() + 0x127C73C))(this, window);
	}
	template <typename R = void> R SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((R (*)(HUDRaidButton*, bool))(Il2CppBase() + 0x127C82C))(this, isCustomizationModeOn);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDRaidButton*, float))(Il2CppBase() + 0x127C8C4))(this, deltaTime);
	}
	template <typename R = void> R UpdateDrawg__updateNoneState|12_0(uintptr_t ) {
		return ((R (*)(HUDRaidButton*, uintptr_t))(Il2CppBase() + 0x127CEE4))(this, );
	}
	template <typename R = void> R UpdateDrawg__updateSearchingState|12_1(uintptr_t ) {
		return ((R (*)(HUDRaidButton*, uintptr_t))(Il2CppBase() + 0x127CF28))(this, );
	}
	template <typename R = void> R UpdateDrawg__updateCombatState|12_2(uintptr_t ) {
		return ((R (*)(HUDRaidButton*, uintptr_t))(Il2CppBase() + 0x127CFEC))(this, );
	}
	template <typename R = void> R UpdateDrawg__updateShieldState|12_3(uintptr_t ) {
		return ((R (*)(HUDRaidButton*, uintptr_t))(Il2CppBase() + 0x127D274))(this, );
	}
	template <typename R = Il2CppString*> R UpdateDrawg__getStopwatchSearchingTimer|12_4(int64_t startTick, uintptr_t ) {
		return ((R (*)(HUDRaidButton*, int64_t, uintptr_t))(Il2CppBase() + 0x127D4E4))(this, startTick, );
	}

};

