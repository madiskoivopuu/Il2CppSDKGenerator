#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoDestructionViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoDestructionViewSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(AutoDestructionViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x1A62A24))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(AutoDestructionViewSystem*, GameEntity*))(Il2CppBase() + 0x1A62A7C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(AutoDestructionViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1A62AC8))(this, entities);
	}

};

