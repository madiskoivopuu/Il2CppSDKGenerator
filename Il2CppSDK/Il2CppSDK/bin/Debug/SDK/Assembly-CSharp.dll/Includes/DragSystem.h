#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1InputEntity*>*> T GetTrigger(IContext1InputEntity*>* context) {
		return ((T (*)(DragSystem*, IContext1InputEntity*>*))(Il2CppBase() + 0x1305458))(this, context);
	}
	template <typename T = bool> T Filter(InputEntity* entity) {
		return ((T (*)(DragSystem*, InputEntity*))(Il2CppBase() + 0x130557C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<InputEntity*>* entities) {
		return ((T (*)(DragSystem*, Il2CppList<InputEntity*>*))(Il2CppBase() + 0x1305598))(this, entities);
	}

};

