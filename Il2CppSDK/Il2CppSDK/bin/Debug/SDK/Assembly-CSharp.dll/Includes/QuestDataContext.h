#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext`1" 

class QuestDataContext: DataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestDataContext"));
	}

	template <typename T = uintptr_t> T& _magicData() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& _tagIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = void*> T& _actIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = void*> T& _autoActiveIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = void*> T& _forGuildIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = void*> T& MainActQuests() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _guildQuestWeekPool() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = void*> T& ActivateTournamentGroup() {
		return *(T*)((uintptr_t)this + 0x148);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(QuestDataContext*))(Il2CppBase() + 0x1C1A350))(this);
	}
	template <typename T = void*> T get_MainActQuests() {
		return ((T (*)(QuestDataContext*))(Il2CppBase() + 0x1C1B5A4))(this);
	}
	template <typename T = void> T set_MainActQuests(void* value) {
		return ((T (*)(QuestDataContext*, void*))(Il2CppBase() + 0x1C1B5AC))(this, value);
	}
	template <typename T = void> T Fill(Il2CppDictionary<Il2CppString*, uintptr_t>* blueprints) {
		return ((T (*)(QuestDataContext*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1C1B5BC))(this, blueprints);
	}
	template <typename T = uintptr_t> T GetGuildQuestWeekPool(int64_t now, uintptr_t configFromServer) {
		return ((T (*)(QuestDataContext*, int64_t, uintptr_t))(Il2CppBase() + 0x1C1B9A0))(this, now, configFromServer);
	}
	template <typename T = void> T ResetGuildQuestWeekPool() {
		return ((T (*)(QuestDataContext*))(Il2CppBase() + 0x1C1BB14))(this);
	}
	template <typename T = void*> T GetEntitiesWithAct(Il2CppString* actName) {
		return ((T (*)(QuestDataContext*, Il2CppString*))(Il2CppBase() + 0x1C1BB28))(this, actName);
	}
	template <typename T = void*> T GetEntitiesWithTag(Il2CppString* tag) {
		return ((T (*)(QuestDataContext*, Il2CppString*))(Il2CppBase() + 0x1C1BB8C))(this, tag);
	}
	template <typename T = void*> T GetEntitiesForGuild(uintptr_t difficulty) {
		return ((T (*)(QuestDataContext*, uintptr_t))(Il2CppBase() + 0x1C1BBF0))(this, difficulty);
	}
	template <typename T = void*> T GetEntitiesAutoActivate(Il2CppString* questCompleted) {
		return ((T (*)(QuestDataContext*, Il2CppString*))(Il2CppBase() + 0x1C1BC54))(this, questCompleted);
	}
	template <typename T = void*> T GetTaverBoardQuests() {
		return ((T (*)(QuestDataContext*))(Il2CppBase() + 0x1C1BCDC))(this);
	}
	template <typename T = void*> T get_ActivateTournamentGroup() {
		return ((T (*)(QuestDataContext*))(Il2CppBase() + 0x1C1BD48))(this);
	}
	template <typename T = void> T set_ActivateTournamentGroup(void* value) {
		return ((T (*)(QuestDataContext*, void*))(Il2CppBase() + 0x1C1BD50))(this, value);
	}

};

}
