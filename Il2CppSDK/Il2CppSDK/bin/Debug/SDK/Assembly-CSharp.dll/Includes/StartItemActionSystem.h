#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartItemActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartItemActionSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ActionEntity*>*> T GetTrigger(IContext1ActionEntity*>* context) {
		return ((T (*)(StartItemActionSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x148CF38))(this, context);
	}
	template <typename T = bool> T Filter(ActionEntity* action) {
		return ((T (*)(StartItemActionSystem*, ActionEntity*))(Il2CppBase() + 0x148D004))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<ActionEntity*>* actions) {
		return ((T (*)(StartItemActionSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x148D060))(this, actions);
	}

};

