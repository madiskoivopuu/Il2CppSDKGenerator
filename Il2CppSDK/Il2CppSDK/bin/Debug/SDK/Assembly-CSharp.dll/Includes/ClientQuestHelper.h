#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientQuestHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientQuestHelper"));
	}


	template <typename T = bool> static T CanTrackingManual(uintptr_t questEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE1B470))(0, questEntity);
	}
	template <typename T = bool> static T IsManualTracked(uintptr_t questEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE1B5D8))(0, questEntity);
	}
	template <typename T = void> static T SwitchManualTracking(uintptr_t questEntity, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0xE1B62C))(0, questEntity, playerId);
	}
	template <typename T = void> static T TrackManual(uintptr_t questEntity, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0xE1B9D0))(0, questEntity, playerId);
	}
	template <typename T = void> static T UntrackManual(uintptr_t questEntity, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0xE1B760))(0, questEntity, playerId);
	}
	template <typename T = void> static T UpdateTrackingOrder(Il2CppString* quests, int64_t playerId) {
		return ((T (*)(void *, Il2CppString*, int64_t))(Il2CppBase() + 0xE1BF58))(0, quests, playerId);
	}
	template <typename T = void> static T UpdateTrackingOrder_1(Il2CppList<Il2CppString*>* quests, int64_t playerId) {
		return ((T (*)(void *, Il2CppList<Il2CppString*>*, int64_t))(Il2CppBase() + 0xE1BD30))(0, quests, playerId);
	}
	template <typename T = void> static T ChangeTrackingOrderUp(Il2CppString* questName, int64_t playerId) {
		return ((T (*)(void *, Il2CppString*, int64_t))(Il2CppBase() + 0xE1BF7C))(0, questName, playerId);
	}
	template <typename T = void> static T ChangeTrackingOrderDown(Il2CppString* questName, int64_t playerId) {
		return ((T (*)(void *, Il2CppString*, int64_t))(Il2CppBase() + 0xE1C26C))(0, questName, playerId);
	}
	template <typename T = Il2CppString*> static T QuestsListToString(Il2CppList<Il2CppString*>* quests) {
		return ((T (*)(void *, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0xE1BC34))(0, quests);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T StringToQuestsList(Il2CppString* save) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0xE1C564))(0, save);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T DeserializeTrackedQuests(Il2CppString* save, int64_t playerId) {
		return ((T (*)(void *, Il2CppString*, int64_t))(Il2CppBase() + 0xE199E8))(0, save, playerId);
	}
	template <typename T = bool> static T IsTutorialCompleted(int64_t playerId) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0xE1C6BC))(0, playerId);
	}
	template <typename T = void> static T SaveSeenSeasonQuests(Il2CppList<Il2CppString*>* names, int64_t playerId) {
		return ((T (*)(void *, Il2CppList<Il2CppString*>*, int64_t))(Il2CppBase() + 0xE1C7D0))(0, names, playerId);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T LoadSeenSeasonQuests(int64_t playerId) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0xE1C890))(0, playerId);
	}
	template <typename T = Il2CppString*> static T GetKey(int64_t playerId) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0xE1C80C))(0, playerId);
	}

};

}
