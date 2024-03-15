#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyActionCloseWindowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyActionCloseWindowSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1ActionEntity*>* GetTrigger(IContext1ActionEntity*>* context) {
		return ((ICollector1ActionEntity*>* (*)(DestroyActionCloseWindowSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0xEBA608))(this, context);
	}
	template <typename R = bool> R Filter(ActionEntity* entity) {
		return ((R (*)(DestroyActionCloseWindowSystem*, ActionEntity*))(Il2CppBase() + 0xEBA76C))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<ActionEntity*>* actions) {
		return ((R (*)(DestroyActionCloseWindowSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0xEBA7B8))(this, actions);
	}

};

