#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInviteItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInviteItem"));
	}

	template <typename R = uintptr_t> R& GuildName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& GuildTag() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& MemberCount() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& LeaderName() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& TimeText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& InfoButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int64_t> R& _guildId() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int64_t> R& _inviteId() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = GuildWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppArray<ContextAction>*> R& _actions() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R Init(GuildWindow* window, int64_t inviteId, uintptr_t acceptAction, uintptr_t deleteAction) {
		return ((R (*)(GuildInviteItem*, GuildWindow*, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B2F0F8))(this, window, inviteId, acceptAction, deleteAction);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(GuildInviteItem*, float))(Il2CppBase() + 0x1B2FBA4))(this, deltaTime);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(GuildInviteItem*))(Il2CppBase() + 0x1B2FECC))(this);
	}
	template <typename R = void> R OnInfoButtonPressed() {
		return ((R (*)(GuildInviteItem*))(Il2CppBase() + 0x1B2FFBC))(this);
	}
	template <typename R = void> R ShowInfo() {
		return ((R (*)(GuildInviteItem*))(Il2CppBase() + 0x1B30054))(this);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(GuildInviteItem*))(Il2CppBase() + 0x1B30088))(this);
	}

};

