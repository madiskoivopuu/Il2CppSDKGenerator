#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "GuildQuestView.h" 

class GuildQuestItemView : public GuildQuestView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestItemView"));
	}

	template <typename T = uintptr_t> T& _startButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _openButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Action1GuildQuestItemView*>*> T& OnOpenEvent() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Action1GuildQuestItemView*>*> T& OnStartEvent() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = uintptr_t> T get_StartButton() {
		return ((T (*)(GuildQuestItemView*))(Il2CppBase() + 0x1936194))(this);
	}
	template <typename T = uintptr_t> T get_OpenButton() {
		return ((T (*)(GuildQuestItemView*))(Il2CppBase() + 0x193619C))(this);
	}
	template <typename T = void> T add_OnOpenEvent(Action1GuildQuestItemView*>* value) {
		return ((T (*)(GuildQuestItemView*, Action1GuildQuestItemView*>*))(Il2CppBase() + 0x19361A4))(this, value);
	}
	template <typename T = void> T remove_OnOpenEvent(Action1GuildQuestItemView*>* value) {
		return ((T (*)(GuildQuestItemView*, Action1GuildQuestItemView*>*))(Il2CppBase() + 0x1936244))(this, value);
	}
	template <typename T = void> T add_OnStartEvent(Action1GuildQuestItemView*>* value) {
		return ((T (*)(GuildQuestItemView*, Action1GuildQuestItemView*>*))(Il2CppBase() + 0x19362E4))(this, value);
	}
	template <typename T = void> T remove_OnStartEvent(Action1GuildQuestItemView*>* value) {
		return ((T (*)(GuildQuestItemView*, Action1GuildQuestItemView*>*))(Il2CppBase() + 0x1936384))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuildQuestItemView*))(Il2CppBase() + 0x1936424))(this);
	}
	template <typename T = void> T UpdateView(AccountEntity* account, GuildQuestEntity* guildQuest, bool canStart) {
		return ((T (*)(GuildQuestItemView*, AccountEntity*, GuildQuestEntity*, bool))(Il2CppBase() + 0x1936510))(this, account, guildQuest, canStart);
	}
	template <typename T = void> T OnUpdateTime(GuildQuestEntity* guildQuest, int64_t now) {
		return ((T (*)(GuildQuestItemView*, GuildQuestEntity*, int64_t))(Il2CppBase() + 0x193660C))(this, guildQuest, now);
	}
	template <typename T = void> T Awakeb__12_0() {
		return ((T (*)(GuildQuestItemView*))(Il2CppBase() + 0x19367DC))(this);
	}
	template <typename T = void> T Awakeb__12_1() {
		return ((T (*)(GuildQuestItemView*))(Il2CppBase() + 0x193683C))(this);
	}

};

