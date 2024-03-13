#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopAnimationDelayActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopAnimationDelayActionSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ActionEntity*>*> T GetTrigger(IContext1ActionEntity*>* context) {
		return ((T (*)(StopAnimationDelayActionSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x1404518))(this, context);
	}
	template <typename T = bool> T Filter(ActionEntity* action) {
		return ((T (*)(StopAnimationDelayActionSystem*, ActionEntity*))(Il2CppBase() + 0x14045E4))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<ActionEntity*>* actions) {
		return ((T (*)(StopAnimationDelayActionSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x1404684))(this, actions);
	}

};

