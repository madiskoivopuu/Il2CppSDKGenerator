#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable" 

class HUDRaidButton: HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDRaidButton"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _buttonAnimator() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _notificationContainer() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _searchingContainer() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _combatContainer() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _shieldContainer() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _timerContainer() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _activeIconColor() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _inactiveIconColor() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDRaidButton*, uintptr_t))(Il2CppBase() + 0x127C73C))(this, window);
	}
	template <typename T = void> T SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((T (*)(HUDRaidButton*, bool))(Il2CppBase() + 0x127C82C))(this, isCustomizationModeOn);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDRaidButton*, float))(Il2CppBase() + 0x127C8C4))(this, deltaTime);
	}
	template <typename T = void> T UpdateDrawg__updateNoneState|12_0(uintptr_t ) {
		return ((T (*)(HUDRaidButton*, uintptr_t))(Il2CppBase() + 0x127CEE4))(this, );
	}
	template <typename T = void> T UpdateDrawg__updateSearchingState|12_1(uintptr_t ) {
		return ((T (*)(HUDRaidButton*, uintptr_t))(Il2CppBase() + 0x127CF28))(this, );
	}
	template <typename T = void> T UpdateDrawg__updateCombatState|12_2(uintptr_t ) {
		return ((T (*)(HUDRaidButton*, uintptr_t))(Il2CppBase() + 0x127CFEC))(this, );
	}
	template <typename T = void> T UpdateDrawg__updateShieldState|12_3(uintptr_t ) {
		return ((T (*)(HUDRaidButton*, uintptr_t))(Il2CppBase() + 0x127D274))(this, );
	}
	template <typename T = Il2CppString*> T UpdateDrawg__getStopwatchSearchingTimer|12_4(int64_t startTick, uintptr_t ) {
		return ((T (*)(HUDRaidButton*, int64_t, uintptr_t))(Il2CppBase() + 0x127D4E4))(this, startTick, );
	}

};

}
