#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventsDestroySystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventsDestroySystem"));
	}


	 ICollector1EventEntity*>* GetTrigger(IContext1EventEntity*>* context) {
		return ((ICollector1EventEntity*>* (*)(EventsDestroySystem*, IContext1EventEntity*>*))(Il2CppBase() + 0x1791FF8))(this, context);
	}
	template <typename R = bool> R Filter(EventEntity* eventEntity) {
		return ((R (*)(EventsDestroySystem*, EventEntity*))(Il2CppBase() + 0x179204C))(this, eventEntity);
	}
	template <typename R = void> R Execute(Il2CppList<EventEntity*>* events) {
		return ((R (*)(EventsDestroySystem*, Il2CppList<EventEntity*>*))(Il2CppBase() + 0x179206C))(this, events);
	}

};

