#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionViewSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(PositionViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x16DC6EC))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(PositionViewSystem*, GameEntity*))(Il2CppBase() + 0x16DC8E4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(PositionViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x16DC944))(this, entities);
	}

};

