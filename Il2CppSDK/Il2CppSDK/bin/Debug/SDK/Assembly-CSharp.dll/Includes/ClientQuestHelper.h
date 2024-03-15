#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientQuestHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientQuestHelper"));
	}


	template <typename R = bool> static R CanTrackingManual(QuestEntity* questEntity) {
		return ((R (*)(void *, QuestEntity*))(Il2CppBase() + 0xE1B470))(0, questEntity);
	}
	template <typename R = bool> static R IsManualTracked(QuestEntity* questEntity) {
		return ((R (*)(void *, QuestEntity*))(Il2CppBase() + 0xE1B5D8))(0, questEntity);
	}
	template <typename R = void> static R SwitchManualTracking(QuestEntity* questEntity, int64_t playerId) {
		return ((R (*)(void *, QuestEntity*, int64_t))(Il2CppBase() + 0xE1B62C))(0, questEntity, playerId);
	}
	template <typename R = void> static R TrackManual(QuestEntity* questEntity, int64_t playerId) {
		return ((R (*)(void *, QuestEntity*, int64_t))(Il2CppBase() + 0xE1B9D0))(0, questEntity, playerId);
	}
	template <typename R = void> static R UntrackManual(QuestEntity* questEntity, int64_t playerId) {
		return ((R (*)(void *, QuestEntity*, int64_t))(Il2CppBase() + 0xE1B760))(0, questEntity, playerId);
	}
	template <typename R = void> static R UpdateTrackingOrder(Il2CppString* quests, int64_t playerId) {
		return ((R (*)(void *, Il2CppString*, int64_t))(Il2CppBase() + 0xE1BF58))(0, quests, playerId);
	}
	template <typename R = void> static R UpdateTrackingOrder_1(Il2CppList<Il2CppString*>* quests, int64_t playerId) {
		return ((R (*)(void *, Il2CppList<Il2CppString*>*, int64_t))(Il2CppBase() + 0xE1BD30))(0, quests, playerId);
	}
	template <typename R = void> static R ChangeTrackingOrderUp(Il2CppString* questName, int64_t playerId) {
		return ((R (*)(void *, Il2CppString*, int64_t))(Il2CppBase() + 0xE1BF7C))(0, questName, playerId);
	}
	template <typename R = void> static R ChangeTrackingOrderDown(Il2CppString* questName, int64_t playerId) {
		return ((R (*)(void *, Il2CppString*, int64_t))(Il2CppBase() + 0xE1C26C))(0, questName, playerId);
	}
	template <typename R = Il2CppString*> static R QuestsListToString(Il2CppList<Il2CppString*>* quests) {
		return ((R (*)(void *, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0xE1BC34))(0, quests);
	}
	 static Il2CppList<Il2CppString*>* StringToQuestsList(Il2CppString* save) {
		return ((Il2CppList<Il2CppString*>* (*)(void *, Il2CppString*))(Il2CppBase() + 0xE1C564))(0, save);
	}
	 static Il2CppList<Il2CppString*>* DeserializeTrackedQuests(Il2CppString* save, int64_t playerId) {
		return ((Il2CppList<Il2CppString*>* (*)(void *, Il2CppString*, int64_t))(Il2CppBase() + 0xE199E8))(0, save, playerId);
	}
	template <typename R = bool> static R IsTutorialCompleted(int64_t playerId) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0xE1C6BC))(0, playerId);
	}
	template <typename R = void> static R SaveSeenSeasonQuests(Il2CppList<Il2CppString*>* names, int64_t playerId) {
		return ((R (*)(void *, Il2CppList<Il2CppString*>*, int64_t))(Il2CppBase() + 0xE1C7D0))(0, names, playerId);
	}
	 static Il2CppList<Il2CppString*>* LoadSeenSeasonQuests(int64_t playerId) {
		return ((Il2CppList<Il2CppString*>* (*)(void *, int64_t))(Il2CppBase() + 0xE1C890))(0, playerId);
	}
	template <typename R = Il2CppString*> static R GetKey(int64_t playerId) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0xE1C80C))(0, playerId);
	}

};

