#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyEffectSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1EffectEntity*>* GetTrigger(IContext1EffectEntity*>* context) {
		return ((ICollector1EffectEntity*>* (*)(DestroyEffectSystem*, IContext1EffectEntity*>*))(Il2CppBase() + 0xEBCAB0))(this, context);
	}
	template <typename R = bool> R Filter(EffectEntity* effect) {
		return ((R (*)(DestroyEffectSystem*, EffectEntity*))(Il2CppBase() + 0xEBCB7C))(this, effect);
	}
	template <typename R = void> R Execute(Il2CppList<EffectEntity*>* effects) {
		return ((R (*)(DestroyEffectSystem*, Il2CppList<EffectEntity*>*))(Il2CppBase() + 0xEBCB98))(this, effects);
	}

};

