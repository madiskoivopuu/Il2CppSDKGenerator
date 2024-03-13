#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationRelationshipSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationRelationshipSystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1LocationEntity*>*> T GetTrigger(IContext1LocationEntity*>* context) {
		return ((T (*)(LocationRelationshipSystem*, IContext1LocationEntity*>*))(Il2CppBase() + 0x171DF28))(this, context);
	}
	template <typename T = bool> T Filter(LocationEntity* entity) {
		return ((T (*)(LocationRelationshipSystem*, LocationEntity*))(Il2CppBase() + 0x171E030))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<LocationEntity*>* entities) {
		return ((T (*)(LocationRelationshipSystem*, Il2CppList<LocationEntity*>*))(Il2CppBase() + 0x171E038))(this, entities);
	}

};

