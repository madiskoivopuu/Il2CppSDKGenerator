#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyNextMustAppliedActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyNextMustAppliedActionSystem"));
	}

	template <typename R = ArenaClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<ActionEntity*>* GetTrigger(IContext1<ActionEntity*>* context) {
		return ((ICollector1<ActionEntity*>* (*)(ApplyNextMustAppliedActionSystem*, IContext1<ActionEntity*>*))(Il2CppBase() + 0x1894AB4))(this, context);
	}
	template <typename R = bool> R Filter(ActionEntity* action) {
		return ((R (*)(ApplyNextMustAppliedActionSystem*, ActionEntity*))(Il2CppBase() + 0x1894ABC))(this, action);
	}
	template <typename R = void> R Execute(Il2CppList<ActionEntity*>* actions) {
		return ((R (*)(ApplyNextMustAppliedActionSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x1894AC4))(this, actions);
	}
	template <typename R = void> R Execute_1(ActionEntity* action, GameEntity* actor) {
		return ((R (*)(ApplyNextMustAppliedActionSystem*, ActionEntity*, GameEntity*))(Il2CppBase() + 0x1894C54))(this, action, actor);
	}

};

