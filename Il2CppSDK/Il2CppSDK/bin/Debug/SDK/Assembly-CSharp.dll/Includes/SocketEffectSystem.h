#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SocketEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SocketEffectSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<EffectEntity*>* GetTrigger(IContext1<EffectEntity*>* context) {
		return ((ICollector1<EffectEntity*>* (*)(SocketEffectSystem*, IContext1<EffectEntity*>*))(Il2CppBase() + 0x1484B8C))(this, context);
	}
	template <typename R = bool> R Filter(EffectEntity* effect) {
		return ((R (*)(SocketEffectSystem*, EffectEntity*))(Il2CppBase() + 0x1484C58))(this, effect);
	}
	template <typename R = void> R Execute(Il2CppList<EffectEntity*>* effects) {
		return ((R (*)(SocketEffectSystem*, Il2CppList<EffectEntity*>*))(Il2CppBase() + 0x1484CC8))(this, effects);
	}

};

