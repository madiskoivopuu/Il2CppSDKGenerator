#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInvitesPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInvitesPanel"));
	}

	template <typename T = uintptr_t> T& EmptyPanel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = GuildInviteItem*> T& GuildInvitePrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DeleteAll() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = GuildWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<int64_t>*> T& _currentInvites() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Bind(GuildWindow* window) {
		return ((T (*)(GuildInvitesPanel*, GuildWindow*))(Il2CppBase() + 0x1B31F68))(this, window);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildInvitesPanel*))(Il2CppBase() + 0x1B31F70))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GuildInvitesPanel*))(Il2CppBase() + 0x1B32A70))(this);
	}
	template <typename T = void> T UpdateUI(float delta) {
		return ((T (*)(GuildInvitesPanel*, float))(Il2CppBase() + 0x1B32084))(this, delta);
	}
	template <typename T = void> T OnDeleteAllPressed() {
		return ((T (*)(GuildInvitesPanel*))(Il2CppBase() + 0x1B32B30))(this);
	}
	template <typename T = void> T AcceptInvite(int64_t guildInviteId) {
		return ((T (*)(GuildInvitesPanel*, int64_t))(Il2CppBase() + 0x1B331DC))(this, guildInviteId);
	}
	template <typename T = void> T DeleteInvite(int64_t guildInviteId) {
		return ((T (*)(GuildInvitesPanel*, int64_t))(Il2CppBase() + 0x1B33138))(this, guildInviteId);
	}

};

