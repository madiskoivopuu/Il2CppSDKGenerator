#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientSeasonManualQuestTrackingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientSeasonManualQuestTrackingSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ClientSeasonManualQuestTrackingSystem*, void*))(Il2CppBase() + 0xE1D05C))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ClientSeasonManualQuestTrackingSystem*, uintptr_t))(Il2CppBase() + 0xE1D0B4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ClientSeasonManualQuestTrackingSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0xE1D184))(this, entities);
	}

};

}
