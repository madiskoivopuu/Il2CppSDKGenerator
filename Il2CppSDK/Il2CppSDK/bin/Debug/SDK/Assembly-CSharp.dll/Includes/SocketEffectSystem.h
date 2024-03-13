#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SocketEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SocketEffectSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1EffectEntity*>*> T GetTrigger(IContext1EffectEntity*>* context) {
		return ((T (*)(SocketEffectSystem*, IContext1EffectEntity*>*))(Il2CppBase() + 0x1484B8C))(this, context);
	}
	template <typename T = bool> T Filter(EffectEntity* effect) {
		return ((T (*)(SocketEffectSystem*, EffectEntity*))(Il2CppBase() + 0x1484C58))(this, effect);
	}
	template <typename T = void> T Execute(Il2CppList<EffectEntity*>* effects) {
		return ((T (*)(SocketEffectSystem*, Il2CppList<EffectEntity*>*))(Il2CppBase() + 0x1484CC8))(this, effects);
	}

};

