#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoofViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoofViewSystem"));
	}

	template <typename T = ArenaClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = IGroup1GameEntity*>*> T& _roofs() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(RoofViewSystem*))(Il2CppBase() + 0x11A2F90))(this);
	}
	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(RoofViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x11A300C))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(RoofViewSystem*, GameEntity*))(Il2CppBase() + 0x11A3130))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(RoofViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x11A314C))(this, entities);
	}

};

