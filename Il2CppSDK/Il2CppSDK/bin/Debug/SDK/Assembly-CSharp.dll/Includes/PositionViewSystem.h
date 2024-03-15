#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(PositionViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x16DC6EC))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(PositionViewSystem*, GameEntity*))(Il2CppBase() + 0x16DC8E4))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(PositionViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x16DC944))(this, entities);
	}

};

