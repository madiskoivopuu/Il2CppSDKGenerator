#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1InputEntity*>* GetTrigger(IContext1InputEntity*>* context) {
		return ((ICollector1InputEntity*>* (*)(DragSystem*, IContext1InputEntity*>*))(Il2CppBase() + 0x1305458))(this, context);
	}
	template <typename R = bool> R Filter(InputEntity* entity) {
		return ((R (*)(DragSystem*, InputEntity*))(Il2CppBase() + 0x130557C))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<InputEntity*>* entities) {
		return ((R (*)(DragSystem*, Il2CppList<InputEntity*>*))(Il2CppBase() + 0x1305598))(this, entities);
	}

};

