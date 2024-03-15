#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlockedViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockedViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(UnlockedViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x153B328))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(UnlockedViewSystem*, GameEntity*))(Il2CppBase() + 0x153B3F4))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(UnlockedViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x153B410))(this, entities);
	}

};

