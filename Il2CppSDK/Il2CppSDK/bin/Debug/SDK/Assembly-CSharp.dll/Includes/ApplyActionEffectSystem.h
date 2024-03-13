#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyActionEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyActionEffectSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ActionEntity*>*> T GetTrigger(IContext1ActionEntity*>* context) {
		return ((T (*)(ApplyActionEffectSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0x1892E6C))(this, context);
	}
	template <typename T = bool> T Filter(ActionEntity* entity) {
		return ((T (*)(ApplyActionEffectSystem*, ActionEntity*))(Il2CppBase() + 0x1892FD0))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<ActionEntity*>* entities) {
		return ((T (*)(ApplyActionEffectSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0x189301C))(this, entities);
	}

};

