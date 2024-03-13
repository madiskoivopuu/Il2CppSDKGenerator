#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanInvitesPlayerPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInvitesPlayerPanel"));
	}

	template <typename T = IncomeInviteView*> T& IncomeInvitePrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& InvitesContainer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& SphereWarningNotification() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& AcceptButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& DeclineButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = GuildWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = IncomeInviteView*> T& _selectedInvite() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Bind(GuildWindow* window) {
		return ((T (*)(ClanInvitesPlayerPanel*, GuildWindow*))(Il2CppBase() + 0x158C374))(this, window);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ClanInvitesPlayerPanel*))(Il2CppBase() + 0x158C470))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ClanInvitesPlayerPanel*))(Il2CppBase() + 0x158CC2C))(this);
	}
	template <typename T = void> T UpdateInvites() {
		return ((T (*)(ClanInvitesPlayerPanel*))(Il2CppBase() + 0x158C564))(this);
	}
	template <typename T = void> T OnInviteClicked(IncomeInviteView* view) {
		return ((T (*)(ClanInvitesPlayerPanel*, IncomeInviteView*))(Il2CppBase() + 0x158CC78))(this, view);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(ClanInvitesPlayerPanel*, float))(Il2CppBase() + 0x158CE30))(this, deltaTime);
	}
	template <typename T = void> T OnAccept() {
		return ((T (*)(ClanInvitesPlayerPanel*))(Il2CppBase() + 0x158D1C8))(this);
	}
	template <typename T = void> T OnDecline() {
		return ((T (*)(ClanInvitesPlayerPanel*))(Il2CppBase() + 0x158D930))(this);
	}
	template <typename T = void> T ShowInviteDialog(bool isAccept, int64_t inviteId) {
		return ((T (*)(ClanInvitesPlayerPanel*, bool, int64_t))(Il2CppBase() + 0x158D364))(this, isAccept, inviteId);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ClanInvitesPlayerPanel*))(Il2CppBase() + 0x158D9C4))(this);
	}

};

