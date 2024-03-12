#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventsDestroySystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventsDestroySystem"));
	}


	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(EventsDestroySystem*, void*))(Il2CppBase() + 0x1791FF8))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t eventEntity) {
		return ((T (*)(EventsDestroySystem*, uintptr_t))(Il2CppBase() + 0x179204C))(this, eventEntity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* events) {
		return ((T (*)(EventsDestroySystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x179206C))(this, events);
	}

};

}
