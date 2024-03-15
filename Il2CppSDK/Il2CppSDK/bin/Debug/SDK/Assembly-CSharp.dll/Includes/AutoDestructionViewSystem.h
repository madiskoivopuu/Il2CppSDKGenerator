#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoDestructionViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoDestructionViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<GameEntity*>* GetTrigger(IContext1<GameEntity*>* context) {
		return ((ICollector1<GameEntity*>* (*)(AutoDestructionViewSystem*, IContext1<GameEntity*>*))(Il2CppBase() + 0x1A62A24))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(AutoDestructionViewSystem*, GameEntity*))(Il2CppBase() + 0x1A62A7C))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(AutoDestructionViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1A62AC8))(this, entities);
	}

};

