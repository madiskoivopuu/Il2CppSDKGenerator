#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetupVisibilityViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetupVisibilityViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(SetupVisibilityViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x162F344))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(SetupVisibilityViewSystem*, GameEntity*))(Il2CppBase() + 0x162F39C))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(SetupVisibilityViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x162F3B8))(this, entities);
	}

};

