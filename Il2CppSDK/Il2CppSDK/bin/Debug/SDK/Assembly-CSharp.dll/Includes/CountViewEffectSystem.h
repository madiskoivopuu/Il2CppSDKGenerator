#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CountViewEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CountViewEffectSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(CountViewEffectSystem*, void*))(Il2CppBase() + 0x1340520))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t effect) {
		return ((T (*)(CountViewEffectSystem*, uintptr_t))(Il2CppBase() + 0x1340578))(this, effect);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* effects) {
		return ((T (*)(CountViewEffectSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x13405D4))(this, effects);
	}

};

}
