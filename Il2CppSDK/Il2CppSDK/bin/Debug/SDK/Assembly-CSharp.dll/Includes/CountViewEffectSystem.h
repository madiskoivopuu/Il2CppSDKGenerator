#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CountViewEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CountViewEffectSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1EffectEntity*>*> T GetTrigger(IContext1EffectEntity*>* context) {
		return ((T (*)(CountViewEffectSystem*, IContext1EffectEntity*>*))(Il2CppBase() + 0x1340520))(this, context);
	}
	template <typename T = bool> T Filter(EffectEntity* effect) {
		return ((T (*)(CountViewEffectSystem*, EffectEntity*))(Il2CppBase() + 0x1340578))(this, effect);
	}
	template <typename T = void> T Execute(Il2CppList<EffectEntity*>* effects) {
		return ((T (*)(CountViewEffectSystem*, Il2CppList<EffectEntity*>*))(Il2CppBase() + 0x13405D4))(this, effects);
	}

};

