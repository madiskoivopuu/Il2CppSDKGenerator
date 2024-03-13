#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyQuestSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyQuestSystem"));
	}


	template <typename T = ICollector1QuestEntity*>*> T GetTrigger(IContext1QuestEntity*>* context) {
		return ((T (*)(DestroyQuestSystem*, IContext1QuestEntity*>*))(Il2CppBase() + 0xEBEDC4))(this, context);
	}
	template <typename T = bool> T Filter(QuestEntity* quest) {
		return ((T (*)(DestroyQuestSystem*, QuestEntity*))(Il2CppBase() + 0xEBEE90))(this, quest);
	}
	template <typename T = void> T Execute(Il2CppList<QuestEntity*>* quests) {
		return ((T (*)(DestroyQuestSystem*, Il2CppList<QuestEntity*>*))(Il2CppBase() + 0xEBEEBC))(this, quests);
	}

};

