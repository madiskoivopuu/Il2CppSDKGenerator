#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ScoutingWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutingWindow"));
	}

	template <typename R = uintptr_t> R& _level() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _scrollRect() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppArray<ScoutingCard*>*> R& _cards() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _scoutingButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = HUDStorePanel*> R& _silverPanel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _progressImage() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _scoutingPanel() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = ScoutingCard*> R& _selectedCard() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = bool> R& _scouting() {
		return *(R*)((uintptr_t)this + 0xC0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ScoutingWindow*))(Il2CppBase() + 0x1359798))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(ScoutingWindow*))(Il2CppBase() + 0x1359884))(this);
	}
	template <typename R = void> R SelectCard(ScoutingCard* card, bool init) {
		return ((R (*)(ScoutingWindow*, ScoutingCard*, bool))(Il2CppBase() + 0x135A4D0))(this, card, init);
	}
	template <typename R = void> R OnCardClick(ScoutingCard* card) {
		return ((R (*)(ScoutingWindow*, ScoutingCard*))(Il2CppBase() + 0x135A650))(this, card);
	}
	template <typename R = ScoutStatus> R GetScoutStatus(ClanEntity* clan) {
		return ((R (*)(ScoutingWindow*, ClanEntity*))(Il2CppBase() + 0x135A394))(this, clan);
	}
	template <typename R = bool> R CanScoutingCard(ScoutingCard* scoutingCard, ClanEntity* clan, GameEntity* target) {
		return ((R (*)(ScoutingWindow*, ScoutingCard*, ClanEntity*, GameEntity*))(Il2CppBase() + 0x135A844))(this, scoutingCard, clan, target);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ScoutingWindow*, float))(Il2CppBase() + 0x135A9AC))(this, deltaTime);
	}
	template <typename R = void> R OnScoutingClick() {
		return ((R (*)(ScoutingWindow*))(Il2CppBase() + 0x135AEC0))(this);
	}
	template <typename R = uintptr_t> R Scouting(Il2CppString* name) {
		return ((R (*)(ScoutingWindow*, Il2CppString*))(Il2CppBase() + 0x135B230))(this, name);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(ScoutingWindow*))(Il2CppBase() + 0x135A12C))(this);
	}
	template <typename R = void> R ShowResult(ServiceMessage result) {
		return ((R (*)(ScoutingWindow*, ServiceMessage))(Il2CppBase() + 0x135B064))(this, result);
	}

};

