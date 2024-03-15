#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildNewsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildNewsView"));
	}

	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Capture() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& DailyMessageIcon() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& GuildMemberJoiningIcon() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& GuildMemberLeavingIcon() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& GuildMemberRankIcon() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& GuildQuestStartedIcon() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& GuildQuestCompletedIcon() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& GuildQuestFailedIcon() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& GuildRankIcon() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& LocalGuildRankIcon() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& KilledBossIcon() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int64_t> R& _ticks() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R Init(UIWindow* window, ChatEntity* entity) {
		return ((R (*)(GuildNewsView*, UIWindow*, ChatEntity*))(Il2CppBase() + 0x1B3AEB0))(this, window, entity);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(GuildNewsView*, float))(Il2CppBase() + 0x1B3B274))(this, deltaTime);
	}
	template <typename R = Il2CppString*> R GetEventTime(int64_t ticks) {
		return ((R (*)(GuildNewsView*, int64_t))(Il2CppBase() + 0x1B3B2DC))(this, ticks);
	}
	template <typename R = uintptr_t> R GetEventIcon(ProtoModels::GuildEventType* type) {
		return ((R (*)(GuildNewsView*, ProtoModels::GuildEventType*))(Il2CppBase() + 0x1B3B1F8))(this, type);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(GuildNewsView*))(Il2CppBase() + 0x1B3B8B0))(this);
	}

};

