#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationRelationshipSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationRelationshipSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(LocationRelationshipSystem*, void*))(Il2CppBase() + 0x171DF28))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(LocationRelationshipSystem*, uintptr_t))(Il2CppBase() + 0x171E030))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(LocationRelationshipSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x171E038))(this, entities);
	}

};

}
