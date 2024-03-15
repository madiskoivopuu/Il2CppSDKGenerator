#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInvitesPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInvitesPanel"));
	}

	template <typename R = uintptr_t> R& EmptyPanel() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = GuildInviteItem*> R& GuildInvitePrefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& DeleteAll() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = GuildWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Il2CppList<int64_t>*& _currentInvites() {
		return *(Il2CppList<int64_t>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Bind(GuildWindow* window) {
		return ((R (*)(GuildInvitesPanel*, GuildWindow*))(Il2CppBase() + 0x1B31F68))(this, window);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(GuildInvitesPanel*))(Il2CppBase() + 0x1B31F70))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(GuildInvitesPanel*))(Il2CppBase() + 0x1B32A70))(this);
	}
	template <typename R = void> R UpdateUI(float delta) {
		return ((R (*)(GuildInvitesPanel*, float))(Il2CppBase() + 0x1B32084))(this, delta);
	}
	template <typename R = void> R OnDeleteAllPressed() {
		return ((R (*)(GuildInvitesPanel*))(Il2CppBase() + 0x1B32B30))(this);
	}
	template <typename R = void> R AcceptInvite(int64_t guildInviteId) {
		return ((R (*)(GuildInvitesPanel*, int64_t))(Il2CppBase() + 0x1B331DC))(this, guildInviteId);
	}
	template <typename R = void> R DeleteInvite(int64_t guildInviteId) {
		return ((R (*)(GuildInvitesPanel*, int64_t))(Il2CppBase() + 0x1B33138))(this, guildInviteId);
	}

};

