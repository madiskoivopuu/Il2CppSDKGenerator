#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyEffectSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1EffectEntity*>*> T GetTrigger(IContext1EffectEntity*>* context) {
		return ((T (*)(DestroyEffectSystem*, IContext1EffectEntity*>*))(Il2CppBase() + 0xEBCAB0))(this, context);
	}
	template <typename T = bool> T Filter(EffectEntity* effect) {
		return ((T (*)(DestroyEffectSystem*, EffectEntity*))(Il2CppBase() + 0xEBCB7C))(this, effect);
	}
	template <typename T = void> T Execute(Il2CppList<EffectEntity*>* effects) {
		return ((T (*)(DestroyEffectSystem*, Il2CppList<EffectEntity*>*))(Il2CppBase() + 0xEBCB98))(this, effects);
	}

};

