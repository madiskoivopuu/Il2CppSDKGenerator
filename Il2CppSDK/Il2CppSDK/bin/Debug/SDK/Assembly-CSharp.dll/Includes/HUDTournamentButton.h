#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable" 

class HUDTournamentButton: HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDTournamentButton"));
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
	template <typename T = uintptr_t> T& _tournamentsContainer() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _rootVisual() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _globalVisual() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _localVisual() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = void*> T& _globalTournaments() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& _isOpenedPanel() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppString*> T& _lastGlobalTournamentBlueprint() {
		return *(T*)((uintptr_t)this + 0x198);
	}

	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(HUDTournamentButton*, uintptr_t))(Il2CppBase() + 0x1282BA0))(this, window);
	}
	template <typename T = void> T SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((T (*)(HUDTournamentButton*, bool))(Il2CppBase() + 0x1282DF8))(this, isCustomizationModeOn);
	}
	template <typename T = void> T DisableNotifiers() {
		return ((T (*)(HUDTournamentButton*))(Il2CppBase() + 0x1282E54))(this);
	}
	template <typename T = uintptr_t> T GetGlobalTournament(uintptr_t world) {
		return ((T (*)(HUDTournamentButton*, uintptr_t))(Il2CppBase() + 0x1282EF4))(this, world);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(HUDTournamentButton*, float))(Il2CppBase() + 0x12836B0))(this, deltaTime);
	}
	template <typename T = void> T SingleTournamentUpdateDraw(uintptr_t world, uintptr_t account, uintptr_t ownPlayer, uintptr_t visualElement) {
		return ((T (*)(HUDTournamentButton*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1283E8C))(this, world, account, ownPlayer, visualElement);
	}
	template <typename T = void> T MultyTournamentsUpdateDraw(uintptr_t world, uintptr_t account, uintptr_t ownPlayer, uintptr_t globalTournament) {
		return ((T (*)(HUDTournamentButton*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1283A5C))(this, world, account, ownPlayer, globalTournament);
	}
	template <typename T = void> T OnTournamentClicked() {
		return ((T (*)(HUDTournamentButton*))(Il2CppBase() + 0x1284B04))(this);
	}
	template <typename T = void> T OnShowLocalTournament() {
		return ((T (*)(HUDTournamentButton*))(Il2CppBase() + 0x1284F70))(this);
	}
	template <typename T = void> T OnShowGlobalTournament() {
		return ((T (*)(HUDTournamentButton*))(Il2CppBase() + 0x12856B8))(this);
	}

};

}
