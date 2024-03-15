#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartItemActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartItemActionSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1ActionEntity*>* GetTrigger(IContext1ActionEntity*>* context) {
		return ((ICollector1ActionEntity*>* (*)(StartItemActionSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x148CF38))(this, context);
	}
	template <typename R = bool> R Filter(ActionEntity* action) {
		return ((R (*)(StartItemActionSystem*, ActionEntity*))(Il2CppBase() + 0x148D004))(this, action);
	}
	template <typename R = void> R Execute(Il2CppList<ActionEntity*>* actions) {
		return ((R (*)(StartItemActionSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x148D060))(this, actions);
	}

};

