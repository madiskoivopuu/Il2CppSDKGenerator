#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActiveViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(ActiveViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x18AE94C))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(ActiveViewSystem*, GameEntity*))(Il2CppBase() + 0x18AEA18))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(ActiveViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x18AEA34))(this, entities);
	}

};

