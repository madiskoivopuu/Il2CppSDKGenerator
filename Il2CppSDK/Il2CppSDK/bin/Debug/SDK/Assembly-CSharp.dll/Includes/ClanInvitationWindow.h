#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class ClanInvitationWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInvitationWindow"));
	}

	template <typename T = uintptr_t> T& PlayerNamePrefab() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& PlayerInvitePrefab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RandomPlayersContainer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& RandomPlayersLoadingSpinner() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& InvitesContainer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& NoLFCPlayersPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& NoInvitesPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RandomizeInvitablePlayersButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& InvitePlayerButton() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ShareInviteButton() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& FindPlayerButton() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _selectedPlayer() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _invites() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _inviteComparer() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& _canInviteMore() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158A4C0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158AE88))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ClanInvitationWindow*, float))(Il2CppBase() + 0x158AF50))(this, deltaTime);
	}
	template <typename T = void> T OnShareInviteButtonClicked() {
		return ((T (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158B4C4))(this);
	}
	template <typename T = void> T OnFindPlayerButtonClicked() {
		return ((T (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158B648))(this);
	}
	template <typename T = void> T OnGetRandomPlayersButtonClicked() {
		return ((T (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158A810))(this);
	}
	template <typename T = void> T OnReceiveRandomInvitablePlayers(Il2CppArray<uintptr_t>* ids) {
		return ((T (*)(ClanInvitationWindow*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x158B814))(this, ids);
	}
	template <typename T = void> T OnPlayerNameClicked(uintptr_t view) {
		return ((T (*)(ClanInvitationWindow*, uintptr_t))(Il2CppBase() + 0x158BC4C))(this, view);
	}
	template <typename T = void> T OnInvitePlayerButtonClicked() {
		return ((T (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158BDD0))(this);
	}
	template <typename T = void> T CancelOngoingInvite(int64_t inviteId) {
		return ((T (*)(ClanInvitationWindow*, int64_t))(Il2CppBase() + 0x158C080))(this, inviteId);
	}
	template <typename T = void> T OnInvitePlayerButtonClickedb__25_0() {
		return ((T (*)(ClanInvitationWindow*))(Il2CppBase() + 0x158C174))(this);
	}

};

}
