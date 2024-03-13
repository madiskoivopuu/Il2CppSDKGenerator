#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartAnimationActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartAnimationActionSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ActionEntity*>*> T GetTrigger(IContext1ActionEntity*>* context) {
		return ((T (*)(StartAnimationActionSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x148C048))(this, context);
	}
	template <typename T = bool> T Filter(ActionEntity* action) {
		return ((T (*)(StartAnimationActionSystem*, ActionEntity*))(Il2CppBase() + 0x148C114))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<ActionEntity*>* actions) {
		return ((T (*)(StartAnimationActionSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x148C174))(this, actions);
	}
	template <typename T = void> static T ApplyAnimatorParams(ICommonContexts* world, GameEntity* actor, ActionEntity* action) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, ActionEntity*))(Il2CppBase() + 0x148C398))(0, world, actor, action);
	}

};

