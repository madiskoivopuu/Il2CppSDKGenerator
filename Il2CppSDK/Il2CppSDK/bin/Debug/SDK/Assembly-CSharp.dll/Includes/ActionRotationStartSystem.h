#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionRotationStartSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionRotationStartSystem"));
	}

	template <typename R = IArenaWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1ActionEntity*>* GetTrigger(IContext1ActionEntity*>* context) {
		return ((ICollector1ActionEntity*>* (*)(ActionRotationStartSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x18AC5A0))(this, context);
	}
	template <typename R = bool> R Filter(ActionEntity* action) {
		return ((R (*)(ActionRotationStartSystem*, ActionEntity*))(Il2CppBase() + 0x18AC7C4))(this, action);
	}
	template <typename R = void> R Execute(Il2CppList<ActionEntity*>* actions) {
		return ((R (*)(ActionRotationStartSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x18AC81C))(this, actions);
	}

};

