#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyActionSystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ActionEntity*>*> T GetTrigger(IContext1ActionEntity*>* context) {
		return ((T (*)(DestroyActionSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0xEBC2C4))(this, context);
	}
	template <typename T = bool> T Filter(ActionEntity* action) {
		return ((T (*)(DestroyActionSystem*, ActionEntity*))(Il2CppBase() + 0xEBC390))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<ActionEntity*>* actions) {
		return ((T (*)(DestroyActionSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0xEBC3AC))(this, actions);
	}

};

