#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseCustomizable.h" 

class HUDTournamentButton : public HUDButtonBaseCustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDTournamentButton"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _activeIconColor() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _inactiveIconColor() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& _tournamentsContainer() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = VisualElement> R& _rootVisual() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = VisualElement> R& _globalVisual() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = VisualElement> R& _localVisual() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	 IGroup1<TournamentEntity*>*& _globalTournaments() {
		return *(IGroup1<TournamentEntity*>**)((uintptr_t)this + 0x188);
	}
	template <typename R = bool> R& _isOpenedPanel() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = Il2CppString*> R& _lastGlobalTournamentBlueprint() {
		return *(R*)((uintptr_t)this + 0x198);
	}

	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDTournamentButton*, IHUDWindow*))(Il2CppBase() + 0x1282BA0))(this, window);
	}
	template <typename R = void> R SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((R (*)(HUDTournamentButton*, bool))(Il2CppBase() + 0x1282DF8))(this, isCustomizationModeOn);
	}
	template <typename R = void> R DisableNotifiers() {
		return ((R (*)(HUDTournamentButton*))(Il2CppBase() + 0x1282E54))(this);
	}
	template <typename R = TournamentEntity*> R GetGlobalTournament(ICommonClientWorld* world) {
		return ((R (*)(HUDTournamentButton*, ICommonClientWorld*))(Il2CppBase() + 0x1282EF4))(this, world);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDTournamentButton*, float))(Il2CppBase() + 0x12836B0))(this, deltaTime);
	}
	template <typename R = void> R SingleTournamentUpdateDraw(ICommonClientWorld* world, AccountEntity* account, PlayerEntity* ownPlayer, VisualElement visualElement) {
		return ((R (*)(HUDTournamentButton*, ICommonClientWorld*, AccountEntity*, PlayerEntity*, VisualElement))(Il2CppBase() + 0x1283E8C))(this, world, account, ownPlayer, visualElement);
	}
	template <typename R = void> R MultyTournamentsUpdateDraw(ICommonClientWorld* world, AccountEntity* account, PlayerEntity* ownPlayer, TournamentEntity* globalTournament) {
		return ((R (*)(HUDTournamentButton*, ICommonClientWorld*, AccountEntity*, PlayerEntity*, TournamentEntity*))(Il2CppBase() + 0x1283A5C))(this, world, account, ownPlayer, globalTournament);
	}
	template <typename R = void> R OnTournamentClicked() {
		return ((R (*)(HUDTournamentButton*))(Il2CppBase() + 0x1284B04))(this);
	}
	template <typename R = void> R OnShowLocalTournament() {
		return ((R (*)(HUDTournamentButton*))(Il2CppBase() + 0x1284F70))(this);
	}
	template <typename R = void> R OnShowGlobalTournament() {
		return ((R (*)(HUDTournamentButton*))(Il2CppBase() + 0x12856B8))(this);
	}

};

