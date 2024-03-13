#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendInputSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendInputSystem"));
	}

	template <typename T = ArenaClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1InputEntity*>*> T GetTrigger(IContext1InputEntity*>* context) {
		return ((T (*)(SendInputSystem*, IContext1InputEntity*>*))(Il2CppBase() + 0x1364328))(this, context);
	}
	template <typename T = bool> T Filter(InputEntity* entity) {
		return ((T (*)(SendInputSystem*, InputEntity*))(Il2CppBase() + 0x13643F4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<InputEntity*>* entities) {
		return ((T (*)(SendInputSystem*, Il2CppList<InputEntity*>*))(Il2CppBase() + 0x1364440))(this, entities);
	}

};

