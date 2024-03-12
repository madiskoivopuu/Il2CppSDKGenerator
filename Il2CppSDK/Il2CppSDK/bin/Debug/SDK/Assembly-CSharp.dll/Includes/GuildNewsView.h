#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildNewsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildNewsView"));
	}

	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Capture() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& DailyMessageIcon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& GuildMemberJoiningIcon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& GuildMemberLeavingIcon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& GuildMemberRankIcon() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& GuildQuestStartedIcon() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& GuildQuestCompletedIcon() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& GuildQuestFailedIcon() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& GuildRankIcon() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& LocalGuildRankIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& KilledBossIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int64_t> T& _ticks() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Init(uintptr_t window, uintptr_t entity) {
		return ((T (*)(GuildNewsView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B3AEB0))(this, window, entity);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(GuildNewsView*, float))(Il2CppBase() + 0x1B3B274))(this, deltaTime);
	}
	template <typename T = Il2CppString*> T GetEventTime(int64_t ticks) {
		return ((T (*)(GuildNewsView*, int64_t))(Il2CppBase() + 0x1B3B2DC))(this, ticks);
	}
	template <typename T = uintptr_t> T GetEventIcon(uintptr_t type) {
		return ((T (*)(GuildNewsView*, uintptr_t))(Il2CppBase() + 0x1B3B1F8))(this, type);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuildNewsView*))(Il2CppBase() + 0x1B3B8B0))(this);
	}

};

}
