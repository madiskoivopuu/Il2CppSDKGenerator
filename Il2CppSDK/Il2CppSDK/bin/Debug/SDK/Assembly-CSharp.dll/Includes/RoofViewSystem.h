#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoofViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoofViewSystem"));
	}

	template <typename R = ArenaClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 IGroup1GameEntity*>*& _roofs() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(RoofViewSystem*))(Il2CppBase() + 0x11A2F90))(this);
	}
	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(RoofViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x11A300C))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(RoofViewSystem*, GameEntity*))(Il2CppBase() + 0x11A3130))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(RoofViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x11A314C))(this, entities);
	}

};

