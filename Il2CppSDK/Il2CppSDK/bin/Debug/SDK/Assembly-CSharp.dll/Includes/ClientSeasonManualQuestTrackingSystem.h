#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientSeasonManualQuestTrackingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientSeasonManualQuestTrackingSystem"));
	}

	template <typename T = BaseClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1QuestEntity*>*> T GetTrigger(IContext1QuestEntity*>* context) {
		return ((T (*)(ClientSeasonManualQuestTrackingSystem*, IContext1QuestEntity*>*))(Il2CppBase() + 0xE1D05C))(this, context);
	}
	template <typename T = bool> T Filter(QuestEntity* entity) {
		return ((T (*)(ClientSeasonManualQuestTrackingSystem*, QuestEntity*))(Il2CppBase() + 0xE1D0B4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<QuestEntity*>* entities) {
		return ((T (*)(ClientSeasonManualQuestTrackingSystem*, Il2CppList<QuestEntity*>*))(Il2CppBase() + 0xE1D184))(this, entities);
	}

};

