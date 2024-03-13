#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityViewLinkSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityViewLinkSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(EntityViewLinkSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x137A9A0))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(EntityViewLinkSystem*, GameEntity*))(Il2CppBase() + 0x137AAC4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(EntityViewLinkSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x137AB10))(this, entities);
	}

};

