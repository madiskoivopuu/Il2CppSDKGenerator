#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanInvitesPlayerPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInvitesPlayerPanel"));
	}

	template <typename R = IncomeInviteView*> R& IncomeInvitePrefab() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& InvitesContainer() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& SphereWarningNotification() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& AcceptButton() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& DeclineButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = GuildWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = IncomeInviteView*> R& _selectedInvite() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R Bind(GuildWindow* window) {
		return ((R (*)(ClanInvitesPlayerPanel*, GuildWindow*))(Il2CppBase() + 0x158C374))(this, window);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ClanInvitesPlayerPanel*))(Il2CppBase() + 0x158C470))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ClanInvitesPlayerPanel*))(Il2CppBase() + 0x158CC2C))(this);
	}
	template <typename R = void> R UpdateInvites() {
		return ((R (*)(ClanInvitesPlayerPanel*))(Il2CppBase() + 0x158C564))(this);
	}
	template <typename R = void> R OnInviteClicked(IncomeInviteView* view) {
		return ((R (*)(ClanInvitesPlayerPanel*, IncomeInviteView*))(Il2CppBase() + 0x158CC78))(this, view);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(ClanInvitesPlayerPanel*, float))(Il2CppBase() + 0x158CE30))(this, deltaTime);
	}
	template <typename R = void> R OnAccept() {
		return ((R (*)(ClanInvitesPlayerPanel*))(Il2CppBase() + 0x158D1C8))(this);
	}
	template <typename R = void> R OnDecline() {
		return ((R (*)(ClanInvitesPlayerPanel*))(Il2CppBase() + 0x158D930))(this);
	}
	template <typename R = void> R ShowInviteDialog(bool isAccept, int64_t inviteId) {
		return ((R (*)(ClanInvitesPlayerPanel*, bool, int64_t))(Il2CppBase() + 0x158D364))(this, isAccept, inviteId);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(ClanInvitesPlayerPanel*))(Il2CppBase() + 0x158D9C4))(this);
	}

};

