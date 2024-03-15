#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopAnimationDelayActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopAnimationDelayActionSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<ActionEntity*>* GetTrigger(IContext1<ActionEntity*>* context) {
		return ((ICollector1<ActionEntity*>* (*)(StopAnimationDelayActionSystem*, IContext1<ActionEntity*>*))(Il2CppBase() + 0x1404518))(this, context);
	}
	template <typename R = bool> R Filter(ActionEntity* action) {
		return ((R (*)(StopAnimationDelayActionSystem*, ActionEntity*))(Il2CppBase() + 0x14045E4))(this, action);
	}
	template <typename R = void> R Execute(Il2CppList<ActionEntity*>* actions) {
		return ((R (*)(StopAnimationDelayActionSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x1404684))(this, actions);
	}

};

