#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientManualQuestTrackingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientManualQuestTrackingSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ClientManualQuestTrackingSystem*, void*))(Il2CppBase() + 0xE195DC))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ClientManualQuestTrackingSystem*, uintptr_t))(Il2CppBase() + 0xE19634))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ClientManualQuestTrackingSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0xE19650))(this, entities);
	}

};

}
