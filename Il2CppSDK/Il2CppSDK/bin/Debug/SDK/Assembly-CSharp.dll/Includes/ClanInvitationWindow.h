#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ClanInvitationWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInvitationWindow"));
	}

	template <typename R = PlayerNameView*> R& PlayerNamePrefab() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = PlayerInviteView*> R& PlayerInvitePrefab() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& RandomPlayersContainer() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& RandomPlayersLoadingSpinner() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& InvitesContainer() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& NoLFCPlayersPanel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& NoInvitesPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& RandomizeInvitablePlayersButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& InvitePlayerButton() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& ShareInviteButton() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& FindPlayerButton() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = PlayerNameView*> R& _selectedPlayer() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = Il2CppArray<PlayerInviteView*>*> R& _invites() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = InviteComparer*> R& _inviteComparer() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = bool> R& _canInviteMore() {
		return *(R*)((uintptr_t)this + 0xF0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158A4C0))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158AE88))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ClanInvitationWindow*, float))(Il2CppBase() + 0x158AF50))(this, deltaTime);
	}
	template <typename R = void> R OnShareInviteButtonClicked() {
		return ((R (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158B4C4))(this);
	}
	template <typename R = void> R OnFindPlayerButtonClicked() {
		return ((R (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158B648))(this);
	}
	template <typename R = void> R OnGetRandomPlayersButtonClicked() {
		return ((R (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158A810))(this);
	}
	template <typename R = void> R OnReceiveRandomInvitablePlayers(Il2CppArray<int64_t>* ids) {
		return ((R (*)(ClanInvitationWindow*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x158B814))(this, ids);
	}
	template <typename R = void> R OnPlayerNameClicked(PlayerNameView* view) {
		return ((R (*)(ClanInvitationWindow*, PlayerNameView*))(Il2CppBase() + 0x158BC4C))(this, view);
	}
	template <typename R = void> R OnInvitePlayerButtonClicked() {
		return ((R (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158BDD0))(this);
	}
	template <typename R = void> R CancelOngoingInvite(int64_t inviteId) {
		return ((R (*)(ClanInvitationWindow*, int64_t))(Il2CppBase() + 0x158C080))(this, inviteId);
	}
	template <typename R = void> R OnInvitePlayerButtonClickedb__25_0() {
		return ((R (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158C174))(this);
	}

};

