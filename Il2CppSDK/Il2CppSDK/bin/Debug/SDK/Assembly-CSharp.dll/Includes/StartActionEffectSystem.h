#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartActionEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartActionEffectSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<ActionEntity*>* GetTrigger(IContext1<ActionEntity*>* context) {
		return ((ICollector1<ActionEntity*>* (*)(StartActionEffectSystem*, IContext1<ActionEntity*>*))(Il2CppBase() + 0x148B57C))(this, context);
	}
	template <typename R = bool> R Filter(ActionEntity* entity) {
		return ((R (*)(StartActionEffectSystem*, ActionEntity*))(Il2CppBase() + 0x148B6A0))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<ActionEntity*>* actions) {
		return ((R (*)(StartActionEffectSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x148B6EC))(this, actions);
	}
	template <typename R = EffectEntity*> R TrySpawnEffect(Il2CppString* name, GameEntity* actor, ActionEntity* action, ItemEntity* item) {
		return ((R (*)(StartActionEffectSystem*, Il2CppString*, GameEntity*, ActionEntity*, ItemEntity*))(Il2CppBase() + 0x148BDE8))(this, name, actor, action, item);
	}

};

