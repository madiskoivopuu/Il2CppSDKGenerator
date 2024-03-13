#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartActionEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartActionEffectSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ActionEntity*>*> T GetTrigger(IContext1ActionEntity*>* context) {
		return ((T (*)(StartActionEffectSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x148B57C))(this, context);
	}
	template <typename T = bool> T Filter(ActionEntity* entity) {
		return ((T (*)(StartActionEffectSystem*, ActionEntity*))(Il2CppBase() + 0x148B6A0))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<ActionEntity*>* actions) {
		return ((T (*)(StartActionEffectSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x148B6EC))(this, actions);
	}
	template <typename T = EffectEntity*> T TrySpawnEffect(Il2CppString* name, GameEntity* actor, ActionEntity* action, ItemEntity* item) {
		return ((T (*)(StartActionEffectSystem*, Il2CppString*, GameEntity*, ActionEntity*, ItemEntity*))(Il2CppBase() + 0x148BDE8))(this, name, actor, action, item);
	}

};

