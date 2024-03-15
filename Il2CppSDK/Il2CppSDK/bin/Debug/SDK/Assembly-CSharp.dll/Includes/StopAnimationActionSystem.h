#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopAnimationActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopAnimationActionSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1ActionEntity*>* GetTrigger(IContext1ActionEntity*>* context) {
		return ((ICollector1ActionEntity*>* (*)(StopAnimationActionSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x1496E0C))(this, context);
	}
	template <typename R = bool> R Filter(ActionEntity* action) {
		return ((R (*)(StopAnimationActionSystem*, ActionEntity*))(Il2CppBase() + 0x1496ED8))(this, action);
	}
	template <typename R = void> R Execute(Il2CppList<ActionEntity*>* actions) {
		return ((R (*)(StopAnimationActionSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x1496F38))(this, actions);
	}

};

