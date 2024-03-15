#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideSystem"));
	}

	template <typename R = ArenaClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<GameEntity*>* GetTrigger(IContext1<GameEntity*>* context) {
		return ((ICollector1<GameEntity*>* (*)(HideSystem*, IContext1<GameEntity*>*))(Il2CppBase() + 0x1C44180))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(HideSystem*, GameEntity*))(Il2CppBase() + 0x1C4424C))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(HideSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1C442A4))(this, entities);
	}

};

