#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartAnimationActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartAnimationActionSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1ActionEntity*>* GetTrigger(IContext1ActionEntity*>* context) {
		return ((ICollector1ActionEntity*>* (*)(StartAnimationActionSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x148C048))(this, context);
	}
	template <typename R = bool> R Filter(ActionEntity* action) {
		return ((R (*)(StartAnimationActionSystem*, ActionEntity*))(Il2CppBase() + 0x148C114))(this, action);
	}
	template <typename R = void> R Execute(Il2CppList<ActionEntity*>* actions) {
		return ((R (*)(StartAnimationActionSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x148C174))(this, actions);
	}
	template <typename R = void> static R ApplyAnimatorParams(ICommonContexts* world, GameEntity* actor, ActionEntity* action) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, ActionEntity*))(Il2CppBase() + 0x148C398))(0, world, actor, action);
	}

};

