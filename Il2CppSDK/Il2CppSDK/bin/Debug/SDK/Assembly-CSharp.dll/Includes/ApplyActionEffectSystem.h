#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyActionEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyActionEffectSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<ActionEntity*>* GetTrigger(IContext1<ActionEntity*>* context) {
		return ((ICollector1<ActionEntity*>* (*)(ApplyActionEffectSystem*, IContext1<ActionEntity*>*))(Il2CppBase() + 0x1892E6C))(this, context);
	}
	template <typename R = bool> R Filter(ActionEntity* entity) {
		return ((R (*)(ApplyActionEffectSystem*, ActionEntity*))(Il2CppBase() + 0x1892FD0))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<ActionEntity*>* entities) {
		return ((R (*)(ApplyActionEffectSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x189301C))(this, entities);
	}

};

