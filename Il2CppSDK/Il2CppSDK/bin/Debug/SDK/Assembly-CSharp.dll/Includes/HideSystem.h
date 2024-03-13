#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideSystem"));
	}

	template <typename T = ArenaClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(HideSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x1C44180))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(HideSystem*, GameEntity*))(Il2CppBase() + 0x1C4424C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(HideSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1C442A4))(this, entities);
	}

};

