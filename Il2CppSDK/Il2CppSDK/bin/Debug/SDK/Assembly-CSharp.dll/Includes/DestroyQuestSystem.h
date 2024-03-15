#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyQuestSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyQuestSystem"));
	}


	 ICollector1<QuestEntity*>* GetTrigger(IContext1<QuestEntity*>* context) {
		return ((ICollector1<QuestEntity*>* (*)(DestroyQuestSystem*, IContext1<QuestEntity*>*))(Il2CppBase() + 0xEBEDC4))(this, context);
	}
	template <typename R = bool> R Filter(QuestEntity* quest) {
		return ((R (*)(DestroyQuestSystem*, QuestEntity*))(Il2CppBase() + 0xEBEE90))(this, quest);
	}
	template <typename R = void> R Execute(Il2CppList<QuestEntity*>* quests) {
		return ((R (*)(DestroyQuestSystem*, Il2CppList<QuestEntity*>*))(Il2CppBase() + 0xEBEEBC))(this, quests);
	}

};

