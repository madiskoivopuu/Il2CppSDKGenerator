#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyActionSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1ActionEntity*>* GetTrigger(IContext1ActionEntity*>* context) {
		return ((ICollector1ActionEntity*>* (*)(DestroyActionSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0xEBC2C4))(this, context);
	}
	template <typename R = bool> R Filter(ActionEntity* action) {
		return ((R (*)(DestroyActionSystem*, ActionEntity*))(Il2CppBase() + 0xEBC390))(this, action);
	}
	template <typename R = void> R Execute(Il2CppList<ActionEntity*>* actions) {
		return ((R (*)(DestroyActionSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0xEBC3AC))(this, actions);
	}

};

