#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyNextMustAppliedActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyNextMustAppliedActionSystem"));
	}

	template <typename T = ArenaClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ActionEntity*>*> T GetTrigger(IContext1ActionEntity*>* context) {
		return ((T (*)(ApplyNextMustAppliedActionSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x1894AB4))(this, context);
	}
	template <typename T = bool> T Filter(ActionEntity* action) {
		return ((T (*)(ApplyNextMustAppliedActionSystem*, ActionEntity*))(Il2CppBase() + 0x1894ABC))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<ActionEntity*>* actions) {
		return ((T (*)(ApplyNextMustAppliedActionSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x1894AC4))(this, actions);
	}
	template <typename T = void> T Execute_1(ActionEntity* action, GameEntity* actor) {
		return ((T (*)(ApplyNextMustAppliedActionSystem*, ActionEntity*, GameEntity*))(Il2CppBase() + 0x1894C54))(this, action, actor);
	}

};

