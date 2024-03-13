#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopAnimationActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopAnimationActionSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ActionEntity*>*> T GetTrigger(IContext1ActionEntity*>* context) {
		return ((T (*)(StopAnimationActionSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x1496E0C))(this, context);
	}
	template <typename T = bool> T Filter(ActionEntity* action) {
		return ((T (*)(StopAnimationActionSystem*, ActionEntity*))(Il2CppBase() + 0x1496ED8))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<ActionEntity*>* actions) {
		return ((T (*)(StopAnimationActionSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x1496F38))(this, actions);
	}

};

