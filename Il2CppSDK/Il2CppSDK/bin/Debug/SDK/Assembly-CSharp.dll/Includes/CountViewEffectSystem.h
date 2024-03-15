#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CountViewEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CountViewEffectSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1EffectEntity*>* GetTrigger(IContext1EffectEntity*>* context) {
		return ((ICollector1EffectEntity*>* (*)(CountViewEffectSystem*, IContext1EffectEntity*>*))(Il2CppBase() + 0x1340520))(this, context);
	}
	template <typename R = bool> R Filter(EffectEntity* effect) {
		return ((R (*)(CountViewEffectSystem*, EffectEntity*))(Il2CppBase() + 0x1340578))(this, effect);
	}
	template <typename R = void> R Execute(Il2CppList<EffectEntity*>* effects) {
		return ((R (*)(CountViewEffectSystem*, Il2CppList<EffectEntity*>*))(Il2CppBase() + 0x13405D4))(this, effects);
	}

};

