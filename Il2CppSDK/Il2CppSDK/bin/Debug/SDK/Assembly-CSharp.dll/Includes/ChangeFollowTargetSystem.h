#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeFollowTargetSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeFollowTargetSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(ChangeFollowTargetSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x13EA3AC))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(ChangeFollowTargetSystem*, GameEntity*))(Il2CppBase() + 0x13EA404))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(ChangeFollowTargetSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x13EA420))(this, entities);
	}

};

