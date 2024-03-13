#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetupVisibilityViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetupVisibilityViewSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(SetupVisibilityViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x162F344))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(SetupVisibilityViewSystem*, GameEntity*))(Il2CppBase() + 0x162F39C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(SetupVisibilityViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x162F3B8))(this, entities);
	}

};

