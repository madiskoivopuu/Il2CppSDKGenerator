#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class QuestDataContext : public DataContext1<QuestDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestDataContext"));
	}

	template <typename T = MagicDataContext*> T& _magicData() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = EntityIndex2QuestDataEntity*, Il2CppString*>*> T& _tagIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = EntityIndex2QuestDataEntity*, Il2CppString*>*> T& _actIndex() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = EntityIndex2QuestDataEntity*, Il2CppString*>*> T& _autoActiveIndex() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = EntityIndex2QuestDataEntity*, GuildQuestDifficulty*>*> T& _forGuildIndex() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = HashSet1Il2CppString*>*> T& MainActQuests() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = GuildQuestWeekPool*> T& _guildQuestWeekPool() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = IGroup1QuestDataEntity*>*> T& ActivateTournamentGroup() {
		return *(T*)((uintptr_t)this + 0x148);
	}

	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(QuestDataContext*))(Il2CppBase() + 0x1C1A350))(this);
	}
	template <typename T = HashSet1Il2CppString*>*> T get_MainActQuests() {
		return ((T (*)(QuestDataContext*))(Il2CppBase() + 0x1C1B5A4))(this);
	}
	template <typename T = void> T set_MainActQuests(HashSet1Il2CppString*>* value) {
		return ((T (*)(QuestDataContext*, HashSet1Il2CppString*>*))(Il2CppBase() + 0x1C1B5AC))(this, value);
	}
	template <typename T = void> T Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((T (*)(QuestDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x1C1B5BC))(this, blueprints);
	}
	template <typename T = GuildQuestWeekPool*> T GetGuildQuestWeekPool(int64_t now, ConfigFromServer* configFromServer) {
		return ((T (*)(QuestDataContext*, int64_t, ConfigFromServer*))(Il2CppBase() + 0x1C1B9A0))(this, now, configFromServer);
	}
	template <typename T = void> T ResetGuildQuestWeekPool() {
		return ((T (*)(QuestDataContext*))(Il2CppBase() + 0x1C1BB14))(this);
	}
	template <typename T = HashSet1QuestDataEntity*>*> T GetEntitiesWithAct(Il2CppString* actName) {
		return ((T (*)(QuestDataContext*, Il2CppString*))(Il2CppBase() + 0x1C1BB28))(this, actName);
	}
	template <typename T = HashSet1QuestDataEntity*>*> T GetEntitiesWithTag(Il2CppString* tag) {
		return ((T (*)(QuestDataContext*, Il2CppString*))(Il2CppBase() + 0x1C1BB8C))(this, tag);
	}
	template <typename T = HashSet1QuestDataEntity*>*> T GetEntitiesForGuild(GuildQuestDifficulty* difficulty) {
		return ((T (*)(QuestDataContext*, GuildQuestDifficulty*))(Il2CppBase() + 0x1C1BBF0))(this, difficulty);
	}
	template <typename T = HashSet1QuestDataEntity*>*> T GetEntitiesAutoActivate(Il2CppString* questCompleted) {
		return ((T (*)(QuestDataContext*, Il2CppString*))(Il2CppBase() + 0x1C1BC54))(this, questCompleted);
	}
	template <typename T = HashSet1QuestDataEntity*>*> T GetTaverBoardQuests() {
		return ((T (*)(QuestDataContext*))(Il2CppBase() + 0x1C1BCDC))(this);
	}
	template <typename T = IGroup1QuestDataEntity*>*> T get_ActivateTournamentGroup() {
		return ((T (*)(QuestDataContext*))(Il2CppBase() + 0x1C1BD48))(this);
	}
	template <typename T = void> T set_ActivateTournamentGroup(IGroup1QuestDataEntity*>* value) {
		return ((T (*)(QuestDataContext*, IGroup1QuestDataEntity*>*))(Il2CppBase() + 0x1C1BD50))(this, value);
	}

};

