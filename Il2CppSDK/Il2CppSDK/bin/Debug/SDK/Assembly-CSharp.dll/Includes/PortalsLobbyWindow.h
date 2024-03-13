#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class PortalsLobbyWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsLobbyWindow"));
	}

	template <typename T = uintptr_t> T& CurrentPortalImage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CurrentPortalText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CloseButtonVisual() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& DeclineButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = StandartButton*> T& WaitingButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& ApproveButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& EnterButton() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SoloButton() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& FamilyButton() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& InviteText() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ApproveWaitingTimeText() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ApproveWaitingLeaderText() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& EnterWaitingTimeText() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& PortalsPoinsCount() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& OnlyInLocationText() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& SoloPlayersPanel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& HealthSoloCoefText() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& DamageSoloCoefText() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = PortalsPlayerView*> T& SoloPlayerView() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = TooltipTrigger*> T& SoloDifficultyTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& FamilyCoefPanel() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& HealthFamilyCoefText() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& DamageFamilyCoefText() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& HealthFamilyGroup() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& DamageFamilyGroup() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& FamilyPanel() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& FamilyPanelLoading() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& FamilyEmptyPlaceholder() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = TooltipTrigger*> T& FamilyDifficultyTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& WinPointsText() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& LosePointsText() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& TimeToCompleteText() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& PowerText() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = TooltipTrigger*> T& WinTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = TooltipTrigger*> T& LoseTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = TooltipTrigger*> T& PowerTooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& _portalExist() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& _lastAcceptPlayerInPortalsCount() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& _lastDenyPlayerInPortalsCount() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& _lastPlayerForPortalsCount() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& _changeCoefsCorouitne() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppString*> T& _nextHpCoefText() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x1579658))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x15798B4))(this);
	}
	template <typename T = void> T UpdatePortalsState() {
		return ((T (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x1579930))(this);
	}
	template <typename T = void> T InitTooltips() {
		return ((T (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x1579BE4))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(PortalsLobbyWindow*, float))(Il2CppBase() + 0x157B51C))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x1579D70))(this);
	}
	template <typename T = void> T ShowExistedPortals(AccountEntity* account, LobbyEntity* portal) {
		return ((T (*)(PortalsLobbyWindow*, AccountEntity*, LobbyEntity*))(Il2CppBase() + 0x157AA14))(this, account, portal);
	}
	template <typename T = void> T ShowCreatePortals(AccountEntity* account) {
		return ((T (*)(PortalsLobbyWindow*, AccountEntity*))(Il2CppBase() + 0x157A000))(this, account);
	}
	template <typename T = void> T RebuildPlayersInPortal(LobbyEntity* lobbyEntity) {
		return ((T (*)(PortalsLobbyWindow*, LobbyEntity*))(Il2CppBase() + 0x157B774))(this, lobbyEntity);
	}
	template <typename T = void> T UpdateButtons(LobbyEntity* portal, AccountEntity* account, LobbyPlayerState* state) {
		return ((T (*)(PortalsLobbyWindow*, LobbyEntity*, AccountEntity*, LobbyPlayerState*))(Il2CppBase() + 0x157C308))(this, portal, account, state);
	}
	template <typename T = void> T UpdateTimers(LobbyEntity* portal) {
		return ((T (*)(PortalsLobbyWindow*, LobbyEntity*))(Il2CppBase() + 0x157BF00))(this, portal);
	}
	template <typename T = uintptr_t> T ChangeFamilyCoefs(Il2CppString* newHpValue, Il2CppString* newDmgValue, bool instant) {
		return ((T (*)(PortalsLobbyWindow*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x157C534))(this, newHpValue, newDmgValue, instant);
	}
	template <typename T = void> T SetCoefText(uintptr_t text, uintptr_t value) {
		return ((T (*)(PortalsLobbyWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x157C5F0))(this, text, value);
	}
	template <typename T = void> T OnFindPlayersForLobby(Il2CppArray<uintptr_t>* playerIds) {
		return ((T (*)(PortalsLobbyWindow*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x157C71C))(this, playerIds);
	}
	template <typename T = void> T SoloButtonClicked() {
		return ((T (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x157D0A0))(this);
	}
	template <typename T = void> T FamilyButtonClicked() {
		return ((T (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x157D250))(this);
	}
	template <typename T = void> T CancelButtonClicked() {
		return ((T (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x157D408))(this);
	}
	template <typename T = void> T ApproveButtonClicked() {
		return ((T (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x157D5D0))(this);
	}

};

