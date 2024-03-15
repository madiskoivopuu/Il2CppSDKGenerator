#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityViewLinkSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityViewLinkSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(EntityViewLinkSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x137A9A0))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(EntityViewLinkSystem*, GameEntity*))(Il2CppBase() + 0x137AAC4))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(EntityViewLinkSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x137AB10))(this, entities);
	}

};
