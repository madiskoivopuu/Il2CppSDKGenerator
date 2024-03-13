#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildMemberItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildMemberItem"));
	}

	template <typename T = uintptr_t> T& PlayerOnlineStatus() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Rank() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& WeeklyGuildPoints() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = TooltipTrigger*> T& WeeklyGuildPointsTooltip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& InfoButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& LeaveButton() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = GuildWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _actions() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Init(GuildWindow* window, int64_t playerId) {
		return ((T (*)(GuildMemberItem*, GuildWindow*, int64_t))(Il2CppBase() + 0x1B36810))(this, window, playerId);
	}
	template <typename T = void> T OnDraw(float detaTime) {
		return ((T (*)(GuildMemberItem*, float))(Il2CppBase() + 0x1B37070))(this, detaTime);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuildMemberItem*))(Il2CppBase() + 0x1B3744C))(this);
	}
	template <typename T = void> T OnInfoButtonPressed() {
		return ((T (*)(GuildMemberItem*))(Il2CppBase() + 0x1B37538))(this);
	}
	template <typename T = void> T OnLeaveButtonPressed() {
		return ((T (*)(GuildMemberItem*))(Il2CppBase() + 0x1B3761C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuildMemberItem*))(Il2CppBase() + 0x1B38200))(this);
	}

};

