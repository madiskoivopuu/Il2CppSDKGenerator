#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventsDestroySystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventsDestroySystem"));
	}


	template <typename T = ICollector1EventEntity*>*> T GetTrigger(IContext1EventEntity*>* context) {
		return ((T (*)(EventsDestroySystem*, IContext1EventEntity*>*))(Il2CppBase() + 0x1791FF8))(this, context);
	}
	template <typename T = bool> T Filter(EventEntity* eventEntity) {
		return ((T (*)(EventsDestroySystem*, EventEntity*))(Il2CppBase() + 0x179204C))(this, eventEntity);
	}
	template <typename T = void> T Execute(Il2CppList<EventEntity*>* events) {
		return ((T (*)(EventsDestroySystem*, Il2CppList<EventEntity*>*))(Il2CppBase() + 0x179206C))(this, events);
	}

};

