#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class PortalsLobbyWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsLobbyWindow"));
	}

	template <typename R = uintptr_t> R& CurrentPortalImage() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& CurrentPortalText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& CloseButtonVisual() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& DeclineButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = StandartButton*> R& WaitingButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& ApproveButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& EnterButton() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& SoloButton() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& FamilyButton() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& InviteText() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& ApproveWaitingTimeText() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& ApproveWaitingLeaderText() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& EnterWaitingTimeText() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& PortalsPoinsCount() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& OnlyInLocationText() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& SoloPlayersPanel() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& HealthSoloCoefText() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& DamageSoloCoefText() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = PortalsPlayerView*> R& SoloPlayerView() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = TooltipTrigger*> R& SoloDifficultyTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& FamilyCoefPanel() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& HealthFamilyCoefText() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& DamageFamilyCoefText() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& HealthFamilyGroup() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = uintptr_t> R& DamageFamilyGroup() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& FamilyPanel() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& FamilyPanelLoading() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& FamilyEmptyPlaceholder() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = TooltipTrigger*> R& FamilyDifficultyTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& WinPointsText() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& LosePointsText() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& TimeToCompleteText() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& PowerText() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = TooltipTrigger*> R& WinTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = TooltipTrigger*> R& LoseTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = TooltipTrigger*> R& PowerTooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = bool> R& _portalExist() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = int32_t> R& _lastAcceptPlayerInPortalsCount() {
		return *(R*)((uintptr_t)this + 0x1AC);
	}
	template <typename R = int32_t> R& _lastDenyPlayerInPortalsCount() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = int32_t> R& _lastPlayerForPortalsCount() {
		return *(R*)((uintptr_t)this + 0x1B4);
	}
	template <typename R = uintptr_t> R& _changeCoefsCorouitne() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = Il2CppString*> R& _nextHpCoefText() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x1579658))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x15798B4))(this);
	}
	template <typename R = void> R UpdatePortalsState() {
		return ((R (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x1579930))(this);
	}
	template <typename R = void> R InitTooltips() {
		return ((R (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x1579BE4))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(PortalsLobbyWindow*, float))(Il2CppBase() + 0x157B51C))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x1579D70))(this);
	}
	template <typename R = void> R ShowExistedPortals(AccountEntity* account, LobbyEntity* portal) {
		return ((R (*)(PortalsLobbyWindow*, AccountEntity*, LobbyEntity*))(Il2CppBase() + 0x157AA14))(this, account, portal);
	}
	template <typename R = void> R ShowCreatePortals(AccountEntity* account) {
		return ((R (*)(PortalsLobbyWindow*, AccountEntity*))(Il2CppBase() + 0x157A000))(this, account);
	}
	template <typename R = void> R RebuildPlayersInPortal(LobbyEntity* lobbyEntity) {
		return ((R (*)(PortalsLobbyWindow*, LobbyEntity*))(Il2CppBase() + 0x157B774))(this, lobbyEntity);
	}
	template <typename R = void> R UpdateButtons(LobbyEntity* portal, AccountEntity* account, LobbyPlayerState state) {
		return ((R (*)(PortalsLobbyWindow*, LobbyEntity*, AccountEntity*, LobbyPlayerState))(Il2CppBase() + 0x157C308))(this, portal, account, state);
	}
	template <typename R = void> R UpdateTimers(LobbyEntity* portal) {
		return ((R (*)(PortalsLobbyWindow*, LobbyEntity*))(Il2CppBase() + 0x157BF00))(this, portal);
	}
	template <typename R = uintptr_t> R ChangeFamilyCoefs(Il2CppString* newHpValue, Il2CppString* newDmgValue, bool instant) {
		return ((R (*)(PortalsLobbyWindow*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x157C534))(this, newHpValue, newDmgValue, instant);
	}
	template <typename R = void> R SetCoefText(uintptr_t text, uintptr_t value) {
		return ((R (*)(PortalsLobbyWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x157C5F0))(this, text, value);
	}
	template <typename R = void> R OnFindPlayersForLobby(Il2CppArray<int64_t>* playerIds) {
		return ((R (*)(PortalsLobbyWindow*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x157C71C))(this, playerIds);
	}
	template <typename R = void> R SoloButtonClicked() {
		return ((R (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x157D0A0))(this);
	}
	template <typename R = void> R FamilyButtonClicked() {
		return ((R (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x157D250))(this);
	}
	template <typename R = void> R CancelButtonClicked() {
		return ((R (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x157D408))(this);
	}
	template <typename R = void> R ApproveButtonClicked() {
		return ((R (*)(PortalsLobbyWindow*))(Il2CppBase() + 0x157D5D0))(this);
	}

};

