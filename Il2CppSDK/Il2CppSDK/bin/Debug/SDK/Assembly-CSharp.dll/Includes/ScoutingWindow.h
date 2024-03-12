#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class ScoutingWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutingWindow"));
	}

	template <typename T = uintptr_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _scrollRect() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cards() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _scoutingButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _silverPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _progressImage() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _scoutingPanel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _selectedCard() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& _scouting() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ScoutingWindow*))(Il2CppBase() + 0x1359798))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(ScoutingWindow*))(Il2CppBase() + 0x1359884))(this);
	}
	template <typename T = void> T SelectCard(uintptr_t card, bool init) {
		return ((T (*)(ScoutingWindow*, uintptr_t, bool))(Il2CppBase() + 0x135A4D0))(this, card, init);
	}
	template <typename T = void> T OnCardClick(uintptr_t card) {
		return ((T (*)(ScoutingWindow*, uintptr_t))(Il2CppBase() + 0x135A650))(this, card);
	}
	template <typename T = uintptr_t> T GetScoutStatus(uintptr_t clan) {
		return ((T (*)(ScoutingWindow*, uintptr_t))(Il2CppBase() + 0x135A394))(this, clan);
	}
	template <typename T = bool> T CanScoutingCard(uintptr_t scoutingCard, uintptr_t clan, uintptr_t target) {
		return ((T (*)(ScoutingWindow*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x135A844))(this, scoutingCard, clan, target);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ScoutingWindow*, float))(Il2CppBase() + 0x135A9AC))(this, deltaTime);
	}
	template <typename T = void> T OnScoutingClick() {
		return ((T (*)(ScoutingWindow*))(Il2CppBase() + 0x135AEC0))(this);
	}
	template <typename T = uintptr_t> T Scouting(Il2CppString* name) {
		return ((T (*)(ScoutingWindow*, Il2CppString*))(Il2CppBase() + 0x135B230))(this, name);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(ScoutingWindow*))(Il2CppBase() + 0x135A12C))(this);
	}
	template <typename T = void> T ShowResult(uintptr_t result) {
		return ((T (*)(ScoutingWindow*, uintptr_t))(Il2CppBase() + 0x135B064))(this, result);
	}

};

}
