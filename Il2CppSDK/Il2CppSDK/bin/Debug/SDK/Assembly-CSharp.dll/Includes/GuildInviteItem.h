#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInviteItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInviteItem"));
	}

	template <typename T = uintptr_t> T& GuildName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& GuildTag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& MemberCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LeaderName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TimeText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& InfoButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& _guildId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int64_t> T& _inviteId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _actions() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Init(uintptr_t window, int64_t inviteId, uintptr_t acceptAction, uintptr_t deleteAction) {
		return ((T (*)(GuildInviteItem*, uintptr_t, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B2F0F8))(this, window, inviteId, acceptAction, deleteAction);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(GuildInviteItem*, float))(Il2CppBase() + 0x1B2FBA4))(this, deltaTime);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuildInviteItem*))(Il2CppBase() + 0x1B2FECC))(this);
	}
	template <typename T = void> T OnInfoButtonPressed() {
		return ((T (*)(GuildInviteItem*))(Il2CppBase() + 0x1B2FFBC))(this);
	}
	template <typename T = void> T ShowInfo() {
		return ((T (*)(GuildInviteItem*))(Il2CppBase() + 0x1B30054))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuildInviteItem*))(Il2CppBase() + 0x1B30088))(this);
	}

};

}
