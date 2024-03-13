#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActiveViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveViewSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(ActiveViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x18AE94C))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(ActiveViewSystem*, GameEntity*))(Il2CppBase() + 0x18AEA18))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(ActiveViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x18AEA34))(this, entities);
	}

};

