#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendInputSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendInputSystem"));
	}

	template <typename R = ArenaClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1InputEntity*>* GetTrigger(IContext1InputEntity*>* context) {
		return ((ICollector1InputEntity*>* (*)(SendInputSystem*, IContext1InputEntity*>*))(Il2CppBase() + 0x1364328))(this, context);
	}
	template <typename R = bool> R Filter(InputEntity* entity) {
		return ((R (*)(SendInputSystem*, InputEntity*))(Il2CppBase() + 0x13643F4))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<InputEntity*>* entities) {
		return ((R (*)(SendInputSystem*, Il2CppList<InputEntity*>*))(Il2CppBase() + 0x1364440))(this, entities);
	}

};

