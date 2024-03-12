#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class ClanInvitablePlayersWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInvitablePlayersWindow"));
	}

	template <typename T = uintptr_t> T& PlayerViewPrefab() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& RandomPlayersContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RandomPlayersLoadingSpinner() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& NoLFCPlayersPanel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& RandomizeInvitablePlayersButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& InvitePlayerButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _selectedPlayer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(ClanInvitablePlayersWindow*))(Il2CppBase() + 0x1588494))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ClanInvitablePlayersWindow*))(Il2CppBase() + 0x1588C70))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ClanInvitablePlayersWindow*, float))(Il2CppBase() + 0x1588D08))(this, deltaTime);
	}
	template <typename T = void> T OnGetRandomPlayersButtonClicked() {
		return ((T (*)(ClanInvitablePlayersWindow*))(Il2CppBase() + 0x15885F8))(this);
	}
	template <typename T = void> T OnReceiveRandomInvitablePlayers(Il2CppArray<uintptr_t>* ids) {
		return ((T (*)(ClanInvitablePlayersWindow*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15891A0))(this, ids);
	}
	template <typename T = void> T OnPlayerNameClicked(uintptr_t view) {
		return ((T (*)(ClanInvitablePlayersWindow*, uintptr_t))(Il2CppBase() + 0x1589CC0))(this, view);
	}
	template <typename T = void> T OnInvitePlayerButtonClicked() {
		return ((T (*)(ClanInvitablePlayersWindow*))(Il2CppBase() + 0x1589DF0))(this);
	}
	template <typename T = void> T OnInvitePlayerButtonClickedb__15_0() {
		return ((T (*)(ClanInvitablePlayersWindow*))(Il2CppBase() + 0x158A1E8))(this);
	}

};

}
