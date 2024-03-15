#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildMemberItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildMemberItem"));
	}

	template <typename R = uintptr_t> R& PlayerOnlineStatus() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& PlayerName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Rank() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& WeeklyGuildPoints() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = TooltipTrigger*> R& WeeklyGuildPointsTooltip() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& InfoButton() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& LeaveButton() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = GuildWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppArray<ContextAction>*> R& _actions() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R Init(GuildWindow* window, int64_t playerId) {
		return ((R (*)(GuildMemberItem*, GuildWindow*, int64_t))(Il2CppBase() + 0x1B36810))(this, window, playerId);
	}
	template <typename R = void> R OnDraw(float detaTime) {
		return ((R (*)(GuildMemberItem*, float))(Il2CppBase() + 0x1B37070))(this, detaTime);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(GuildMemberItem*))(Il2CppBase() + 0x1B3744C))(this);
	}
	template <typename R = void> R OnInfoButtonPressed() {
		return ((R (*)(GuildMemberItem*))(Il2CppBase() + 0x1B37538))(this);
	}
	template <typename R = void> R OnLeaveButtonPressed() {
		return ((R (*)(GuildMemberItem*))(Il2CppBase() + 0x1B3761C))(this);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(GuildMemberItem*))(Il2CppBase() + 0x1B38200))(this);
	}

};

