#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartActionEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartActionEffectSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(StartActionEffectSystem*, void*))(Il2CppBase() + 0x148B57C))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(StartActionEffectSystem*, uintptr_t))(Il2CppBase() + 0x148B6A0))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* actions) {
		return ((T (*)(StartActionEffectSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x148B6EC))(this, actions);
	}
	template <typename T = uintptr_t> T TrySpawnEffect(Il2CppString* name, uintptr_t actor, uintptr_t action, uintptr_t item) {
		return ((T (*)(StartActionEffectSystem*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x148BDE8))(this, name, actor, action, item);
	}

};

}
