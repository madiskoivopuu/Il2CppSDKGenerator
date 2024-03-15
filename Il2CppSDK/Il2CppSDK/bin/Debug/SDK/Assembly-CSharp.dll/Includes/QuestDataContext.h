#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "QuestDataEntity.h" 

class QuestDataContext : public DataContext1<QuestDataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestDataContext"));
	}

	template <typename R = MagicDataContext*> R& _magicData() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	 EntityIndex2<QuestDataEntity*, Il2CppString*>*& _tagIndex() {
		return *(EntityIndex2<QuestDataEntity*, Il2CppString*>**)((uintptr_t)this + 0x118);
	}
	 EntityIndex2<QuestDataEntity*, Il2CppString*>*& _actIndex() {
		return *(EntityIndex2<QuestDataEntity*, Il2CppString*>**)((uintptr_t)this + 0x120);
	}
	 EntityIndex2<QuestDataEntity*, Il2CppString*>*& _autoActiveIndex() {
		return *(EntityIndex2<QuestDataEntity*, Il2CppString*>**)((uintptr_t)this + 0x128);
	}
	 EntityIndex2<QuestDataEntity*, GuildQuestDifficulty>*& _forGuildIndex() {
		return *(EntityIndex2<QuestDataEntity*, GuildQuestDifficulty>**)((uintptr_t)this + 0x130);
	}
	 HashSet1<Il2CppString*>*& MainActQuests() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x138);
	}
	template <typename R = GuildQuestWeekPool*> R& _guildQuestWeekPool() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	 IGroup1<QuestDataEntity*>*& ActivateTournamentGroup() {
		return *(IGroup1<QuestDataEntity*>**)((uintptr_t)this + 0x148);
	}

	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(QuestDataContext*))(Il2CppBase() + 0x1C1A350))(this);
	}
	 HashSet1<Il2CppString*>* get_MainActQuests() {
		return ((HashSet1<Il2CppString*>* (*)(QuestDataContext*))(Il2CppBase() + 0x1C1B5A4))(this);
	}
	template <typename R = void> R set_MainActQuests(HashSet1<Il2CppString*>* value) {
		return ((R (*)(QuestDataContext*, HashSet1<Il2CppString*>*))(Il2CppBase() + 0x1C1B5AC))(this, value);
	}
	template <typename R = void> R Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((R (*)(QuestDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x1C1B5BC))(this, blueprints);
	}
	template <typename R = GuildQuestWeekPool*> R GetGuildQuestWeekPool(int64_t now, ConfigFromServer configFromServer) {
		return ((R (*)(QuestDataContext*, int64_t, ConfigFromServer))(Il2CppBase() + 0x1C1B9A0))(this, now, configFromServer);
	}
	template <typename R = void> R ResetGuildQuestWeekPool() {
		return ((R (*)(QuestDataContext*))(Il2CppBase() + 0x1C1BB14))(this);
	}
	 HashSet1<QuestDataEntity*>* GetEntitiesWithAct(Il2CppString* actName) {
		return ((HashSet1<QuestDataEntity*>* (*)(QuestDataContext*, Il2CppString*))(Il2CppBase() + 0x1C1BB28))(this, actName);
	}
	 HashSet1<QuestDataEntity*>* GetEntitiesWithTag(Il2CppString* tag) {
		return ((HashSet1<QuestDataEntity*>* (*)(QuestDataContext*, Il2CppString*))(Il2CppBase() + 0x1C1BB8C))(this, tag);
	}
	 HashSet1<QuestDataEntity*>* GetEntitiesForGuild(GuildQuestDifficulty difficulty) {
		return ((HashSet1<QuestDataEntity*>* (*)(QuestDataContext*, GuildQuestDifficulty))(Il2CppBase() + 0x1C1BBF0))(this, difficulty);
	}
	 HashSet1<QuestDataEntity*>* GetEntitiesAutoActivate(Il2CppString* questCompleted) {
		return ((HashSet1<QuestDataEntity*>* (*)(QuestDataContext*, Il2CppString*))(Il2CppBase() + 0x1C1BC54))(this, questCompleted);
	}
	 HashSet1<QuestDataEntity*>* GetTaverBoardQuests() {
		return ((HashSet1<QuestDataEntity*>* (*)(QuestDataContext*))(Il2CppBase() + 0x1C1BCDC))(this);
	}
	 IGroup1<QuestDataEntity*>* get_ActivateTournamentGroup() {
		return ((IGroup1<QuestDataEntity*>* (*)(QuestDataContext*))(Il2CppBase() + 0x1C1BD48))(this);
	}
	template <typename R = void> R set_ActivateTournamentGroup(IGroup1<QuestDataEntity*>* value) {
		return ((R (*)(QuestDataContext*, IGroup1<QuestDataEntity*>*))(Il2CppBase() + 0x1C1BD50))(this, value);
	}

};

