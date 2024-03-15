#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "GuildQuestView.h" 

class GuildQuestItemView : public GuildQuestView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestItemView"));
	}

	template <typename R = uintptr_t> R& _startButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _openButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	 Action1<GuildQuestItemView*>*& OnOpenEvent() {
		return *(Action1<GuildQuestItemView*>**)((uintptr_t)this + 0xB8);
	}
	 Action1<GuildQuestItemView*>*& OnStartEvent() {
		return *(Action1<GuildQuestItemView*>**)((uintptr_t)this + 0xC0);
	}

	template <typename R = uintptr_t> R get_StartButton() {
		return ((R (*)(GuildQuestItemView*))(Il2CppBase() + 0x1936194))(this);
	}
	template <typename R = uintptr_t> R get_OpenButton() {
		return ((R (*)(GuildQuestItemView*))(Il2CppBase() + 0x193619C))(this);
	}
	template <typename R = void> R add_OnOpenEvent(Action1<GuildQuestItemView*>* value) {
		return ((R (*)(GuildQuestItemView*, Action1<GuildQuestItemView*>*))(Il2CppBase() + 0x19361A4))(this, value);
	}
	template <typename R = void> R remove_OnOpenEvent(Action1<GuildQuestItemView*>* value) {
		return ((R (*)(GuildQuestItemView*, Action1<GuildQuestItemView*>*))(Il2CppBase() + 0x1936244))(this, value);
	}
	template <typename R = void> R add_OnStartEvent(Action1<GuildQuestItemView*>* value) {
		return ((R (*)(GuildQuestItemView*, Action1<GuildQuestItemView*>*))(Il2CppBase() + 0x19362E4))(this, value);
	}
	template <typename R = void> R remove_OnStartEvent(Action1<GuildQuestItemView*>* value) {
		return ((R (*)(GuildQuestItemView*, Action1<GuildQuestItemView*>*))(Il2CppBase() + 0x1936384))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(GuildQuestItemView*))(Il2CppBase() + 0x1936424))(this);
	}
	template <typename R = void> R UpdateView(AccountEntity* account, GuildQuestEntity* guildQuest, bool canStart) {
		return ((R (*)(GuildQuestItemView*, AccountEntity*, GuildQuestEntity*, bool))(Il2CppBase() + 0x1936510))(this, account, guildQuest, canStart);
	}
	template <typename R = void> R OnUpdateTime(GuildQuestEntity* guildQuest, int64_t now) {
		return ((R (*)(GuildQuestItemView*, GuildQuestEntity*, int64_t))(Il2CppBase() + 0x193660C))(this, guildQuest, now);
	}
	template <typename R = void> R Awakeb__12_0() {
		return ((R (*)(GuildQuestItemView*))(Il2CppBase() + 0x19367DC))(this);
	}
	template <typename R = void> R Awakeb__12_1() {
		return ((R (*)(GuildQuestItemView*))(Il2CppBase() + 0x193683C))(this);
	}

};

