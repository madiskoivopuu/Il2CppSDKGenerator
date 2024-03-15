#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ClanInvitablePlayersWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInvitablePlayersWindow"));
	}

	template <typename R = ClanPlayerView*> R& PlayerViewPrefab() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& RandomPlayersContainer() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& RandomPlayersLoadingSpinner() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& NoLFCPlayersPanel() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& RandomizeInvitablePlayersButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& InvitePlayerButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = ClanPlayerView*> R& _selectedPlayer() {
		return *(R*)((uintptr_t)this + 0xB0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(ClanInvitablePlayersWindow*))(Il2CppBase() + 0x1588494))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ClanInvitablePlayersWindow*))(Il2CppBase() + 0x1588C70))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ClanInvitablePlayersWindow*, float))(Il2CppBase() + 0x1588D08))(this, deltaTime);
	}
	template <typename R = void> R OnGetRandomPlayersButtonClicked() {
		return ((R (*)(ClanInvitablePlayersWindow*))(Il2CppBase() + 0x15885F8))(this);
	}
	template <typename R = void> R OnReceiveRandomInvitablePlayers(Il2CppArray<int64_t>* ids) {
		return ((R (*)(ClanInvitablePlayersWindow*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x15891A0))(this, ids);
	}
	template <typename R = void> R OnPlayerNameClicked(ClanPlayerView* view) {
		return ((R (*)(ClanInvitablePlayersWindow*, ClanPlayerView*))(Il2CppBase() + 0x1589CC0))(this, view);
	}
	template <typename R = void> R OnInvitePlayerButtonClicked() {
		return ((R (*)(ClanInvitablePlayersWindow*))(Il2CppBase() + 0x1589DF0))(this);
	}
	template <typename R = void> R OnInvitePlayerButtonClickedb__15_0() {
		return ((R (*)(ClanInvitablePlayersWindow*))(Il2CppBase() + 0x158A1E8))(this);
	}

};

