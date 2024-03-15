#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationRelationshipSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationRelationshipSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<LocationEntity*>* GetTrigger(IContext1<LocationEntity*>* context) {
		return ((ICollector1<LocationEntity*>* (*)(LocationRelationshipSystem*, IContext1<LocationEntity*>*))(Il2CppBase() + 0x171DF28))(this, context);
	}
	template <typename R = bool> R Filter(LocationEntity* entity) {
		return ((R (*)(LocationRelationshipSystem*, LocationEntity*))(Il2CppBase() + 0x171E030))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<LocationEntity*>* entities) {
		return ((R (*)(LocationRelationshipSystem*, Il2CppList<LocationEntity*>*))(Il2CppBase() + 0x171E038))(this, entities);
	}

};

