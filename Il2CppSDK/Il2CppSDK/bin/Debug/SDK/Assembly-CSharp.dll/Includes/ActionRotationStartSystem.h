#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionRotationStartSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionRotationStartSystem"));
	}

	template <typename T = IArenaWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ActionEntity*>*> T GetTrigger(IContext1ActionEntity*>* context) {
		return ((T (*)(ActionRotationStartSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x18AC5A0))(this, context);
	}
	template <typename T = bool> T Filter(ActionEntity* action) {
		return ((T (*)(ActionRotationStartSystem*, ActionEntity*))(Il2CppBase() + 0x18AC7C4))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<ActionEntity*>* actions) {
		return ((T (*)(ActionRotationStartSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x18AC81C))(this, actions);
	}

};

