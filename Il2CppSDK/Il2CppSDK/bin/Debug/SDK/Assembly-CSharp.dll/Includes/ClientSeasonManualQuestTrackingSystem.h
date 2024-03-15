#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientSeasonManualQuestTrackingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientSeasonManualQuestTrackingSystem"));
	}

	template <typename R = BaseClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<QuestEntity*>* GetTrigger(IContext1<QuestEntity*>* context) {
		return ((ICollector1<QuestEntity*>* (*)(ClientSeasonManualQuestTrackingSystem*, IContext1<QuestEntity*>*))(Il2CppBase() + 0xE1D05C))(this, context);
	}
	template <typename R = bool> R Filter(QuestEntity* entity) {
		return ((R (*)(ClientSeasonManualQuestTrackingSystem*, QuestEntity*))(Il2CppBase() + 0xE1D0B4))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<QuestEntity*>* entities) {
		return ((R (*)(ClientSeasonManualQuestTrackingSystem*, Il2CppList<QuestEntity*>*))(Il2CppBase() + 0xE1D184))(this, entities);
	}

};

